// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_bt_py_interfaces:srv/CheckPreconditionStatus.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__CHECK_PRECONDITION_STATUS__STRUCT_H_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__CHECK_PRECONDITION_STATUS__STRUCT_H_

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

/// Struct defined in srv/CheckPreconditionStatus in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__CheckPreconditionStatus_Request
{
  ros_bt_py_interfaces__msg__CapabilityInterface interface;
} ros_bt_py_interfaces__srv__CheckPreconditionStatus_Request;

// Struct for a sequence of ros_bt_py_interfaces__srv__CheckPreconditionStatus_Request.
typedef struct ros_bt_py_interfaces__srv__CheckPreconditionStatus_Request__Sequence
{
  ros_bt_py_interfaces__srv__CheckPreconditionStatus_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__CheckPreconditionStatus_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/CheckPreconditionStatus in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__CheckPreconditionStatus_Response
{
  bool available;
} ros_bt_py_interfaces__srv__CheckPreconditionStatus_Response;

// Struct for a sequence of ros_bt_py_interfaces__srv__CheckPreconditionStatus_Response.
typedef struct ros_bt_py_interfaces__srv__CheckPreconditionStatus_Response__Sequence
{
  ros_bt_py_interfaces__srv__CheckPreconditionStatus_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__CheckPreconditionStatus_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__CHECK_PRECONDITION_STATUS__STRUCT_H_
