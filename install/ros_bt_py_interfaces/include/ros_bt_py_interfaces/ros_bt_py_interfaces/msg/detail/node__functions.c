// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_bt_py_interfaces:msg/Node.idl
// generated code does not contain a copyright notice
#include "ros_bt_py_interfaces/msg/detail/node__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `module`
// Member `node_class`
// Member `version`
// Member `name`
// Member `child_names`
// Member `state`
#include "rosidl_runtime_c/string_functions.h"
// Member `options`
// Member `inputs`
// Member `outputs`
#include "ros_bt_py_interfaces/msg/detail/node_data__functions.h"

bool
ros_bt_py_interfaces__msg__Node__init(ros_bt_py_interfaces__msg__Node * msg)
{
  if (!msg) {
    return false;
  }
  // module
  if (!rosidl_runtime_c__String__init(&msg->module)) {
    ros_bt_py_interfaces__msg__Node__fini(msg);
    return false;
  }
  // node_class
  if (!rosidl_runtime_c__String__init(&msg->node_class)) {
    ros_bt_py_interfaces__msg__Node__fini(msg);
    return false;
  }
  // version
  if (!rosidl_runtime_c__String__init(&msg->version)) {
    ros_bt_py_interfaces__msg__Node__fini(msg);
    return false;
  }
  // max_children
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    ros_bt_py_interfaces__msg__Node__fini(msg);
    return false;
  }
  // child_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->child_names, 0)) {
    ros_bt_py_interfaces__msg__Node__fini(msg);
    return false;
  }
  // options
  if (!ros_bt_py_interfaces__msg__NodeData__Sequence__init(&msg->options, 0)) {
    ros_bt_py_interfaces__msg__Node__fini(msg);
    return false;
  }
  // inputs
  if (!ros_bt_py_interfaces__msg__NodeData__Sequence__init(&msg->inputs, 0)) {
    ros_bt_py_interfaces__msg__Node__fini(msg);
    return false;
  }
  // outputs
  if (!ros_bt_py_interfaces__msg__NodeData__Sequence__init(&msg->outputs, 0)) {
    ros_bt_py_interfaces__msg__Node__fini(msg);
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    ros_bt_py_interfaces__msg__Node__fini(msg);
    return false;
  }
  return true;
}

void
ros_bt_py_interfaces__msg__Node__fini(ros_bt_py_interfaces__msg__Node * msg)
{
  if (!msg) {
    return;
  }
  // module
  rosidl_runtime_c__String__fini(&msg->module);
  // node_class
  rosidl_runtime_c__String__fini(&msg->node_class);
  // version
  rosidl_runtime_c__String__fini(&msg->version);
  // max_children
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // child_names
  rosidl_runtime_c__String__Sequence__fini(&msg->child_names);
  // options
  ros_bt_py_interfaces__msg__NodeData__Sequence__fini(&msg->options);
  // inputs
  ros_bt_py_interfaces__msg__NodeData__Sequence__fini(&msg->inputs);
  // outputs
  ros_bt_py_interfaces__msg__NodeData__Sequence__fini(&msg->outputs);
  // state
  rosidl_runtime_c__String__fini(&msg->state);
}

bool
ros_bt_py_interfaces__msg__Node__are_equal(const ros_bt_py_interfaces__msg__Node * lhs, const ros_bt_py_interfaces__msg__Node * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // module
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->module), &(rhs->module)))
  {
    return false;
  }
  // node_class
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->node_class), &(rhs->node_class)))
  {
    return false;
  }
  // version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->version), &(rhs->version)))
  {
    return false;
  }
  // max_children
  if (lhs->max_children != rhs->max_children) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // child_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->child_names), &(rhs->child_names)))
  {
    return false;
  }
  // options
  if (!ros_bt_py_interfaces__msg__NodeData__Sequence__are_equal(
      &(lhs->options), &(rhs->options)))
  {
    return false;
  }
  // inputs
  if (!ros_bt_py_interfaces__msg__NodeData__Sequence__are_equal(
      &(lhs->inputs), &(rhs->inputs)))
  {
    return false;
  }
  // outputs
  if (!ros_bt_py_interfaces__msg__NodeData__Sequence__are_equal(
      &(lhs->outputs), &(rhs->outputs)))
  {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  return true;
}

bool
ros_bt_py_interfaces__msg__Node__copy(
  const ros_bt_py_interfaces__msg__Node * input,
  ros_bt_py_interfaces__msg__Node * output)
{
  if (!input || !output) {
    return false;
  }
  // module
  if (!rosidl_runtime_c__String__copy(
      &(input->module), &(output->module)))
  {
    return false;
  }
  // node_class
  if (!rosidl_runtime_c__String__copy(
      &(input->node_class), &(output->node_class)))
  {
    return false;
  }
  // version
  if (!rosidl_runtime_c__String__copy(
      &(input->version), &(output->version)))
  {
    return false;
  }
  // max_children
  output->max_children = input->max_children;
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // child_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->child_names), &(output->child_names)))
  {
    return false;
  }
  // options
  if (!ros_bt_py_interfaces__msg__NodeData__Sequence__copy(
      &(input->options), &(output->options)))
  {
    return false;
  }
  // inputs
  if (!ros_bt_py_interfaces__msg__NodeData__Sequence__copy(
      &(input->inputs), &(output->inputs)))
  {
    return false;
  }
  // outputs
  if (!ros_bt_py_interfaces__msg__NodeData__Sequence__copy(
      &(input->outputs), &(output->outputs)))
  {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  return true;
}

ros_bt_py_interfaces__msg__Node *
ros_bt_py_interfaces__msg__Node__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_bt_py_interfaces__msg__Node * msg = (ros_bt_py_interfaces__msg__Node *)allocator.allocate(sizeof(ros_bt_py_interfaces__msg__Node), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_bt_py_interfaces__msg__Node));
  bool success = ros_bt_py_interfaces__msg__Node__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_bt_py_interfaces__msg__Node__destroy(ros_bt_py_interfaces__msg__Node * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_bt_py_interfaces__msg__Node__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_bt_py_interfaces__msg__Node__Sequence__init(ros_bt_py_interfaces__msg__Node__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_bt_py_interfaces__msg__Node * data = NULL;

  if (size) {
    data = (ros_bt_py_interfaces__msg__Node *)allocator.zero_allocate(size, sizeof(ros_bt_py_interfaces__msg__Node), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_bt_py_interfaces__msg__Node__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_bt_py_interfaces__msg__Node__fini(&data[i - 1]);
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
ros_bt_py_interfaces__msg__Node__Sequence__fini(ros_bt_py_interfaces__msg__Node__Sequence * array)
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
      ros_bt_py_interfaces__msg__Node__fini(&array->data[i]);
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

ros_bt_py_interfaces__msg__Node__Sequence *
ros_bt_py_interfaces__msg__Node__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_bt_py_interfaces__msg__Node__Sequence * array = (ros_bt_py_interfaces__msg__Node__Sequence *)allocator.allocate(sizeof(ros_bt_py_interfaces__msg__Node__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_bt_py_interfaces__msg__Node__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_bt_py_interfaces__msg__Node__Sequence__destroy(ros_bt_py_interfaces__msg__Node__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_bt_py_interfaces__msg__Node__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_bt_py_interfaces__msg__Node__Sequence__are_equal(const ros_bt_py_interfaces__msg__Node__Sequence * lhs, const ros_bt_py_interfaces__msg__Node__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_bt_py_interfaces__msg__Node__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_bt_py_interfaces__msg__Node__Sequence__copy(
  const ros_bt_py_interfaces__msg__Node__Sequence * input,
  ros_bt_py_interfaces__msg__Node__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_bt_py_interfaces__msg__Node);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_bt_py_interfaces__msg__Node * data =
      (ros_bt_py_interfaces__msg__Node *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_bt_py_interfaces__msg__Node__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_bt_py_interfaces__msg__Node__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_bt_py_interfaces__msg__Node__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
