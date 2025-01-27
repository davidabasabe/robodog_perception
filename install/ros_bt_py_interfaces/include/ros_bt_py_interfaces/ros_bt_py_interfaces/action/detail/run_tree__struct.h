// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_bt_py_interfaces:action/RunTree.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__ACTION__DETAIL__RUN_TREE__STRUCT_H_
#define ROS_BT_PY_INTERFACES__ACTION__DETAIL__RUN_TREE__STRUCT_H_

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

/// Struct defined in action/RunTree in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__action__RunTree_Goal
{
  /// goal definition
  ros_bt_py_interfaces__msg__Tree tree;
  double tick_frequency_hz;
} ros_bt_py_interfaces__action__RunTree_Goal;

// Struct for a sequence of ros_bt_py_interfaces__action__RunTree_Goal.
typedef struct ros_bt_py_interfaces__action__RunTree_Goal__Sequence
{
  ros_bt_py_interfaces__action__RunTree_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__action__RunTree_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'final_tree'
// already included above
// #include "ros_bt_py_interfaces/msg/detail/tree__struct.h"

/// Struct defined in action/RunTree in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__action__RunTree_Result
{
  ros_bt_py_interfaces__msg__Tree final_tree;
} ros_bt_py_interfaces__action__RunTree_Result;

// Struct for a sequence of ros_bt_py_interfaces__action__RunTree_Result.
typedef struct ros_bt_py_interfaces__action__RunTree_Result__Sequence
{
  ros_bt_py_interfaces__action__RunTree_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__action__RunTree_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'current_tree'
// already included above
// #include "ros_bt_py_interfaces/msg/detail/tree__struct.h"

/// Struct defined in action/RunTree in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__action__RunTree_Feedback
{
  ros_bt_py_interfaces__msg__Tree current_tree;
} ros_bt_py_interfaces__action__RunTree_Feedback;

// Struct for a sequence of ros_bt_py_interfaces__action__RunTree_Feedback.
typedef struct ros_bt_py_interfaces__action__RunTree_Feedback__Sequence
{
  ros_bt_py_interfaces__action__RunTree_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__action__RunTree_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "ros_bt_py_interfaces/action/detail/run_tree__struct.h"

/// Struct defined in action/RunTree in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__action__RunTree_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  ros_bt_py_interfaces__action__RunTree_Goal goal;
} ros_bt_py_interfaces__action__RunTree_SendGoal_Request;

// Struct for a sequence of ros_bt_py_interfaces__action__RunTree_SendGoal_Request.
typedef struct ros_bt_py_interfaces__action__RunTree_SendGoal_Request__Sequence
{
  ros_bt_py_interfaces__action__RunTree_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__action__RunTree_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/RunTree in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__action__RunTree_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} ros_bt_py_interfaces__action__RunTree_SendGoal_Response;

// Struct for a sequence of ros_bt_py_interfaces__action__RunTree_SendGoal_Response.
typedef struct ros_bt_py_interfaces__action__RunTree_SendGoal_Response__Sequence
{
  ros_bt_py_interfaces__action__RunTree_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__action__RunTree_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/RunTree in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__action__RunTree_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} ros_bt_py_interfaces__action__RunTree_GetResult_Request;

// Struct for a sequence of ros_bt_py_interfaces__action__RunTree_GetResult_Request.
typedef struct ros_bt_py_interfaces__action__RunTree_GetResult_Request__Sequence
{
  ros_bt_py_interfaces__action__RunTree_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__action__RunTree_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "ros_bt_py_interfaces/action/detail/run_tree__struct.h"

/// Struct defined in action/RunTree in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__action__RunTree_GetResult_Response
{
  int8_t status;
  ros_bt_py_interfaces__action__RunTree_Result result;
} ros_bt_py_interfaces__action__RunTree_GetResult_Response;

// Struct for a sequence of ros_bt_py_interfaces__action__RunTree_GetResult_Response.
typedef struct ros_bt_py_interfaces__action__RunTree_GetResult_Response__Sequence
{
  ros_bt_py_interfaces__action__RunTree_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__action__RunTree_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "ros_bt_py_interfaces/action/detail/run_tree__struct.h"

/// Struct defined in action/RunTree in the package ros_bt_py_interfaces.
typedef struct ros_bt_py_interfaces__action__RunTree_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  ros_bt_py_interfaces__action__RunTree_Feedback feedback;
} ros_bt_py_interfaces__action__RunTree_FeedbackMessage;

// Struct for a sequence of ros_bt_py_interfaces__action__RunTree_FeedbackMessage.
typedef struct ros_bt_py_interfaces__action__RunTree_FeedbackMessage__Sequence
{
  ros_bt_py_interfaces__action__RunTree_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__action__RunTree_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_BT_PY_INTERFACES__ACTION__DETAIL__RUN_TREE__STRUCT_H_
