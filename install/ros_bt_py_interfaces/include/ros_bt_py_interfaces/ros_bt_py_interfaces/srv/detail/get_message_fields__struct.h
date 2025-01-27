// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_bt_py_interfaces:srv/GetMessageFields.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_MESSAGE_FIELDS__STRUCT_H_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_MESSAGE_FIELDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MESSAGE'.
enum
{
  ros_bt_py_interfaces__srv__GetMessageFields_Request__MESSAGE = 0
};

/// Constant 'REQUEST'.
enum
{
  ros_bt_py_interfaces__srv__GetMessageFields_Request__REQUEST = 1
};

/// Constant 'RESPONSE'.
enum
{
  ros_bt_py_interfaces__srv__GetMessageFields_Request__RESPONSE = 2
};

/// Constant 'GOAL'.
enum
{
  ros_bt_py_interfaces__srv__GetMessageFields_Request__GOAL = 3
};

/// Constant 'FEEDBACK'.
enum
{
  ros_bt_py_interfaces__srv__GetMessageFields_Request__FEEDBACK = 4
};

/// Constant 'RESULT'.
enum
{
  ros_bt_py_interfaces__srv__GetMessageFields_Request__RESULT = 5
};

// Include directives for member types
// Member 'message_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetMessageFields in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__GetMessageFields_Request
{
  rosidl_runtime_c__String message_type;
  bool service;
  bool action;
  uint8_t type;
} ros_bt_py_interfaces__srv__GetMessageFields_Request;

// Struct for a sequence of ros_bt_py_interfaces__srv__GetMessageFields_Request.
typedef struct ros_bt_py_interfaces__srv__GetMessageFields_Request__Sequence
{
  ros_bt_py_interfaces__srv__GetMessageFields_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__GetMessageFields_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'fields'
// Member 'field_names'
// Member 'error_message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetMessageFields in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__GetMessageFields_Response
{
  rosidl_runtime_c__String fields;
  rosidl_runtime_c__String__Sequence field_names;
  bool success;
  rosidl_runtime_c__String error_message;
} ros_bt_py_interfaces__srv__GetMessageFields_Response;

// Struct for a sequence of ros_bt_py_interfaces__srv__GetMessageFields_Response.
typedef struct ros_bt_py_interfaces__srv__GetMessageFields_Response__Sequence
{
  ros_bt_py_interfaces__srv__GetMessageFields_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__GetMessageFields_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_MESSAGE_FIELDS__STRUCT_H_
