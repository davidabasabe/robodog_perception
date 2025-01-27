// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_bt_py_interfaces:msg/RemoteSlotState.idl
// generated code does not contain a copyright notice
#include "ros_bt_py_interfaces/msg/detail/remote_slot_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ros_bt_py_interfaces__msg__RemoteSlotState__init(ros_bt_py_interfaces__msg__RemoteSlotState * msg)
{
  if (!msg) {
    return false;
  }
  // tree_in_slot
  // tree_running
  // tree_finished
  return true;
}

void
ros_bt_py_interfaces__msg__RemoteSlotState__fini(ros_bt_py_interfaces__msg__RemoteSlotState * msg)
{
  if (!msg) {
    return;
  }
  // tree_in_slot
  // tree_running
  // tree_finished
}

bool
ros_bt_py_interfaces__msg__RemoteSlotState__are_equal(const ros_bt_py_interfaces__msg__RemoteSlotState * lhs, const ros_bt_py_interfaces__msg__RemoteSlotState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tree_in_slot
  if (lhs->tree_in_slot != rhs->tree_in_slot) {
    return false;
  }
  // tree_running
  if (lhs->tree_running != rhs->tree_running) {
    return false;
  }
  // tree_finished
  if (lhs->tree_finished != rhs->tree_finished) {
    return false;
  }
  return true;
}

bool
ros_bt_py_interfaces__msg__RemoteSlotState__copy(
  const ros_bt_py_interfaces__msg__RemoteSlotState * input,
  ros_bt_py_interfaces__msg__RemoteSlotState * output)
{
  if (!input || !output) {
    return false;
  }
  // tree_in_slot
  output->tree_in_slot = input->tree_in_slot;
  // tree_running
  output->tree_running = input->tree_running;
  // tree_finished
  output->tree_finished = input->tree_finished;
  return true;
}

ros_bt_py_interfaces__msg__RemoteSlotState *
ros_bt_py_interfaces__msg__RemoteSlotState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_bt_py_interfaces__msg__RemoteSlotState * msg = (ros_bt_py_interfaces__msg__RemoteSlotState *)allocator.allocate(sizeof(ros_bt_py_interfaces__msg__RemoteSlotState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_bt_py_interfaces__msg__RemoteSlotState));
  bool success = ros_bt_py_interfaces__msg__RemoteSlotState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_bt_py_interfaces__msg__RemoteSlotState__destroy(ros_bt_py_interfaces__msg__RemoteSlotState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_bt_py_interfaces__msg__RemoteSlotState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_bt_py_interfaces__msg__RemoteSlotState__Sequence__init(ros_bt_py_interfaces__msg__RemoteSlotState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_bt_py_interfaces__msg__RemoteSlotState * data = NULL;

  if (size) {
    data = (ros_bt_py_interfaces__msg__RemoteSlotState *)allocator.zero_allocate(size, sizeof(ros_bt_py_interfaces__msg__RemoteSlotState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_bt_py_interfaces__msg__RemoteSlotState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_bt_py_interfaces__msg__RemoteSlotState__fini(&data[i - 1]);
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
ros_bt_py_interfaces__msg__RemoteSlotState__Sequence__fini(ros_bt_py_interfaces__msg__RemoteSlotState__Sequence * array)
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
      ros_bt_py_interfaces__msg__RemoteSlotState__fini(&array->data[i]);
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

ros_bt_py_interfaces__msg__RemoteSlotState__Sequence *
ros_bt_py_interfaces__msg__RemoteSlotState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_bt_py_interfaces__msg__RemoteSlotState__Sequence * array = (ros_bt_py_interfaces__msg__RemoteSlotState__Sequence *)allocator.allocate(sizeof(ros_bt_py_interfaces__msg__RemoteSlotState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_bt_py_interfaces__msg__RemoteSlotState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_bt_py_interfaces__msg__RemoteSlotState__Sequence__destroy(ros_bt_py_interfaces__msg__RemoteSlotState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_bt_py_interfaces__msg__RemoteSlotState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_bt_py_interfaces__msg__RemoteSlotState__Sequence__are_equal(const ros_bt_py_interfaces__msg__RemoteSlotState__Sequence * lhs, const ros_bt_py_interfaces__msg__RemoteSlotState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_bt_py_interfaces__msg__RemoteSlotState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_bt_py_interfaces__msg__RemoteSlotState__Sequence__copy(
  const ros_bt_py_interfaces__msg__RemoteSlotState__Sequence * input,
  ros_bt_py_interfaces__msg__RemoteSlotState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_bt_py_interfaces__msg__RemoteSlotState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_bt_py_interfaces__msg__RemoteSlotState * data =
      (ros_bt_py_interfaces__msg__RemoteSlotState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_bt_py_interfaces__msg__RemoteSlotState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_bt_py_interfaces__msg__RemoteSlotState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_bt_py_interfaces__msg__RemoteSlotState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
