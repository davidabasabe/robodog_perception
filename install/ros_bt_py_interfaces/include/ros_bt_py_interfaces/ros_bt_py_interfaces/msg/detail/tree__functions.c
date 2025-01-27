// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_bt_py_interfaces:msg/Tree.idl
// generated code does not contain a copyright notice
#include "ros_bt_py_interfaces/msg/detail/tree__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `path`
// Member `root_name`
// Member `state`
#include "rosidl_runtime_c/string_functions.h"
// Member `nodes`
#include "ros_bt_py_interfaces/msg/detail/node__functions.h"
// Member `data_wirings`
#include "ros_bt_py_interfaces/msg/detail/node_data_wiring__functions.h"
// Member `public_node_data`
#include "ros_bt_py_interfaces/msg/detail/node_data_location__functions.h"

bool
ros_bt_py_interfaces__msg__Tree__init(ros_bt_py_interfaces__msg__Tree * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    ros_bt_py_interfaces__msg__Tree__fini(msg);
    return false;
  }
  // path
  if (!rosidl_runtime_c__String__init(&msg->path)) {
    ros_bt_py_interfaces__msg__Tree__fini(msg);
    return false;
  }
  // root_name
  if (!rosidl_runtime_c__String__init(&msg->root_name)) {
    ros_bt_py_interfaces__msg__Tree__fini(msg);
    return false;
  }
  // nodes
  if (!ros_bt_py_interfaces__msg__Node__Sequence__init(&msg->nodes, 0)) {
    ros_bt_py_interfaces__msg__Tree__fini(msg);
    return false;
  }
  // data_wirings
  if (!ros_bt_py_interfaces__msg__NodeDataWiring__Sequence__init(&msg->data_wirings, 0)) {
    ros_bt_py_interfaces__msg__Tree__fini(msg);
    return false;
  }
  // tick_frequency_hz
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    ros_bt_py_interfaces__msg__Tree__fini(msg);
    return false;
  }
  // public_node_data
  if (!ros_bt_py_interfaces__msg__NodeDataLocation__Sequence__init(&msg->public_node_data, 0)) {
    ros_bt_py_interfaces__msg__Tree__fini(msg);
    return false;
  }
  return true;
}

void
ros_bt_py_interfaces__msg__Tree__fini(ros_bt_py_interfaces__msg__Tree * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // path
  rosidl_runtime_c__String__fini(&msg->path);
  // root_name
  rosidl_runtime_c__String__fini(&msg->root_name);
  // nodes
  ros_bt_py_interfaces__msg__Node__Sequence__fini(&msg->nodes);
  // data_wirings
  ros_bt_py_interfaces__msg__NodeDataWiring__Sequence__fini(&msg->data_wirings);
  // tick_frequency_hz
  // state
  rosidl_runtime_c__String__fini(&msg->state);
  // public_node_data
  ros_bt_py_interfaces__msg__NodeDataLocation__Sequence__fini(&msg->public_node_data);
}

bool
ros_bt_py_interfaces__msg__Tree__are_equal(const ros_bt_py_interfaces__msg__Tree * lhs, const ros_bt_py_interfaces__msg__Tree * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // path
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->path), &(rhs->path)))
  {
    return false;
  }
  // root_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->root_name), &(rhs->root_name)))
  {
    return false;
  }
  // nodes
  if (!ros_bt_py_interfaces__msg__Node__Sequence__are_equal(
      &(lhs->nodes), &(rhs->nodes)))
  {
    return false;
  }
  // data_wirings
  if (!ros_bt_py_interfaces__msg__NodeDataWiring__Sequence__are_equal(
      &(lhs->data_wirings), &(rhs->data_wirings)))
  {
    return false;
  }
  // tick_frequency_hz
  if (lhs->tick_frequency_hz != rhs->tick_frequency_hz) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // public_node_data
  if (!ros_bt_py_interfaces__msg__NodeDataLocation__Sequence__are_equal(
      &(lhs->public_node_data), &(rhs->public_node_data)))
  {
    return false;
  }
  return true;
}

bool
ros_bt_py_interfaces__msg__Tree__copy(
  const ros_bt_py_interfaces__msg__Tree * input,
  ros_bt_py_interfaces__msg__Tree * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // path
  if (!rosidl_runtime_c__String__copy(
      &(input->path), &(output->path)))
  {
    return false;
  }
  // root_name
  if (!rosidl_runtime_c__String__copy(
      &(input->root_name), &(output->root_name)))
  {
    return false;
  }
  // nodes
  if (!ros_bt_py_interfaces__msg__Node__Sequence__copy(
      &(input->nodes), &(output->nodes)))
  {
    return false;
  }
  // data_wirings
  if (!ros_bt_py_interfaces__msg__NodeDataWiring__Sequence__copy(
      &(input->data_wirings), &(output->data_wirings)))
  {
    return false;
  }
  // tick_frequency_hz
  output->tick_frequency_hz = input->tick_frequency_hz;
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // public_node_data
  if (!ros_bt_py_interfaces__msg__NodeDataLocation__Sequence__copy(
      &(input->public_node_data), &(output->public_node_data)))
  {
    return false;
  }
  return true;
}

ros_bt_py_interfaces__msg__Tree *
ros_bt_py_interfaces__msg__Tree__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_bt_py_interfaces__msg__Tree * msg = (ros_bt_py_interfaces__msg__Tree *)allocator.allocate(sizeof(ros_bt_py_interfaces__msg__Tree), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_bt_py_interfaces__msg__Tree));
  bool success = ros_bt_py_interfaces__msg__Tree__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_bt_py_interfaces__msg__Tree__destroy(ros_bt_py_interfaces__msg__Tree * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_bt_py_interfaces__msg__Tree__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_bt_py_interfaces__msg__Tree__Sequence__init(ros_bt_py_interfaces__msg__Tree__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_bt_py_interfaces__msg__Tree * data = NULL;

  if (size) {
    data = (ros_bt_py_interfaces__msg__Tree *)allocator.zero_allocate(size, sizeof(ros_bt_py_interfaces__msg__Tree), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_bt_py_interfaces__msg__Tree__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_bt_py_interfaces__msg__Tree__fini(&data[i - 1]);
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
ros_bt_py_interfaces__msg__Tree__Sequence__fini(ros_bt_py_interfaces__msg__Tree__Sequence * array)
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
      ros_bt_py_interfaces__msg__Tree__fini(&array->data[i]);
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

ros_bt_py_interfaces__msg__Tree__Sequence *
ros_bt_py_interfaces__msg__Tree__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_bt_py_interfaces__msg__Tree__Sequence * array = (ros_bt_py_interfaces__msg__Tree__Sequence *)allocator.allocate(sizeof(ros_bt_py_interfaces__msg__Tree__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_bt_py_interfaces__msg__Tree__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_bt_py_interfaces__msg__Tree__Sequence__destroy(ros_bt_py_interfaces__msg__Tree__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_bt_py_interfaces__msg__Tree__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_bt_py_interfaces__msg__Tree__Sequence__are_equal(const ros_bt_py_interfaces__msg__Tree__Sequence * lhs, const ros_bt_py_interfaces__msg__Tree__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_bt_py_interfaces__msg__Tree__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_bt_py_interfaces__msg__Tree__Sequence__copy(
  const ros_bt_py_interfaces__msg__Tree__Sequence * input,
  ros_bt_py_interfaces__msg__Tree__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_bt_py_interfaces__msg__Tree);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_bt_py_interfaces__msg__Tree * data =
      (ros_bt_py_interfaces__msg__Tree *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_bt_py_interfaces__msg__Tree__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_bt_py_interfaces__msg__Tree__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_bt_py_interfaces__msg__Tree__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
