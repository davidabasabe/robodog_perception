// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_interfaces:action/Commands.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__ACTION__DETAIL__COMMANDS__STRUCT_H_
#define ROBOT_INTERFACES__ACTION__DETAIL__COMMANDS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'sequence'
#include "rosidl_runtime_c/string.h"
// Member 'robot'
#include "robot_interfaces/msg/detail/robot__struct.h"

/// Struct defined in action/Commands in the package robot_interfaces.
typedef struct robot_interfaces__action__Commands_Goal
{
  rosidl_runtime_c__String sequence;
  robot_interfaces__msg__Robot robot;
} robot_interfaces__action__Commands_Goal;

// Struct for a sequence of robot_interfaces__action__Commands_Goal.
typedef struct robot_interfaces__action__Commands_Goal__Sequence
{
  robot_interfaces__action__Commands_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__action__Commands_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/Commands in the package robot_interfaces.
typedef struct robot_interfaces__action__Commands_Result
{
  bool finished;
} robot_interfaces__action__Commands_Result;

// Struct for a sequence of robot_interfaces__action__Commands_Result.
typedef struct robot_interfaces__action__Commands_Result__Sequence
{
  robot_interfaces__action__Commands_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__action__Commands_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/Commands in the package robot_interfaces.
typedef struct robot_interfaces__action__Commands_Feedback
{
  rosidl_runtime_c__String status;
} robot_interfaces__action__Commands_Feedback;

// Struct for a sequence of robot_interfaces__action__Commands_Feedback.
typedef struct robot_interfaces__action__Commands_Feedback__Sequence
{
  robot_interfaces__action__Commands_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__action__Commands_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "robot_interfaces/action/detail/commands__struct.h"

/// Struct defined in action/Commands in the package robot_interfaces.
typedef struct robot_interfaces__action__Commands_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  robot_interfaces__action__Commands_Goal goal;
} robot_interfaces__action__Commands_SendGoal_Request;

// Struct for a sequence of robot_interfaces__action__Commands_SendGoal_Request.
typedef struct robot_interfaces__action__Commands_SendGoal_Request__Sequence
{
  robot_interfaces__action__Commands_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__action__Commands_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Commands in the package robot_interfaces.
typedef struct robot_interfaces__action__Commands_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} robot_interfaces__action__Commands_SendGoal_Response;

// Struct for a sequence of robot_interfaces__action__Commands_SendGoal_Response.
typedef struct robot_interfaces__action__Commands_SendGoal_Response__Sequence
{
  robot_interfaces__action__Commands_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__action__Commands_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Commands in the package robot_interfaces.
typedef struct robot_interfaces__action__Commands_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} robot_interfaces__action__Commands_GetResult_Request;

// Struct for a sequence of robot_interfaces__action__Commands_GetResult_Request.
typedef struct robot_interfaces__action__Commands_GetResult_Request__Sequence
{
  robot_interfaces__action__Commands_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__action__Commands_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "robot_interfaces/action/detail/commands__struct.h"

/// Struct defined in action/Commands in the package robot_interfaces.
typedef struct robot_interfaces__action__Commands_GetResult_Response
{
  int8_t status;
  robot_interfaces__action__Commands_Result result;
} robot_interfaces__action__Commands_GetResult_Response;

// Struct for a sequence of robot_interfaces__action__Commands_GetResult_Response.
typedef struct robot_interfaces__action__Commands_GetResult_Response__Sequence
{
  robot_interfaces__action__Commands_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__action__Commands_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "robot_interfaces/action/detail/commands__struct.h"

/// Struct defined in action/Commands in the package robot_interfaces.
typedef struct robot_interfaces__action__Commands_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  robot_interfaces__action__Commands_Feedback feedback;
} robot_interfaces__action__Commands_FeedbackMessage;

// Struct for a sequence of robot_interfaces__action__Commands_FeedbackMessage.
typedef struct robot_interfaces__action__Commands_FeedbackMessage__Sequence
{
  robot_interfaces__action__Commands_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__action__Commands_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_INTERFACES__ACTION__DETAIL__COMMANDS__STRUCT_H_
