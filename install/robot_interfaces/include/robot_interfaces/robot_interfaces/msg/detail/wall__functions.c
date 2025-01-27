// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_interfaces:msg/Wall.idl
// generated code does not contain a copyright notice
#include "robot_interfaces/msg/detail/wall__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
robot_interfaces__msg__Wall__init(robot_interfaces__msg__Wall * msg)
{
  if (!msg) {
    return false;
  }
  // distance_left
  // distance_right
  // distance_front
  // angle_left
  // angle_right
  return true;
}

void
robot_interfaces__msg__Wall__fini(robot_interfaces__msg__Wall * msg)
{
  if (!msg) {
    return;
  }
  // distance_left
  // distance_right
  // distance_front
  // angle_left
  // angle_right
}

bool
robot_interfaces__msg__Wall__are_equal(const robot_interfaces__msg__Wall * lhs, const robot_interfaces__msg__Wall * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // distance_left
  if (lhs->distance_left != rhs->distance_left) {
    return false;
  }
  // distance_right
  if (lhs->distance_right != rhs->distance_right) {
    return false;
  }
  // distance_front
  if (lhs->distance_front != rhs->distance_front) {
    return false;
  }
  // angle_left
  if (lhs->angle_left != rhs->angle_left) {
    return false;
  }
  // angle_right
  if (lhs->angle_right != rhs->angle_right) {
    return false;
  }
  return true;
}

bool
robot_interfaces__msg__Wall__copy(
  const robot_interfaces__msg__Wall * input,
  robot_interfaces__msg__Wall * output)
{
  if (!input || !output) {
    return false;
  }
  // distance_left
  output->distance_left = input->distance_left;
  // distance_right
  output->distance_right = input->distance_right;
  // distance_front
  output->distance_front = input->distance_front;
  // angle_left
  output->angle_left = input->angle_left;
  // angle_right
  output->angle_right = input->angle_right;
  return true;
}

robot_interfaces__msg__Wall *
robot_interfaces__msg__Wall__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces__msg__Wall * msg = (robot_interfaces__msg__Wall *)allocator.allocate(sizeof(robot_interfaces__msg__Wall), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_interfaces__msg__Wall));
  bool success = robot_interfaces__msg__Wall__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_interfaces__msg__Wall__destroy(robot_interfaces__msg__Wall * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_interfaces__msg__Wall__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_interfaces__msg__Wall__Sequence__init(robot_interfaces__msg__Wall__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces__msg__Wall * data = NULL;

  if (size) {
    data = (robot_interfaces__msg__Wall *)allocator.zero_allocate(size, sizeof(robot_interfaces__msg__Wall), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_interfaces__msg__Wall__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_interfaces__msg__Wall__fini(&data[i - 1]);
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
robot_interfaces__msg__Wall__Sequence__fini(robot_interfaces__msg__Wall__Sequence * array)
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
      robot_interfaces__msg__Wall__fini(&array->data[i]);
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

robot_interfaces__msg__Wall__Sequence *
robot_interfaces__msg__Wall__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces__msg__Wall__Sequence * array = (robot_interfaces__msg__Wall__Sequence *)allocator.allocate(sizeof(robot_interfaces__msg__Wall__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_interfaces__msg__Wall__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_interfaces__msg__Wall__Sequence__destroy(robot_interfaces__msg__Wall__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_interfaces__msg__Wall__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_interfaces__msg__Wall__Sequence__are_equal(const robot_interfaces__msg__Wall__Sequence * lhs, const robot_interfaces__msg__Wall__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_interfaces__msg__Wall__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_interfaces__msg__Wall__Sequence__copy(
  const robot_interfaces__msg__Wall__Sequence * input,
  robot_interfaces__msg__Wall__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_interfaces__msg__Wall);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_interfaces__msg__Wall * data =
      (robot_interfaces__msg__Wall *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_interfaces__msg__Wall__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_interfaces__msg__Wall__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_interfaces__msg__Wall__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
