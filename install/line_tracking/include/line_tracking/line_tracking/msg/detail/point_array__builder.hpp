// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from line_tracking:msg/PointArray.idl
// generated code does not contain a copyright notice

#ifndef LINE_TRACKING__MSG__DETAIL__POINT_ARRAY__BUILDER_HPP_
#define LINE_TRACKING__MSG__DETAIL__POINT_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "line_tracking/msg/detail/point_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace line_tracking
{

namespace msg
{

namespace builder
{

class Init_PointArray_points
{
public:
  Init_PointArray_points()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::line_tracking::msg::PointArray points(::line_tracking::msg::PointArray::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::line_tracking::msg::PointArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::line_tracking::msg::PointArray>()
{
  return line_tracking::msg::builder::Init_PointArray_points();
}

}  // namespace line_tracking

#endif  // LINE_TRACKING__MSG__DETAIL__POINT_ARRAY__BUILDER_HPP_
