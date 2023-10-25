// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from line_tracking:msg/PointMatrixWithEnum.idl
// generated code does not contain a copyright notice
#include "line_tracking/msg/detail/point_matrix_with_enum__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `lines`
#include "line_tracking/msg/detail/point_array__functions.h"

bool
line_tracking__msg__PointMatrixWithEnum__init(line_tracking__msg__PointMatrixWithEnum * msg)
{
  if (!msg) {
    return false;
  }
  // lines
  if (!line_tracking__msg__PointArray__Sequence__init(&msg->lines, 0)) {
    line_tracking__msg__PointMatrixWithEnum__fini(msg);
    return false;
  }
  // type
  return true;
}

void
line_tracking__msg__PointMatrixWithEnum__fini(line_tracking__msg__PointMatrixWithEnum * msg)
{
  if (!msg) {
    return;
  }
  // lines
  line_tracking__msg__PointArray__Sequence__fini(&msg->lines);
  // type
}

bool
line_tracking__msg__PointMatrixWithEnum__are_equal(const line_tracking__msg__PointMatrixWithEnum * lhs, const line_tracking__msg__PointMatrixWithEnum * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lines
  if (!line_tracking__msg__PointArray__Sequence__are_equal(
      &(lhs->lines), &(rhs->lines)))
  {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  return true;
}

bool
line_tracking__msg__PointMatrixWithEnum__copy(
  const line_tracking__msg__PointMatrixWithEnum * input,
  line_tracking__msg__PointMatrixWithEnum * output)
{
  if (!input || !output) {
    return false;
  }
  // lines
  if (!line_tracking__msg__PointArray__Sequence__copy(
      &(input->lines), &(output->lines)))
  {
    return false;
  }
  // type
  output->type = input->type;
  return true;
}

line_tracking__msg__PointMatrixWithEnum *
line_tracking__msg__PointMatrixWithEnum__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  line_tracking__msg__PointMatrixWithEnum * msg = (line_tracking__msg__PointMatrixWithEnum *)allocator.allocate(sizeof(line_tracking__msg__PointMatrixWithEnum), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(line_tracking__msg__PointMatrixWithEnum));
  bool success = line_tracking__msg__PointMatrixWithEnum__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
line_tracking__msg__PointMatrixWithEnum__destroy(line_tracking__msg__PointMatrixWithEnum * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    line_tracking__msg__PointMatrixWithEnum__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
line_tracking__msg__PointMatrixWithEnum__Sequence__init(line_tracking__msg__PointMatrixWithEnum__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  line_tracking__msg__PointMatrixWithEnum * data = NULL;

  if (size) {
    data = (line_tracking__msg__PointMatrixWithEnum *)allocator.zero_allocate(size, sizeof(line_tracking__msg__PointMatrixWithEnum), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = line_tracking__msg__PointMatrixWithEnum__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        line_tracking__msg__PointMatrixWithEnum__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
line_tracking__msg__PointMatrixWithEnum__Sequence__fini(line_tracking__msg__PointMatrixWithEnum__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      line_tracking__msg__PointMatrixWithEnum__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

line_tracking__msg__PointMatrixWithEnum__Sequence *
line_tracking__msg__PointMatrixWithEnum__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  line_tracking__msg__PointMatrixWithEnum__Sequence * array = (line_tracking__msg__PointMatrixWithEnum__Sequence *)allocator.allocate(sizeof(line_tracking__msg__PointMatrixWithEnum__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = line_tracking__msg__PointMatrixWithEnum__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
line_tracking__msg__PointMatrixWithEnum__Sequence__destroy(line_tracking__msg__PointMatrixWithEnum__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    line_tracking__msg__PointMatrixWithEnum__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
line_tracking__msg__PointMatrixWithEnum__Sequence__are_equal(const line_tracking__msg__PointMatrixWithEnum__Sequence * lhs, const line_tracking__msg__PointMatrixWithEnum__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!line_tracking__msg__PointMatrixWithEnum__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
line_tracking__msg__PointMatrixWithEnum__Sequence__copy(
  const line_tracking__msg__PointMatrixWithEnum__Sequence * input,
  line_tracking__msg__PointMatrixWithEnum__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(line_tracking__msg__PointMatrixWithEnum);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    line_tracking__msg__PointMatrixWithEnum * data =
      (line_tracking__msg__PointMatrixWithEnum *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!line_tracking__msg__PointMatrixWithEnum__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          line_tracking__msg__PointMatrixWithEnum__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!line_tracking__msg__PointMatrixWithEnum__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
