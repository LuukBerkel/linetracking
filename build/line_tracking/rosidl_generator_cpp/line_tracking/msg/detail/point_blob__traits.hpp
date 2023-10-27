// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from line_tracking:msg/PointBlob.idl
// generated code does not contain a copyright notice

#ifndef LINE_TRACKING__MSG__DETAIL__POINT_BLOB__TRAITS_HPP_
#define LINE_TRACKING__MSG__DETAIL__POINT_BLOB__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "line_tracking/msg/detail/point_blob__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'arrays'
#include "line_tracking/msg/detail/point_array__traits.hpp"

namespace line_tracking
{

namespace msg
{

inline void to_flow_style_yaml(
  const PointBlob & msg,
  std::ostream & out)
{
  out << "{";
  // member: arrays
  {
    if (msg.arrays.size() == 0) {
      out << "arrays: []";
    } else {
      out << "arrays: [";
      size_t pending_items = msg.arrays.size();
      for (auto item : msg.arrays) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PointBlob & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: arrays
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.arrays.size() == 0) {
      out << "arrays: []\n";
    } else {
      out << "arrays:\n";
      for (auto item : msg.arrays) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PointBlob & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace line_tracking

namespace rosidl_generator_traits
{

[[deprecated("use line_tracking::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const line_tracking::msg::PointBlob & msg,
  std::ostream & out, size_t indentation = 0)
{
  line_tracking::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use line_tracking::msg::to_yaml() instead")]]
inline std::string to_yaml(const line_tracking::msg::PointBlob & msg)
{
  return line_tracking::msg::to_yaml(msg);
}

template<>
inline const char * data_type<line_tracking::msg::PointBlob>()
{
  return "line_tracking::msg::PointBlob";
}

template<>
inline const char * name<line_tracking::msg::PointBlob>()
{
  return "line_tracking/msg/PointBlob";
}

template<>
struct has_fixed_size<line_tracking::msg::PointBlob>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<line_tracking::msg::PointBlob>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<line_tracking::msg::PointBlob>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LINE_TRACKING__MSG__DETAIL__POINT_BLOB__TRAITS_HPP_
