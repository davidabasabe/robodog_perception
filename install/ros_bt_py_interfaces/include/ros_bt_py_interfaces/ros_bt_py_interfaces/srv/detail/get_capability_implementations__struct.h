// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_bt_py_interfaces:srv/GetCapabilityImplementations.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_CAPABILITY_IMPLEMENTATIONS__STRUCT_H_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_CAPABILITY_IMPLEMENTATIONS__STRUCT_H_

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

/// Struct defined in srv/GetCapabilityImplementations in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__GetCapabilityImplementations_Request
{
  ros_bt_py_interfaces__msg__CapabilityInterface interface;
} ros_bt_py_interfaces__srv__GetCapabilityImplementations_Request;

// Struct for a sequence of ros_bt_py_interfaces__srv__GetCapabilityImplementations_Request.
typedef struct ros_bt_py_interfaces__srv__GetCapabilityImplementations_Request__Sequence
{
  ros_bt_py_interfaces__srv__GetCapabilityImplementations_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__GetCapabilityImplementations_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'implementations'
#include "ros_bt_py_interfaces/msg/detail/capability_implementation__struct.h"
// Member 'error_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetCapabilityImplementations in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response
{
  ros_bt_py_interfaces__msg__CapabilityImplementation__Sequence implementations;
  bool success;
  rosidl_runtime_c__String error_message;
} ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response;

// Struct for a sequence of ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response.
typedef struct ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response__Sequence
{
  ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_CAPABILITY_IMPLEMENTATIONS__STRUCT_H_
