// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_bt_py_interfaces:srv/PrepareLocalImplementation.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__PREPARE_LOCAL_IMPLEMENTATION__STRUCT_H_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__PREPARE_LOCAL_IMPLEMENTATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'implementation_name'
#include "rosidl_runtime_c/string.h"
// Member 'interface'
#include "ros_bt_py_interfaces/msg/detail/capability_interface__struct.h"

/// Struct defined in srv/PrepareLocalImplementation in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__PrepareLocalImplementation_Request
{
  rosidl_runtime_c__String implementation_name;
  ros_bt_py_interfaces__msg__CapabilityInterface interface;
} ros_bt_py_interfaces__srv__PrepareLocalImplementation_Request;

// Struct for a sequence of ros_bt_py_interfaces__srv__PrepareLocalImplementation_Request.
typedef struct ros_bt_py_interfaces__srv__PrepareLocalImplementation_Request__Sequence
{
  ros_bt_py_interfaces__srv__PrepareLocalImplementation_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__PrepareLocalImplementation_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_message'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'implementation_subtree'
#include "ros_bt_py_interfaces/msg/detail/tree__struct.h"

/// Struct defined in srv/PrepareLocalImplementation in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__PrepareLocalImplementation_Response
{
  bool success;
  rosidl_runtime_c__String error_message;
  ros_bt_py_interfaces__msg__Tree implementation_subtree;
} ros_bt_py_interfaces__srv__PrepareLocalImplementation_Response;

// Struct for a sequence of ros_bt_py_interfaces__srv__PrepareLocalImplementation_Response.
typedef struct ros_bt_py_interfaces__srv__PrepareLocalImplementation_Response__Sequence
{
  ros_bt_py_interfaces__srv__PrepareLocalImplementation_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__PrepareLocalImplementation_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__PREPARE_LOCAL_IMPLEMENTATION__STRUCT_H_
