// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from line_tracking:msg/PointBlob.idl
// generated code does not contain a copyright notice

#ifndef LINE_TRACKING__MSG__DETAIL__POINT_BLOB__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define LINE_TRACKING__MSG__DETAIL__POINT_BLOB__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "line_tracking/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "line_tracking/msg/detail/point_blob__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace line_tracking
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_line_tracking
cdr_serialize(
  const line_tracking::msg::PointBlob & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_line_tracking
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  line_tracking::msg::PointBlob & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_line_tracking
get_serialized_size(
  const line_tracking::msg::PointBlob & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_line_tracking
max_serialized_size_PointBlob(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace line_tracking

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_line_tracking
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, line_tracking, msg, PointBlob)();

#ifdef __cplusplus
}
#endif

#endif  // LINE_TRACKING__MSG__DETAIL__POINT_BLOB__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
