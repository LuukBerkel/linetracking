// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from line_tracking:msg/PointBlob.idl
// generated code does not contain a copyright notice
#include "line_tracking/msg/detail/point_blob__rosidl_typesupport_fastrtps_cpp.hpp"
#include "line_tracking/msg/detail/point_blob__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace line_tracking
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const line_tracking::msg::PointArray &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  line_tracking::msg::PointArray &);
size_t get_serialized_size(
  const line_tracking::msg::PointArray &,
  size_t current_alignment);
size_t
max_serialized_size_PointArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace line_tracking


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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: arrays
  {
    size_t size = ros_message.arrays.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      line_tracking::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.arrays[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_line_tracking
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  line_tracking::msg::PointBlob & ros_message)
{
  // Member: arrays
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.arrays.resize(size);
    for (size_t i = 0; i < size; i++) {
      line_tracking::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.arrays[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_line_tracking
get_serialized_size(
  const line_tracking::msg::PointBlob & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: arrays
  {
    size_t array_size = ros_message.arrays.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        line_tracking::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.arrays[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_line_tracking
max_serialized_size_PointBlob(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: arrays
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        line_tracking::msg::typesupport_fastrtps_cpp::max_serialized_size_PointArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _PointBlob__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const line_tracking::msg::PointBlob *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PointBlob__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<line_tracking::msg::PointBlob *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PointBlob__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const line_tracking::msg::PointBlob *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PointBlob__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PointBlob(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PointBlob__callbacks = {
  "line_tracking::msg",
  "PointBlob",
  _PointBlob__cdr_serialize,
  _PointBlob__cdr_deserialize,
  _PointBlob__get_serialized_size,
  _PointBlob__max_serialized_size
};

static rosidl_message_type_support_t _PointBlob__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PointBlob__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace line_tracking

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_line_tracking
const rosidl_message_type_support_t *
get_message_type_support_handle<line_tracking::msg::PointBlob>()
{
  return &line_tracking::msg::typesupport_fastrtps_cpp::_PointBlob__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, line_tracking, msg, PointBlob)() {
  return &line_tracking::msg::typesupport_fastrtps_cpp::_PointBlob__handle;
}

#ifdef __cplusplus
}
#endif
