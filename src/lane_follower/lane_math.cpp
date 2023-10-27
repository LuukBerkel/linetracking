#include "lane_math.hpp"
#include <cmath>

float calculateAngle(const geometry_msgs::msg::Point& point1, const geometry_msgs::msg::Point& point2,
                     const geometry_msgs::msg::Point& point3, const geometry_msgs::msg::Point& point4) {
    float vector1_x = point2.x - point1.x;
    float vector1_y = point2.y - point1.y;
    float vector2_x = point4.x - point3.x;
    float vector2_y = point4.y - point3.y;

    float dotProduct = vector1_x * vector2_x + vector1_y * vector2_y;
    float magnitude1 = sqrt(vector1_x * vector1_x + vector1_y * vector1_y);
    float magnitude2 = sqrt(vector2_x * vector2_x + vector2_y * vector2_y);

    float cosTheta = dotProduct / (magnitude1 * magnitude2);
    
    // Ensure cosTheta is within the valid range [-1, 1]
    cosTheta = std::max(-1.0f, std::min(1.0f, cosTheta));

    float angle_rad = acos(cosTheta);
    float angle_degrees = angle_rad * (180.0 / M_PI);

    return angle_degrees;
}