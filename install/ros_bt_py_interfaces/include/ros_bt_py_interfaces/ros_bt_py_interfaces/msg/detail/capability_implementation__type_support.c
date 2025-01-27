// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_bt_py_interfaces:msg/CapabilityImplementation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_bt_py_interfaces/msg/detail/capability_implementation__rosidl_typesupport_introspection_c.h"
#include "ros_bt_py_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_bt_py_interfaces/msg/detail/capability_implementation__functions.h"
#include "ros_bt_py_interfaces/msg/detail/capability_implementation__struct.h"


// Include directives for member types
// Member `name`
// Member `version`
// Member `tags_dict`
#include "rosidl_runtime_c/string_functions.h"
// Member `preconditions`
#include "ros_bt_py_interfaces/msg/precondition.h"
// Member `preconditions`
#include "ros_bt_py_interfaces/msg/detail/precondition__rosidl_typesupport_introspection_c.h"
// Member `tree`
#include "ros_bt_py_interfaces/msg/tree.h"
// Member `tree`
#include "ros_bt_py_interfaces/msg/detail/tree__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_bt_py_interfaces__msg__CapabilityImplementation__rosidl_typesupport_introspection_c__CapabilityImplementation_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_bt_py_interfaces__msg__CapabilityImplementation__init(message_memory);
}

void ros_bt_py_interfaces__msg__CapabilityImplementation__rosidl_typesupport_introspection_c__CapabilityImplementation_fini_function(void * message_memory)
{
  ros_bt_py_interfaces__msg__CapabilityImplementation__fini(message_memory);
}

size_t ros_bt_py_interfaces__msg__CapabilityImplementation__rosidl_typesupport_introspection_c__size_function__CapabilityImplementation__preconditions(
  const void * untyped_member)
{
  const ros_bt_py_interfaces__msg__Precondition__Sequence * member =
    (const ros_bt_py_interfaces__msg__Precondition__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_bt_py_interfaces__msg__CapabilityImplementation__rosidl_typesupport_introspection_c__get_const_function__CapabilityImplementation__preconditions(
  const void * untyped_member, size_t index)
{
  const ros_bt_py_interfaces__msg__Precondition__Sequence * member =
    (const ros_bt_py_interfaces__msg__Precondition__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_bt_py_interfaces__msg__CapabilityImplementation__rosidl_typesupport_introspection_c__get_function__CapabilityImplementation__preconditions(
  void * untyped_member, size_t index)
{
  ros_bt_py_interfaces__msg__Precondition__Sequence * member =
    (ros_bt_py_interfaces__msg__Precondition__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_bt_py_interfaces__msg__CapabilityImplementation__rosidl_typesupport_introspection_c__fetch_function__CapabilityImplementation__preconditions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros_bt_py_interfaces__msg__Precondition * item =
    ((const ros_bt_py_interfaces__msg__Precondition *)
    ros_bt_py_interfaces__msg__CapabilityImplementation__rosidl_typesupport_introspection_c__get_const_function__CapabilityImplementation__preconditions(untyped_member, index));
  ros_bt_py_interfaces__msg__Precondition * value =
    (ros_bt_py_interfaces__msg__Precondition *)(untyped_value);
  *value = *item;
}

void ros_bt_py_interfaces__msg__CapabilityImplementation__rosidl_typesupport_introspection_c__assign_function__CapabilityImplementation__preconditions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros_bt_py_interfaces__msg__Precondition * item =
    ((ros_bt_py_interfaces__msg__Precondition *)
    ros_bt_py_interfaces__msg__CapabilityImplementation__rosidl_typesupport_introspection_c__get_function__CapabilityImplementation__preconditions(untyped_member, index));
  const ros_bt_py_interfaces__msg__Precondition * value =
    (const ros_bt_py_interfaces__msg__Precondition *)(untyped_value);
  *item = *value;
}

bool ros_bt_py_interfaces__msg__CapabilityImplementation__rosidl_typesupport_introspection_c__resize_function__CapabilityImplementation__preconditions(
  void * untyped_member, size_t size)
{
  ros_bt_py_interfaces__msg__Precondition__Sequence * member =
    (ros_bt_py_interfaces__msg__Precondition__Sequence *)(untyped_member);
  ros_bt_py_interfaces__msg__Precondition__Sequence__fini(member);
  return ros_bt_py_interfaces__msg__Precondition__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros_bt_py_interfaces__msg__CapabilityImplementation__rosidl_typesupport_introspection_c__CapabilityImplementation_message_member_array[5] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__msg__CapabilityImplementation, name),  // bytes offset in struct
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
    offsetof(ros_bt_py_interfaces__msg__CapabilityImplementation, version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "preconditions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__msg__CapabilityImplementation, preconditions),  // bytes offset in struct
    NULL,  // default value
    ros_bt_py_interfaces__msg__CapabilityImplementation__rosidl_typesupport_introspection_c__size_function__CapabilityImplementation__preconditions,  // size() function pointer
    ros_bt_py_interfaces__msg__CapabilityImplementation__rosidl_typesupport_introspection_c__get_const_function__CapabilityImplementation__preconditions,  // get_const(index) function pointer
    ros_bt_py_interfaces__msg__CapabilityImplementation__rosidl_typesupport_introspection_c__get_function__CapabilityImplementation__preconditions,  // get(index) function pointer
    ros_bt_py_interfaces__msg__CapabilityImplementation__rosidl_typesupport_introspection_c__fetch_function__CapabilityImplementation__preconditions,  // fetch(index, &value) function pointer
    ros_bt_py_interfaces__msg__CapabilityImplementation__rosidl_typesupport_introspection_c__assign_function__CapabilityImplementation__preconditions,  // assign(index, value) function pointer
    ros_bt_py_interfaces__msg__CapabilityImplementation__rosidl_typesupport_introspection_c__resize_function__CapabilityImplementation__preconditions  // resize(index) function pointer
  },
  {
    "tags_dict",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__msg__CapabilityImplementation, tags_dict),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tree",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces__msg__CapabilityImplementation, tree),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_bt_py_interfaces__msg__CapabilityImplementation__rosidl_typesupport_introspection_c__CapabilityImplementation_message_members = {
  "ros_bt_py_interfaces__msg",  // message namespace
  "CapabilityImplementation",  // message name
  5,  // number of fields
  sizeof(ros_bt_py_interfaces__msg__CapabilityImplementation),
  ros_bt_py_interfaces__msg__CapabilityImplementation__rosidl_typesupport_introspection_c__CapabilityImplementation_message_member_array,  // message members
  ros_bt_py_interfaces__msg__CapabilityImplementation__rosidl_typesupport_introspection_c__CapabilityImplementation_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_bt_py_interfaces__msg__CapabilityImplementation__rosidl_typesupport_introspection_c__CapabilityImplementation_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_bt_py_interfaces__msg__CapabilityImplementation__rosidl_typesupport_introspection_c__CapabilityImplementation_message_type_support_handle = {
  0,
  &ros_bt_py_interfaces__msg__CapabilityImplementation__rosidl_typesupport_introspection_c__CapabilityImplementation_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_bt_py_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, msg, CapabilityImplementation)() {
  ros_bt_py_interfaces__msg__CapabilityImplementation__rosidl_typesupport_introspection_c__CapabilityImplementation_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, msg, Precondition)();
  ros_bt_py_interfaces__msg__CapabilityImplementation__rosidl_typesupport_introspection_c__CapabilityImplementation_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_bt_py_interfaces, msg, Tree)();
  if (!ros_bt_py_interfaces__msg__CapabilityImplementation__rosidl_typesupport_introspection_c__CapabilityImplementation_message_type_support_handle.typesupport_identifier) {
    ros_bt_py_interfaces__msg__CapabilityImplementation__rosidl_typesupport_introspection_c__CapabilityImplementation_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_bt_py_interfaces__msg__CapabilityImplementation__rosidl_typesupport_introspection_c__CapabilityImplementation_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
