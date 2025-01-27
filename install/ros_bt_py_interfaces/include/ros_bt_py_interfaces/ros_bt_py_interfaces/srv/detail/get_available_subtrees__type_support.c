// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_bt_py_interfaces:srv/GetAvailableSubtrees.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_bt_py_interfaces/srv/detail/get_available_subtrees__rosidl_typesupport_introspection_c.h"
#include "ros_bt_py_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_bt_py_interfaces/srv/detail/get_available_subtrees__functions.h"
#include "ros_bt_py_interfaces/srv/detail/get_available_subtrees__struct.h"


// Include directives for member types
// Member `subtree_paths`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_bt_py_interfaces__srv__GetAvailableSubtrees_Request__rosidl_typesupport_introspection_c__GetAvailableSubtrees_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_bt_py_interfaces__srv__GetAvailableSubtrees_Request__init(message_memory);
}

void ros_bt_py_interfaces__srv__GetAvailableSubtrees_Request__rosidl_typesupport_introspection_c__GetAvailableSubtrees_Request_fini_function(void * message_memory)
{
  ros_bt_py_interfaces__srv__GetAvailableSubtrees_Request__fini(message_memory);
}

size_t ros_bt_py_interfaces__srv__GetAvailableSubtrees_Request__rosidl_typesupport_introspection_c__size_function__GetAvailableSubtrees_Request__subtree_paths(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_bt_py_interfaces__srv__GetAvailableSubtrees_Request__rosidl_typesupport_introspection_c__get_const_function__GetAvailableSubtrees_Request__subtree_paths(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_bt_py_interfaces__srv__GetAvailableSubtrees_Request__rosidl_typesupport_introspection_c__get_function__GetAvailableSubtrees_Request__subtree_paths(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_bt_py_interfaces__srv__GetAvailableSubtrees_Request__rosidl_typesupport_introspection_c__fetch_function__GetAvailableSubtrees_Request__subtree_paths(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    ros_bt_py_interfaces__srv__GetAvailableSubtrees_Request__rosidl_typesupport_introspection_c__get_const_function__GetAvailableSubtrees_Request__subtree_paths(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void ros_bt_py_interfaces__srv__GetAvailableSubtrees_Request__rosidl_typesupport_introspection_c__assign_function__GetAvailableSubtrees_Request__subtree_paths(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    ros_bt_py_interfaces__srv__GetAvailableSubtrees_Request__rosidl_typesupport_introspection_c__get_function__GetAvailableSubtrees_Request__subtree_paths(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool ros_bt_py_interfaces__srv__GetAvailableSubtrees_Request__rosidl_typesupport_introspection_c__resize_function__GetAvailableSubtrees_Request__subtree_paths(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros_bt_py_interfaces__srv__GetAvailableSubtrees_Request__rosidl_typesupport_introspection_c__GetAvailableSubtrees_Request_message_member_array[1] = {
  {
    "subtree_paths",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__srv__GetAvailableSubtrees_Request, subtree_paths),  // bytes offset in struct
    NULL,  // default value
    ros_bt_py_interfaces__srv__GetAvailableSubtrees_Request__rosidl_typesupport_introspection_c__size_function__GetAvailableSubtrees_Request__subtree_paths,  // size() function pointer
    ros_bt_py_interfaces__srv__GetAvailableSubtrees_Request__rosidl_typesupport_introspection_c__get_const_function__GetAvailableSubtrees_Request__subtree_paths,  // get_const(index) function pointer
    ros_bt_py_interfaces__srv__GetAvailableSubtrees_Request__rosidl_typesupport_introspection_c__get_function__GetAvailableSubtrees_Request__subtree_paths,  // get(index) function pointer
    ros_bt_py_interfaces__srv__GetAvailableSubtrees_Request__rosidl_typesupport_introspection_c__fetch_function__GetAvailableSubtrees_Request__subtree_paths,  // fetch(index, &value) function pointer
    ros_bt_py_interfaces__srv__GetAvailableSubtrees_Request__rosidl_typesupport_introspection_c__assign_function__GetAvailableSubtrees_Request__subtree_paths,  // assign(index, value) function pointer
    ros_bt_py_interfaces__srv__GetAvailableSubtrees_Request__rosidl_typesupport_introspection_c__resize_function__GetAvailableSubtrees_Request__subtree_paths  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_bt_py_interfaces__srv__GetAvailableSubtrees_Request__rosidl_typesupport_introspection_c__GetAvailableSubtrees_Request_message_members = {
  "ros_bt_py_interfaces__srv",  // message namespace
  "GetAvailableSubtrees_Request",  // message name
  1,  // number of fields
  sizeof(ros_bt_py_interfaces__srv__GetAvailableSubtrees_Request),
  ros_bt_py_interfaces__srv__GetAvailableSubtrees_Request__rosidl_typesupport_introspection_c__GetAvailableSubtrees_Request_message_member_array,  // message members
  ros_bt_py_interfaces__srv__GetAvailableSubtrees_Request__rosidl_typesupport_introspection_c__GetAvailableSubtrees_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_bt_py_interfaces__srv__GetAvailableSubtrees_Request__rosidl_typesupport_introspection_c__GetAvailableSubtrees_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_bt_py_interfaces__srv__GetAvailableSubtrees_Request__rosidl_typesupport_introspection_c__GetAvailableSubtrees_Request_message_type_support_handle = {
  0,
  &ros_bt_py_interfaces__srv__GetAvailableSubtrees_Request__rosidl_typesupport_introspection_c__GetAvailableSubtrees_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_bt_py_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, srv, GetAvailableSubtrees_Request)() {
  if (!ros_bt_py_interfaces__srv__GetAvailableSubtrees_Request__rosidl_typesupport_introspection_c__GetAvailableSubtrees_Request_message_type_support_handle.typesupport_identifier) {
    ros_bt_py_interfaces__srv__GetAvailableSubtrees_Request__rosidl_typesupport_introspection_c__GetAvailableSubtrees_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_bt_py_interfaces__srv__GetAvailableSubtrees_Request__rosidl_typesupport_introspection_c__GetAvailableSubtrees_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros_bt_py_interfaces/srv/detail/get_available_subtrees__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros_bt_py_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros_bt_py_interfaces/srv/detail/get_available_subtrees__functions.h"
// already included above
// #include "ros_bt_py_interfaces/srv/detail/get_available_subtrees__struct.h"


// Include directives for member types
// Member `available_subtree_nodes`
#include "ros_bt_py_interfaces/msg/node.h"
// Member `available_subtree_nodes`
#include "ros_bt_py_interfaces/msg/detail/node__rosidl_typesupport_introspection_c.h"
// Member `error_message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_bt_py_interfaces__srv__GetAvailableSubtrees_Response__rosidl_typesupport_introspection_c__GetAvailableSubtrees_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_bt_py_interfaces__srv__GetAvailableSubtrees_Response__init(message_memory);
}

void ros_bt_py_interfaces__srv__GetAvailableSubtrees_Response__rosidl_typesupport_introspection_c__GetAvailableSubtrees_Response_fini_function(void * message_memory)
{
  ros_bt_py_interfaces__srv__GetAvailableSubtrees_Response__fini(message_memory);
}

size_t ros_bt_py_interfaces__srv__GetAvailableSubtrees_Response__rosidl_typesupport_introspection_c__size_function__GetAvailableSubtrees_Response__available_subtree_nodes(
  const void * untyped_member)
{
  const ros_bt_py_interfaces__msg__Node__Sequence * member =
    (const ros_bt_py_interfaces__msg__Node__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_bt_py_interfaces__srv__GetAvailableSubtrees_Response__rosidl_typesupport_introspection_c__get_const_function__GetAvailableSubtrees_Response__available_subtree_nodes(
  const void * untyped_member, size_t index)
{
  const ros_bt_py_interfaces__msg__Node__Sequence * member =
    (const ros_bt_py_interfaces__msg__Node__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_bt_py_interfaces__srv__GetAvailableSubtrees_Response__rosidl_typesupport_introspection_c__get_function__GetAvailableSubtrees_Response__available_subtree_nodes(
  void * untyped_member, size_t index)
{
  ros_bt_py_interfaces__msg__Node__Sequence * member =
    (ros_bt_py_interfaces__msg__Node__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_bt_py_interfaces__srv__GetAvailableSubtrees_Response__rosidl_typesupport_introspection_c__fetch_function__GetAvailableSubtrees_Response__available_subtree_nodes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros_bt_py_interfaces__msg__Node * item =
    ((const ros_bt_py_interfaces__msg__Node *)
    ros_bt_py_interfaces__srv__GetAvailableSubtrees_Response__rosidl_typesupport_introspection_c__get_const_function__GetAvailableSubtrees_Response__available_subtree_nodes(untyped_member, index));
  ros_bt_py_interfaces__msg__Node * value =
    (ros_bt_py_interfaces__msg__Node *)(untyped_value);
  *value = *item;
}

void ros_bt_py_interfaces__srv__GetAvailableSubtrees_Response__rosidl_typesupport_introspection_c__assign_function__GetAvailableSubtrees_Response__available_subtree_nodes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros_bt_py_interfaces__msg__Node * item =
    ((ros_bt_py_interfaces__msg__Node *)
    ros_bt_py_interfaces__srv__GetAvailableSubtrees_Response__rosidl_typesupport_introspection_c__get_function__GetAvailableSubtrees_Response__available_subtree_nodes(untyped_member, index));
  const ros_bt_py_interfaces__msg__Node * value =
    (const ros_bt_py_interfaces__msg__Node *)(untyped_value);
  *item = *value;
}

bool ros_bt_py_interfaces__srv__GetAvailableSubtrees_Response__rosidl_typesupport_introspection_c__resize_function__GetAvailableSubtrees_Response__available_subtree_nodes(
  void * untyped_member, size_t size)
{
  ros_bt_py_interfaces__msg__Node__Sequence * member =
    (ros_bt_py_interfaces__msg__Node__Sequence *)(untyped_member);
  ros_bt_py_interfaces__msg__Node__Sequence__fini(member);
  return ros_bt_py_interfaces__msg__Node__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros_bt_py_interfaces__srv__GetAvailableSubtrees_Response__rosidl_typesupport_introspection_c__GetAvailableSubtrees_Response_message_member_array[3] = {
  {
    "available_subtree_nodes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__srv__GetAvailableSubtrees_Response, available_subtree_nodes),  // bytes offset in struct
    NULL,  // default value
    ros_bt_py_interfaces__srv__GetAvailableSubtrees_Response__rosidl_typesupport_introspection_c__size_function__GetAvailableSubtrees_Response__available_subtree_nodes,  // size() function pointer
    ros_bt_py_interfaces__srv__GetAvailableSubtrees_Response__rosidl_typesupport_introspection_c__get_const_function__GetAvailableSubtrees_Response__available_subtree_nodes,  // get_const(index) function pointer
    ros_bt_py_interfaces__srv__GetAvailableSubtrees_Response__rosidl_typesupport_introspection_c__get_function__GetAvailableSubtrees_Response__available_subtree_nodes,  // get(index) function pointer
    ros_bt_py_interfaces__srv__GetAvailableSubtrees_Response__rosidl_typesupport_introspection_c__fetch_function__GetAvailableSubtrees_Response__available_subtree_nodes,  // fetch(index, &value) function pointer
    ros_bt_py_interfaces__srv__GetAvailableSubtrees_Response__rosidl_typesupport_introspection_c__assign_function__GetAvailableSubtrees_Response__available_subtree_nodes,  // assign(index, value) function pointer
    ros_bt_py_interfaces__srv__GetAvailableSubtrees_Response__rosidl_typesupport_introspection_c__resize_function__GetAvailableSubtrees_Response__available_subtree_nodes  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__srv__GetAvailableSubtrees_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__srv__GetAvailableSubtrees_Response, error_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_bt_py_interfaces__srv__GetAvailableSubtrees_Response__rosidl_typesupport_introspection_c__GetAvailableSubtrees_Response_message_members = {
  "ros_bt_py_interfaces__srv",  // message namespace
  "GetAvailableSubtrees_Response",  // message name
  3,  // number of fields
  sizeof(ros_bt_py_interfaces__srv__GetAvailableSubtrees_Response),
  ros_bt_py_interfaces__srv__GetAvailableSubtrees_Response__rosidl_typesupport_introspection_c__GetAvailableSubtrees_Response_message_member_array,  // message members
  ros_bt_py_interfaces__srv__GetAvailableSubtrees_Response__rosidl_typesupport_introspection_c__GetAvailableSubtrees_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_bt_py_interfaces__srv__GetAvailableSubtrees_Response__rosidl_typesupport_introspection_c__GetAvailableSubtrees_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_bt_py_interfaces__srv__GetAvailableSubtrees_Response__rosidl_typesupport_introspection_c__GetAvailableSubtrees_Response_message_type_support_handle = {
  0,
  &ros_bt_py_interfaces__srv__GetAvailableSubtrees_Response__rosidl_typesupport_introspection_c__GetAvailableSubtrees_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_bt_py_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, srv, GetAvailableSubtrees_Response)() {
  ros_bt_py_interfaces__srv__GetAvailableSubtrees_Response__rosidl_typesupport_introspection_c__GetAvailableSubtrees_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, msg, Node)();
  if (!ros_bt_py_interfaces__srv__GetAvailableSubtrees_Response__rosidl_typesupport_introspection_c__GetAvailableSubtrees_Response_message_type_support_handle.typesupport_identifier) {
    ros_bt_py_interfaces__srv__GetAvailableSubtrees_Response__rosidl_typesupport_introspection_c__GetAvailableSubtrees_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_bt_py_interfaces__srv__GetAvailableSubtrees_Response__rosidl_typesupport_introspection_c__GetAvailableSubtrees_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ros_bt_py_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ros_bt_py_interfaces/srv/detail/get_available_subtrees__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ros_bt_py_interfaces__srv__detail__get_available_subtrees__rosidl_typesupport_introspection_c__GetAvailableSubtrees_service_members = {
  "ros_bt_py_interfaces__srv",  // service namespace
  "GetAvailableSubtrees",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ros_bt_py_interfaces__srv__detail__get_available_subtrees__rosidl_typesupport_introspection_c__GetAvailableSubtrees_Request_message_type_support_handle,
  NULL  // response message
  // ros_bt_py_interfaces__srv__detail__get_available_subtrees__rosidl_typesupport_introspection_c__GetAvailableSubtrees_Response_message_type_support_handle
};

static rosidl_service_type_support_t ros_bt_py_interfaces__srv__detail__get_available_subtrees__rosidl_typesupport_introspection_c__GetAvailableSubtrees_service_type_support_handle = {
  0,
  &ros_bt_py_interfaces__srv__detail__get_available_subtrees__rosidl_typesupport_introspection_c__GetAvailableSubtrees_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, srv, GetAvailableSubtrees_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, srv, GetAvailableSubtrees_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_bt_py_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, srv, GetAvailableSubtrees)() {
  if (!ros_bt_py_interfaces__srv__detail__get_available_subtrees__rosidl_typesupport_introspection_c__GetAvailableSubtrees_service_type_support_handle.typesupport_identifier) {
    ros_bt_py_interfaces__srv__detail__get_available_subtrees__rosidl_typesupport_introspection_c__GetAvailableSubtrees_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ros_bt_py_interfaces__srv__detail__get_available_subtrees__rosidl_typesupport_introspection_c__GetAvailableSubtrees_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, srv, GetAvailableSubtrees_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, srv, GetAvailableSubtrees_Response)()->data;
  }

  return &ros_bt_py_interfaces__srv__detail__get_available_subtrees__rosidl_typesupport_introspection_c__GetAvailableSubtrees_service_type_support_handle;
}
