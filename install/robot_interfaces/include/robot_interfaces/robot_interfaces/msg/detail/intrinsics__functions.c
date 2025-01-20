// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_interfaces:msg/Intrinsics.idl
// generated code does not contain a copyright notice
#include "robot_interfaces/msg/detail/intrinsics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `model`
#include "rosidl_runtime_c/string_functions.h"
// Member `coeffs`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
robot_interfaces__msg__Intrinsics__init(robot_interfaces__msg__Intrinsics * msg)
{
  if (!msg) {
    return false;
  }
  // width
  // height
  // ppx
  // ppy
  // fx
  // fy
  // depth_scale
  // model
  if (!rosidl_runtime_c__String__init(&msg->model)) {
    robot_interfaces__msg__Intrinsics__fini(msg);
    return false;
  }
  // coeffs
  if (!rosidl_runtime_c__double__Sequence__init(&msg->coeffs, 0)) {
    robot_interfaces__msg__Intrinsics__fini(msg);
    return false;
  }
  return true;
}

void
robot_interfaces__msg__Intrinsics__fini(robot_interfaces__msg__Intrinsics * msg)
{
  if (!msg) {
    return;
  }
  // width
  // height
  // ppx
  // ppy
  // fx
  // fy
  // depth_scale
  // model
  rosidl_runtime_c__String__fini(&msg->model);
  // coeffs
  rosidl_runtime_c__double__Sequence__fini(&msg->coeffs);
}

bool
robot_interfaces__msg__Intrinsics__are_equal(const robot_interfaces__msg__Intrinsics * lhs, const robot_interfaces__msg__Intrinsics * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // ppx
  if (lhs->ppx != rhs->ppx) {
    return false;
  }
  // ppy
  if (lhs->ppy != rhs->ppy) {
    return false;
  }
  // fx
  if (lhs->fx != rhs->fx) {
    return false;
  }
  // fy
  if (lhs->fy != rhs->fy) {
    return false;
  }
  // depth_scale
  if (lhs->depth_scale != rhs->depth_scale) {
    return false;
  }
  // model
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->model), &(rhs->model)))
  {
    return false;
  }
  // coeffs
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->coeffs), &(rhs->coeffs)))
  {
    return false;
  }
  return true;
}

bool
robot_interfaces__msg__Intrinsics__copy(
  const robot_interfaces__msg__Intrinsics * input,
  robot_interfaces__msg__Intrinsics * output)
{
  if (!input || !output) {
    return false;
  }
  // width
  output->width = input->width;
  // height
  output->height = input->height;
  // ppx
  output->ppx = input->ppx;
  // ppy
  output->ppy = input->ppy;
  // fx
  output->fx = input->fx;
  // fy
  output->fy = input->fy;
  // depth_scale
  output->depth_scale = input->depth_scale;
  // model
  if (!rosidl_runtime_c__String__copy(
      &(input->model), &(output->model)))
  {
    return false;
  }
  // coeffs
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->coeffs), &(output->coeffs)))
  {
    return false;
  }
  return true;
}

robot_interfaces__msg__Intrinsics *
robot_interfaces__msg__Intrinsics__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces__msg__Intrinsics * msg = (robot_interfaces__msg__Intrinsics *)allocator.allocate(sizeof(robot_interfaces__msg__Intrinsics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_interfaces__msg__Intrinsics));
  bool success = robot_interfaces__msg__Intrinsics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_interfaces__msg__Intrinsics__destroy(robot_interfaces__msg__Intrinsics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_interfaces__msg__Intrinsics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_interfaces__msg__Intrinsics__Sequence__init(robot_interfaces__msg__Intrinsics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces__msg__Intrinsics * data = NULL;

  if (size) {
    data = (robot_interfaces__msg__Intrinsics *)allocator.zero_allocate(size, sizeof(robot_interfaces__msg__Intrinsics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_interfaces__msg__Intrinsics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_interfaces__msg__Intrinsics__fini(&data[i - 1]);
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
robot_interfaces__msg__Intrinsics__Sequence__fini(robot_interfaces__msg__Intrinsics__Sequence * array)
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
      robot_interfaces__msg__Intrinsics__fini(&array->data[i]);
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

robot_interfaces__msg__Intrinsics__Sequence *
robot_interfaces__msg__Intrinsics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces__msg__Intrinsics__Sequence * array = (robot_interfaces__msg__Intrinsics__Sequence *)allocator.allocate(sizeof(robot_interfaces__msg__Intrinsics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_interfaces__msg__Intrinsics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_interfaces__msg__Intrinsics__Sequence__destroy(robot_interfaces__msg__Intrinsics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_interfaces__msg__Intrinsics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_interfaces__msg__Intrinsics__Sequence__are_equal(const robot_interfaces__msg__Intrinsics__Sequence * lhs, const robot_interfaces__msg__Intrinsics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_interfaces__msg__Intrinsics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_interfaces__msg__Intrinsics__Sequence__copy(
  const robot_interfaces__msg__Intrinsics__Sequence * input,
  robot_interfaces__msg__Intrinsics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_interfaces__msg__Intrinsics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_interfaces__msg__Intrinsics * data =
      (robot_interfaces__msg__Intrinsics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_interfaces__msg__Intrinsics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_interfaces__msg__Intrinsics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_interfaces__msg__Intrinsics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
