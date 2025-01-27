// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_bt_py_interfaces:action/FindBestExecutor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_bt_py_interfaces/action/detail/find_best_executor__rosidl_typesupport_introspection_c.h"
#include "ros_bt_py_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_bt_py_interfaces/action/detail/find_best_executor__functions.h"
#include "ros_bt_py_interfaces/action/detail/find_best_executor__struct.h"


// Include directives for member types
// Member `tree`
#include "ros_bt_py_interfaces/msg/tree.h"
// Member `tree`
#include "ros_bt_py_interfaces/msg/detail/tree__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_bt_py_interfaces__action__FindBestExecutor_Goal__rosidl_typesupport_introspection_c__FindBestExecutor_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_bt_py_interfaces__action__FindBestExecutor_Goal__init(message_memory);
}

void ros_bt_py_interfaces__action__FindBestExecutor_Goal__rosidl_typesupport_introspection_c__FindBestExecutor_Goal_fini_function(void * message_memory)
{
  ros_bt_py_interfaces__action__FindBestExecutor_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros_bt_py_interfaces__action__FindBestExecutor_Goal__rosidl_typesupport_introspection_c__FindBestExecutor_Goal_message_member_array[1] = {
  {
    "tree",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__action__FindBestExecutor_Goal, tree),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_bt_py_interfaces__action__FindBestExecutor_Goal__rosidl_typesupport_introspection_c__FindBestExecutor_Goal_message_members = {
  "ros_bt_py_interfaces__action",  // message namespace
  "FindBestExecutor_Goal",  // message name
  1,  // number of fields
  sizeof(ros_bt_py_interfaces__action__FindBestExecutor_Goal),
  ros_bt_py_interfaces__action__FindBestExecutor_Goal__rosidl_typesupport_introspection_c__FindBestExecutor_Goal_message_member_array,  // message members
  ros_bt_py_interfaces__action__FindBestExecutor_Goal__rosidl_typesupport_introspection_c__FindBestExecutor_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_bt_py_interfaces__action__FindBestExecutor_Goal__rosidl_typesupport_introspection_c__FindBestExecutor_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_bt_py_interfaces__action__FindBestExecutor_Goal__rosidl_typesupport_introspection_c__FindBestExecutor_Goal_message_type_support_handle = {
  0,
  &ros_bt_py_interfaces__action__FindBestExecutor_Goal__rosidl_typesupport_introspection_c__FindBestExecutor_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_bt_py_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, action, FindBestExecutor_Goal)() {
  ros_bt_py_interfaces__action__FindBestExecutor_Goal__rosidl_typesupport_introspection_c__FindBestExecutor_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, msg, Tree)();
  if (!ros_bt_py_interfaces__action__FindBestExecutor_Goal__rosidl_typesupport_introspection_c__FindBestExecutor_Goal_message_type_support_handle.typesupport_identifier) {
    ros_bt_py_interfaces__action__FindBestExecutor_Goal__rosidl_typesupport_introspection_c__FindBestExecutor_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_bt_py_interfaces__action__FindBestExecutor_Goal__rosidl_typesupport_introspection_c__FindBestExecutor_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros_bt_py_interfaces/action/detail/find_best_executor__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros_bt_py_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros_bt_py_interfaces/action/detail/find_best_executor__functions.h"
// already included above
// #include "ros_bt_py_interfaces/action/detail/find_best_executor__struct.h"


// Include directives for member types
// Member `best_executor_namespace`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_bt_py_interfaces__action__FindBestExecutor_Result__rosidl_typesupport_introspection_c__FindBestExecutor_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_bt_py_interfaces__action__FindBestExecutor_Result__init(message_memory);
}

void ros_bt_py_interfaces__action__FindBestExecutor_Result__rosidl_typesupport_introspection_c__FindBestExecutor_Result_fini_function(void * message_memory)
{
  ros_bt_py_interfaces__action__FindBestExecutor_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros_bt_py_interfaces__action__FindBestExecutor_Result__rosidl_typesupport_introspection_c__FindBestExecutor_Result_message_member_array[2] = {
  {
    "local_is_best",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__action__FindBestExecutor_Result, local_is_best),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "best_executor_namespace",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__action__FindBestExecutor_Result, best_executor_namespace),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_bt_py_interfaces__action__FindBestExecutor_Result__rosidl_typesupport_introspection_c__FindBestExecutor_Result_message_members = {
  "ros_bt_py_interfaces__action",  // message namespace
  "FindBestExecutor_Result",  // message name
  2,  // number of fields
  sizeof(ros_bt_py_interfaces__action__FindBestExecutor_Result),
  ros_bt_py_interfaces__action__FindBestExecutor_Result__rosidl_typesupport_introspection_c__FindBestExecutor_Result_message_member_array,  // message members
  ros_bt_py_interfaces__action__FindBestExecutor_Result__rosidl_typesupport_introspection_c__FindBestExecutor_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_bt_py_interfaces__action__FindBestExecutor_Result__rosidl_typesupport_introspection_c__FindBestExecutor_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_bt_py_interfaces__action__FindBestExecutor_Result__rosidl_typesupport_introspection_c__FindBestExecutor_Result_message_type_support_handle = {
  0,
  &ros_bt_py_interfaces__action__FindBestExecutor_Result__rosidl_typesupport_introspection_c__FindBestExecutor_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_bt_py_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, action, FindBestExecutor_Result)() {
  if (!ros_bt_py_interfaces__action__FindBestExecutor_Result__rosidl_typesupport_introspection_c__FindBestExecutor_Result_message_type_support_handle.typesupport_identifier) {
    ros_bt_py_interfaces__action__FindBestExecutor_Result__rosidl_typesupport_introspection_c__FindBestExecutor_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_bt_py_interfaces__action__FindBestExecutor_Result__rosidl_typesupport_introspection_c__FindBestExecutor_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros_bt_py_interfaces/action/detail/find_best_executor__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros_bt_py_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros_bt_py_interfaces/action/detail/find_best_executor__functions.h"
// already included above
// #include "ros_bt_py_interfaces/action/detail/find_best_executor__struct.h"


// Include directives for member types
// Member `checked_namespaces`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_bt_py_interfaces__action__FindBestExecutor_Feedback__rosidl_typesupport_introspection_c__FindBestExecutor_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_bt_py_interfaces__action__FindBestExecutor_Feedback__init(message_memory);
}

void ros_bt_py_interfaces__action__FindBestExecutor_Feedback__rosidl_typesupport_introspection_c__FindBestExecutor_Feedback_fini_function(void * message_memory)
{
  ros_bt_py_interfaces__action__FindBestExecutor_Feedback__fini(message_memory);
}

size_t ros_bt_py_interfaces__action__FindBestExecutor_Feedback__rosidl_typesupport_introspection_c__size_function__FindBestExecutor_Feedback__checked_namespaces(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_bt_py_interfaces__action__FindBestExecutor_Feedback__rosidl_typesupport_introspection_c__get_const_function__FindBestExecutor_Feedback__checked_namespaces(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_bt_py_interfaces__action__FindBestExecutor_Feedback__rosidl_typesupport_introspection_c__get_function__FindBestExecutor_Feedback__checked_namespaces(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_bt_py_interfaces__action__FindBestExecutor_Feedback__rosidl_typesupport_introspection_c__fetch_function__FindBestExecutor_Feedback__checked_namespaces(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    ros_bt_py_interfaces__action__FindBestExecutor_Feedback__rosidl_typesupport_introspection_c__get_const_function__FindBestExecutor_Feedback__checked_namespaces(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void ros_bt_py_interfaces__action__FindBestExecutor_Feedback__rosidl_typesupport_introspection_c__assign_function__FindBestExecutor_Feedback__checked_namespaces(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    ros_bt_py_interfaces__action__FindBestExecutor_Feedback__rosidl_typesupport_introspection_c__get_function__FindBestExecutor_Feedback__checked_namespaces(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool ros_bt_py_interfaces__action__FindBestExecutor_Feedback__rosidl_typesupport_introspection_c__resize_function__FindBestExecutor_Feedback__checked_namespaces(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros_bt_py_interfaces__action__FindBestExecutor_Feedback__rosidl_typesupport_introspection_c__FindBestExecutor_Feedback_message_member_array[1] = {
  {
    "checked_namespaces",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__action__FindBestExecutor_Feedback, checked_namespaces),  // bytes offset in struct
    NULL,  // default value
    ros_bt_py_interfaces__action__FindBestExecutor_Feedback__rosidl_typesupport_introspection_c__size_function__FindBestExecutor_Feedback__checked_namespaces,  // size() function pointer
    ros_bt_py_interfaces__action__FindBestExecutor_Feedback__rosidl_typesupport_introspection_c__get_const_function__FindBestExecutor_Feedback__checked_namespaces,  // get_const(index) function pointer
    ros_bt_py_interfaces__action__FindBestExecutor_Feedback__rosidl_typesupport_introspection_c__get_function__FindBestExecutor_Feedback__checked_namespaces,  // get(index) function pointer
    ros_bt_py_interfaces__action__FindBestExecutor_Feedback__rosidl_typesupport_introspection_c__fetch_function__FindBestExecutor_Feedback__checked_namespaces,  // fetch(index, &value) function pointer
    ros_bt_py_interfaces__action__FindBestExecutor_Feedback__rosidl_typesupport_introspection_c__assign_function__FindBestExecutor_Feedback__checked_namespaces,  // assign(index, value) function pointer
    ros_bt_py_interfaces__action__FindBestExecutor_Feedback__rosidl_typesupport_introspection_c__resize_function__FindBestExecutor_Feedback__checked_namespaces  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_bt_py_interfaces__action__FindBestExecutor_Feedback__rosidl_typesupport_introspection_c__FindBestExecutor_Feedback_message_members = {
  "ros_bt_py_interfaces__action",  // message namespace
  "FindBestExecutor_Feedback",  // message name
  1,  // number of fields
  sizeof(ros_bt_py_interfaces__action__FindBestExecutor_Feedback),
  ros_bt_py_interfaces__action__FindBestExecutor_Feedback__rosidl_typesupport_introspection_c__FindBestExecutor_Feedback_message_member_array,  // message members
  ros_bt_py_interfaces__action__FindBestExecutor_Feedback__rosidl_typesupport_introspection_c__FindBestExecutor_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_bt_py_interfaces__action__FindBestExecutor_Feedback__rosidl_typesupport_introspection_c__FindBestExecutor_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_bt_py_interfaces__action__FindBestExecutor_Feedback__rosidl_typesupport_introspection_c__FindBestExecutor_Feedback_message_type_support_handle = {
  0,
  &ros_bt_py_interfaces__action__FindBestExecutor_Feedback__rosidl_typesupport_introspection_c__FindBestExecutor_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_bt_py_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, action, FindBestExecutor_Feedback)() {
  if (!ros_bt_py_interfaces__action__FindBestExecutor_Feedback__rosidl_typesupport_introspection_c__FindBestExecutor_Feedback_message_type_support_handle.typesupport_identifier) {
    ros_bt_py_interfaces__action__FindBestExecutor_Feedback__rosidl_typesupport_introspection_c__FindBestExecutor_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_bt_py_interfaces__action__FindBestExecutor_Feedback__rosidl_typesupport_introspection_c__FindBestExecutor_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros_bt_py_interfaces/action/detail/find_best_executor__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros_bt_py_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros_bt_py_interfaces/action/detail/find_best_executor__functions.h"
// already included above
// #include "ros_bt_py_interfaces/action/detail/find_best_executor__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "ros_bt_py_interfaces/action/find_best_executor.h"
// Member `goal`
// already included above
// #include "ros_bt_py_interfaces/action/detail/find_best_executor__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Request__rosidl_typesupport_introspection_c__FindBestExecutor_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Request__init(message_memory);
}

void ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Request__rosidl_typesupport_introspection_c__FindBestExecutor_SendGoal_Request_fini_function(void * message_memory)
{
  ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Request__rosidl_typesupport_introspection_c__FindBestExecutor_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Request__rosidl_typesupport_introspection_c__FindBestExecutor_SendGoal_Request_message_members = {
  "ros_bt_py_interfaces__action",  // message namespace
  "FindBestExecutor_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Request),
  ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Request__rosidl_typesupport_introspection_c__FindBestExecutor_SendGoal_Request_message_member_array,  // message members
  ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Request__rosidl_typesupport_introspection_c__FindBestExecutor_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Request__rosidl_typesupport_introspection_c__FindBestExecutor_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Request__rosidl_typesupport_introspection_c__FindBestExecutor_SendGoal_Request_message_type_support_handle = {
  0,
  &ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Request__rosidl_typesupport_introspection_c__FindBestExecutor_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_bt_py_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, action, FindBestExecutor_SendGoal_Request)() {
  ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Request__rosidl_typesupport_introspection_c__FindBestExecutor_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Request__rosidl_typesupport_introspection_c__FindBestExecutor_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, action, FindBestExecutor_Goal)();
  if (!ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Request__rosidl_typesupport_introspection_c__FindBestExecutor_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Request__rosidl_typesupport_introspection_c__FindBestExecutor_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Request__rosidl_typesupport_introspection_c__FindBestExecutor_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros_bt_py_interfaces/action/detail/find_best_executor__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros_bt_py_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros_bt_py_interfaces/action/detail/find_best_executor__functions.h"
// already included above
// #include "ros_bt_py_interfaces/action/detail/find_best_executor__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Response__rosidl_typesupport_introspection_c__FindBestExecutor_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Response__init(message_memory);
}

void ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Response__rosidl_typesupport_introspection_c__FindBestExecutor_SendGoal_Response_fini_function(void * message_memory)
{
  ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Response__rosidl_typesupport_introspection_c__FindBestExecutor_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Response__rosidl_typesupport_introspection_c__FindBestExecutor_SendGoal_Response_message_members = {
  "ros_bt_py_interfaces__action",  // message namespace
  "FindBestExecutor_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Response),
  ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Response__rosidl_typesupport_introspection_c__FindBestExecutor_SendGoal_Response_message_member_array,  // message members
  ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Response__rosidl_typesupport_introspection_c__FindBestExecutor_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Response__rosidl_typesupport_introspection_c__FindBestExecutor_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Response__rosidl_typesupport_introspection_c__FindBestExecutor_SendGoal_Response_message_type_support_handle = {
  0,
  &ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Response__rosidl_typesupport_introspection_c__FindBestExecutor_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_bt_py_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, action, FindBestExecutor_SendGoal_Response)() {
  ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Response__rosidl_typesupport_introspection_c__FindBestExecutor_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Response__rosidl_typesupport_introspection_c__FindBestExecutor_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Response__rosidl_typesupport_introspection_c__FindBestExecutor_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_bt_py_interfaces__action__FindBestExecutor_SendGoal_Response__rosidl_typesupport_introspection_c__FindBestExecutor_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ros_bt_py_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ros_bt_py_interfaces/action/detail/find_best_executor__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ros_bt_py_interfaces__action__detail__find_best_executor__rosidl_typesupport_introspection_c__FindBestExecutor_SendGoal_service_members = {
  "ros_bt_py_interfaces__action",  // service namespace
  "FindBestExecutor_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ros_bt_py_interfaces__action__detail__find_best_executor__rosidl_typesupport_introspection_c__FindBestExecutor_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // ros_bt_py_interfaces__action__detail__find_best_executor__rosidl_typesupport_introspection_c__FindBestExecutor_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t ros_bt_py_interfaces__action__detail__find_best_executor__rosidl_typesupport_introspection_c__FindBestExecutor_SendGoal_service_type_support_handle = {
  0,
  &ros_bt_py_interfaces__action__detail__find_best_executor__rosidl_typesupport_introspection_c__FindBestExecutor_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, action, FindBestExecutor_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, action, FindBestExecutor_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_bt_py_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, action, FindBestExecutor_SendGoal)() {
  if (!ros_bt_py_interfaces__action__detail__find_best_executor__rosidl_typesupport_introspection_c__FindBestExecutor_SendGoal_service_type_support_handle.typesupport_identifier) {
    ros_bt_py_interfaces__action__detail__find_best_executor__rosidl_typesupport_introspection_c__FindBestExecutor_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ros_bt_py_interfaces__action__detail__find_best_executor__rosidl_typesupport_introspection_c__FindBestExecutor_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, action, FindBestExecutor_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, action, FindBestExecutor_SendGoal_Response)()->data;
  }

  return &ros_bt_py_interfaces__action__detail__find_best_executor__rosidl_typesupport_introspection_c__FindBestExecutor_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "ros_bt_py_interfaces/action/detail/find_best_executor__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros_bt_py_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros_bt_py_interfaces/action/detail/find_best_executor__functions.h"
// already included above
// #include "ros_bt_py_interfaces/action/detail/find_best_executor__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Request__rosidl_typesupport_introspection_c__FindBestExecutor_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Request__init(message_memory);
}

void ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Request__rosidl_typesupport_introspection_c__FindBestExecutor_GetResult_Request_fini_function(void * message_memory)
{
  ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Request__rosidl_typesupport_introspection_c__FindBestExecutor_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Request__rosidl_typesupport_introspection_c__FindBestExecutor_GetResult_Request_message_members = {
  "ros_bt_py_interfaces__action",  // message namespace
  "FindBestExecutor_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Request),
  ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Request__rosidl_typesupport_introspection_c__FindBestExecutor_GetResult_Request_message_member_array,  // message members
  ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Request__rosidl_typesupport_introspection_c__FindBestExecutor_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Request__rosidl_typesupport_introspection_c__FindBestExecutor_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Request__rosidl_typesupport_introspection_c__FindBestExecutor_GetResult_Request_message_type_support_handle = {
  0,
  &ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Request__rosidl_typesupport_introspection_c__FindBestExecutor_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_bt_py_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, action, FindBestExecutor_GetResult_Request)() {
  ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Request__rosidl_typesupport_introspection_c__FindBestExecutor_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Request__rosidl_typesupport_introspection_c__FindBestExecutor_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Request__rosidl_typesupport_introspection_c__FindBestExecutor_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Request__rosidl_typesupport_introspection_c__FindBestExecutor_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros_bt_py_interfaces/action/detail/find_best_executor__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros_bt_py_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros_bt_py_interfaces/action/detail/find_best_executor__functions.h"
// already included above
// #include "ros_bt_py_interfaces/action/detail/find_best_executor__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "ros_bt_py_interfaces/action/find_best_executor.h"
// Member `result`
// already included above
// #include "ros_bt_py_interfaces/action/detail/find_best_executor__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Response__rosidl_typesupport_introspection_c__FindBestExecutor_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Response__init(message_memory);
}

void ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Response__rosidl_typesupport_introspection_c__FindBestExecutor_GetResult_Response_fini_function(void * message_memory)
{
  ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Response__rosidl_typesupport_introspection_c__FindBestExecutor_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Response__rosidl_typesupport_introspection_c__FindBestExecutor_GetResult_Response_message_members = {
  "ros_bt_py_interfaces__action",  // message namespace
  "FindBestExecutor_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Response),
  ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Response__rosidl_typesupport_introspection_c__FindBestExecutor_GetResult_Response_message_member_array,  // message members
  ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Response__rosidl_typesupport_introspection_c__FindBestExecutor_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Response__rosidl_typesupport_introspection_c__FindBestExecutor_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Response__rosidl_typesupport_introspection_c__FindBestExecutor_GetResult_Response_message_type_support_handle = {
  0,
  &ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Response__rosidl_typesupport_introspection_c__FindBestExecutor_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_bt_py_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, action, FindBestExecutor_GetResult_Response)() {
  ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Response__rosidl_typesupport_introspection_c__FindBestExecutor_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, action, FindBestExecutor_Result)();
  if (!ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Response__rosidl_typesupport_introspection_c__FindBestExecutor_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Response__rosidl_typesupport_introspection_c__FindBestExecutor_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_bt_py_interfaces__action__FindBestExecutor_GetResult_Response__rosidl_typesupport_introspection_c__FindBestExecutor_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ros_bt_py_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ros_bt_py_interfaces/action/detail/find_best_executor__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ros_bt_py_interfaces__action__detail__find_best_executor__rosidl_typesupport_introspection_c__FindBestExecutor_GetResult_service_members = {
  "ros_bt_py_interfaces__action",  // service namespace
  "FindBestExecutor_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ros_bt_py_interfaces__action__detail__find_best_executor__rosidl_typesupport_introspection_c__FindBestExecutor_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // ros_bt_py_interfaces__action__detail__find_best_executor__rosidl_typesupport_introspection_c__FindBestExecutor_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t ros_bt_py_interfaces__action__detail__find_best_executor__rosidl_typesupport_introspection_c__FindBestExecutor_GetResult_service_type_support_handle = {
  0,
  &ros_bt_py_interfaces__action__detail__find_best_executor__rosidl_typesupport_introspection_c__FindBestExecutor_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, action, FindBestExecutor_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, action, FindBestExecutor_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_bt_py_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, action, FindBestExecutor_GetResult)() {
  if (!ros_bt_py_interfaces__action__detail__find_best_executor__rosidl_typesupport_introspection_c__FindBestExecutor_GetResult_service_type_support_handle.typesupport_identifier) {
    ros_bt_py_interfaces__action__detail__find_best_executor__rosidl_typesupport_introspection_c__FindBestExecutor_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ros_bt_py_interfaces__action__detail__find_best_executor__rosidl_typesupport_introspection_c__FindBestExecutor_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, action, FindBestExecutor_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, action, FindBestExecutor_GetResult_Response)()->data;
  }

  return &ros_bt_py_interfaces__action__detail__find_best_executor__rosidl_typesupport_introspection_c__FindBestExecutor_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "ros_bt_py_interfaces/action/detail/find_best_executor__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros_bt_py_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros_bt_py_interfaces/action/detail/find_best_executor__functions.h"
// already included above
// #include "ros_bt_py_interfaces/action/detail/find_best_executor__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "ros_bt_py_interfaces/action/find_best_executor.h"
// Member `feedback`
// already included above
// #include "ros_bt_py_interfaces/action/detail/find_best_executor__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_bt_py_interfaces__action__FindBestExecutor_FeedbackMessage__rosidl_typesupport_introspection_c__FindBestExecutor_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_bt_py_interfaces__action__FindBestExecutor_FeedbackMessage__init(message_memory);
}

void ros_bt_py_interfaces__action__FindBestExecutor_FeedbackMessage__rosidl_typesupport_introspection_c__FindBestExecutor_FeedbackMessage_fini_function(void * message_memory)
{
  ros_bt_py_interfaces__action__FindBestExecutor_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros_bt_py_interfaces__action__FindBestExecutor_FeedbackMessage__rosidl_typesupport_introspection_c__FindBestExecutor_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__action__FindBestExecutor_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__action__FindBestExecutor_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_bt_py_interfaces__action__FindBestExecutor_FeedbackMessage__rosidl_typesupport_introspection_c__FindBestExecutor_FeedbackMessage_message_members = {
  "ros_bt_py_interfaces__action",  // message namespace
  "FindBestExecutor_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(ros_bt_py_interfaces__action__FindBestExecutor_FeedbackMessage),
  ros_bt_py_interfaces__action__FindBestExecutor_FeedbackMessage__rosidl_typesupport_introspection_c__FindBestExecutor_FeedbackMessage_message_member_array,  // message members
  ros_bt_py_interfaces__action__FindBestExecutor_FeedbackMessage__rosidl_typesupport_introspection_c__FindBestExecutor_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_bt_py_interfaces__action__FindBestExecutor_FeedbackMessage__rosidl_typesupport_introspection_c__FindBestExecutor_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_bt_py_interfaces__action__FindBestExecutor_FeedbackMessage__rosidl_typesupport_introspection_c__FindBestExecutor_FeedbackMessage_message_type_support_handle = {
  0,
  &ros_bt_py_interfaces__action__FindBestExecutor_FeedbackMessage__rosidl_typesupport_introspection_c__FindBestExecutor_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_bt_py_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, action, FindBestExecutor_FeedbackMessage)() {
  ros_bt_py_interfaces__action__FindBestExecutor_FeedbackMessage__rosidl_typesupport_introspection_c__FindBestExecutor_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  ros_bt_py_interfaces__action__FindBestExecutor_FeedbackMessage__rosidl_typesupport_introspection_c__FindBestExecutor_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, action, FindBestExecutor_Feedback)();
  if (!ros_bt_py_interfaces__action__FindBestExecutor_FeedbackMessage__rosidl_typesupport_introspection_c__FindBestExecutor_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    ros_bt_py_interfaces__action__FindBestExecutor_FeedbackMessage__rosidl_typesupport_introspection_c__FindBestExecutor_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_bt_py_interfaces__action__FindBestExecutor_FeedbackMessage__rosidl_typesupport_introspection_c__FindBestExecutor_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
