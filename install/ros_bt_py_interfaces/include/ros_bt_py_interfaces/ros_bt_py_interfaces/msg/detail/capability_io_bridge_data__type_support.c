// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_bt_py_interfaces:msg/CapabilityIOBridgeData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_bt_py_interfaces/msg/detail/capability_io_bridge_data__rosidl_typesupport_introspection_c.h"
#include "ros_bt_py_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_bt_py_interfaces/msg/detail/capability_io_bridge_data__functions.h"
#include "ros_bt_py_interfaces/msg/detail/capability_io_bridge_data__struct.h"


// Include directives for member types
// Member `node_id`
// Member `type`
#include "rosidl_runtime_c/string_functions.h"
// Member `bridge_data`
#include "ros_bt_py_interfaces/msg/node_data.h"
// Member `bridge_data`
#include "ros_bt_py_interfaces/msg/detail/node_data__rosidl_typesupport_introspection_c.h"
// Member `timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_bt_py_interfaces__msg__CapabilityIOBridgeData__rosidl_typesupport_introspection_c__CapabilityIOBridgeData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_bt_py_interfaces__msg__CapabilityIOBridgeData__init(message_memory);
}

void ros_bt_py_interfaces__msg__CapabilityIOBridgeData__rosidl_typesupport_introspection_c__CapabilityIOBridgeData_fini_function(void * message_memory)
{
  ros_bt_py_interfaces__msg__CapabilityIOBridgeData__fini(message_memory);
}

size_t ros_bt_py_interfaces__msg__CapabilityIOBridgeData__rosidl_typesupport_introspection_c__size_function__CapabilityIOBridgeData__bridge_data(
  const void * untyped_member)
{
  const ros_bt_py_interfaces__msg__NodeData__Sequence * member =
    (const ros_bt_py_interfaces__msg__NodeData__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_bt_py_interfaces__msg__CapabilityIOBridgeData__rosidl_typesupport_introspection_c__get_const_function__CapabilityIOBridgeData__bridge_data(
  const void * untyped_member, size_t index)
{
  const ros_bt_py_interfaces__msg__NodeData__Sequence * member =
    (const ros_bt_py_interfaces__msg__NodeData__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_bt_py_interfaces__msg__CapabilityIOBridgeData__rosidl_typesupport_introspection_c__get_function__CapabilityIOBridgeData__bridge_data(
  void * untyped_member, size_t index)
{
  ros_bt_py_interfaces__msg__NodeData__Sequence * member =
    (ros_bt_py_interfaces__msg__NodeData__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_bt_py_interfaces__msg__CapabilityIOBridgeData__rosidl_typesupport_introspection_c__fetch_function__CapabilityIOBridgeData__bridge_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros_bt_py_interfaces__msg__NodeData * item =
    ((const ros_bt_py_interfaces__msg__NodeData *)
    ros_bt_py_interfaces__msg__CapabilityIOBridgeData__rosidl_typesupport_introspection_c__get_const_function__CapabilityIOBridgeData__bridge_data(untyped_member, index));
  ros_bt_py_interfaces__msg__NodeData * value =
    (ros_bt_py_interfaces__msg__NodeData *)(untyped_value);
  *value = *item;
}

void ros_bt_py_interfaces__msg__CapabilityIOBridgeData__rosidl_typesupport_introspection_c__assign_function__CapabilityIOBridgeData__bridge_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros_bt_py_interfaces__msg__NodeData * item =
    ((ros_bt_py_interfaces__msg__NodeData *)
    ros_bt_py_interfaces__msg__CapabilityIOBridgeData__rosidl_typesupport_introspection_c__get_function__CapabilityIOBridgeData__bridge_data(untyped_member, index));
  const ros_bt_py_interfaces__msg__NodeData * value =
    (const ros_bt_py_interfaces__msg__NodeData *)(untyped_value);
  *item = *value;
}

bool ros_bt_py_interfaces__msg__CapabilityIOBridgeData__rosidl_typesupport_introspection_c__resize_function__CapabilityIOBridgeData__bridge_data(
  void * untyped_member, size_t size)
{
  ros_bt_py_interfaces__msg__NodeData__Sequence * member =
    (ros_bt_py_interfaces__msg__NodeData__Sequence *)(untyped_member);
  ros_bt_py_interfaces__msg__NodeData__Sequence__fini(member);
  return ros_bt_py_interfaces__msg__NodeData__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros_bt_py_interfaces__msg__CapabilityIOBridgeData__rosidl_typesupport_introspection_c__CapabilityIOBridgeData_message_member_array[4] = {
  {
    "node_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__msg__CapabilityIOBridgeData, node_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__msg__CapabilityIOBridgeData, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bridge_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__msg__CapabilityIOBridgeData, bridge_data),  // bytes offset in struct
    NULL,  // default value
    ros_bt_py_interfaces__msg__CapabilityIOBridgeData__rosidl_typesupport_introspection_c__size_function__CapabilityIOBridgeData__bridge_data,  // size() function pointer
    ros_bt_py_interfaces__msg__CapabilityIOBridgeData__rosidl_typesupport_introspection_c__get_const_function__CapabilityIOBridgeData__bridge_data,  // get_const(index) function pointer
    ros_bt_py_interfaces__msg__CapabilityIOBridgeData__rosidl_typesupport_introspection_c__get_function__CapabilityIOBridgeData__bridge_data,  // get(index) function pointer
    ros_bt_py_interfaces__msg__CapabilityIOBridgeData__rosidl_typesupport_introspection_c__fetch_function__CapabilityIOBridgeData__bridge_data,  // fetch(index, &value) function pointer
    ros_bt_py_interfaces__msg__CapabilityIOBridgeData__rosidl_typesupport_introspection_c__assign_function__CapabilityIOBridgeData__bridge_data,  // assign(index, value) function pointer
    ros_bt_py_interfaces__msg__CapabilityIOBridgeData__rosidl_typesupport_introspection_c__resize_function__CapabilityIOBridgeData__bridge_data  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__msg__CapabilityIOBridgeData, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_bt_py_interfaces__msg__CapabilityIOBridgeData__rosidl_typesupport_introspection_c__CapabilityIOBridgeData_message_members = {
  "ros_bt_py_interfaces__msg",  // message namespace
  "CapabilityIOBridgeData",  // message name
  4,  // number of fields
  sizeof(ros_bt_py_interfaces__msg__CapabilityIOBridgeData),
  ros_bt_py_interfaces__msg__CapabilityIOBridgeData__rosidl_typesupport_introspection_c__CapabilityIOBridgeData_message_member_array,  // message members
  ros_bt_py_interfaces__msg__CapabilityIOBridgeData__rosidl_typesupport_introspection_c__CapabilityIOBridgeData_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_bt_py_interfaces__msg__CapabilityIOBridgeData__rosidl_typesupport_introspection_c__CapabilityIOBridgeData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_bt_py_interfaces__msg__CapabilityIOBridgeData__rosidl_typesupport_introspection_c__CapabilityIOBridgeData_message_type_support_handle = {
  0,
  &ros_bt_py_interfaces__msg__CapabilityIOBridgeData__rosidl_typesupport_introspection_c__CapabilityIOBridgeData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_bt_py_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, msg, CapabilityIOBridgeData)() {
  ros_bt_py_interfaces__msg__CapabilityIOBridgeData__rosidl_typesupport_introspection_c__CapabilityIOBridgeData_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, msg, NodeData)();
  ros_bt_py_interfaces__msg__CapabilityIOBridgeData__rosidl_typesupport_introspection_c__CapabilityIOBridgeData_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!ros_bt_py_interfaces__msg__CapabilityIOBridgeData__rosidl_typesupport_introspection_c__CapabilityIOBridgeData_message_type_support_handle.typesupport_identifier) {
    ros_bt_py_interfaces__msg__CapabilityIOBridgeData__rosidl_typesupport_introspection_c__CapabilityIOBridgeData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_bt_py_interfaces__msg__CapabilityIOBridgeData__rosidl_typesupport_introspection_c__CapabilityIOBridgeData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
