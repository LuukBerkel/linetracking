#include "vision_process.hpp"
#include <opencv2/opencv.hpp>

std::vector<float> VisionProcess::Decode(cv_bridge::CvImagePtr msg){
    cv::Mat image = msg->image;
    cv::Mat hsv;
    cv::cvtColor(image, hsv, cv::COLOR_BGR2HSV);

    std::vector<std::vector<cv::Point>> allContours; 
    for (auto profile : this->params->profiles){
        // Define the lower and upper bounds for the blue color in HSV
        cv::Scalar lower_bound = cv::Scalar(profile->hueLow, profile->satLow, profile->valLow);
        cv::Scalar upper_bound = cv::Scalar(profile->hueUp, profile->satUp, profile->valUp);

        // Threshold the image to get the binary mask of the blue regions
        cv::Mat mask;
        cv::inRange(hsv, lower_bound, upper_bound, mask);

        // Find contours in the binary mask
        std::vector<std::vector<cv::Point>> contours;
        cv::findContours(mask, contours, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);

        // Add the contours to the vector of all contours
        allContours.insert(allContours.end(), contours.begin(), contours.end());
    }

    cv::drawContours(image, allContours, -1, cv::Scalar(0, 255, 0), 2);  // -1: draw all contours, green color, thickness=2
    cv::imshow("Blue Tape Line Detection", image);
    cv::waitKey(1);
}

