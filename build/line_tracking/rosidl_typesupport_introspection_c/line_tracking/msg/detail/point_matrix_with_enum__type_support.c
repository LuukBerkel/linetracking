// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from line_tracking:msg/PointMatrixWithEnum.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "line_tracking/msg/detail/point_matrix_with_enum__rosidl_typesupport_introspection_c.h"
#include "line_tracking/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "line_tracking/msg/detail/point_matrix_with_enum__functions.h"
#include "line_tracking/msg/detail/point_matrix_with_enum__struct.h"


// Include directives for member types
// Member `lines`
#include "line_tracking/msg/point_array.h"
// Member `lines`
#include "line_tracking/msg/detail/point_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void line_tracking__msg__PointMatrixWithEnum__rosidl_typesupport_introspection_c__PointMatrixWithEnum_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  line_tracking__msg__PointMatrixWithEnum__init(message_memory);
}

void line_tracking__msg__PointMatrixWithEnum__rosidl_typesupport_introspection_c__PointMatrixWithEnum_fini_function(void * message_memory)
{
  line_tracking__msg__PointMatrixWithEnum__fini(message_memory);
}

size_t line_tracking__msg__PointMatrixWithEnum__rosidl_typesupport_introspection_c__size_function__PointMatrixWithEnum__lines(
  const void * untyped_member)
{
  const line_tracking__msg__PointArray__Sequence * member =
    (const line_tracking__msg__PointArray__Sequence *)(untyped_member);
  return member->size;
}

const void * line_tracking__msg__PointMatrixWithEnum__rosidl_typesupport_introspection_c__get_const_function__PointMatrixWithEnum__lines(
  const void * untyped_member, size_t index)
{
  const line_tracking__msg__PointArray__Sequence * member =
    (const line_tracking__msg__PointArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * line_tracking__msg__PointMatrixWithEnum__rosidl_typesupport_introspection_c__get_function__PointMatrixWithEnum__lines(
  void * untyped_member, size_t index)
{
  line_tracking__msg__PointArray__Sequence * member =
    (line_tracking__msg__PointArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void line_tracking__msg__PointMatrixWithEnum__rosidl_typesupport_introspection_c__fetch_function__PointMatrixWithEnum__lines(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const line_tracking__msg__PointArray * item =
    ((const line_tracking__msg__PointArray *)
    line_tracking__msg__PointMatrixWithEnum__rosidl_typesupport_introspection_c__get_const_function__PointMatrixWithEnum__lines(untyped_member, index));
  line_tracking__msg__PointArray * value =
    (line_tracking__msg__PointArray *)(untyped_value);
  *value = *item;
}

void line_tracking__msg__PointMatrixWithEnum__rosidl_typesupport_introspection_c__assign_function__PointMatrixWithEnum__lines(
  void * untyped_member, size_t index, const void * untyped_value)
{
  line_tracking__msg__PointArray * item =
    ((line_tracking__msg__PointArray *)
    line_tracking__msg__PointMatrixWithEnum__rosidl_typesupport_introspection_c__get_function__PointMatrixWithEnum__lines(untyped_member, index));
  const line_tracking__msg__PointArray * value =
    (const line_tracking__msg__PointArray *)(untyped_value);
  *item = *value;
}

bool line_tracking__msg__PointMatrixWithEnum__rosidl_typesupport_introspection_c__resize_function__PointMatrixWithEnum__lines(
  void * untyped_member, size_t size)
{
  line_tracking__msg__PointArray__Sequence * member =
    (line_tracking__msg__PointArray__Sequence *)(untyped_member);
  line_tracking__msg__PointArray__Sequence__fini(member);
  return line_tracking__msg__PointArray__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember line_tracking__msg__PointMatrixWithEnum__rosidl_typesupport_introspection_c__PointMatrixWithEnum_message_member_array[2] = {
  {
    "lines",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(line_tracking__msg__PointMatrixWithEnum, lines),  // bytes offset in struct
    NULL,  // default value
    line_tracking__msg__PointMatrixWithEnum__rosidl_typesupport_introspection_c__size_function__PointMatrixWithEnum__lines,  // size() function pointer
    line_tracking__msg__PointMatrixWithEnum__rosidl_typesupport_introspection_c__get_const_function__PointMatrixWithEnum__lines,  // get_const(index) function pointer
    line_tracking__msg__PointMatrixWithEnum__rosidl_typesupport_introspection_c__get_function__PointMatrixWithEnum__lines,  // get(index) function pointer
    line_tracking__msg__PointMatrixWithEnum__rosidl_typesupport_introspection_c__fetch_function__PointMatrixWithEnum__lines,  // fetch(index, &value) function pointer
    line_tracking__msg__PointMatrixWithEnum__rosidl_typesupport_introspection_c__assign_function__PointMatrixWithEnum__lines,  // assign(index, value) function pointer
    line_tracking__msg__PointMatrixWithEnum__rosidl_typesupport_introspection_c__resize_function__PointMatrixWithEnum__lines  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(line_tracking__msg__PointMatrixWithEnum, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers line_tracking__msg__PointMatrixWithEnum__rosidl_typesupport_introspection_c__PointMatrixWithEnum_message_members = {
  "line_tracking__msg",  // message namespace
  "PointMatrixWithEnum",  // message name
  2,  // number of fields
  sizeof(line_tracking__msg__PointMatrixWithEnum),
  line_tracking__msg__PointMatrixWithEnum__rosidl_typesupport_introspection_c__PointMatrixWithEnum_message_member_array,  // message members
  line_tracking__msg__PointMatrixWithEnum__rosidl_typesupport_introspection_c__PointMatrixWithEnum_init_function,  // function to initialize message memory (memory has to be allocated)
  line_tracking__msg__PointMatrixWithEnum__rosidl_typesupport_introspection_c__PointMatrixWithEnum_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t line_tracking__msg__PointMatrixWithEnum__rosidl_typesupport_introspection_c__PointMatrixWithEnum_message_type_support_handle = {
  0,
  &line_tracking__msg__PointMatrixWithEnum__rosidl_typesupport_introspection_c__PointMatrixWithEnum_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_line_tracking
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, line_tracking, msg, PointMatrixWithEnum)() {
  line_tracking__msg__PointMatrixWithEnum__rosidl_typesupport_introspection_c__PointMatrixWithEnum_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, line_tracking, msg, PointArray)();
  if (!line_tracking__msg__PointMatrixWithEnum__rosidl_typesupport_introspection_c__PointMatrixWithEnum_message_type_support_handle.typesupport_identifier) {
    line_tracking__msg__PointMatrixWithEnum__rosidl_typesupport_introspection_c__PointMatrixWithEnum_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &line_tracking__msg__PointMatrixWithEnum__rosidl_typesupport_introspection_c__PointMatrixWithEnum_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
