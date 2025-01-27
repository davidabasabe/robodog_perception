// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_bt_py_interfaces:msg/TreeDataUpdate.idl
// generated code does not contain a copyright notice
#include "ros_bt_py_interfaces/msg/detail/tree_data_update__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "ros_bt_py_interfaces/msg/detail/node_data_location__functions.h"

bool
ros_bt_py_interfaces__msg__TreeDataUpdate__init(ros_bt_py_interfaces__msg__TreeDataUpdate * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!ros_bt_py_interfaces__msg__NodeDataLocation__Sequence__init(&msg->data, 0)) {
    ros_bt_py_interfaces__msg__TreeDataUpdate__fini(msg);
    return false;
  }
  return true;
}

void
ros_bt_py_interfaces__msg__TreeDataUpdate__fini(ros_bt_py_interfaces__msg__TreeDataUpdate * msg)
{
  if (!msg) {
    return;
  }
  // data
  ros_bt_py_interfaces__msg__NodeDataLocation__Sequence__fini(&msg->data);
}

bool
ros_bt_py_interfaces__msg__TreeDataUpdate__are_equal(const ros_bt_py_interfaces__msg__TreeDataUpdate * lhs, const ros_bt_py_interfaces__msg__TreeDataUpdate * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!ros_bt_py_interfaces__msg__NodeDataLocation__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
ros_bt_py_interfaces__msg__TreeDataUpdate__copy(
  const ros_bt_py_interfaces__msg__TreeDataUpdate * input,
  ros_bt_py_interfaces__msg__TreeDataUpdate * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!ros_bt_py_interfaces__msg__NodeDataLocation__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

ros_bt_py_interfaces__msg__TreeDataUpdate *
ros_bt_py_interfaces__msg__TreeDataUpdate__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_bt_py_interfaces__msg__TreeDataUpdate * msg = (ros_bt_py_interfaces__msg__TreeDataUpdate *)allocator.allocate(sizeof(ros_bt_py_interfaces__msg__TreeDataUpdate), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_bt_py_interfaces__msg__TreeDataUpdate));
  bool success = ros_bt_py_interfaces__msg__TreeDataUpdate__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_bt_py_interfaces__msg__TreeDataUpdate__destroy(ros_bt_py_interfaces__msg__TreeDataUpdate * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_bt_py_interfaces__msg__TreeDataUpdate__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_bt_py_interfaces__msg__TreeDataUpdate__Sequence__init(ros_bt_py_interfaces__msg__TreeDataUpdate__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_bt_py_interfaces__msg__TreeDataUpdate * data = NULL;

  if (size) {
    data = (ros_bt_py_interfaces__msg__TreeDataUpdate *)allocator.zero_allocate(size, sizeof(ros_bt_py_interfaces__msg__TreeDataUpdate), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_bt_py_interfaces__msg__TreeDataUpdate__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_bt_py_interfaces__msg__TreeDataUpdate__fini(&data[i - 1]);
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
ros_bt_py_interfaces__msg__TreeDataUpdate__Sequence__fini(ros_bt_py_interfaces__msg__TreeDataUpdate__Sequence * array)
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
      ros_bt_py_interfaces__msg__TreeDataUpdate__fini(&array->data[i]);
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

ros_bt_py_interfaces__msg__TreeDataUpdate__Sequence *
ros_bt_py_interfaces__msg__TreeDataUpdate__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_bt_py_interfaces__msg__TreeDataUpdate__Sequence * array = (ros_bt_py_interfaces__msg__TreeDataUpdate__Sequence *)allocator.allocate(sizeof(ros_bt_py_interfaces__msg__TreeDataUpdate__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_bt_py_interfaces__msg__TreeDataUpdate__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_bt_py_interfaces__msg__TreeDataUpdate__Sequence__destroy(ros_bt_py_interfaces__msg__TreeDataUpdate__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_bt_py_interfaces__msg__TreeDataUpdate__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_bt_py_interfaces__msg__TreeDataUpdate__Sequence__are_equal(const ros_bt_py_interfaces__msg__TreeDataUpdate__Sequence * lhs, const ros_bt_py_interfaces__msg__TreeDataUpdate__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_bt_py_interfaces__msg__TreeDataUpdate__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_bt_py_interfaces__msg__TreeDataUpdate__Sequence__copy(
  const ros_bt_py_interfaces__msg__TreeDataUpdate__Sequence * input,
  ros_bt_py_interfaces__msg__TreeDataUpdate__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_bt_py_interfaces__msg__TreeDataUpdate);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_bt_py_interfaces__msg__TreeDataUpdate * data =
      (ros_bt_py_interfaces__msg__TreeDataUpdate *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_bt_py_interfaces__msg__TreeDataUpdate__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_bt_py_interfaces__msg__TreeDataUpdate__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_bt_py_interfaces__msg__TreeDataUpdate__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
