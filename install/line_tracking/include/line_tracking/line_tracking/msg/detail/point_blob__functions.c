// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from line_tracking:msg/PointBlob.idl
// generated code does not contain a copyright notice
#include "line_tracking/msg/detail/point_blob__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `arrays`
#include "line_tracking/msg/detail/point_array__functions.h"

bool
line_tracking__msg__PointBlob__init(line_tracking__msg__PointBlob * msg)
{
  if (!msg) {
    return false;
  }
  // arrays
  if (!line_tracking__msg__PointArray__Sequence__init(&msg->arrays, 0)) {
    line_tracking__msg__PointBlob__fini(msg);
    return false;
  }
  return true;
}

void
line_tracking__msg__PointBlob__fini(line_tracking__msg__PointBlob * msg)
{
  if (!msg) {
    return;
  }
  // arrays
  line_tracking__msg__PointArray__Sequence__fini(&msg->arrays);
}

bool
line_tracking__msg__PointBlob__are_equal(const line_tracking__msg__PointBlob * lhs, const line_tracking__msg__PointBlob * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // arrays
  if (!line_tracking__msg__PointArray__Sequence__are_equal(
      &(lhs->arrays), &(rhs->arrays)))
  {
    return false;
  }
  return true;
}

bool
line_tracking__msg__PointBlob__copy(
  const line_tracking__msg__PointBlob * input,
  line_tracking__msg__PointBlob * output)
{
  if (!input || !output) {
    return false;
  }
  // arrays
  if (!line_tracking__msg__PointArray__Sequence__copy(
      &(input->arrays), &(output->arrays)))
  {
    return false;
  }
  return true;
}

line_tracking__msg__PointBlob *
line_tracking__msg__PointBlob__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  line_tracking__msg__PointBlob * msg = (line_tracking__msg__PointBlob *)allocator.allocate(sizeof(line_tracking__msg__PointBlob), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(line_tracking__msg__PointBlob));
  bool success = line_tracking__msg__PointBlob__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
line_tracking__msg__PointBlob__destroy(line_tracking__msg__PointBlob * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    line_tracking__msg__PointBlob__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
line_tracking__msg__PointBlob__Sequence__init(line_tracking__msg__PointBlob__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  line_tracking__msg__PointBlob * data = NULL;

  if (size) {
    data = (line_tracking__msg__PointBlob *)allocator.zero_allocate(size, sizeof(line_tracking__msg__PointBlob), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = line_tracking__msg__PointBlob__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        line_tracking__msg__PointBlob__fini(&data[i - 1]);
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
line_tracking__msg__PointBlob__Sequence__fini(line_tracking__msg__PointBlob__Sequence * array)
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
      line_tracking__msg__PointBlob__fini(&array->data[i]);
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

line_tracking__msg__PointBlob__Sequence *
line_tracking__msg__PointBlob__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  line_tracking__msg__PointBlob__Sequence * array = (line_tracking__msg__PointBlob__Sequence *)allocator.allocate(sizeof(line_tracking__msg__PointBlob__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = line_tracking__msg__PointBlob__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
line_tracking__msg__PointBlob__Sequence__destroy(line_tracking__msg__PointBlob__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    line_tracking__msg__PointBlob__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
line_tracking__msg__PointBlob__Sequence__are_equal(const line_tracking__msg__PointBlob__Sequence * lhs, const line_tracking__msg__PointBlob__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!line_tracking__msg__PointBlob__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
line_tracking__msg__PointBlob__Sequence__copy(
  const line_tracking__msg__PointBlob__Sequence * input,
  line_tracking__msg__PointBlob__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(line_tracking__msg__PointBlob);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    line_tracking__msg__PointBlob * data =
      (line_tracking__msg__PointBlob *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!line_tracking__msg__PointBlob__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          line_tracking__msg__PointBlob__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!line_tracking__msg__PointBlob__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
