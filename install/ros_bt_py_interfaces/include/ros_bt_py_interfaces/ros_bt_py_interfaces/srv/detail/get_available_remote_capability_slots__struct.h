// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_bt_py_interfaces:srv/GetAvailableRemoteCapabilitySlots.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_AVAILABLE_REMOTE_CAPABILITY_SLOTS__STRUCT_H_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_AVAILABLE_REMOTE_CAPABILITY_SLOTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetAvailableRemoteCapabilitySlots in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__GetAvailableRemoteCapabilitySlots_Request
{
  uint8_t structure_needs_at_least_one_member;
} ros_bt_py_interfaces__srv__GetAvailableRemoteCapabilitySlots_Request;

// Struct for a sequence of ros_bt_py_interfaces__srv__GetAvailableRemoteCapabilitySlots_Request.
typedef struct ros_bt_py_interfaces__srv__GetAvailableRemoteCapabilitySlots_Request__Sequence
{
  ros_bt_py_interfaces__srv__GetAvailableRemoteCapabilitySlots_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__GetAvailableRemoteCapabilitySlots_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/GetAvailableRemoteCapabilitySlots in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__GetAvailableRemoteCapabilitySlots_Response
{
  int64_t available_remote_capability_slots;
} ros_bt_py_interfaces__srv__GetAvailableRemoteCapabilitySlots_Response;

// Struct for a sequence of ros_bt_py_interfaces__srv__GetAvailableRemoteCapabilitySlots_Response.
typedef struct ros_bt_py_interfaces__srv__GetAvailableRemoteCapabilitySlots_Response__Sequence
{
  ros_bt_py_interfaces__srv__GetAvailableRemoteCapabilitySlots_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__GetAvailableRemoteCapabilitySlots_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_AVAILABLE_REMOTE_CAPABILITY_SLOTS__STRUCT_H_
