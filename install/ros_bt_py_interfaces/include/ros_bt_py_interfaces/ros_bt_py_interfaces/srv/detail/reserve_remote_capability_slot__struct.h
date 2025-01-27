// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_bt_py_interfaces:srv/ReserveRemoteCapabilitySlot.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__RESERVE_REMOTE_CAPABILITY_SLOT__STRUCT_H_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__RESERVE_REMOTE_CAPABILITY_SLOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'remote_mission_control'
// Member 'implementation_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ReserveRemoteCapabilitySlot in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__ReserveRemoteCapabilitySlot_Request
{
  rosidl_runtime_c__String remote_mission_control;
  rosidl_runtime_c__String implementation_name;
  double reauction_threshold;
} ros_bt_py_interfaces__srv__ReserveRemoteCapabilitySlot_Request;

// Struct for a sequence of ros_bt_py_interfaces__srv__ReserveRemoteCapabilitySlot_Request.
typedef struct ros_bt_py_interfaces__srv__ReserveRemoteCapabilitySlot_Request__Sequence
{
  ros_bt_py_interfaces__srv__ReserveRemoteCapabilitySlot_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__ReserveRemoteCapabilitySlot_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ReserveRemoteCapabilitySlot in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__ReserveRemoteCapabilitySlot_Response
{
  bool success;
  rosidl_runtime_c__String error;
} ros_bt_py_interfaces__srv__ReserveRemoteCapabilitySlot_Response;

// Struct for a sequence of ros_bt_py_interfaces__srv__ReserveRemoteCapabilitySlot_Response.
typedef struct ros_bt_py_interfaces__srv__ReserveRemoteCapabilitySlot_Response__Sequence
{
  ros_bt_py_interfaces__srv__ReserveRemoteCapabilitySlot_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__ReserveRemoteCapabilitySlot_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__RESERVE_REMOTE_CAPABILITY_SLOT__STRUCT_H_
