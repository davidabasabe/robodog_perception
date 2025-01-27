// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_bt_py_interfaces:msg/NodeDataWiring.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_bt_py_interfaces/msg/detail/node_data_wiring__rosidl_typesupport_introspection_c.h"
#include "ros_bt_py_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_bt_py_interfaces/msg/detail/node_data_wiring__functions.h"
#include "ros_bt_py_interfaces/msg/detail/node_data_wiring__struct.h"


// Include directives for member types
// Member `source`
// Member `target`
#include "ros_bt_py_interfaces/msg/node_data_location.h"
// Member `source`
// Member `target`
#include "ros_bt_py_interfaces/msg/detail/node_data_location__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_bt_py_interfaces__msg__NodeDataWiring__rosidl_typesupport_introspection_c__NodeDataWiring_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_bt_py_interfaces__msg__NodeDataWiring__init(message_memory);
}

void ros_bt_py_interfaces__msg__NodeDataWiring__rosidl_typesupport_introspection_c__NodeDataWiring_fini_function(void * message_memory)
{
  ros_bt_py_interfaces__msg__NodeDataWiring__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros_bt_py_interfaces__msg__NodeDataWiring__rosidl_typesupport_introspection_c__NodeDataWiring_message_member_array[2] = {
  {
    "source",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__msg__NodeDataWiring, source),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__msg__NodeDataWiring, target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_bt_py_interfaces__msg__NodeDataWiring__rosidl_typesupport_introspection_c__NodeDataWiring_message_members = {
  "ros_bt_py_interfaces__msg",  // message namespace
  "NodeDataWiring",  // message name
  2,  // number of fields
  sizeof(ros_bt_py_interfaces__msg__NodeDataWiring),
  ros_bt_py_interfaces__msg__NodeDataWiring__rosidl_typesupport_introspection_c__NodeDataWiring_message_member_array,  // message members
  ros_bt_py_interfaces__msg__NodeDataWiring__rosidl_typesupport_introspection_c__NodeDataWiring_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_bt_py_interfaces__msg__NodeDataWiring__rosidl_typesupport_introspection_c__NodeDataWiring_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_bt_py_interfaces__msg__NodeDataWiring__rosidl_typesupport_introspection_c__NodeDataWiring_message_type_support_handle = {
  0,
  &ros_bt_py_interfaces__msg__NodeDataWiring__rosidl_typesupport_introspection_c__NodeDataWiring_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_bt_py_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, msg, NodeDataWiring)() {
  ros_bt_py_interfaces__msg__NodeDataWiring__rosidl_typesupport_introspection_c__NodeDataWiring_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, msg, NodeDataLocation)();
  ros_bt_py_interfaces__msg__NodeDataWiring__rosidl_typesupport_introspection_c__NodeDataWiring_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, msg, NodeDataLocation)();
  if (!ros_bt_py_interfaces__msg__NodeDataWiring__rosidl_typesupport_introspection_c__NodeDataWiring_message_type_support_handle.typesupport_identifier) {
    ros_bt_py_interfaces__msg__NodeDataWiring__rosidl_typesupport_introspection_c__NodeDataWiring_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_bt_py_interfaces__msg__NodeDataWiring__rosidl_typesupport_introspection_c__NodeDataWiring_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
