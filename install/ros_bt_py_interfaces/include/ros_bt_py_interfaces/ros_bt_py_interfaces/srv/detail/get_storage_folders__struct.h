// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_bt_py_interfaces:srv/GetStorageFolders.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_STORAGE_FOLDERS__STRUCT_H_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_STORAGE_FOLDERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetStorageFolders in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__GetStorageFolders_Request
{
  uint8_t structure_needs_at_least_one_member;
} ros_bt_py_interfaces__srv__GetStorageFolders_Request;

// Struct for a sequence of ros_bt_py_interfaces__srv__GetStorageFolders_Request.
typedef struct ros_bt_py_interfaces__srv__GetStorageFolders_Request__Sequence
{
  ros_bt_py_interfaces__srv__GetStorageFolders_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__GetStorageFolders_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'storage_folders'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetStorageFolders in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__GetStorageFolders_Response
{
  rosidl_runtime_c__String__Sequence storage_folders;
} ros_bt_py_interfaces__srv__GetStorageFolders_Response;

// Struct for a sequence of ros_bt_py_interfaces__srv__GetStorageFolders_Response.
typedef struct ros_bt_py_interfaces__srv__GetStorageFolders_Response__Sequence
{
  ros_bt_py_interfaces__srv__GetStorageFolders_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__GetStorageFolders_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_STORAGE_FOLDERS__STRUCT_H_
