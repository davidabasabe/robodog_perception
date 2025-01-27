// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_bt_py_interfaces:srv/LoadTree.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__LOAD_TREE__STRUCT_H_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__LOAD_TREE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'tree'
#include "ros_bt_py_interfaces/msg/detail/tree__struct.h"

/// Struct defined in srv/LoadTree in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__LoadTree_Request
{
  ros_bt_py_interfaces__msg__Tree tree;
  bool permissive;
} ros_bt_py_interfaces__srv__LoadTree_Request;

// Struct for a sequence of ros_bt_py_interfaces__srv__LoadTree_Request.
typedef struct ros_bt_py_interfaces__srv__LoadTree_Request__Sequence
{
  ros_bt_py_interfaces__srv__LoadTree_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__LoadTree_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LoadTree in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__LoadTree_Response
{
  bool success;
  rosidl_runtime_c__String error_message;
} ros_bt_py_interfaces__srv__LoadTree_Response;

// Struct for a sequence of ros_bt_py_interfaces__srv__LoadTree_Response.
typedef struct ros_bt_py_interfaces__srv__LoadTree_Response__Sequence
{
  ros_bt_py_interfaces__srv__LoadTree_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__LoadTree_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__LOAD_TREE__STRUCT_H_
