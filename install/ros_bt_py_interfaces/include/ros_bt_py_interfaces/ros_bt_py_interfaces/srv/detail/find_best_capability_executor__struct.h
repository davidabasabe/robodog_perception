// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_bt_py_interfaces:srv/FindBestCapabilityExecutor.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__FIND_BEST_CAPABILITY_EXECUTOR__STRUCT_H_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__FIND_BEST_CAPABILITY_EXECUTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'capability'
#include "ros_bt_py_interfaces/msg/detail/capability_interface__struct.h"
// Member 'node_id'
// Member 'mission_control_name'
// Member 'implementation_tags_dict'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/FindBestCapabilityExecutor in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request
{
  ros_bt_py_interfaces__msg__CapabilityInterface capability;
  rosidl_runtime_c__String node_id;
  rosidl_runtime_c__String mission_control_name;
  rosidl_runtime_c__String implementation_tags_dict;
} ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request;

// Struct for a sequence of ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request.
typedef struct ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__Sequence
{
  ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_message'
// Member 'executor_mission_control_topic'
// Member 'implementation_name'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/FindBestCapabilityExecutor in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response
{
  bool success;
  rosidl_runtime_c__String error_message;
  bool execute_local;
  rosidl_runtime_c__String executor_mission_control_topic;
  rosidl_runtime_c__String implementation_name;
  double max_allowed_costs;
} ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response;

// Struct for a sequence of ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response.
typedef struct ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__Sequence
{
  ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__srv__FindBestCapabilityExecutor_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__FIND_BEST_CAPABILITY_EXECUTOR__STRUCT_H_
