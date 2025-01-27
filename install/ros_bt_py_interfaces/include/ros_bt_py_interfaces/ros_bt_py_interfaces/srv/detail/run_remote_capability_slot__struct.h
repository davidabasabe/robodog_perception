// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_bt_py_interfaces:srv/RunRemoteCapabilitySlot.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__RUN_REMOTE_CAPABILITY_SLOT__STRUCT_H_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__RUN_REMOTE_CAPABILITY_SLOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'interface'
#include "ros_bt_py_interfaces/msg/detail/capability_interface__struct.h"
// Member 'implementation_tree'
#include "ros_bt_py_interfaces/msg/detail/tree__struct.h"
// Member 'node_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/RunRemoteCapabilitySlot in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__RunRemoteCapabilitySlot_Request
{
  ros_bt_py_interfaces__msg__CapabilityInterface interface;
  ros_bt_py_interfaces__msg__Tree implementation_tree;
  rosidl_runtime_c__String node_id;
} ros_bt_py_interfaces__srv__RunRemoteCapabilitySlot_Request;

// Struct for a sequence of ros_bt_py_interfaces__srv__RunRemoteCapabilitySlot_Request.
typedef struct ros_bt_py_interfaces__srv__RunRemoteCapabilitySlot_Request__Sequence
{
  ros_bt_py_interfaces__srv__RunRemoteCapabilitySlot_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__RunRemoteCapabilitySlot_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/RunRemoteCapabilitySlot in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__RunRemoteCapabilitySlot_Response
{
  bool success;
  rosidl_runtime_c__String error_message;
} ros_bt_py_interfaces__srv__RunRemoteCapabilitySlot_Response;

// Struct for a sequence of ros_bt_py_interfaces__srv__RunRemoteCapabilitySlot_Response.
typedef struct ros_bt_py_interfaces__srv__RunRemoteCapabilitySlot_Response__Sequence
{
  ros_bt_py_interfaces__srv__RunRemoteCapabilitySlot_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__RunRemoteCapabilitySlot_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__RUN_REMOTE_CAPABILITY_SLOT__STRUCT_H_
