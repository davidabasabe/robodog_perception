// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_interfaces:msg/Robot.idl
// generated code does not contain a copyright notice
#include "robot_interfaces/msg/detail/robot__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `arrow`
// Member `lava`
#include "robot_interfaces/msg/detail/yolo_detection__functions.h"
// Member `stair`
#include "robot_interfaces/msg/detail/stair__functions.h"
// Member `wall`
#include "robot_interfaces/msg/detail/wall__functions.h"

bool
robot_interfaces__msg__Robot__init(robot_interfaces__msg__Robot * msg)
{
  if (!msg) {
    return false;
  }
  // arrow
  if (!robot_interfaces__msg__YoloDetection__init(&msg->arrow)) {
    robot_interfaces__msg__Robot__fini(msg);
    return false;
  }
  // lava
  if (!robot_interfaces__msg__YoloDetection__init(&msg->lava)) {
    robot_interfaces__msg__Robot__fini(msg);
    return false;
  }
  // stair
  if (!robot_interfaces__msg__Stair__init(&msg->stair)) {
    robot_interfaces__msg__Robot__fini(msg);
    return false;
  }
  // wall
  if (!robot_interfaces__msg__Wall__init(&msg->wall)) {
    robot_interfaces__msg__Robot__fini(msg);
    return false;
  }
  return true;
}

void
robot_interfaces__msg__Robot__fini(robot_interfaces__msg__Robot * msg)
{
  if (!msg) {
    return;
  }
  // arrow
  robot_interfaces__msg__YoloDetection__fini(&msg->arrow);
  // lava
  robot_interfaces__msg__YoloDetection__fini(&msg->lava);
  // stair
  robot_interfaces__msg__Stair__fini(&msg->stair);
  // wall
  robot_interfaces__msg__Wall__fini(&msg->wall);
}

bool
robot_interfaces__msg__Robot__are_equal(const robot_interfaces__msg__Robot * lhs, const robot_interfaces__msg__Robot * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // arrow
  if (!robot_interfaces__msg__YoloDetection__are_equal(
      &(lhs->arrow), &(rhs->arrow)))
  {
    return false;
  }
  // lava
  if (!robot_interfaces__msg__YoloDetection__are_equal(
      &(lhs->lava), &(rhs->lava)))
  {
    return false;
  }
  // stair
  if (!robot_interfaces__msg__Stair__are_equal(
      &(lhs->stair), &(rhs->stair)))
  {
    return false;
  }
  // wall
  if (!robot_interfaces__msg__Wall__are_equal(
      &(lhs->wall), &(rhs->wall)))
  {
    return false;
  }
  return true;
}

bool
robot_interfaces__msg__Robot__copy(
  const robot_interfaces__msg__Robot * input,
  robot_interfaces__msg__Robot * output)
{
  if (!input || !output) {
    return false;
  }
  // arrow
  if (!robot_interfaces__msg__YoloDetection__copy(
      &(input->arrow), &(output->arrow)))
  {
    return false;
  }
  // lava
  if (!robot_interfaces__msg__YoloDetection__copy(
      &(input->lava), &(output->lava)))
  {
    return false;
  }
  // stair
  if (!robot_interfaces__msg__Stair__copy(
      &(input->stair), &(output->stair)))
  {
    return false;
  }
  // wall
  if (!robot_interfaces__msg__Wall__copy(
      &(input->wall), &(output->wall)))
  {
    return false;
  }
  return true;
}

robot_interfaces__msg__Robot *
robot_interfaces__msg__Robot__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces__msg__Robot * msg = (robot_interfaces__msg__Robot *)allocator.allocate(sizeof(robot_interfaces__msg__Robot), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_interfaces__msg__Robot));
  bool success = robot_interfaces__msg__Robot__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_interfaces__msg__Robot__destroy(robot_interfaces__msg__Robot * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_interfaces__msg__Robot__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_interfaces__msg__Robot__Sequence__init(robot_interfaces__msg__Robot__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces__msg__Robot * data = NULL;

  if (size) {
    data = (robot_interfaces__msg__Robot *)allocator.zero_allocate(size, sizeof(robot_interfaces__msg__Robot), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_interfaces__msg__Robot__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_interfaces__msg__Robot__fini(&data[i - 1]);
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
robot_interfaces__msg__Robot__Sequence__fini(robot_interfaces__msg__Robot__Sequence * array)
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
      robot_interfaces__msg__Robot__fini(&array->data[i]);
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

robot_interfaces__msg__Robot__Sequence *
robot_interfaces__msg__Robot__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_interfaces__msg__Robot__Sequence * array = (robot_interfaces__msg__Robot__Sequence *)allocator.allocate(sizeof(robot_interfaces__msg__Robot__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_interfaces__msg__Robot__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_interfaces__msg__Robot__Sequence__destroy(robot_interfaces__msg__Robot__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_interfaces__msg__Robot__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_interfaces__msg__Robot__Sequence__are_equal(const robot_interfaces__msg__Robot__Sequence * lhs, const robot_interfaces__msg__Robot__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_interfaces__msg__Robot__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_interfaces__msg__Robot__Sequence__copy(
  const robot_interfaces__msg__Robot__Sequence * input,
  robot_interfaces__msg__Robot__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_interfaces__msg__Robot);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_interfaces__msg__Robot * data =
      (robot_interfaces__msg__Robot *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_interfaces__msg__Robot__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_interfaces__msg__Robot__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_interfaces__msg__Robot__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
