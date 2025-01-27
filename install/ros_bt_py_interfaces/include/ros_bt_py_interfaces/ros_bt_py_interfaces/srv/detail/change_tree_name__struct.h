// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_bt_py_interfaces:srv/ChangeTreeName.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__CHANGE_TREE_NAME__STRUCT_H_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__CHANGE_TREE_NAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ChangeTreeName in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__ChangeTreeName_Request
{
  rosidl_runtime_c__String name;
} ros_bt_py_interfaces__srv__ChangeTreeName_Request;

// Struct for a sequence of ros_bt_py_interfaces__srv__ChangeTreeName_Request.
typedef struct ros_bt_py_interfaces__srv__ChangeTreeName_Request__Sequence
{
  ros_bt_py_interfaces__srv__ChangeTreeName_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__ChangeTreeName_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ChangeTreeName in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__ChangeTreeName_Response
{
  bool success;
  rosidl_runtime_c__String error_message;
} ros_bt_py_interfaces__srv__ChangeTreeName_Response;

// Struct for a sequence of ros_bt_py_interfaces__srv__ChangeTreeName_Response.
typedef struct ros_bt_py_interfaces__srv__ChangeTreeName_Response__Sequence
{
  ros_bt_py_interfaces__srv__ChangeTreeName_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__ChangeTreeName_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__CHANGE_TREE_NAME__STRUCT_H_
