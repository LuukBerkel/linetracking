// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from line_tracking:msg/PointMatrixWithEnum.idl
// generated code does not contain a copyright notice

#ifndef LINE_TRACKING__MSG__DETAIL__POINT_MATRIX_WITH_ENUM__STRUCT_H_
#define LINE_TRACKING__MSG__DETAIL__POINT_MATRIX_WITH_ENUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'lines'
#include "line_tracking/msg/detail/point_array__struct.h"

/// Struct defined in msg/PointMatrixWithEnum in the package line_tracking.
/**
  * PiontMatrixWithEnum.msg
 */
typedef struct line_tracking__msg__PointMatrixWithEnum
{
  line_tracking__msg__PointArray__Sequence lines;
  int32_t type;
} line_tracking__msg__PointMatrixWithEnum;

// Struct for a sequence of line_tracking__msg__PointMatrixWithEnum.
typedef struct line_tracking__msg__PointMatrixWithEnum__Sequence
{
  line_tracking__msg__PointMatrixWithEnum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} line_tracking__msg__PointMatrixWithEnum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LINE_TRACKING__MSG__DETAIL__POINT_MATRIX_WITH_ENUM__STRUCT_H_
