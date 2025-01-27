// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_bt_py_interfaces:srv/ControlTreeExecution.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__CONTROL_TREE_EXECUTION__STRUCT_H_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__CONTROL_TREE_EXECUTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DO_NOTHING'.
enum
{
  ros_bt_py_interfaces__srv__ControlTreeExecution_Request__DO_NOTHING = 0
};

/// Constant 'TICK_ONCE'.
enum
{
  ros_bt_py_interfaces__srv__ControlTreeExecution_Request__TICK_ONCE = 1
};

/// Constant 'TICK_PERIODICALLY'.
enum
{
  ros_bt_py_interfaces__srv__ControlTreeExecution_Request__TICK_PERIODICALLY = 2
};

/// Constant 'TICK_UNTIL_RESULT'.
enum
{
  ros_bt_py_interfaces__srv__ControlTreeExecution_Request__TICK_UNTIL_RESULT = 3
};

/// Constant 'STOP'.
enum
{
  ros_bt_py_interfaces__srv__ControlTreeExecution_Request__STOP = 4
};

/// Constant 'RESET'.
enum
{
  ros_bt_py_interfaces__srv__ControlTreeExecution_Request__RESET = 5
};

/// Constant 'SHUTDOWN'.
enum
{
  ros_bt_py_interfaces__srv__ControlTreeExecution_Request__SHUTDOWN = 6
};

/// Constant 'SETUP_AND_SHUTDOWN'.
enum
{
  ros_bt_py_interfaces__srv__ControlTreeExecution_Request__SETUP_AND_SHUTDOWN = 7
};

/// Struct defined in srv/ControlTreeExecution in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__ControlTreeExecution_Request
{
  uint8_t command;
  double tick_frequency_hz;
} ros_bt_py_interfaces__srv__ControlTreeExecution_Request;

// Struct for a sequence of ros_bt_py_interfaces__srv__ControlTreeExecution_Request.
typedef struct ros_bt_py_interfaces__srv__ControlTreeExecution_Request__Sequence
{
  ros_bt_py_interfaces__srv__ControlTreeExecution_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__ControlTreeExecution_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_message'
// Member 'tree_state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ControlTreeExecution in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__ControlTreeExecution_Response
{
  bool success;
  rosidl_runtime_c__String error_message;
  rosidl_runtime_c__String tree_state;
} ros_bt_py_interfaces__srv__ControlTreeExecution_Response;

// Struct for a sequence of ros_bt_py_interfaces__srv__ControlTreeExecution_Response.
typedef struct ros_bt_py_interfaces__srv__ControlTreeExecution_Response__Sequence
{
  ros_bt_py_interfaces__srv__ControlTreeExecution_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__ControlTreeExecution_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__CONTROL_TREE_EXECUTION__STRUCT_H_
