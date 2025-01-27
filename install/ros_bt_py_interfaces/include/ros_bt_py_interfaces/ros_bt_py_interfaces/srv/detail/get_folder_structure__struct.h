// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_bt_py_interfaces:srv/GetFolderStructure.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_FOLDER_STRUCTURE__STRUCT_H_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_FOLDER_STRUCTURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'storage_folder'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetFolderStructure in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__GetFolderStructure_Request
{
  rosidl_runtime_c__String storage_folder;
  bool show_hidden;
} ros_bt_py_interfaces__srv__GetFolderStructure_Request;

// Struct for a sequence of ros_bt_py_interfaces__srv__GetFolderStructure_Request.
typedef struct ros_bt_py_interfaces__srv__GetFolderStructure_Request__Sequence
{
  ros_bt_py_interfaces__srv__GetFolderStructure_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__GetFolderStructure_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_message'
// Member 'storage_folder_structure'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetFolderStructure in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__GetFolderStructure_Response
{
  bool success;
  rosidl_runtime_c__String error_message;
  rosidl_runtime_c__String storage_folder_structure;
} ros_bt_py_interfaces__srv__GetFolderStructure_Response;

// Struct for a sequence of ros_bt_py_interfaces__srv__GetFolderStructure_Response.
typedef struct ros_bt_py_interfaces__srv__GetFolderStructure_Response__Sequence
{
  ros_bt_py_interfaces__srv__GetFolderStructure_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__GetFolderStructure_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_FOLDER_STRUCTURE__STRUCT_H_
