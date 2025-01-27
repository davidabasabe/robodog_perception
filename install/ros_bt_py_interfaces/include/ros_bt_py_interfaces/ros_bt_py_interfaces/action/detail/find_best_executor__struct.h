// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_bt_py_interfaces:action/FindBestExecutor.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__ACTION__DETAIL__FIND_BEST_EXECUTOR__STRUCT_H_
#define ROS_BT_PY_INTERFACES__ACTION__DETAIL__FIND_BEST_EXECUTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'tree'
#include "ros_bt_py_interfaces/msg/detail/tree__struct.h"

/// Struct defined in action/FindBestExecutor in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__action__FindBestExecutor_Goal
{
  ros_bt_py_interfaces__msg__Tree tree;
} ros_bt_py_interfaces__action__FindBestExecutor_Goal;

// Struct for a sequence of ros_bt_py_interfaces__action__FindBestExecutor_Goal.
typedef struct ros_bt_py_interfaces__action__FindBestExecutor_Goal__Sequence
{
  ros_bt_py_interfaces__action__FindBestExecutor_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__action__FindBestExecutor_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'best_executor_namespace'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/FindBestExecutor in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__action__FindBestExecutor_Result
{
  /// if true, it's best to execute tree locally
  bool local_is_best;
  /// contains the BT services and actions
  rosidl_runtime_c__String best_executor_namespace;
} ros_bt_py_interfaces__action__FindBestExecutor_Result;

// Struct for a sequence of ros_bt_py_interfaces__action__FindBestExecutor_Result.
typedef struct ros_bt_py_interfaces__action__FindBestExecutor_Result__Sequence
{
  ros_bt_py_interfaces__action__FindBestExecutor_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__action__FindBestExecutor_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'checked_namespaces'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/FindBestExecutor in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__action__FindBestExecutor_Feedback
{
  rosidl_runtime_c__String__Sequence checked_namespaces;
} ros_bt_py_interfaces__action__FindBestExecutor_Feedback;

// Struct for a sequence of ros_bt_py_interfaces__action__FindBestExecutor_Feedback.
typedef struct ros_bt_py_interfaces__action__FindBestExecutor_Feedback__Sequence
{
  ros_bt_py_interfaces__action__FindBestExecutor_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__action__FindBestExecutor_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "ros_bt_py_interfaces/action/detail/find_best_executor__struct.h"

/// Struct defined in action/FindBestExecutor in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  ros_bt_py_interfaces__action__FindBestExecutor_Goal goal;
} ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Request;

// Struct for a sequence of ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Request.
typedef struct ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Request__Sequence
{
  ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/FindBestExecutor in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Response;

// Struct for a sequence of ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Response.
typedef struct ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Response__Sequence
{
  ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/FindBestExecutor in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Request;

// Struct for a sequence of ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Request.
typedef struct ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Request__Sequence
{
  ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "ros_bt_py_interfaces/action/detail/find_best_executor__struct.h"

/// Struct defined in action/FindBestExecutor in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Response
{
  int8_t status;
  ros_bt_py_interfaces__action__FindBestExecutor_Result result;
} ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Response;

// Struct for a sequence of ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Response.
typedef struct ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Response__Sequence
{
  ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "ros_bt_py_interfaces/action/detail/find_best_executor__struct.h"

/// Struct defined in action/FindBestExecutor in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__action__FindBestExecutor_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  ros_bt_py_interfaces__action__FindBestExecutor_Feedback feedback;
} ros_bt_py_interfaces__action__FindBestExecutor_FeedbackMessage;

// Struct for a sequence of ros_bt_py_interfaces__action__FindBestExecutor_FeedbackMessage.
typedef struct ros_bt_py_interfaces__action__FindBestExecutor_FeedbackMessage__Sequence
{
  ros_bt_py_interfaces__action__FindBestExecutor_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__action__FindBestExecutor_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_BT_PY_INTERFACES__ACTION__DETAIL__FIND_BEST_EXECUTOR__STRUCT_H_
