// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_bt_py_interfaces:msg/Tree.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_bt_py_interfaces/msg/detail/tree__rosidl_typesupport_introspection_c.h"
#include "ros_bt_py_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_bt_py_interfaces/msg/detail/tree__functions.h"
#include "ros_bt_py_interfaces/msg/detail/tree__struct.h"


// Include directives for member types
// Member `name`
// Member `path`
// Member `root_name`
// Member `state`
#include "rosidl_runtime_c/string_functions.h"
// Member `nodes`
#include "ros_bt_py_interfaces/msg/node.h"
// Member `nodes`
#include "ros_bt_py_interfaces/msg/detail/node__rosidl_typesupport_introspection_c.h"
// Member `data_wirings`
#include "ros_bt_py_interfaces/msg/node_data_wiring.h"
// Member `data_wirings`
#include "ros_bt_py_interfaces/msg/detail/node_data_wiring__rosidl_typesupport_introspection_c.h"
// Member `public_node_data`
#include "ros_bt_py_interfaces/msg/node_data_location.h"
// Member `public_node_data`
#include "ros_bt_py_interfaces/msg/detail/node_data_location__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__Tree_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_bt_py_interfaces__msg__Tree__init(message_memory);
}

void ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__Tree_fini_function(void * message_memory)
{
  ros_bt_py_interfaces__msg__Tree__fini(message_memory);
}

size_t ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__size_function__Tree__nodes(
  const void * untyped_member)
{
  const ros_bt_py_interfaces__msg__Node__Sequence * member =
    (const ros_bt_py_interfaces__msg__Node__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__get_const_function__Tree__nodes(
  const void * untyped_member, size_t index)
{
  const ros_bt_py_interfaces__msg__Node__Sequence * member =
    (const ros_bt_py_interfaces__msg__Node__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__get_function__Tree__nodes(
  void * untyped_member, size_t index)
{
  ros_bt_py_interfaces__msg__Node__Sequence * member =
    (ros_bt_py_interfaces__msg__Node__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__fetch_function__Tree__nodes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros_bt_py_interfaces__msg__Node * item =
    ((const ros_bt_py_interfaces__msg__Node *)
    ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__get_const_function__Tree__nodes(untyped_member, index));
  ros_bt_py_interfaces__msg__Node * value =
    (ros_bt_py_interfaces__msg__Node *)(untyped_value);
  *value = *item;
}

void ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__assign_function__Tree__nodes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros_bt_py_interfaces__msg__Node * item =
    ((ros_bt_py_interfaces__msg__Node *)
    ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__get_function__Tree__nodes(untyped_member, index));
  const ros_bt_py_interfaces__msg__Node * value =
    (const ros_bt_py_interfaces__msg__Node *)(untyped_value);
  *item = *value;
}

bool ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__resize_function__Tree__nodes(
  void * untyped_member, size_t size)
{
  ros_bt_py_interfaces__msg__Node__Sequence * member =
    (ros_bt_py_interfaces__msg__Node__Sequence *)(untyped_member);
  ros_bt_py_interfaces__msg__Node__Sequence__fini(member);
  return ros_bt_py_interfaces__msg__Node__Sequence__init(member, size);
}

size_t ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__size_function__Tree__data_wirings(
  const void * untyped_member)
{
  const ros_bt_py_interfaces__msg__NodeDataWiring__Sequence * member =
    (const ros_bt_py_interfaces__msg__NodeDataWiring__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__get_const_function__Tree__data_wirings(
  const void * untyped_member, size_t index)
{
  const ros_bt_py_interfaces__msg__NodeDataWiring__Sequence * member =
    (const ros_bt_py_interfaces__msg__NodeDataWiring__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__get_function__Tree__data_wirings(
  void * untyped_member, size_t index)
{
  ros_bt_py_interfaces__msg__NodeDataWiring__Sequence * member =
    (ros_bt_py_interfaces__msg__NodeDataWiring__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__fetch_function__Tree__data_wirings(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros_bt_py_interfaces__msg__NodeDataWiring * item =
    ((const ros_bt_py_interfaces__msg__NodeDataWiring *)
    ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__get_const_function__Tree__data_wirings(untyped_member, index));
  ros_bt_py_interfaces__msg__NodeDataWiring * value =
    (ros_bt_py_interfaces__msg__NodeDataWiring *)(untyped_value);
  *value = *item;
}

void ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__assign_function__Tree__data_wirings(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros_bt_py_interfaces__msg__NodeDataWiring * item =
    ((ros_bt_py_interfaces__msg__NodeDataWiring *)
    ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__get_function__Tree__data_wirings(untyped_member, index));
  const ros_bt_py_interfaces__msg__NodeDataWiring * value =
    (const ros_bt_py_interfaces__msg__NodeDataWiring *)(untyped_value);
  *item = *value;
}

bool ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__resize_function__Tree__data_wirings(
  void * untyped_member, size_t size)
{
  ros_bt_py_interfaces__msg__NodeDataWiring__Sequence * member =
    (ros_bt_py_interfaces__msg__NodeDataWiring__Sequence *)(untyped_member);
  ros_bt_py_interfaces__msg__NodeDataWiring__Sequence__fini(member);
  return ros_bt_py_interfaces__msg__NodeDataWiring__Sequence__init(member, size);
}

size_t ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__size_function__Tree__public_node_data(
  const void * untyped_member)
{
  const ros_bt_py_interfaces__msg__NodeDataLocation__Sequence * member =
    (const ros_bt_py_interfaces__msg__NodeDataLocation__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__get_const_function__Tree__public_node_data(
  const void * untyped_member, size_t index)
{
  const ros_bt_py_interfaces__msg__NodeDataLocation__Sequence * member =
    (const ros_bt_py_interfaces__msg__NodeDataLocation__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__get_function__Tree__public_node_data(
  void * untyped_member, size_t index)
{
  ros_bt_py_interfaces__msg__NodeDataLocation__Sequence * member =
    (ros_bt_py_interfaces__msg__NodeDataLocation__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__fetch_function__Tree__public_node_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros_bt_py_interfaces__msg__NodeDataLocation * item =
    ((const ros_bt_py_interfaces__msg__NodeDataLocation *)
    ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__get_const_function__Tree__public_node_data(untyped_member, index));
  ros_bt_py_interfaces__msg__NodeDataLocation * value =
    (ros_bt_py_interfaces__msg__NodeDataLocation *)(untyped_value);
  *value = *item;
}

void ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__assign_function__Tree__public_node_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros_bt_py_interfaces__msg__NodeDataLocation * item =
    ((ros_bt_py_interfaces__msg__NodeDataLocation *)
    ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__get_function__Tree__public_node_data(untyped_member, index));
  const ros_bt_py_interfaces__msg__NodeDataLocation * value =
    (const ros_bt_py_interfaces__msg__NodeDataLocation *)(untyped_value);
  *item = *value;
}

bool ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__resize_function__Tree__public_node_data(
  void * untyped_member, size_t size)
{
  ros_bt_py_interfaces__msg__NodeDataLocation__Sequence * member =
    (ros_bt_py_interfaces__msg__NodeDataLocation__Sequence *)(untyped_member);
  ros_bt_py_interfaces__msg__NodeDataLocation__Sequence__fini(member);
  return ros_bt_py_interfaces__msg__NodeDataLocation__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__Tree_message_member_array[8] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__msg__Tree, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__msg__Tree, path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "root_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__msg__Tree, root_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nodes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__msg__Tree, nodes),  // bytes offset in struct
    NULL,  // default value
    ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__size_function__Tree__nodes,  // size() function pointer
    ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__get_const_function__Tree__nodes,  // get_const(index) function pointer
    ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__get_function__Tree__nodes,  // get(index) function pointer
    ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__fetch_function__Tree__nodes,  // fetch(index, &value) function pointer
    ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__assign_function__Tree__nodes,  // assign(index, value) function pointer
    ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__resize_function__Tree__nodes  // resize(index) function pointer
  },
  {
    "data_wirings",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__msg__Tree, data_wirings),  // bytes offset in struct
    NULL,  // default value
    ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__size_function__Tree__data_wirings,  // size() function pointer
    ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__get_const_function__Tree__data_wirings,  // get_const(index) function pointer
    ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__get_function__Tree__data_wirings,  // get(index) function pointer
    ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__fetch_function__Tree__data_wirings,  // fetch(index, &value) function pointer
    ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__assign_function__Tree__data_wirings,  // assign(index, value) function pointer
    ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__resize_function__Tree__data_wirings  // resize(index) function pointer
  },
  {
    "tick_frequency_hz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__msg__Tree, tick_frequency_hz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__msg__Tree, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "public_node_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__msg__Tree, public_node_data),  // bytes offset in struct
    NULL,  // default value
    ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__size_function__Tree__public_node_data,  // size() function pointer
    ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__get_const_function__Tree__public_node_data,  // get_const(index) function pointer
    ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__get_function__Tree__public_node_data,  // get(index) function pointer
    ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__fetch_function__Tree__public_node_data,  // fetch(index, &value) function pointer
    ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__assign_function__Tree__public_node_data,  // assign(index, value) function pointer
    ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__resize_function__Tree__public_node_data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__Tree_message_members = {
  "ros_bt_py_interfaces__msg",  // message namespace
  "Tree",  // message name
  8,  // number of fields
  sizeof(ros_bt_py_interfaces__msg__Tree),
  ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__Tree_message_member_array,  // message members
  ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__Tree_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__Tree_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__Tree_message_type_support_handle = {
  0,
  &ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__Tree_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_bt_py_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, msg, Tree)() {
  ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__Tree_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, msg, Node)();
  ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__Tree_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, msg, NodeDataWiring)();
  ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__Tree_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, msg, NodeDataLocation)();
  if (!ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__Tree_message_type_support_handle.typesupport_identifier) {
    ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__Tree_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_bt_py_interfaces__msg__Tree__rosidl_typesupport_introspection_c__Tree_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
