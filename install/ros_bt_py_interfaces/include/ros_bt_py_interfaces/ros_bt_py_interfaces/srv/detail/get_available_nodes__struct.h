// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_bt_py_interfaces:srv/GetAvailableNodes.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_AVAILABLE_NODES__STRUCT_H_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_AVAILABLE_NODES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'node_modules'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetAvailableNodes in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__GetAvailableNodes_Request
{
  rosidl_runtime_c__String__Sequence node_modules;
} ros_bt_py_interfaces__srv__GetAvailableNodes_Request;

// Struct for a sequence of ros_bt_py_interfaces__srv__GetAvailableNodes_Request.
typedef struct ros_bt_py_interfaces__srv__GetAvailableNodes_Request__Sequence
{
  ros_bt_py_interfaces__srv__GetAvailableNodes_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__GetAvailableNodes_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'available_nodes'
#include "ros_bt_py_interfaces/msg/detail/documented_node__struct.h"
// Member 'error_message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetAvailableNodes in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__GetAvailableNodes_Response
{
  ros_bt_py_interfaces__msg__DocumentedNode__Sequence available_nodes;
  bool success;
  rosidl_runtime_c__String error_message;
} ros_bt_py_interfaces__srv__GetAvailableNodes_Response;

// Struct for a sequence of ros_bt_py_interfaces__srv__GetAvailableNodes_Response.
typedef struct ros_bt_py_interfaces__srv__GetAvailableNodes_Response__Sequence
{
  ros_bt_py_interfaces__srv__GetAvailableNodes_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__GetAvailableNodes_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_AVAILABLE_NODES__STRUCT_H_
