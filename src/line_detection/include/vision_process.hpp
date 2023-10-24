#ifndef VISION_PROCESS_H
#define VISION_PROCESS_H

#include <string>
#include <vector>

#include "param_parser.hpp"
#include <cv_bridge/cv_bridge.h>

class VisionProcess {
private: 
    NodeConfig* params;
public:
    VisionProcess(NodeConfig* params);
    std::vector<float> Decode(cv_bridge::CvImagePtr msg);
};

#endif