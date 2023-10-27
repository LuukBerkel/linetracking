#include "vision_process.hpp"
#include <opencv2/opencv.hpp>
#include <gsl/gsl_spline.h>
#include <gsl/gsl_interp.h>
#include <geometry_msgs/msg/point.hpp>
#include <algorithm> 

line_tracking::msg::PointBlob::SharedPtr VisionProcess::Decode(cv_bridge::CvImagePtr msg){
    // Decoding image
    auto result = this->findContours(msg);

    // Sort contours in descending order of area and threshold contours
    std::vector<std::vector<cv::Point>> lines;
    std::sort(result.begin(), result.end(), [](const auto& a, const auto& b) {
       return cv::contourArea(a) > cv::contourArea(b);
    });
    for (auto line : result){
        if (cv::contourArea(line) > this->params->minimum){
            lines.push_back(line);
        }
    }

    // Decoding splines
    if (this->params->output == NodeOutput::Spline){
        lines = this->findSplines(lines);
    }

    // Displaying debug
    if (this->params->debug) {
        displayResult(msg, lines);
    }

    // Encoding message
    auto message = std::make_shared<line_tracking::msg::PointBlob>();
    for(std::vector<cv::Point> line : lines){
        auto points = line_tracking::msg::PointArray();
        for (cv::Point point : line){
            auto p = geometry_msgs::msg::Point();
            p.x = point.x;
            p.y = point.y;
            points.points.push_back(p);

        }
        message->arrays.push_back(points);
    }
    
    return message;
}

VisionProcess::VisionProcess(NodeConfig* params){
    this->params = params;
}

void VisionProcess::displayResult(cv_bridge::CvImagePtr msg, std::vector<std::vector<cv::Point>>& points){
    cv::Mat image = msg->image;
    cv::drawContours(image, points, -1, cv::Scalar(0, 255, 0), 2);  
    cv::imshow("Blue Tape Line Detection", image);
    cv::waitKey(1);
}

std::vector<std::vector<cv::Point>> VisionProcess::findContours(cv_bridge::CvImagePtr msg){
    cv::Mat image = msg->image;
    cv::Mat hsv;
    cv::cvtColor(image, hsv, cv::COLOR_BGR2HSV);

    std::vector<std::vector<cv::Point>> allContours; 
    for (auto profile : this->params->profiles){
        cv::Scalar lower_bound = cv::Scalar(profile->hueLow, profile->satLow, profile->valLow);
        cv::Scalar upper_bound = cv::Scalar(profile->hueUp, profile->satUp, profile->valUp);

        cv::Mat mask;
        cv::inRange(hsv, lower_bound, upper_bound, mask);
        std::vector<std::vector<cv::Point>> contours;
        cv::findContours(mask, contours, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);

        allContours.insert(allContours.end(), contours.begin(), contours.end());
    }
        
    return allContours;
}


std::vector<std::vector<cv::Point>> VisionProcess::findSplines(std::vector<std::vector<cv::Point>> &contours) {
    std::vector<std::vector<cv::Point>> allSplines; 
    for (std::vector<cv::Point> inputPoints : contours) {
        size_t size = inputPoints.size();
        double* x = new double[size];
        double* y = new double[size];
        
        for (size_t i = 0; i < size; ++i) {
            x[i] = inputPoints[i].x;
            y[i] = inputPoints[i].y;
        }

        gsl_interp_accel* accel = gsl_interp_accel_alloc();
        gsl_spline* spline = gsl_spline_alloc(gsl_interp_cspline, size);
        gsl_spline_init(spline, x, y, size);

        std::vector<cv::Point> outputPoints;
        for (double xi = x[0]; xi <= x[size - 1]; xi += 0.1) {
            double yi = gsl_spline_eval(spline, xi, accel);
            outputPoints.push_back(cv::Point(static_cast<double>(xi), static_cast<double>(yi)));
        }


        gsl_spline_free(spline);
        gsl_interp_accel_free(accel);
        delete[] x;
        delete[] y;

        allSplines.push_back(outputPoints);
    }

    return allSplines;
}