// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_bt_py_interfaces:msg/PingMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_bt_py_interfaces/msg/detail/ping_msg__rosidl_typesupport_introspection_c.h"
#include "ros_bt_py_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_bt_py_interfaces/msg/detail/ping_msg__functions.h"
#include "ros_bt_py_interfaces/msg/detail/ping_msg__struct.h"


// Include directives for member types
// Member `node_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_bt_py_interfaces__msg__PingMsg__rosidl_typesupport_introspection_c__PingMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_bt_py_interfaces__msg__PingMsg__init(message_memory);
}

void ros_bt_py_interfaces__msg__PingMsg__rosidl_typesupport_introspection_c__PingMsg_fini_function(void * message_memory)
{
  ros_bt_py_interfaces__msg__PingMsg__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros_bt_py_interfaces__msg__PingMsg__rosidl_typesupport_introspection_c__PingMsg_message_member_array[2] = {
  {
    "node_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__msg__PingMsg, node_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__msg__PingMsg, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_bt_py_interfaces__msg__PingMsg__rosidl_typesupport_introspection_c__PingMsg_message_members = {
  "ros_bt_py_interfaces__msg",  // message namespace
  "PingMsg",  // message name
  2,  // number of fields
  sizeof(ros_bt_py_interfaces__msg__PingMsg),
  ros_bt_py_interfaces__msg__PingMsg__rosidl_typesupport_introspection_c__PingMsg_message_member_array,  // message members
  ros_bt_py_interfaces__msg__PingMsg__rosidl_typesupport_introspection_c__PingMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_bt_py_interfaces__msg__PingMsg__rosidl_typesupport_introspection_c__PingMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_bt_py_interfaces__msg__PingMsg__rosidl_typesupport_introspection_c__PingMsg_message_type_support_handle = {
  0,
  &ros_bt_py_interfaces__msg__PingMsg__rosidl_typesupport_introspection_c__PingMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_bt_py_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, msg, PingMsg)() {
  ros_bt_py_interfaces__msg__PingMsg__rosidl_typesupport_introspection_c__PingMsg_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!ros_bt_py_interfaces__msg__PingMsg__rosidl_typesupport_introspection_c__PingMsg_message_type_support_handle.typesupport_identifier) {
    ros_bt_py_interfaces__msg__PingMsg__rosidl_typesupport_introspection_c__PingMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_bt_py_interfaces__msg__PingMsg__rosidl_typesupport_introspection_c__PingMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
