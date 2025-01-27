// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_bt_py_interfaces:srv/SetOptions.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__SET_OPTIONS__STRUCT_H_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__SET_OPTIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'node_name'
// Member 'new_name'
#include "rosidl_runtime_c/string.h"
// Member 'options'
#include "ros_bt_py_interfaces/msg/detail/node_data__struct.h"

/// Struct defined in srv/SetOptions in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__SetOptions_Request
{
  rosidl_runtime_c__String node_name;
  bool rename_node;
  rosidl_runtime_c__String new_name;
  ros_bt_py_interfaces__msg__NodeData__Sequence options;
} ros_bt_py_interfaces__srv__SetOptions_Request;

// Struct for a sequence of ros_bt_py_interfaces__srv__SetOptions_Request.
typedef struct ros_bt_py_interfaces__srv__SetOptions_Request__Sequence
{
  ros_bt_py_interfaces__srv__SetOptions_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__SetOptions_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetOptions in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__SetOptions_Response
{
  bool success;
  rosidl_runtime_c__String error_message;
} ros_bt_py_interfaces__srv__SetOptions_Response;

// Struct for a sequence of ros_bt_py_interfaces__srv__SetOptions_Response.
typedef struct ros_bt_py_interfaces__srv__SetOptions_Response__Sequence
{
  ros_bt_py_interfaces__srv__SetOptions_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__SetOptions_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__SET_OPTIONS__STRUCT_H_
