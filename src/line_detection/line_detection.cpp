#include "rclcpp/rclcpp.hpp"
#include "rclcpp/parameter.hpp"
#include "sensor_msgs/msg/compressed_image.hpp"
#include "sensor_msgs/msg/image.hpp"
#include <cv_bridge/cv_bridge.h>

#include "param_parser.hpp"
#include "vision_process.hpp"

#define PARAMS_FILE "params_file"
#define PARAMS_DEFAULT "/home/luuk/linetracking/src/line_detection/config/config.yaml"
#define NODE_NAME "line_detection"

class LineDetection : public rclcpp::Node {
public:
    LineDetection() : Node(NODE_NAME) {
        subscriptionCompressed = create_subscription<sensor_msgs::msg::CompressedImage>(
            "/image/compressed", 10, std::bind(&LineDetection::imageCompressedCallback, this, std::placeholders::_1));
        subscriptionRaw = create_subscription<sensor_msgs::msg::Image>(
            "/image", 10, std::bind(&LineDetection::imageRawCallback, this, std::placeholders::_1));

        this->declare_parameter(PARAMS_FILE, PARAMS_DEFAULT);
        std::string path;
        if (this->get_parameter(PARAMS_FILE).as_string() != PARAMS_DEFAULT) {
            path = this->get_parameter(PARAMS_FILE).as_string();
        } else {
            RCLCPP_WARN(this->get_logger(), "Parameter '%s' not set, using default value.", PARAMS_FILE);
            path = PARAMS_DEFAULT;
        }
        parser = new ParamParser(path);
        auto config = parser->Parse();
        RCLCPP_INFO(this->get_logger(), "%s", parser->ToString(config).c_str());
      
        vision = new VisionProcess(config);
    }

private:
    ParamParser* parser;
    VisionProcess* vision;

    rclcpp::Subscription<sensor_msgs::msg::CompressedImage>::SharedPtr subscriptionCompressed;
    void imageCompressedCallback(const sensor_msgs::msg::CompressedImage::SharedPtr msg) {
        try {
            cv_bridge::CvImagePtr cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::BGR8);
            vision->Decode(cv_ptr);
        } catch (cv_bridge::Exception& e) {
            RCLCPP_ERROR(this->get_logger(), "Error converting compressed image message: %s", e.what());
        }
    }

    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr subscriptionRaw;
    void imageRawCallback(const sensor_msgs::msg::Image::SharedPtr msg) {
         try {
            cv_bridge::CvImagePtr cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::BGR8);
            vision->Decode(cv_ptr);
        } catch (cv_bridge::Exception& e) {
            RCLCPP_ERROR(this->get_logger(), "Error converting compressed image message: %s", e.what());
        }
    }
};

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<LineDetection>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}