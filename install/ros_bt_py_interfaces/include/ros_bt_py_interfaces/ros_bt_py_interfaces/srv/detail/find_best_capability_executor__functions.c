// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_bt_py_interfaces:srv/FindBestCapabilityExecutor.idl
// generated code does not contain a copyright notice
#include "ros_bt_py_interfaces/srv/detail/find_best_capability_executor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `capability`
#include "ros_bt_py_interfaces/msg/detail/capability_interface__functions.h"
// Member `node_id`
// Member `mission_control_name`
// Member `implementation_tags_dict`
#include "rosidl_runtime_c/string_functions.h"

bool
ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__init(ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request * msg)
{
  if (!msg) {
    return false;
  }
  // capability
  if (!ros_bt_py_interfaces__msg__CapabilityInterface__init(&msg->capability)) {
    ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__fini(msg);
    return false;
  }
  // node_id
  if (!rosidl_runtime_c__String__init(&msg->node_id)) {
    ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__fini(msg);
    return false;
  }
  // mission_control_name
  if (!rosidl_runtime_c__String__init(&msg->mission_control_name)) {
    ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__fini(msg);
    return false;
  }
  // implementation_tags_dict
  if (!rosidl_runtime_c__String__init(&msg->implementation_tags_dict)) {
    ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__fini(msg);
    return false;
  }
  return true;
}

void
ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__fini(ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request * msg)
{
  if (!msg) {
    return;
  }
  // capability
  ros_bt_py_interfaces__msg__CapabilityInterface__fini(&msg->capability);
  // node_id
  rosidl_runtime_c__String__fini(&msg->node_id);
  // mission_control_name
  rosidl_runtime_c__String__fini(&msg->mission_control_name);
  // implementation_tags_dict
  rosidl_runtime_c__String__fini(&msg->implementation_tags_dict);
}

bool
ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__are_equal(const ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request * lhs, const ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // capability
  if (!ros_bt_py_interfaces__msg__CapabilityInterface__are_equal(
      &(lhs->capability), &(rhs->capability)))
  {
    return false;
  }
  // node_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->node_id), &(rhs->node_id)))
  {
    return false;
  }
  // mission_control_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mission_control_name), &(rhs->mission_control_name)))
  {
    return false;
  }
  // implementation_tags_dict
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->implementation_tags_dict), &(rhs->implementation_tags_dict)))
  {
    return false;
  }
  return true;
}

bool
ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__copy(
  const ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request * input,
  ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // capability
  if (!ros_bt_py_interfaces__msg__CapabilityInterface__copy(
      &(input->capability), &(output->capability)))
  {
    return false;
  }
  // node_id
  if (!rosidl_runtime_c__String__copy(
      &(input->node_id), &(output->node_id)))
  {
    return false;
  }
  // mission_control_name
  if (!rosidl_runtime_c__String__copy(
      &(input->mission_control_name), &(output->mission_control_name)))
  {
    return false;
  }
  // implementation_tags_dict
  if (!rosidl_runtime_c__String__copy(
      &(input->implementation_tags_dict), &(output->implementation_tags_dict)))
  {
    return false;
  }
  return true;
}

ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request *
ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request * msg = (ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request *)allocator.allocate(sizeof(ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request));
  bool success = ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__destroy(ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__Sequence__init(ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request * data = NULL;

  if (size) {
    data = (ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request *)allocator.zero_allocate(size, sizeof(ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__fini(&data[i - 1]);
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
ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__Sequence__fini(ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__Sequence * array)
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
      ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__fini(&array->data[i]);
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

ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__Sequence *
ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__Sequence * array = (ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__Sequence *)allocator.allocate(sizeof(ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__Sequence__destroy(ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__Sequence__are_equal(const ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__Sequence * lhs, const ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__Sequence__copy(
  const ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__Sequence * input,
  ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request * data =
      (ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `error_message`
// Member `executor_mission_control_topic`
// Member `implementation_name`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__init(ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // error_message
  if (!rosidl_runtime_c__String__init(&msg->error_message)) {
    ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__fini(msg);
    return false;
  }
  // execute_local
  // executor_mission_control_topic
  if (!rosidl_runtime_c__String__init(&msg->executor_mission_control_topic)) {
    ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__fini(msg);
    return false;
  }
  // implementation_name
  if (!rosidl_runtime_c__String__init(&msg->implementation_name)) {
    ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__fini(msg);
    return false;
  }
  // max_allowed_costs
  return true;
}

void
ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__fini(ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // error_message
  rosidl_runtime_c__String__fini(&msg->error_message);
  // execute_local
  // executor_mission_control_topic
  rosidl_runtime_c__String__fini(&msg->executor_mission_control_topic);
  // implementation_name
  rosidl_runtime_c__String__fini(&msg->implementation_name);
  // max_allowed_costs
}

bool
ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__are_equal(const ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response * lhs, const ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // error_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_message), &(rhs->error_message)))
  {
    return false;
  }
  // execute_local
  if (lhs->execute_local != rhs->execute_local) {
    return false;
  }
  // executor_mission_control_topic
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->executor_mission_control_topic), &(rhs->executor_mission_control_topic)))
  {
    return false;
  }
  // implementation_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->implementation_name), &(rhs->implementation_name)))
  {
    return false;
  }
  // max_allowed_costs
  if (lhs->max_allowed_costs != rhs->max_allowed_costs) {
    return false;
  }
  return true;
}

bool
ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__copy(
  const ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response * input,
  ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // error_message
  if (!rosidl_runtime_c__String__copy(
      &(input->error_message), &(output->error_message)))
  {
    return false;
  }
  // execute_local
  output->execute_local = input->execute_local;
  // executor_mission_control_topic
  if (!rosidl_runtime_c__String__copy(
      &(input->executor_mission_control_topic), &(output->executor_mission_control_topic)))
  {
    return false;
  }
  // implementation_name
  if (!rosidl_runtime_c__String__copy(
      &(input->implementation_name), &(output->implementation_name)))
  {
    return false;
  }
  // max_allowed_costs
  output->max_allowed_costs = input->max_allowed_costs;
  return true;
}

ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response *
ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response * msg = (ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response *)allocator.allocate(sizeof(ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response));
  bool success = ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__destroy(ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__Sequence__init(ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response * data = NULL;

  if (size) {
    data = (ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response *)allocator.zero_allocate(size, sizeof(ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__fini(&data[i - 1]);
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
ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__Sequence__fini(ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__Sequence * array)
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
      ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__fini(&array->data[i]);
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

ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__Sequence *
ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__Sequence * array = (ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__Sequence *)allocator.allocate(sizeof(ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__Sequence__destroy(ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__Sequence__are_equal(const ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__Sequence * lhs, const ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__Sequence__copy(
  const ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__Sequence * input,
  ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response * data =
      (ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
