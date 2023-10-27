#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <line_tracking/msg/point_blob.hpp>

#define NODE_NAME "lane_follower"
#define LANE_COUNT 2
#define SPEED 0.1f
#define LEFT_BOUND 60
#define RIGHT_BOUND 1000

enum LaneSide {
    LEFT,
    RIGHT
};

struct LaneElement {
    LaneSide side;
    geometry_msgs::msg::Point point;
};

class LaneFollower : public rclcpp::Node {
public:
    LaneFollower() : Node(NODE_NAME) {
        subscription_ = create_subscription<line_tracking::msg::PointBlob>(
            "/lines/contour", 10, std::bind(&LaneFollower::countourCallback, this, std::placeholders::_1));
        publisher_ = create_publisher<geometry_msgs::msg::Twist>("/cmd_vel", 10);
    }

private:
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
    void publishInstruction(geometry_msgs::msg::Twist::SharedPtr result){
        publisher_->publish(*result);
    }

    void calculateInstruction( std::vector<std::shared_ptr<LaneElement>> lane){
        auto twist = std::make_shared<geometry_msgs::msg::Twist>();
        if (lane.size() == 1) {
            int factor = lane[0]->side == LEFT ? -1 : 1;
            twist->angular.z = factor * SPEED;
            publishInstruction(twist);
        } else if (lane.size() == 2) {
            twist->linear.x = SPEED; 
        } 
        publishInstruction(twist);
    }
   

    rclcpp::Subscription<line_tracking::msg::PointBlob>::SharedPtr subscription_;
    void countourCallback(const line_tracking::msg::PointBlob::SharedPtr msg) {
        std::vector<std::shared_ptr<LaneElement>> lane;
        for (const auto& array : msg->arrays) {
            // Finding lowest point
            geometry_msgs::msg::Point biggest = array.points[0];
            for (const auto &point : array.points){
                if (point.y > biggest.y){
                    biggest = point; 
                }
            }

            // Detection on which side
            auto laneElement = std::make_shared<LaneElement>(); 
            if (biggest.x < LEFT_BOUND){
                laneElement->side = LEFT;
            } else if (biggest.x > RIGHT_BOUND){
                laneElement->side = RIGHT;
            }
            laneElement->point = biggest;
            lane.push_back(laneElement);

            // Breaking if sides found
            if (lane.size() == 2) {
                break;
            }
        }

        // Calculates the speed and direction and pubs it.
        calculateInstruction(lane);
    }
};

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<LaneFollower>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}