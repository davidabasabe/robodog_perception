// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_bt_py_interfaces:srv/ReplaceNode.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__REPLACE_NODE__STRUCT_H_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__REPLACE_NODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'old_node_name'
// Member 'new_node_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ReplaceNode in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__ReplaceNode_Request
{
  rosidl_runtime_c__String old_node_name;
  rosidl_runtime_c__String new_node_name;
} ros_bt_py_interfaces__srv__ReplaceNode_Request;

// Struct for a sequence of ros_bt_py_interfaces__srv__ReplaceNode_Request.
typedef struct ros_bt_py_interfaces__srv__ReplaceNode_Request__Sequence
{
  ros_bt_py_interfaces__srv__ReplaceNode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__ReplaceNode_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ReplaceNode in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__ReplaceNode_Response
{
  bool success;
  rosidl_runtime_c__String error_message;
} ros_bt_py_interfaces__srv__ReplaceNode_Response;

// Struct for a sequence of ros_bt_py_interfaces__srv__ReplaceNode_Response.
typedef struct ros_bt_py_interfaces__srv__ReplaceNode_Response__Sequence
{
  ros_bt_py_interfaces__srv__ReplaceNode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__ReplaceNode_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__REPLACE_NODE__STRUCT_H_
