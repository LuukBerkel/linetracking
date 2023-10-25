// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from line_tracking:msg/PointArray.idl
// generated code does not contain a copyright notice

#ifndef LINE_TRACKING__MSG__DETAIL__POINT_ARRAY__STRUCT_H_
#define LINE_TRACKING__MSG__DETAIL__POINT_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'points'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/PointArray in the package line_tracking.
typedef struct line_tracking__msg__PointArray
{
  geometry_msgs__msg__Point__Sequence points;
} line_tracking__msg__PointArray;

// Struct for a sequence of line_tracking__msg__PointArray.
typedef struct line_tracking__msg__PointArray__Sequence
{
  line_tracking__msg__PointArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} line_tracking__msg__PointArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LINE_TRACKING__MSG__DETAIL__POINT_ARRAY__STRUCT_H_
