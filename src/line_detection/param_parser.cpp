#include <param_parser.hpp>
#include <yaml-cpp/yaml.h>

// Decoding flags
#define TITLE_CONFIG "linetracking"
#define DEBUG_CONFIG "debug"
#define PROFILE_CONFIG "profiles"
#define OUTPUT_CONFIG "output"

#define PROFILE_HUE_UP "hue_up"
#define PROFILE_SAT_UP "sat_up"
#define PROFILE_VAL_UP "val_up"
#define PROFILE_HUE_LOW "hue_low"
#define PROFILE_SAT_LOW "sat_low"
#define PROFILE_VAL_LOW "val_low"

#define OUTPUT_SPLINE "spline"
#define OUTPUT_CONTOUR "contour"

NodeConfig* ParamParser::Parse(){
    // Setting datastructers
    NodeConfig* config = new NodeConfig;

    // Parsing yaml file.
    YAML::Node yaml = YAML::LoadFile(this->path);
    if (yaml.IsMap() && yaml[TITLE_CONFIG].IsDefined()) {
        // Parsing debug state
        if (yaml[TITLE_CONFIG][DEBUG_CONFIG].IsDefined()){
            config->debug = yaml[TITLE_CONFIG][DEBUG_CONFIG].as<bool>();
        } else {
            config->debug = false;
        }

        // Parsing output config
        if (yaml[TITLE_CONFIG][OUTPUT_CONFIG].IsDefined()){
            std::string output = yaml[TITLE_CONFIG][OUTPUT_CONFIG].as<std::string>();
            if (output == OUTPUT_SPLINE) {
                config->output = NodeOutput::Spline;
            } 
        } else {
            config->output = NodeOutput::Contour;
        }

        // Parsing profiles state
        if (yaml[TITLE_CONFIG][PROFILE_CONFIG].IsDefined()){
            YAML::Node profiles = yaml[TITLE_CONFIG][PROFILE_CONFIG];
            for (const auto& profile : profiles) {
                std::string pName = profile.first.as<std::string>();
                YAML::Node pData = profile.second;
                double pHueUp = pData[PROFILE_HUE_UP].as<double>();
                double pValUp = pData[PROFILE_VAL_UP].as<double>();
                double pSatUp = pData[PROFILE_SAT_UP].as<double>();
                double pHueLow = pData[PROFILE_HUE_LOW].as<double>();
                double pValLow = pData[PROFILE_VAL_LOW].as<double>();
                double pSatLow = pData[PROFILE_SAT_LOW].as<double>();

                NodeProfile* nodeProfile = new NodeProfile();
                nodeProfile->name = pName;
                nodeProfile->hueLow = pHueLow;
                nodeProfile->hueUp = pHueUp;
                nodeProfile->satLow = pSatLow;
                nodeProfile->satUp = pSatUp;
                nodeProfile->valLow = pValLow;
                nodeProfile->valUp = pValUp;

                config->profiles.push_back(nodeProfile);
            }
        }
    }

    return config;
}

ParamParser::ParamParser(std::string path){
    this->path = path;
}


std::string nodeOutputToString(NodeOutput output) {
    return (output == Spline) ? "Spline" : "Contour";
}

std::string nodeProfileToString(const NodeProfile* profile) {
    std::stringstream ss;
    ss << "Name: " << profile->name
       << ", Hue Up: " << profile->hueUp
       << ", Sat Up: " << profile->satUp
       << ", Val Up: " << profile->valUp
       << ", Hue Low: " << profile->hueLow
       << ", Sat Low: " << profile->satLow
       << ", Val Low: " << profile->valLow;
    return ss.str();
}

std::string ParamParser::ToString(NodeConfig* config) {
    std::stringstream ss;
    ss << "\nDebug: " << (config->debug ? "true" : "false")
       << ", Output: " << nodeOutputToString(config->output)
       << "\nProfiles:\n";

    for (const auto& profile : config->profiles) {
        ss << "  " << nodeProfileToString(profile) << "\n";
    }

    return ss.str();
}
