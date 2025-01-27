// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_bt_py_interfaces:srv/SaveTree.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__SAVE_TREE__STRUCT_H_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__SAVE_TREE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'storage_path'
// Member 'filepath'
#include "rosidl_runtime_c/string.h"
// Member 'tree'
#include "ros_bt_py_interfaces/msg/detail/tree__struct.h"

/// Struct defined in srv/SaveTree in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__SaveTree_Request
{
  /// Name of the configured storage path.
  rosidl_runtime_c__String storage_path;
  /// Filepath where to save the tree below the storage path.
  rosidl_runtime_c__String filepath;
  /// Tree to save
  ros_bt_py_interfaces__msg__Tree tree;
  bool allow_overwrite;
  bool allow_rename;
} ros_bt_py_interfaces__srv__SaveTree_Request;

// Struct for a sequence of ros_bt_py_interfaces__srv__SaveTree_Request.
typedef struct ros_bt_py_interfaces__srv__SaveTree_Request__Sequence
{
  ros_bt_py_interfaces__srv__SaveTree_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__SaveTree_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_message'
// Member 'file_path'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SaveTree in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__SaveTree_Response
{
  bool success;
  rosidl_runtime_c__String error_message;
  rosidl_runtime_c__String file_path;
} ros_bt_py_interfaces__srv__SaveTree_Response;

// Struct for a sequence of ros_bt_py_interfaces__srv__SaveTree_Response.
typedef struct ros_bt_py_interfaces__srv__SaveTree_Response__Sequence
{
  ros_bt_py_interfaces__srv__SaveTree_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__SaveTree_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__SAVE_TREE__STRUCT_H_
