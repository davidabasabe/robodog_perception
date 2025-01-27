// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_bt_py_interfaces:srv/GetCapabilityImplementations.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_bt_py_interfaces/srv/detail/get_capability_implementations__rosidl_typesupport_introspection_c.h"
#include "ros_bt_py_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_bt_py_interfaces/srv/detail/get_capability_implementations__functions.h"
#include "ros_bt_py_interfaces/srv/detail/get_capability_implementations__struct.h"


// Include directives for member types
// Member `interface`
#include "ros_bt_py_interfaces/msg/capability_interface.h"
// Member `interface`
#include "ros_bt_py_interfaces/msg/detail/capability_interface__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_bt_py_interfaces__srv__GetCapabilityImplementations_Request__rosidl_typesupport_introspection_c__GetCapabilityImplementations_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_bt_py_interfaces__srv__GetCapabilityImplementations_Request__init(message_memory);
}

void ros_bt_py_interfaces__srv__GetCapabilityImplementations_Request__rosidl_typesupport_introspection_c__GetCapabilityImplementations_Request_fini_function(void * message_memory)
{
  ros_bt_py_interfaces__srv__GetCapabilityImplementations_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros_bt_py_interfaces__srv__GetCapabilityImplementations_Request__rosidl_typesupport_introspection_c__GetCapabilityImplementations_Request_message_member_array[1] = {
  {
    "interface",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__srv__GetCapabilityImplementations_Request, interface),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_bt_py_interfaces__srv__GetCapabilityImplementations_Request__rosidl_typesupport_introspection_c__GetCapabilityImplementations_Request_message_members = {
  "ros_bt_py_interfaces__srv",  // message namespace
  "GetCapabilityImplementations_Request",  // message name
  1,  // number of fields
  sizeof(ros_bt_py_interfaces__srv__GetCapabilityImplementations_Request),
  ros_bt_py_interfaces__srv__GetCapabilityImplementations_Request__rosidl_typesupport_introspection_c__GetCapabilityImplementations_Request_message_member_array,  // message members
  ros_bt_py_interfaces__srv__GetCapabilityImplementations_Request__rosidl_typesupport_introspection_c__GetCapabilityImplementations_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_bt_py_interfaces__srv__GetCapabilityImplementations_Request__rosidl_typesupport_introspection_c__GetCapabilityImplementations_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_bt_py_interfaces__srv__GetCapabilityImplementations_Request__rosidl_typesupport_introspection_c__GetCapabilityImplementations_Request_message_type_support_handle = {
  0,
  &ros_bt_py_interfaces__srv__GetCapabilityImplementations_Request__rosidl_typesupport_introspection_c__GetCapabilityImplementations_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_bt_py_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, srv, GetCapabilityImplementations_Request)() {
  ros_bt_py_interfaces__srv__GetCapabilityImplementations_Request__rosidl_typesupport_introspection_c__GetCapabilityImplementations_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, msg, CapabilityInterface)();
  if (!ros_bt_py_interfaces__srv__GetCapabilityImplementations_Request__rosidl_typesupport_introspection_c__GetCapabilityImplementations_Request_message_type_support_handle.typesupport_identifier) {
    ros_bt_py_interfaces__srv__GetCapabilityImplementations_Request__rosidl_typesupport_introspection_c__GetCapabilityImplementations_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_bt_py_interfaces__srv__GetCapabilityImplementations_Request__rosidl_typesupport_introspection_c__GetCapabilityImplementations_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros_bt_py_interfaces/srv/detail/get_capability_implementations__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros_bt_py_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros_bt_py_interfaces/srv/detail/get_capability_implementations__functions.h"
// already included above
// #include "ros_bt_py_interfaces/srv/detail/get_capability_implementations__struct.h"


// Include directives for member types
// Member `implementations`
#include "ros_bt_py_interfaces/msg/capability_implementation.h"
// Member `implementations`
#include "ros_bt_py_interfaces/msg/detail/capability_implementation__rosidl_typesupport_introspection_c.h"
// Member `error_message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response__rosidl_typesupport_introspection_c__GetCapabilityImplementations_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response__init(message_memory);
}

void ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response__rosidl_typesupport_introspection_c__GetCapabilityImplementations_Response_fini_function(void * message_memory)
{
  ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response__fini(message_memory);
}

size_t ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response__rosidl_typesupport_introspection_c__size_function__GetCapabilityImplementations_Response__implementations(
  const void * untyped_member)
{
  const ros_bt_py_interfaces__msg__CapabilityImplementation__Sequence * member =
    (const ros_bt_py_interfaces__msg__CapabilityImplementation__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response__rosidl_typesupport_introspection_c__get_const_function__GetCapabilityImplementations_Response__implementations(
  const void * untyped_member, size_t index)
{
  const ros_bt_py_interfaces__msg__CapabilityImplementation__Sequence * member =
    (const ros_bt_py_interfaces__msg__CapabilityImplementation__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response__rosidl_typesupport_introspection_c__get_function__GetCapabilityImplementations_Response__implementations(
  void * untyped_member, size_t index)
{
  ros_bt_py_interfaces__msg__CapabilityImplementation__Sequence * member =
    (ros_bt_py_interfaces__msg__CapabilityImplementation__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response__rosidl_typesupport_introspection_c__fetch_function__GetCapabilityImplementations_Response__implementations(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros_bt_py_interfaces__msg__CapabilityImplementation * item =
    ((const ros_bt_py_interfaces__msg__CapabilityImplementation *)
    ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response__rosidl_typesupport_introspection_c__get_const_function__GetCapabilityImplementations_Response__implementations(untyped_member, index));
  ros_bt_py_interfaces__msg__CapabilityImplementation * value =
    (ros_bt_py_interfaces__msg__CapabilityImplementation *)(untyped_value);
  *value = *item;
}

void ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response__rosidl_typesupport_introspection_c__assign_function__GetCapabilityImplementations_Response__implementations(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros_bt_py_interfaces__msg__CapabilityImplementation * item =
    ((ros_bt_py_interfaces__msg__CapabilityImplementation *)
    ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response__rosidl_typesupport_introspection_c__get_function__GetCapabilityImplementations_Response__implementations(untyped_member, index));
  const ros_bt_py_interfaces__msg__CapabilityImplementation * value =
    (const ros_bt_py_interfaces__msg__CapabilityImplementation *)(untyped_value);
  *item = *value;
}

bool ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response__rosidl_typesupport_introspection_c__resize_function__GetCapabilityImplementations_Response__implementations(
  void * untyped_member, size_t size)
{
  ros_bt_py_interfaces__msg__CapabilityImplementation__Sequence * member =
    (ros_bt_py_interfaces__msg__CapabilityImplementation__Sequence *)(untyped_member);
  ros_bt_py_interfaces__msg__CapabilityImplementation__Sequence__fini(member);
  return ros_bt_py_interfaces__msg__CapabilityImplementation__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response__rosidl_typesupport_introspection_c__GetCapabilityImplementations_Response_message_member_array[3] = {
  {
    "implementations",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response, implementations),  // bytes offset in struct
    NULL,  // default value
    ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response__rosidl_typesupport_introspection_c__size_function__GetCapabilityImplementations_Response__implementations,  // size() function pointer
    ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response__rosidl_typesupport_introspection_c__get_const_function__GetCapabilityImplementations_Response__implementations,  // get_const(index) function pointer
    ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response__rosidl_typesupport_introspection_c__get_function__GetCapabilityImplementations_Response__implementations,  // get(index) function pointer
    ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response__rosidl_typesupport_introspection_c__fetch_function__GetCapabilityImplementations_Response__implementations,  // fetch(index, &value) function pointer
    ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response__rosidl_typesupport_introspection_c__assign_function__GetCapabilityImplementations_Response__implementations,  // assign(index, value) function pointer
    ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response__rosidl_typesupport_introspection_c__resize_function__GetCapabilityImplementations_Response__implementations  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response, success),  // bytes offset in struct
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
    offsetof(ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response, error_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response__rosidl_typesupport_introspection_c__GetCapabilityImplementations_Response_message_members = {
  "ros_bt_py_interfaces__srv",  // message namespace
  "GetCapabilityImplementations_Response",  // message name
  3,  // number of fields
  sizeof(ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response),
  ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response__rosidl_typesupport_introspection_c__GetCapabilityImplementations_Response_message_member_array,  // message members
  ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response__rosidl_typesupport_introspection_c__GetCapabilityImplementations_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response__rosidl_typesupport_introspection_c__GetCapabilityImplementations_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response__rosidl_typesupport_introspection_c__GetCapabilityImplementations_Response_message_type_support_handle = {
  0,
  &ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response__rosidl_typesupport_introspection_c__GetCapabilityImplementations_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_bt_py_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, srv, GetCapabilityImplementations_Response)() {
  ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response__rosidl_typesupport_introspection_c__GetCapabilityImplementations_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, msg, CapabilityImplementation)();
  if (!ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response__rosidl_typesupport_introspection_c__GetCapabilityImplementations_Response_message_type_support_handle.typesupport_identifier) {
    ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response__rosidl_typesupport_introspection_c__GetCapabilityImplementations_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_bt_py_interfaces__srv__GetCapabilityImplementations_Response__rosidl_typesupport_introspection_c__GetCapabilityImplementations_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ros_bt_py_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ros_bt_py_interfaces/srv/detail/get_capability_implementations__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ros_bt_py_interfaces__srv__detail__get_capability_implementations__rosidl_typesupport_introspection_c__GetCapabilityImplementations_service_members = {
  "ros_bt_py_interfaces__srv",  // service namespace
  "GetCapabilityImplementations",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ros_bt_py_interfaces__srv__detail__get_capability_implementations__rosidl_typesupport_introspection_c__GetCapabilityImplementations_Request_message_type_support_handle,
  NULL  // response message
  // ros_bt_py_interfaces__srv__detail__get_capability_implementations__rosidl_typesupport_introspection_c__GetCapabilityImplementations_Response_message_type_support_handle
};

static rosidl_service_type_support_t ros_bt_py_interfaces__srv__detail__get_capability_implementations__rosidl_typesupport_introspection_c__GetCapabilityImplementations_service_type_support_handle = {
  0,
  &ros_bt_py_interfaces__srv__detail__get_capability_implementations__rosidl_typesupport_introspection_c__GetCapabilityImplementations_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, srv, GetCapabilityImplementations_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, srv, GetCapabilityImplementations_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_bt_py_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, srv, GetCapabilityImplementations)() {
  if (!ros_bt_py_interfaces__srv__detail__get_capability_implementations__rosidl_typesupport_introspection_c__GetCapabilityImplementations_service_type_support_handle.typesupport_identifier) {
    ros_bt_py_interfaces__srv__detail__get_capability_implementations__rosidl_typesupport_introspection_c__GetCapabilityImplementations_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ros_bt_py_interfaces__srv__detail__get_capability_implementations__rosidl_typesupport_introspection_c__GetCapabilityImplementations_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, srv, GetCapabilityImplementations_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, srv, GetCapabilityImplementations_Response)()->data;
  }

  return &ros_bt_py_interfaces__srv__detail__get_capability_implementations__rosidl_typesupport_introspection_c__GetCapabilityImplementations_service_type_support_handle;
}
