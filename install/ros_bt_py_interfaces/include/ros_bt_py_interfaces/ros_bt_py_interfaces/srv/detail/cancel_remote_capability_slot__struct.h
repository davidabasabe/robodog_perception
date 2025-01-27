// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_bt_py_interfaces:srv/CancelRemoteCapabilitySlot.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__CANCEL_REMOTE_CAPABILITY_SLOT__STRUCT_H_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__CANCEL_REMOTE_CAPABILITY_SLOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/CancelRemoteCapabilitySlot in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__CancelRemoteCapabilitySlot_Request
{
  uint8_t structure_needs_at_least_one_member;
} ros_bt_py_interfaces__srv__CancelRemoteCapabilitySlot_Request;

// Struct for a sequence of ros_bt_py_interfaces__srv__CancelRemoteCapabilitySlot_Request.
typedef struct ros_bt_py_interfaces__srv__CancelRemoteCapabilitySlot_Request__Sequence
{
  ros_bt_py_interfaces__srv__CancelRemoteCapabilitySlot_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__CancelRemoteCapabilitySlot_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CancelRemoteCapabilitySlot in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__CancelRemoteCapabilitySlot_Response
{
  bool success;
  rosidl_runtime_c__String error_message;
} ros_bt_py_interfaces__srv__CancelRemoteCapabilitySlot_Response;

// Struct for a sequence of ros_bt_py_interfaces__srv__CancelRemoteCapabilitySlot_Response.
typedef struct ros_bt_py_interfaces__srv__CancelRemoteCapabilitySlot_Response__Sequence
{
  ros_bt_py_interfaces__srv__CancelRemoteCapabilitySlot_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__CancelRemoteCapabilitySlot_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__CANCEL_REMOTE_CAPABILITY_SLOT__STRUCT_H_
