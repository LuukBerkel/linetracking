// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from line_tracking:msg/PointMatrixWithEnum.idl
// generated code does not contain a copyright notice
#include "line_tracking/msg/detail/point_matrix_with_enum__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "line_tracking/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "line_tracking/msg/detail/point_matrix_with_enum__struct.h"
#include "line_tracking/msg/detail/point_matrix_with_enum__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "line_tracking/msg/detail/point_array__functions.h"  // lines

// forward declare type support functions
size_t get_serialized_size_line_tracking__msg__PointArray(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_line_tracking__msg__PointArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, line_tracking, msg, PointArray)();


using _PointMatrixWithEnum__ros_msg_type = line_tracking__msg__PointMatrixWithEnum;

static bool _PointMatrixWithEnum__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PointMatrixWithEnum__ros_msg_type * ros_message = static_cast<const _PointMatrixWithEnum__ros_msg_type *>(untyped_ros_message);
  // Field name: lines
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, line_tracking, msg, PointArray
      )()->data);
    size_t size = ros_message->lines.size;
    auto array_ptr = ros_message->lines.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: type
  {
    cdr << ros_message->type;
  }

  return true;
}

static bool _PointMatrixWithEnum__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PointMatrixWithEnum__ros_msg_type * ros_message = static_cast<_PointMatrixWithEnum__ros_msg_type *>(untyped_ros_message);
  // Field name: lines
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, line_tracking, msg, PointArray
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->lines.data) {
      line_tracking__msg__PointArray__Sequence__fini(&ros_message->lines);
    }
    if (!line_tracking__msg__PointArray__Sequence__init(&ros_message->lines, size)) {
      fprintf(stderr, "failed to create array for field 'lines'");
      return false;
    }
    auto array_ptr = ros_message->lines.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: type
  {
    cdr >> ros_message->type;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_line_tracking
size_t get_serialized_size_line_tracking__msg__PointMatrixWithEnum(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PointMatrixWithEnum__ros_msg_type * ros_message = static_cast<const _PointMatrixWithEnum__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name lines
  {
    size_t array_size = ros_message->lines.size;
    auto array_ptr = ros_message->lines.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_line_tracking__msg__PointArray(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name type
  {
    size_t item_size = sizeof(ros_message->type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PointMatrixWithEnum__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_line_tracking__msg__PointMatrixWithEnum(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_line_tracking
size_t max_serialized_size_line_tracking__msg__PointMatrixWithEnum(
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

  // member: lines
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
        max_serialized_size_line_tracking__msg__PointArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _PointMatrixWithEnum__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_line_tracking__msg__PointMatrixWithEnum(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PointMatrixWithEnum = {
  "line_tracking::msg",
  "PointMatrixWithEnum",
  _PointMatrixWithEnum__cdr_serialize,
  _PointMatrixWithEnum__cdr_deserialize,
  _PointMatrixWithEnum__get_serialized_size,
  _PointMatrixWithEnum__max_serialized_size
};

static rosidl_message_type_support_t _PointMatrixWithEnum__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PointMatrixWithEnum,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, line_tracking, msg, PointMatrixWithEnum)() {
  return &_PointMatrixWithEnum__type_support;
}

#if defined(__cplusplus)
}
#endif