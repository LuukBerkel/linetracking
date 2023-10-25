// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from line_tracking:msg/PointMatrixWithEnum.idl
// generated code does not contain a copyright notice

#ifndef LINE_TRACKING__MSG__DETAIL__POINT_MATRIX_WITH_ENUM__BUILDER_HPP_
#define LINE_TRACKING__MSG__DETAIL__POINT_MATRIX_WITH_ENUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "line_tracking/msg/detail/point_matrix_with_enum__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace line_tracking
{

namespace msg
{

namespace builder
{

class Init_PointMatrixWithEnum_type
{
public:
  explicit Init_PointMatrixWithEnum_type(::line_tracking::msg::PointMatrixWithEnum & msg)
  : msg_(msg)
  {}
  ::line_tracking::msg::PointMatrixWithEnum type(::line_tracking::msg::PointMatrixWithEnum::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::line_tracking::msg::PointMatrixWithEnum msg_;
};

class Init_PointMatrixWithEnum_lines
{
public:
  Init_PointMatrixWithEnum_lines()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointMatrixWithEnum_type lines(::line_tracking::msg::PointMatrixWithEnum::_lines_type arg)
  {
    msg_.lines = std::move(arg);
    return Init_PointMatrixWithEnum_type(msg_);
  }

private:
  ::line_tracking::msg::PointMatrixWithEnum msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::line_tracking::msg::PointMatrixWithEnum>()
{
  return line_tracking::msg::builder::Init_PointMatrixWithEnum_lines();
}

}  // namespace line_tracking

#endif  // LINE_TRACKING__MSG__DETAIL__POINT_MATRIX_WITH_ENUM__BUILDER_HPP_
