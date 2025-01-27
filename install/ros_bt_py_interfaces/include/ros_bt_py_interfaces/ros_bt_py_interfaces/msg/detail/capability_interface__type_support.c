// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_bt_py_interfaces:msg/CapabilityInterface.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_bt_py_interfaces/msg/detail/capability_interface__rosidl_typesupport_introspection_c.h"
#include "ros_bt_py_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_bt_py_interfaces/msg/detail/capability_interface__functions.h"
#include "ros_bt_py_interfaces/msg/detail/capability_interface__struct.h"


// Include directives for member types
// Member `name`
// Member `description`
#include "rosidl_runtime_c/string_functions.h"
// Member `options`
// Member `inputs`
// Member `outputs`
#include "ros_bt_py_interfaces/msg/node_data.h"
// Member `options`
// Member `inputs`
// Member `outputs`
#include "ros_bt_py_interfaces/msg/detail/node_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__CapabilityInterface_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_bt_py_interfaces__msg__CapabilityInterface__init(message_memory);
}

void ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__CapabilityInterface_fini_function(void * message_memory)
{
  ros_bt_py_interfaces__msg__CapabilityInterface__fini(message_memory);
}

size_t ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__size_function__CapabilityInterface__options(
  const void * untyped_member)
{
  const ros_bt_py_interfaces__msg__NodeData__Sequence * member =
    (const ros_bt_py_interfaces__msg__NodeData__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__get_const_function__CapabilityInterface__options(
  const void * untyped_member, size_t index)
{
  const ros_bt_py_interfaces__msg__NodeData__Sequence * member =
    (const ros_bt_py_interfaces__msg__NodeData__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__get_function__CapabilityInterface__options(
  void * untyped_member, size_t index)
{
  ros_bt_py_interfaces__msg__NodeData__Sequence * member =
    (ros_bt_py_interfaces__msg__NodeData__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__fetch_function__CapabilityInterface__options(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros_bt_py_interfaces__msg__NodeData * item =
    ((const ros_bt_py_interfaces__msg__NodeData *)
    ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__get_const_function__CapabilityInterface__options(untyped_member, index));
  ros_bt_py_interfaces__msg__NodeData * value =
    (ros_bt_py_interfaces__msg__NodeData *)(untyped_value);
  *value = *item;
}

void ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__assign_function__CapabilityInterface__options(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros_bt_py_interfaces__msg__NodeData * item =
    ((ros_bt_py_interfaces__msg__NodeData *)
    ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__get_function__CapabilityInterface__options(untyped_member, index));
  const ros_bt_py_interfaces__msg__NodeData * value =
    (const ros_bt_py_interfaces__msg__NodeData *)(untyped_value);
  *item = *value;
}

bool ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__resize_function__CapabilityInterface__options(
  void * untyped_member, size_t size)
{
  ros_bt_py_interfaces__msg__NodeData__Sequence * member =
    (ros_bt_py_interfaces__msg__NodeData__Sequence *)(untyped_member);
  ros_bt_py_interfaces__msg__NodeData__Sequence__fini(member);
  return ros_bt_py_interfaces__msg__NodeData__Sequence__init(member, size);
}

size_t ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__size_function__CapabilityInterface__inputs(
  const void * untyped_member)
{
  const ros_bt_py_interfaces__msg__NodeData__Sequence * member =
    (const ros_bt_py_interfaces__msg__NodeData__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__get_const_function__CapabilityInterface__inputs(
  const void * untyped_member, size_t index)
{
  const ros_bt_py_interfaces__msg__NodeData__Sequence * member =
    (const ros_bt_py_interfaces__msg__NodeData__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__get_function__CapabilityInterface__inputs(
  void * untyped_member, size_t index)
{
  ros_bt_py_interfaces__msg__NodeData__Sequence * member =
    (ros_bt_py_interfaces__msg__NodeData__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__fetch_function__CapabilityInterface__inputs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros_bt_py_interfaces__msg__NodeData * item =
    ((const ros_bt_py_interfaces__msg__NodeData *)
    ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__get_const_function__CapabilityInterface__inputs(untyped_member, index));
  ros_bt_py_interfaces__msg__NodeData * value =
    (ros_bt_py_interfaces__msg__NodeData *)(untyped_value);
  *value = *item;
}

void ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__assign_function__CapabilityInterface__inputs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros_bt_py_interfaces__msg__NodeData * item =
    ((ros_bt_py_interfaces__msg__NodeData *)
    ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__get_function__CapabilityInterface__inputs(untyped_member, index));
  const ros_bt_py_interfaces__msg__NodeData * value =
    (const ros_bt_py_interfaces__msg__NodeData *)(untyped_value);
  *item = *value;
}

bool ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__resize_function__CapabilityInterface__inputs(
  void * untyped_member, size_t size)
{
  ros_bt_py_interfaces__msg__NodeData__Sequence * member =
    (ros_bt_py_interfaces__msg__NodeData__Sequence *)(untyped_member);
  ros_bt_py_interfaces__msg__NodeData__Sequence__fini(member);
  return ros_bt_py_interfaces__msg__NodeData__Sequence__init(member, size);
}

size_t ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__size_function__CapabilityInterface__outputs(
  const void * untyped_member)
{
  const ros_bt_py_interfaces__msg__NodeData__Sequence * member =
    (const ros_bt_py_interfaces__msg__NodeData__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__get_const_function__CapabilityInterface__outputs(
  const void * untyped_member, size_t index)
{
  const ros_bt_py_interfaces__msg__NodeData__Sequence * member =
    (const ros_bt_py_interfaces__msg__NodeData__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__get_function__CapabilityInterface__outputs(
  void * untyped_member, size_t index)
{
  ros_bt_py_interfaces__msg__NodeData__Sequence * member =
    (ros_bt_py_interfaces__msg__NodeData__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__fetch_function__CapabilityInterface__outputs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros_bt_py_interfaces__msg__NodeData * item =
    ((const ros_bt_py_interfaces__msg__NodeData *)
    ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__get_const_function__CapabilityInterface__outputs(untyped_member, index));
  ros_bt_py_interfaces__msg__NodeData * value =
    (ros_bt_py_interfaces__msg__NodeData *)(untyped_value);
  *value = *item;
}

void ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__assign_function__CapabilityInterface__outputs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros_bt_py_interfaces__msg__NodeData * item =
    ((ros_bt_py_interfaces__msg__NodeData *)
    ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__get_function__CapabilityInterface__outputs(untyped_member, index));
  const ros_bt_py_interfaces__msg__NodeData * value =
    (const ros_bt_py_interfaces__msg__NodeData *)(untyped_value);
  *item = *value;
}

bool ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__resize_function__CapabilityInterface__outputs(
  void * untyped_member, size_t size)
{
  ros_bt_py_interfaces__msg__NodeData__Sequence * member =
    (ros_bt_py_interfaces__msg__NodeData__Sequence *)(untyped_member);
  ros_bt_py_interfaces__msg__NodeData__Sequence__fini(member);
  return ros_bt_py_interfaces__msg__NodeData__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__CapabilityInterface_message_member_array[5] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__msg__CapabilityInterface, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "description",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__msg__CapabilityInterface, description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "options",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__msg__CapabilityInterface, options),  // bytes offset in struct
    NULL,  // default value
    ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__size_function__CapabilityInterface__options,  // size() function pointer
    ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__get_const_function__CapabilityInterface__options,  // get_const(index) function pointer
    ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__get_function__CapabilityInterface__options,  // get(index) function pointer
    ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__fetch_function__CapabilityInterface__options,  // fetch(index, &value) function pointer
    ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__assign_function__CapabilityInterface__options,  // assign(index, value) function pointer
    ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__resize_function__CapabilityInterface__options  // resize(index) function pointer
  },
  {
    "inputs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__msg__CapabilityInterface, inputs),  // bytes offset in struct
    NULL,  // default value
    ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__size_function__CapabilityInterface__inputs,  // size() function pointer
    ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__get_const_function__CapabilityInterface__inputs,  // get_const(index) function pointer
    ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__get_function__CapabilityInterface__inputs,  // get(index) function pointer
    ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__fetch_function__CapabilityInterface__inputs,  // fetch(index, &value) function pointer
    ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__assign_function__CapabilityInterface__inputs,  // assign(index, value) function pointer
    ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__resize_function__CapabilityInterface__inputs  // resize(index) function pointer
  },
  {
    "outputs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__msg__CapabilityInterface, outputs),  // bytes offset in struct
    NULL,  // default value
    ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__size_function__CapabilityInterface__outputs,  // size() function pointer
    ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__get_const_function__CapabilityInterface__outputs,  // get_const(index) function pointer
    ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__get_function__CapabilityInterface__outputs,  // get(index) function pointer
    ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__fetch_function__CapabilityInterface__outputs,  // fetch(index, &value) function pointer
    ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__assign_function__CapabilityInterface__outputs,  // assign(index, value) function pointer
    ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__resize_function__CapabilityInterface__outputs  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__CapabilityInterface_message_members = {
  "ros_bt_py_interfaces__msg",  // message namespace
  "CapabilityInterface",  // message name
  5,  // number of fields
  sizeof(ros_bt_py_interfaces__msg__CapabilityInterface),
  ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__CapabilityInterface_message_member_array,  // message members
  ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__CapabilityInterface_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__CapabilityInterface_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__CapabilityInterface_message_type_support_handle = {
  0,
  &ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__CapabilityInterface_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_bt_py_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, msg, CapabilityInterface)() {
  ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__CapabilityInterface_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, msg, NodeData)();
  ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__CapabilityInterface_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, msg, NodeData)();
  ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__CapabilityInterface_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, msg, NodeData)();
  if (!ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__CapabilityInterface_message_type_support_handle.typesupport_identifier) {
    ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__CapabilityInterface_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_bt_py_interfaces__msg__CapabilityInterface__rosidl_typesupport_introspection_c__CapabilityInterface_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
