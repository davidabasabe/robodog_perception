// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_bt_py_interfaces:msg/NodeDataWiring.idl
// generated code does not contain a copyright notice
#include "ros_bt_py_interfaces/msg/detail/node_data_wiring__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `source`
// Member `target`
#include "ros_bt_py_interfaces/msg/detail/node_data_location__functions.h"

bool
ros_bt_py_interfaces__msg__NodeDataWiring__init(ros_bt_py_interfaces__msg__NodeDataWiring * msg)
{
  if (!msg) {
    return false;
  }
  // source
  if (!ros_bt_py_interfaces__msg__NodeDataLocation__init(&msg->source)) {
    ros_bt_py_interfaces__msg__NodeDataWiring__fini(msg);
    return false;
  }
  // target
  if (!ros_bt_py_interfaces__msg__NodeDataLocation__init(&msg->target)) {
    ros_bt_py_interfaces__msg__NodeDataWiring__fini(msg);
    return false;
  }
  return true;
}

void
ros_bt_py_interfaces__msg__NodeDataWiring__fini(ros_bt_py_interfaces__msg__NodeDataWiring * msg)
{
  if (!msg) {
    return;
  }
  // source
  ros_bt_py_interfaces__msg__NodeDataLocation__fini(&msg->source);
  // target
  ros_bt_py_interfaces__msg__NodeDataLocation__fini(&msg->target);
}

bool
ros_bt_py_interfaces__msg__NodeDataWiring__are_equal(const ros_bt_py_interfaces__msg__NodeDataWiring * lhs, const ros_bt_py_interfaces__msg__NodeDataWiring * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // source
  if (!ros_bt_py_interfaces__msg__NodeDataLocation__are_equal(
      &(lhs->source), &(rhs->source)))
  {
    return false;
  }
  // target
  if (!ros_bt_py_interfaces__msg__NodeDataLocation__are_equal(
      &(lhs->target), &(rhs->target)))
  {
    return false;
  }
  return true;
}

bool
ros_bt_py_interfaces__msg__NodeDataWiring__copy(
  const ros_bt_py_interfaces__msg__NodeDataWiring * input,
  ros_bt_py_interfaces__msg__NodeDataWiring * output)
{
  if (!input || !output) {
    return false;
  }
  // source
  if (!ros_bt_py_interfaces__msg__NodeDataLocation__copy(
      &(input->source), &(output->source)))
  {
    return false;
  }
  // target
  if (!ros_bt_py_interfaces__msg__NodeDataLocation__copy(
      &(input->target), &(output->target)))
  {
    return false;
  }
  return true;
}

ros_bt_py_interfaces__msg__NodeDataWiring *
ros_bt_py_interfaces__msg__NodeDataWiring__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_bt_py_interfaces__msg__NodeDataWiring * msg = (ros_bt_py_interfaces__msg__NodeDataWiring *)allocator.allocate(sizeof(ros_bt_py_interfaces__msg__NodeDataWiring), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_bt_py_interfaces__msg__NodeDataWiring));
  bool success = ros_bt_py_interfaces__msg__NodeDataWiring__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_bt_py_interfaces__msg__NodeDataWiring__destroy(ros_bt_py_interfaces__msg__NodeDataWiring * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_bt_py_interfaces__msg__NodeDataWiring__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_bt_py_interfaces__msg__NodeDataWiring__Sequence__init(ros_bt_py_interfaces__msg__NodeDataWiring__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_bt_py_interfaces__msg__NodeDataWiring * data = NULL;

  if (size) {
    data = (ros_bt_py_interfaces__msg__NodeDataWiring *)allocator.zero_allocate(size, sizeof(ros_bt_py_interfaces__msg__NodeDataWiring), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_bt_py_interfaces__msg__NodeDataWiring__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_bt_py_interfaces__msg__NodeDataWiring__fini(&data[i - 1]);
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
ros_bt_py_interfaces__msg__NodeDataWiring__Sequence__fini(ros_bt_py_interfaces__msg__NodeDataWiring__Sequence * array)
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
      ros_bt_py_interfaces__msg__NodeDataWiring__fini(&array->data[i]);
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

ros_bt_py_interfaces__msg__NodeDataWiring__Sequence *
ros_bt_py_interfaces__msg__NodeDataWiring__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_bt_py_interfaces__msg__NodeDataWiring__Sequence * array = (ros_bt_py_interfaces__msg__NodeDataWiring__Sequence *)allocator.allocate(sizeof(ros_bt_py_interfaces__msg__NodeDataWiring__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_bt_py_interfaces__msg__NodeDataWiring__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_bt_py_interfaces__msg__NodeDataWiring__Sequence__destroy(ros_bt_py_interfaces__msg__NodeDataWiring__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_bt_py_interfaces__msg__NodeDataWiring__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_bt_py_interfaces__msg__NodeDataWiring__Sequence__are_equal(const ros_bt_py_interfaces__msg__NodeDataWiring__Sequence * lhs, const ros_bt_py_interfaces__msg__NodeDataWiring__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_bt_py_interfaces__msg__NodeDataWiring__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_bt_py_interfaces__msg__NodeDataWiring__Sequence__copy(
  const ros_bt_py_interfaces__msg__NodeDataWiring__Sequence * input,
  ros_bt_py_interfaces__msg__NodeDataWiring__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_bt_py_interfaces__msg__NodeDataWiring);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_bt_py_interfaces__msg__NodeDataWiring * data =
      (ros_bt_py_interfaces__msg__NodeDataWiring *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_bt_py_interfaces__msg__NodeDataWiring__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_bt_py_interfaces__msg__NodeDataWiring__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_bt_py_interfaces__msg__NodeDataWiring__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
