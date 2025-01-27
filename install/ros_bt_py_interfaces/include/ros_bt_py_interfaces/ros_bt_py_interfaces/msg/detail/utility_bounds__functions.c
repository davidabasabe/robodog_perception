// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_bt_py_interfaces:msg/UtilityBounds.idl
// generated code does not contain a copyright notice
#include "ros_bt_py_interfaces/msg/detail/utility_bounds__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ros_bt_py_interfaces__msg__UtilityBounds__init(ros_bt_py_interfaces__msg__UtilityBounds * msg)
{
  if (!msg) {
    return false;
  }
  // can_execute
  // has_upper_bound_success
  // upper_bound_success
  // has_lower_bound_success
  // lower_bound_success
  // has_upper_bound_failure
  // upper_bound_failure
  // has_lower_bound_failure
  // lower_bound_failure
  return true;
}

void
ros_bt_py_interfaces__msg__UtilityBounds__fini(ros_bt_py_interfaces__msg__UtilityBounds * msg)
{
  if (!msg) {
    return;
  }
  // can_execute
  // has_upper_bound_success
  // upper_bound_success
  // has_lower_bound_success
  // lower_bound_success
  // has_upper_bound_failure
  // upper_bound_failure
  // has_lower_bound_failure
  // lower_bound_failure
}

bool
ros_bt_py_interfaces__msg__UtilityBounds__are_equal(const ros_bt_py_interfaces__msg__UtilityBounds * lhs, const ros_bt_py_interfaces__msg__UtilityBounds * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // can_execute
  if (lhs->can_execute != rhs->can_execute) {
    return false;
  }
  // has_upper_bound_success
  if (lhs->has_upper_bound_success != rhs->has_upper_bound_success) {
    return false;
  }
  // upper_bound_success
  if (lhs->upper_bound_success != rhs->upper_bound_success) {
    return false;
  }
  // has_lower_bound_success
  if (lhs->has_lower_bound_success != rhs->has_lower_bound_success) {
    return false;
  }
  // lower_bound_success
  if (lhs->lower_bound_success != rhs->lower_bound_success) {
    return false;
  }
  // has_upper_bound_failure
  if (lhs->has_upper_bound_failure != rhs->has_upper_bound_failure) {
    return false;
  }
  // upper_bound_failure
  if (lhs->upper_bound_failure != rhs->upper_bound_failure) {
    return false;
  }
  // has_lower_bound_failure
  if (lhs->has_lower_bound_failure != rhs->has_lower_bound_failure) {
    return false;
  }
  // lower_bound_failure
  if (lhs->lower_bound_failure != rhs->lower_bound_failure) {
    return false;
  }
  return true;
}

bool
ros_bt_py_interfaces__msg__UtilityBounds__copy(
  const ros_bt_py_interfaces__msg__UtilityBounds * input,
  ros_bt_py_interfaces__msg__UtilityBounds * output)
{
  if (!input || !output) {
    return false;
  }
  // can_execute
  output->can_execute = input->can_execute;
  // has_upper_bound_success
  output->has_upper_bound_success = input->has_upper_bound_success;
  // upper_bound_success
  output->upper_bound_success = input->upper_bound_success;
  // has_lower_bound_success
  output->has_lower_bound_success = input->has_lower_bound_success;
  // lower_bound_success
  output->lower_bound_success = input->lower_bound_success;
  // has_upper_bound_failure
  output->has_upper_bound_failure = input->has_upper_bound_failure;
  // upper_bound_failure
  output->upper_bound_failure = input->upper_bound_failure;
  // has_lower_bound_failure
  output->has_lower_bound_failure = input->has_lower_bound_failure;
  // lower_bound_failure
  output->lower_bound_failure = input->lower_bound_failure;
  return true;
}

ros_bt_py_interfaces__msg__UtilityBounds *
ros_bt_py_interfaces__msg__UtilityBounds__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_bt_py_interfaces__msg__UtilityBounds * msg = (ros_bt_py_interfaces__msg__UtilityBounds *)allocator.allocate(sizeof(ros_bt_py_interfaces__msg__UtilityBounds), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_bt_py_interfaces__msg__UtilityBounds));
  bool success = ros_bt_py_interfaces__msg__UtilityBounds__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_bt_py_interfaces__msg__UtilityBounds__destroy(ros_bt_py_interfaces__msg__UtilityBounds * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_bt_py_interfaces__msg__UtilityBounds__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_bt_py_interfaces__msg__UtilityBounds__Sequence__init(ros_bt_py_interfaces__msg__UtilityBounds__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_bt_py_interfaces__msg__UtilityBounds * data = NULL;

  if (size) {
    data = (ros_bt_py_interfaces__msg__UtilityBounds *)allocator.zero_allocate(size, sizeof(ros_bt_py_interfaces__msg__UtilityBounds), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_bt_py_interfaces__msg__UtilityBounds__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_bt_py_interfaces__msg__UtilityBounds__fini(&data[i - 1]);
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
ros_bt_py_interfaces__msg__UtilityBounds__Sequence__fini(ros_bt_py_interfaces__msg__UtilityBounds__Sequence * array)
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
      ros_bt_py_interfaces__msg__UtilityBounds__fini(&array->data[i]);
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

ros_bt_py_interfaces__msg__UtilityBounds__Sequence *
ros_bt_py_interfaces__msg__UtilityBounds__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_bt_py_interfaces__msg__UtilityBounds__Sequence * array = (ros_bt_py_interfaces__msg__UtilityBounds__Sequence *)allocator.allocate(sizeof(ros_bt_py_interfaces__msg__UtilityBounds__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_bt_py_interfaces__msg__UtilityBounds__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_bt_py_interfaces__msg__UtilityBounds__Sequence__destroy(ros_bt_py_interfaces__msg__UtilityBounds__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_bt_py_interfaces__msg__UtilityBounds__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_bt_py_interfaces__msg__UtilityBounds__Sequence__are_equal(const ros_bt_py_interfaces__msg__UtilityBounds__Sequence * lhs, const ros_bt_py_interfaces__msg__UtilityBounds__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_bt_py_interfaces__msg__UtilityBounds__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_bt_py_interfaces__msg__UtilityBounds__Sequence__copy(
  const ros_bt_py_interfaces__msg__UtilityBounds__Sequence * input,
  ros_bt_py_interfaces__msg__UtilityBounds__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_bt_py_interfaces__msg__UtilityBounds);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_bt_py_interfaces__msg__UtilityBounds * data =
      (ros_bt_py_interfaces__msg__UtilityBounds *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_bt_py_interfaces__msg__UtilityBounds__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_bt_py_interfaces__msg__UtilityBounds__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_bt_py_interfaces__msg__UtilityBounds__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
