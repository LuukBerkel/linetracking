// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from line_tracking:msg/PointBlob.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "line_tracking/msg/detail/point_blob__struct.hpp"
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

void PointBlob_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) line_tracking::msg::PointBlob(_init);
}

void PointBlob_fini_function(void * message_memory)
{
  auto typed_message = static_cast<line_tracking::msg::PointBlob *>(message_memory);
  typed_message->~PointBlob();
}

size_t size_function__PointBlob__arrays(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<line_tracking::msg::PointArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PointBlob__arrays(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<line_tracking::msg::PointArray> *>(untyped_member);
  return &member[index];
}

void * get_function__PointBlob__arrays(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<line_tracking::msg::PointArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__PointBlob__arrays(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const line_tracking::msg::PointArray *>(
    get_const_function__PointBlob__arrays(untyped_member, index));
  auto & value = *reinterpret_cast<line_tracking::msg::PointArray *>(untyped_value);
  value = item;
}

void assign_function__PointBlob__arrays(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<line_tracking::msg::PointArray *>(
    get_function__PointBlob__arrays(untyped_member, index));
  const auto & value = *reinterpret_cast<const line_tracking::msg::PointArray *>(untyped_value);
  item = value;
}

void resize_function__PointBlob__arrays(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<line_tracking::msg::PointArray> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PointBlob_message_member_array[1] = {
  {
    "arrays",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<line_tracking::msg::PointArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(line_tracking::msg::PointBlob, arrays),  // bytes offset in struct
    nullptr,  // default value
    size_function__PointBlob__arrays,  // size() function pointer
    get_const_function__PointBlob__arrays,  // get_const(index) function pointer
    get_function__PointBlob__arrays,  // get(index) function pointer
    fetch_function__PointBlob__arrays,  // fetch(index, &value) function pointer
    assign_function__PointBlob__arrays,  // assign(index, value) function pointer
    resize_function__PointBlob__arrays  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PointBlob_message_members = {
  "line_tracking::msg",  // message namespace
  "PointBlob",  // message name
  1,  // number of fields
  sizeof(line_tracking::msg::PointBlob),
  PointBlob_message_member_array,  // message members
  PointBlob_init_function,  // function to initialize message memory (memory has to be allocated)
  PointBlob_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PointBlob_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PointBlob_message_members,
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
get_message_type_support_handle<line_tracking::msg::PointBlob>()
{
  return &::line_tracking::msg::rosidl_typesupport_introspection_cpp::PointBlob_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, line_tracking, msg, PointBlob)() {
  return &::line_tracking::msg::rosidl_typesupport_introspection_cpp::PointBlob_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
