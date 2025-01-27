// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_bt_py_interfaces:srv/LoadTreeFromPath.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__LOAD_TREE_FROM_PATH__STRUCT_H_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__LOAD_TREE_FROM_PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'path'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LoadTreeFromPath in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__LoadTreeFromPath_Request
{
  rosidl_runtime_c__String path;
  bool permissive;
} ros_bt_py_interfaces__srv__LoadTreeFromPath_Request;

// Struct for a sequence of ros_bt_py_interfaces__srv__LoadTreeFromPath_Request.
typedef struct ros_bt_py_interfaces__srv__LoadTreeFromPath_Request__Sequence
{
  ros_bt_py_interfaces__srv__LoadTreeFromPath_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__LoadTreeFromPath_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LoadTreeFromPath in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__LoadTreeFromPath_Response
{
  bool success;
  rosidl_runtime_c__String error_message;
} ros_bt_py_interfaces__srv__LoadTreeFromPath_Response;

// Struct for a sequence of ros_bt_py_interfaces__srv__LoadTreeFromPath_Response.
typedef struct ros_bt_py_interfaces__srv__LoadTreeFromPath_Response__Sequence
{
  ros_bt_py_interfaces__srv__LoadTreeFromPath_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__LoadTreeFromPath_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__LOAD_TREE_FROM_PATH__STRUCT_H_
