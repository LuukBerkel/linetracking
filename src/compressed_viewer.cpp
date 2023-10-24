#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/compressed_image.hpp"
#include <opencv2/opencv.hpp>
#include <cv_bridge/cv_bridge.h>

class CompressedImageViewer : public rclcpp::Node {
public:
    CompressedImageViewer() : Node("compressed_image_viewer") {
        subscription_ = create_subscription<sensor_msgs::msg::CompressedImage>(
            "/oak/rgb/image_raw/compressed", 10, std::bind(&CompressedImageViewer::imageCallback, this, std::placeholders::_1));
    }

private:
    void imageCallback(const sensor_msgs::msg::CompressedImage::SharedPtr msg) {
        try {
            // Convert compressed image message to OpenCV Mat
            cv_bridge::CvImagePtr cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::BGR8);
            cv::Mat image = cv_ptr->image;

            // Display the image
            cv::imshow("Compressed Image Viewer", image);
            cv::waitKey(1); // Needed for OpenCV to refresh the window

        } catch (cv_bridge::Exception& e) {
            RCLCPP_ERROR(this->get_logger(), "Error converting compressed image message: %s", e.what());
        }
    }

    rclcpp::Subscription<sensor_msgs::msg::CompressedImage>::SharedPtr subscription_;
};

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<CompressedImageViewer>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}