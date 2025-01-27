// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_bt_py_interfaces:msg/NodeDataLocation.idl
// generated code does not contain a copyright notice
#include "ros_bt_py_interfaces/msg/detail/node_data_location__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `node_name`
// Member `data_kind`
// Member `data_key`
#include "rosidl_runtime_c/string_functions.h"

bool
ros_bt_py_interfaces__msg__NodeDataLocation__init(ros_bt_py_interfaces__msg__NodeDataLocation * msg)
{
  if (!msg) {
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__String__init(&msg->node_name)) {
    ros_bt_py_interfaces__msg__NodeDataLocation__fini(msg);
    return false;
  }
  // data_kind
  if (!rosidl_runtime_c__String__init(&msg->data_kind)) {
    ros_bt_py_interfaces__msg__NodeDataLocation__fini(msg);
    return false;
  }
  // data_key
  if (!rosidl_runtime_c__String__init(&msg->data_key)) {
    ros_bt_py_interfaces__msg__NodeDataLocation__fini(msg);
    return false;
  }
  return true;
}

void
ros_bt_py_interfaces__msg__NodeDataLocation__fini(ros_bt_py_interfaces__msg__NodeDataLocation * msg)
{
  if (!msg) {
    return;
  }
  // node_name
  rosidl_runtime_c__String__fini(&msg->node_name);
  // data_kind
  rosidl_runtime_c__String__fini(&msg->data_kind);
  // data_key
  rosidl_runtime_c__String__fini(&msg->data_key);
}

bool
ros_bt_py_interfaces__msg__NodeDataLocation__are_equal(const ros_bt_py_interfaces__msg__NodeDataLocation * lhs, const ros_bt_py_interfaces__msg__NodeDataLocation * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->node_name), &(rhs->node_name)))
  {
    return false;
  }
  // data_kind
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->data_kind), &(rhs->data_kind)))
  {
    return false;
  }
  // data_key
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->data_key), &(rhs->data_key)))
  {
    return false;
  }
  return true;
}

bool
ros_bt_py_interfaces__msg__NodeDataLocation__copy(
  const ros_bt_py_interfaces__msg__NodeDataLocation * input,
  ros_bt_py_interfaces__msg__NodeDataLocation * output)
{
  if (!input || !output) {
    return false;
  }
  // node_name
  if (!rosidl_runtime_c__String__copy(
      &(input->node_name), &(output->node_name)))
  {
    return false;
  }
  // data_kind
  if (!rosidl_runtime_c__String__copy(
      &(input->data_kind), &(output->data_kind)))
  {
    return false;
  }
  // data_key
  if (!rosidl_runtime_c__String__copy(
      &(input->data_key), &(output->data_key)))
  {
    return false;
  }
  return true;
}

ros_bt_py_interfaces__msg__NodeDataLocation *
ros_bt_py_interfaces__msg__NodeDataLocation__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_bt_py_interfaces__msg__NodeDataLocation * msg = (ros_bt_py_interfaces__msg__NodeDataLocation *)allocator.allocate(sizeof(ros_bt_py_interfaces__msg__NodeDataLocation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_bt_py_interfaces__msg__NodeDataLocation));
  bool success = ros_bt_py_interfaces__msg__NodeDataLocation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_bt_py_interfaces__msg__NodeDataLocation__destroy(ros_bt_py_interfaces__msg__NodeDataLocation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_bt_py_interfaces__msg__NodeDataLocation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_bt_py_interfaces__msg__NodeDataLocation__Sequence__init(ros_bt_py_interfaces__msg__NodeDataLocation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_bt_py_interfaces__msg__NodeDataLocation * data = NULL;

  if (size) {
    data = (ros_bt_py_interfaces__msg__NodeDataLocation *)allocator.zero_allocate(size, sizeof(ros_bt_py_interfaces__msg__NodeDataLocation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_bt_py_interfaces__msg__NodeDataLocation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_bt_py_interfaces__msg__NodeDataLocation__fini(&data[i - 1]);
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
ros_bt_py_interfaces__msg__NodeDataLocation__Sequence__fini(ros_bt_py_interfaces__msg__NodeDataLocation__Sequence * array)
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
      ros_bt_py_interfaces__msg__NodeDataLocation__fini(&array->data[i]);
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

ros_bt_py_interfaces__msg__NodeDataLocation__Sequence *
ros_bt_py_interfaces__msg__NodeDataLocation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_bt_py_interfaces__msg__NodeDataLocation__Sequence * array = (ros_bt_py_interfaces__msg__NodeDataLocation__Sequence *)allocator.allocate(sizeof(ros_bt_py_interfaces__msg__NodeDataLocation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_bt_py_interfaces__msg__NodeDataLocation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_bt_py_interfaces__msg__NodeDataLocation__Sequence__destroy(ros_bt_py_interfaces__msg__NodeDataLocation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_bt_py_interfaces__msg__NodeDataLocation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_bt_py_interfaces__msg__NodeDataLocation__Sequence__are_equal(const ros_bt_py_interfaces__msg__NodeDataLocation__Sequence * lhs, const ros_bt_py_interfaces__msg__NodeDataLocation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_bt_py_interfaces__msg__NodeDataLocation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_bt_py_interfaces__msg__NodeDataLocation__Sequence__copy(
  const ros_bt_py_interfaces__msg__NodeDataLocation__Sequence * input,
  ros_bt_py_interfaces__msg__NodeDataLocation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_bt_py_interfaces__msg__NodeDataLocation);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_bt_py_interfaces__msg__NodeDataLocation * data =
      (ros_bt_py_interfaces__msg__NodeDataLocation *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_bt_py_interfaces__msg__NodeDataLocation__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_bt_py_interfaces__msg__NodeDataLocation__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_bt_py_interfaces__msg__NodeDataLocation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
