#ifndef VISION_PROCESS_H
#define VISION_PROCESS_H

#include <string>
#include <vector>

#include "param_parser.hpp"
#include <cv_bridge/cv_bridge.h>
#include <line_tracking/msg/point_blob.hpp>


class VisionProcess {
private: 
    std::vector<std::vector<cv::Point>> findContours(cv_bridge::CvImagePtr msg);
    std::vector<std::vector<cv::Point>> findSplines(std::vector<std::vector<cv::Point>> &contours);
    void displayResult(cv_bridge::CvImagePtr msg, std::vector<std::vector<cv::Point>>& points);
public:
    NodeConfig* params;
    VisionProcess(NodeConfig* params);
    line_tracking::msg::PointBlob::SharedPtr Decode(cv_bridge::CvImagePtr msg);
};

#endif