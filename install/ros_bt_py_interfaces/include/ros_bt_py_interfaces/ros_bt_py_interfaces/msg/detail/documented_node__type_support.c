// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_bt_py_interfaces:msg/DocumentedNode.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_bt_py_interfaces/msg/detail/documented_node__rosidl_typesupport_introspection_c.h"
#include "ros_bt_py_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_bt_py_interfaces/msg/detail/documented_node__functions.h"
#include "ros_bt_py_interfaces/msg/detail/documented_node__struct.h"


// Include directives for member types
// Member `module`
// Member `node_class`
// Member `version`
// Member `name`
// Member `child_names`
// Member `doc`
// Member `tags`
// Member `state`
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

void ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__DocumentedNode_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_bt_py_interfaces__msg__DocumentedNode__init(message_memory);
}

void ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__DocumentedNode_fini_function(void * message_memory)
{
  ros_bt_py_interfaces__msg__DocumentedNode__fini(message_memory);
}

size_t ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__size_function__DocumentedNode__child_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__get_const_function__DocumentedNode__child_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__get_function__DocumentedNode__child_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__fetch_function__DocumentedNode__child_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__get_const_function__DocumentedNode__child_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__assign_function__DocumentedNode__child_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__get_function__DocumentedNode__child_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__resize_function__DocumentedNode__child_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__size_function__DocumentedNode__options(
  const void * untyped_member)
{
  const ros_bt_py_interfaces__msg__NodeData__Sequence * member =
    (const ros_bt_py_interfaces__msg__NodeData__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__get_const_function__DocumentedNode__options(
  const void * untyped_member, size_t index)
{
  const ros_bt_py_interfaces__msg__NodeData__Sequence * member =
    (const ros_bt_py_interfaces__msg__NodeData__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__get_function__DocumentedNode__options(
  void * untyped_member, size_t index)
{
  ros_bt_py_interfaces__msg__NodeData__Sequence * member =
    (ros_bt_py_interfaces__msg__NodeData__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__fetch_function__DocumentedNode__options(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros_bt_py_interfaces__msg__NodeData * item =
    ((const ros_bt_py_interfaces__msg__NodeData *)
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__get_const_function__DocumentedNode__options(untyped_member, index));
  ros_bt_py_interfaces__msg__NodeData * value =
    (ros_bt_py_interfaces__msg__NodeData *)(untyped_value);
  *value = *item;
}

void ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__assign_function__DocumentedNode__options(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros_bt_py_interfaces__msg__NodeData * item =
    ((ros_bt_py_interfaces__msg__NodeData *)
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__get_function__DocumentedNode__options(untyped_member, index));
  const ros_bt_py_interfaces__msg__NodeData * value =
    (const ros_bt_py_interfaces__msg__NodeData *)(untyped_value);
  *item = *value;
}

bool ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__resize_function__DocumentedNode__options(
  void * untyped_member, size_t size)
{
  ros_bt_py_interfaces__msg__NodeData__Sequence * member =
    (ros_bt_py_interfaces__msg__NodeData__Sequence *)(untyped_member);
  ros_bt_py_interfaces__msg__NodeData__Sequence__fini(member);
  return ros_bt_py_interfaces__msg__NodeData__Sequence__init(member, size);
}

size_t ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__size_function__DocumentedNode__inputs(
  const void * untyped_member)
{
  const ros_bt_py_interfaces__msg__NodeData__Sequence * member =
    (const ros_bt_py_interfaces__msg__NodeData__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__get_const_function__DocumentedNode__inputs(
  const void * untyped_member, size_t index)
{
  const ros_bt_py_interfaces__msg__NodeData__Sequence * member =
    (const ros_bt_py_interfaces__msg__NodeData__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__get_function__DocumentedNode__inputs(
  void * untyped_member, size_t index)
{
  ros_bt_py_interfaces__msg__NodeData__Sequence * member =
    (ros_bt_py_interfaces__msg__NodeData__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__fetch_function__DocumentedNode__inputs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros_bt_py_interfaces__msg__NodeData * item =
    ((const ros_bt_py_interfaces__msg__NodeData *)
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__get_const_function__DocumentedNode__inputs(untyped_member, index));
  ros_bt_py_interfaces__msg__NodeData * value =
    (ros_bt_py_interfaces__msg__NodeData *)(untyped_value);
  *value = *item;
}

void ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__assign_function__DocumentedNode__inputs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros_bt_py_interfaces__msg__NodeData * item =
    ((ros_bt_py_interfaces__msg__NodeData *)
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__get_function__DocumentedNode__inputs(untyped_member, index));
  const ros_bt_py_interfaces__msg__NodeData * value =
    (const ros_bt_py_interfaces__msg__NodeData *)(untyped_value);
  *item = *value;
}

bool ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__resize_function__DocumentedNode__inputs(
  void * untyped_member, size_t size)
{
  ros_bt_py_interfaces__msg__NodeData__Sequence * member =
    (ros_bt_py_interfaces__msg__NodeData__Sequence *)(untyped_member);
  ros_bt_py_interfaces__msg__NodeData__Sequence__fini(member);
  return ros_bt_py_interfaces__msg__NodeData__Sequence__init(member, size);
}

size_t ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__size_function__DocumentedNode__outputs(
  const void * untyped_member)
{
  const ros_bt_py_interfaces__msg__NodeData__Sequence * member =
    (const ros_bt_py_interfaces__msg__NodeData__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__get_const_function__DocumentedNode__outputs(
  const void * untyped_member, size_t index)
{
  const ros_bt_py_interfaces__msg__NodeData__Sequence * member =
    (const ros_bt_py_interfaces__msg__NodeData__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__get_function__DocumentedNode__outputs(
  void * untyped_member, size_t index)
{
  ros_bt_py_interfaces__msg__NodeData__Sequence * member =
    (ros_bt_py_interfaces__msg__NodeData__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__fetch_function__DocumentedNode__outputs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros_bt_py_interfaces__msg__NodeData * item =
    ((const ros_bt_py_interfaces__msg__NodeData *)
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__get_const_function__DocumentedNode__outputs(untyped_member, index));
  ros_bt_py_interfaces__msg__NodeData * value =
    (ros_bt_py_interfaces__msg__NodeData *)(untyped_value);
  *value = *item;
}

void ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__assign_function__DocumentedNode__outputs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros_bt_py_interfaces__msg__NodeData * item =
    ((ros_bt_py_interfaces__msg__NodeData *)
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__get_function__DocumentedNode__outputs(untyped_member, index));
  const ros_bt_py_interfaces__msg__NodeData * value =
    (const ros_bt_py_interfaces__msg__NodeData *)(untyped_value);
  *item = *value;
}

bool ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__resize_function__DocumentedNode__outputs(
  void * untyped_member, size_t size)
{
  ros_bt_py_interfaces__msg__NodeData__Sequence * member =
    (ros_bt_py_interfaces__msg__NodeData__Sequence *)(untyped_member);
  ros_bt_py_interfaces__msg__NodeData__Sequence__fini(member);
  return ros_bt_py_interfaces__msg__NodeData__Sequence__init(member, size);
}

size_t ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__size_function__DocumentedNode__tags(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__get_const_function__DocumentedNode__tags(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__get_function__DocumentedNode__tags(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__fetch_function__DocumentedNode__tags(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__get_const_function__DocumentedNode__tags(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__assign_function__DocumentedNode__tags(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__get_function__DocumentedNode__tags(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__resize_function__DocumentedNode__tags(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__DocumentedNode_message_member_array[12] = {
  {
    "module",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__msg__DocumentedNode, module),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "node_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__msg__DocumentedNode, node_class),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__msg__DocumentedNode, version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_children",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__msg__DocumentedNode, max_children),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__msg__DocumentedNode, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "child_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__msg__DocumentedNode, child_names),  // bytes offset in struct
    NULL,  // default value
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__size_function__DocumentedNode__child_names,  // size() function pointer
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__get_const_function__DocumentedNode__child_names,  // get_const(index) function pointer
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__get_function__DocumentedNode__child_names,  // get(index) function pointer
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__fetch_function__DocumentedNode__child_names,  // fetch(index, &value) function pointer
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__assign_function__DocumentedNode__child_names,  // assign(index, value) function pointer
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__resize_function__DocumentedNode__child_names  // resize(index) function pointer
  },
  {
    "options",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__msg__DocumentedNode, options),  // bytes offset in struct
    NULL,  // default value
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__size_function__DocumentedNode__options,  // size() function pointer
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__get_const_function__DocumentedNode__options,  // get_const(index) function pointer
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__get_function__DocumentedNode__options,  // get(index) function pointer
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__fetch_function__DocumentedNode__options,  // fetch(index, &value) function pointer
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__assign_function__DocumentedNode__options,  // assign(index, value) function pointer
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__resize_function__DocumentedNode__options  // resize(index) function pointer
  },
  {
    "inputs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__msg__DocumentedNode, inputs),  // bytes offset in struct
    NULL,  // default value
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__size_function__DocumentedNode__inputs,  // size() function pointer
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__get_const_function__DocumentedNode__inputs,  // get_const(index) function pointer
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__get_function__DocumentedNode__inputs,  // get(index) function pointer
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__fetch_function__DocumentedNode__inputs,  // fetch(index, &value) function pointer
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__assign_function__DocumentedNode__inputs,  // assign(index, value) function pointer
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__resize_function__DocumentedNode__inputs  // resize(index) function pointer
  },
  {
    "outputs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__msg__DocumentedNode, outputs),  // bytes offset in struct
    NULL,  // default value
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__size_function__DocumentedNode__outputs,  // size() function pointer
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__get_const_function__DocumentedNode__outputs,  // get_const(index) function pointer
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__get_function__DocumentedNode__outputs,  // get(index) function pointer
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__fetch_function__DocumentedNode__outputs,  // fetch(index, &value) function pointer
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__assign_function__DocumentedNode__outputs,  // assign(index, value) function pointer
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__resize_function__DocumentedNode__outputs  // resize(index) function pointer
  },
  {
    "doc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__msg__DocumentedNode, doc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__msg__DocumentedNode, tags),  // bytes offset in struct
    NULL,  // default value
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__size_function__DocumentedNode__tags,  // size() function pointer
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__get_const_function__DocumentedNode__tags,  // get_const(index) function pointer
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__get_function__DocumentedNode__tags,  // get(index) function pointer
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__fetch_function__DocumentedNode__tags,  // fetch(index, &value) function pointer
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__assign_function__DocumentedNode__tags,  // assign(index, value) function pointer
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__resize_function__DocumentedNode__tags  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__msg__DocumentedNode, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__DocumentedNode_message_members = {
  "ros_bt_py_interfaces__msg",  // message namespace
  "DocumentedNode",  // message name
  12,  // number of fields
  sizeof(ros_bt_py_interfaces__msg__DocumentedNode),
  ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__DocumentedNode_message_member_array,  // message members
  ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__DocumentedNode_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__DocumentedNode_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__DocumentedNode_message_type_support_handle = {
  0,
  &ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__DocumentedNode_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_bt_py_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, msg, DocumentedNode)() {
  ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__DocumentedNode_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, msg, NodeData)();
  ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__DocumentedNode_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, msg, NodeData)();
  ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__DocumentedNode_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, msg, NodeData)();
  if (!ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__DocumentedNode_message_type_support_handle.typesupport_identifier) {
    ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__DocumentedNode_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_bt_py_interfaces__msg__DocumentedNode__rosidl_typesupport_introspection_c__DocumentedNode_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
