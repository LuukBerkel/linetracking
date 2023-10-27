#ifndef PARAM_PARSER_H
#define PARAM_PARSER_H

#include <stdint.h>
#include <string>
#include <vector>

enum NodeOutput{
    Spline,
    Contour
};

struct NodeProfile {
    std::string name;
    double hueUp;
    double satUp;
    double valUp;
    double hueLow;
    double satLow;
    double valLow;
};

struct NodeConfig {
    bool debug;
    NodeOutput output;
    double minimum;
    std::vector<NodeProfile*> profiles;
};

class ParamParser {
private:
    std::string path;
public:
    ParamParser(std::string path);
    NodeConfig* Parse();
    std::string ToString(NodeConfig* config);
};

#endif