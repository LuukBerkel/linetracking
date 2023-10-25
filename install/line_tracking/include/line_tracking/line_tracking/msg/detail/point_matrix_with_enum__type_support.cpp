// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from line_tracking:msg/PointMatrixWithEnum.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "line_tracking/msg/detail/point_matrix_with_enum__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace line_tracking
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PointMatrixWithEnum_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) line_tracking::msg::PointMatrixWithEnum(_init);
}

void PointMatrixWithEnum_fini_function(void * message_memory)
{
  auto typed_message = static_cast<line_tracking::msg::PointMatrixWithEnum *>(message_memory);
  typed_message->~PointMatrixWithEnum();
}

size_t size_function__PointMatrixWithEnum__lines(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<line_tracking::msg::PointArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PointMatrixWithEnum__lines(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<line_tracking::msg::PointArray> *>(untyped_member);
  return &member[index];
}

void * get_function__PointMatrixWithEnum__lines(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<line_tracking::msg::PointArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__PointMatrixWithEnum__lines(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const line_tracking::msg::PointArray *>(
    get_const_function__PointMatrixWithEnum__lines(untyped_member, index));
  auto & value = *reinterpret_cast<line_tracking::msg::PointArray *>(untyped_value);
  value = item;
}

void assign_function__PointMatrixWithEnum__lines(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<line_tracking::msg::PointArray *>(
    get_function__PointMatrixWithEnum__lines(untyped_member, index));
  const auto & value = *reinterpret_cast<const line_tracking::msg::PointArray *>(untyped_value);
  item = value;
}

void resize_function__PointMatrixWithEnum__lines(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<line_tracking::msg::PointArray> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PointMatrixWithEnum_message_member_array[2] = {
  {
    "lines",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<line_tracking::msg::PointArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(line_tracking::msg::PointMatrixWithEnum, lines),  // bytes offset in struct
    nullptr,  // default value
    size_function__PointMatrixWithEnum__lines,  // size() function pointer
    get_const_function__PointMatrixWithEnum__lines,  // get_const(index) function pointer
    get_function__PointMatrixWithEnum__lines,  // get(index) function pointer
    fetch_function__PointMatrixWithEnum__lines,  // fetch(index, &value) function pointer
    assign_function__PointMatrixWithEnum__lines,  // assign(index, value) function pointer
    resize_function__PointMatrixWithEnum__lines  // resize(index) function pointer
  },
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(line_tracking::msg::PointMatrixWithEnum, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PointMatrixWithEnum_message_members = {
  "line_tracking::msg",  // message namespace
  "PointMatrixWithEnum",  // message name
  2,  // number of fields
  sizeof(line_tracking::msg::PointMatrixWithEnum),
  PointMatrixWithEnum_message_member_array,  // message members
  PointMatrixWithEnum_init_function,  // function to initialize message memory (memory has to be allocated)
  PointMatrixWithEnum_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PointMatrixWithEnum_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PointMatrixWithEnum_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace line_tracking


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<line_tracking::msg::PointMatrixWithEnum>()
{
  return &::line_tracking::msg::rosidl_typesupport_introspection_cpp::PointMatrixWithEnum_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, line_tracking, msg, PointMatrixWithEnum)() {
  return &::line_tracking::msg::rosidl_typesupport_introspection_cpp::PointMatrixWithEnum_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
