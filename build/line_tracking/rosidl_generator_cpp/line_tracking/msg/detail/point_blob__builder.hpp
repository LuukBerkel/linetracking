// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from line_tracking:msg/PointBlob.idl
// generated code does not contain a copyright notice

#ifndef LINE_TRACKING__MSG__DETAIL__POINT_BLOB__BUILDER_HPP_
#define LINE_TRACKING__MSG__DETAIL__POINT_BLOB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "line_tracking/msg/detail/point_blob__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace line_tracking
{

namespace msg
{

namespace builder
{

class Init_PointBlob_arrays
{
public:
  Init_PointBlob_arrays()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::line_tracking::msg::PointBlob arrays(::line_tracking::msg::PointBlob::_arrays_type arg)
  {
    msg_.arrays = std::move(arg);
    return std::move(msg_);
  }

private:
  ::line_tracking::msg::PointBlob msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::line_tracking::msg::PointBlob>()
{
  return line_tracking::msg::builder::Init_PointBlob_arrays();
}

}  // namespace line_tracking

#endif  // LINE_TRACKING__MSG__DETAIL__POINT_BLOB__BUILDER_HPP_
