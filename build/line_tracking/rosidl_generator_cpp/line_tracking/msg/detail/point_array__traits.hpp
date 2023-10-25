// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from line_tracking:msg/PointArray.idl
// generated code does not contain a copyright notice

#ifndef LINE_TRACKING__MSG__DETAIL__POINT_ARRAY__TRAITS_HPP_
#define LINE_TRACKING__MSG__DETAIL__POINT_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "line_tracking/msg/detail/point_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'points'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace line_tracking
{

namespace msg
{

inline void to_flow_style_yaml(
  const PointArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: points
  {
    if (msg.points.size() == 0) {
      out << "points: []";
    } else {
      out << "points: [";
      size_t pending_items = msg.points.size();
      for (auto item : msg.points) {
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
  const PointArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.points.size() == 0) {
      out << "points: []\n";
    } else {
      out << "points:\n";
      for (auto item : msg.points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PointArray & msg, bool use_flow_style = false)
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
  const line_tracking::msg::PointArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  line_tracking::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use line_tracking::msg::to_yaml() instead")]]
inline std::string to_yaml(const line_tracking::msg::PointArray & msg)
{
  return line_tracking::msg::to_yaml(msg);
}

template<>
inline const char * data_type<line_tracking::msg::PointArray>()
{
  return "line_tracking::msg::PointArray";
}

template<>
inline const char * name<line_tracking::msg::PointArray>()
{
  return "line_tracking/msg/PointArray";
}

template<>
struct has_fixed_size<line_tracking::msg::PointArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<line_tracking::msg::PointArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<line_tracking::msg::PointArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LINE_TRACKING__MSG__DETAIL__POINT_ARRAY__TRAITS_HPP_
