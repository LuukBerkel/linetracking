// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from line_tracking:msg/PointBlob.idl
// generated code does not contain a copyright notice

#ifndef LINE_TRACKING__MSG__DETAIL__POINT_BLOB__STRUCT_H_
#define LINE_TRACKING__MSG__DETAIL__POINT_BLOB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'arrays'
#include "line_tracking/msg/detail/point_array__struct.h"

/// Struct defined in msg/PointBlob in the package line_tracking.
/**
  * PiontBlob.msg
 */
typedef struct line_tracking__msg__PointBlob
{
  line_tracking__msg__PointArray__Sequence arrays;
} line_tracking__msg__PointBlob;

// Struct for a sequence of line_tracking__msg__PointBlob.
typedef struct line_tracking__msg__PointBlob__Sequence
{
  line_tracking__msg__PointBlob * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} line_tracking__msg__PointBlob__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LINE_TRACKING__MSG__DETAIL__POINT_BLOB__STRUCT_H_
