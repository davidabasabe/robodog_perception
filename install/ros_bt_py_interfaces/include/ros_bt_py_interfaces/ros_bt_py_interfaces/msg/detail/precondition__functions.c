// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_bt_py_interfaces:msg/Precondition.idl
// generated code does not contain a copyright notice
#include "ros_bt_py_interfaces/msg/detail/precondition__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `type`
#include "rosidl_runtime_c/string_functions.h"
// Member `capability`
#include "ros_bt_py_interfaces/msg/detail/capability_interface__functions.h"

bool
ros_bt_py_interfaces__msg__Precondition__init(ros_bt_py_interfaces__msg__Precondition * msg)
{
  if (!msg) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    ros_bt_py_interfaces__msg__Precondition__fini(msg);
    return false;
  }
  // capability
  if (!ros_bt_py_interfaces__msg__CapabilityInterface__init(&msg->capability)) {
    ros_bt_py_interfaces__msg__Precondition__fini(msg);
    return false;
  }
  return true;
}

void
ros_bt_py_interfaces__msg__Precondition__fini(ros_bt_py_interfaces__msg__Precondition * msg)
{
  if (!msg) {
    return;
  }
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // capability
  ros_bt_py_interfaces__msg__CapabilityInterface__fini(&msg->capability);
}

bool
ros_bt_py_interfaces__msg__Precondition__are_equal(const ros_bt_py_interfaces__msg__Precondition * lhs, const ros_bt_py_interfaces__msg__Precondition * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // capability
  if (!ros_bt_py_interfaces__msg__CapabilityInterface__are_equal(
      &(lhs->capability), &(rhs->capability)))
  {
    return false;
  }
  return true;
}

bool
ros_bt_py_interfaces__msg__Precondition__copy(
  const ros_bt_py_interfaces__msg__Precondition * input,
  ros_bt_py_interfaces__msg__Precondition * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // capability
  if (!ros_bt_py_interfaces__msg__CapabilityInterface__copy(
      &(input->capability), &(output->capability)))
  {
    return false;
  }
  return true;
}

ros_bt_py_interfaces__msg__Precondition *
ros_bt_py_interfaces__msg__Precondition__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_bt_py_interfaces__msg__Precondition * msg = (ros_bt_py_interfaces__msg__Precondition *)allocator.allocate(sizeof(ros_bt_py_interfaces__msg__Precondition), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_bt_py_interfaces__msg__Precondition));
  bool success = ros_bt_py_interfaces__msg__Precondition__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_bt_py_interfaces__msg__Precondition__destroy(ros_bt_py_interfaces__msg__Precondition * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_bt_py_interfaces__msg__Precondition__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_bt_py_interfaces__msg__Precondition__Sequence__init(ros_bt_py_interfaces__msg__Precondition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_bt_py_interfaces__msg__Precondition * data = NULL;

  if (size) {
    data = (ros_bt_py_interfaces__msg__Precondition *)allocator.zero_allocate(size, sizeof(ros_bt_py_interfaces__msg__Precondition), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_bt_py_interfaces__msg__Precondition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_bt_py_interfaces__msg__Precondition__fini(&data[i - 1]);
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
ros_bt_py_interfaces__msg__Precondition__Sequence__fini(ros_bt_py_interfaces__msg__Precondition__Sequence * array)
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
      ros_bt_py_interfaces__msg__Precondition__fini(&array->data[i]);
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

ros_bt_py_interfaces__msg__Precondition__Sequence *
ros_bt_py_interfaces__msg__Precondition__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_bt_py_interfaces__msg__Precondition__Sequence * array = (ros_bt_py_interfaces__msg__Precondition__Sequence *)allocator.allocate(sizeof(ros_bt_py_interfaces__msg__Precondition__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_bt_py_interfaces__msg__Precondition__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_bt_py_interfaces__msg__Precondition__Sequence__destroy(ros_bt_py_interfaces__msg__Precondition__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_bt_py_interfaces__msg__Precondition__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_bt_py_interfaces__msg__Precondition__Sequence__are_equal(const ros_bt_py_interfaces__msg__Precondition__Sequence * lhs, const ros_bt_py_interfaces__msg__Precondition__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_bt_py_interfaces__msg__Precondition__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_bt_py_interfaces__msg__Precondition__Sequence__copy(
  const ros_bt_py_interfaces__msg__Precondition__Sequence * input,
  ros_bt_py_interfaces__msg__Precondition__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_bt_py_interfaces__msg__Precondition);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_bt_py_interfaces__msg__Precondition * data =
      (ros_bt_py_interfaces__msg__Precondition *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_bt_py_interfaces__msg__Precondition__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_bt_py_interfaces__msg__Precondition__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_bt_py_interfaces__msg__Precondition__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
