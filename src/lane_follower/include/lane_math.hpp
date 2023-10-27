#ifndef LANE_MATH_H
#define LANE_MATH_H

#include <geometry_msgs/msg/point.hpp>
#include <geometry_msgs/msg/twist.hpp>


float calculateAngle(const geometry_msgs::msg::Point& point1, const geometry_msgs::msg::Point& point2,
                     const geometry_msgs::msg::Point& point3, const geometry_msgs::msg::Point& point4);



#endif