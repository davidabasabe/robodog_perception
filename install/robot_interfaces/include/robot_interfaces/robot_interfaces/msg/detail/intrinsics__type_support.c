// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robot_interfaces:msg/Intrinsics.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robot_interfaces/msg/detail/intrinsics__rosidl_typesupport_introspection_c.h"
#include "robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robot_interfaces/msg/detail/intrinsics__functions.h"
#include "robot_interfaces/msg/detail/intrinsics__struct.h"


// Include directives for member types
// Member `model`
#include "rosidl_runtime_c/string_functions.h"
// Member `coeffs`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robot_interfaces__msg__Intrinsics__rosidl_typesupport_introspection_c__Intrinsics_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_interfaces__msg__Intrinsics__init(message_memory);
}

void robot_interfaces__msg__Intrinsics__rosidl_typesupport_introspection_c__Intrinsics_fini_function(void * message_memory)
{
  robot_interfaces__msg__Intrinsics__fini(message_memory);
}

size_t robot_interfaces__msg__Intrinsics__rosidl_typesupport_introspection_c__size_function__Intrinsics__coeffs(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * robot_interfaces__msg__Intrinsics__rosidl_typesupport_introspection_c__get_const_function__Intrinsics__coeffs(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robot_interfaces__msg__Intrinsics__rosidl_typesupport_introspection_c__get_function__Intrinsics__coeffs(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void robot_interfaces__msg__Intrinsics__rosidl_typesupport_introspection_c__fetch_function__Intrinsics__coeffs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    robot_interfaces__msg__Intrinsics__rosidl_typesupport_introspection_c__get_const_function__Intrinsics__coeffs(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void robot_interfaces__msg__Intrinsics__rosidl_typesupport_introspection_c__assign_function__Intrinsics__coeffs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    robot_interfaces__msg__Intrinsics__rosidl_typesupport_introspection_c__get_function__Intrinsics__coeffs(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool robot_interfaces__msg__Intrinsics__rosidl_typesupport_introspection_c__resize_function__Intrinsics__coeffs(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember robot_interfaces__msg__Intrinsics__rosidl_typesupport_introspection_c__Intrinsics_message_member_array[9] = {
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__msg__Intrinsics, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__msg__Intrinsics, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ppx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__msg__Intrinsics, ppx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ppy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__msg__Intrinsics, ppy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__msg__Intrinsics, fx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__msg__Intrinsics, fy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "depth_scale",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__msg__Intrinsics, depth_scale),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "model",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__msg__Intrinsics, model),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "coeffs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__msg__Intrinsics, coeffs),  // bytes offset in struct
    NULL,  // default value
    robot_interfaces__msg__Intrinsics__rosidl_typesupport_introspection_c__size_function__Intrinsics__coeffs,  // size() function pointer
    robot_interfaces__msg__Intrinsics__rosidl_typesupport_introspection_c__get_const_function__Intrinsics__coeffs,  // get_const(index) function pointer
    robot_interfaces__msg__Intrinsics__rosidl_typesupport_introspection_c__get_function__Intrinsics__coeffs,  // get(index) function pointer
    robot_interfaces__msg__Intrinsics__rosidl_typesupport_introspection_c__fetch_function__Intrinsics__coeffs,  // fetch(index, &value) function pointer
    robot_interfaces__msg__Intrinsics__rosidl_typesupport_introspection_c__assign_function__Intrinsics__coeffs,  // assign(index, value) function pointer
    robot_interfaces__msg__Intrinsics__rosidl_typesupport_introspection_c__resize_function__Intrinsics__coeffs  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_interfaces__msg__Intrinsics__rosidl_typesupport_introspection_c__Intrinsics_message_members = {
  "robot_interfaces__msg",  // message namespace
  "Intrinsics",  // message name
  9,  // number of fields
  sizeof(robot_interfaces__msg__Intrinsics),
  robot_interfaces__msg__Intrinsics__rosidl_typesupport_introspection_c__Intrinsics_message_member_array,  // message members
  robot_interfaces__msg__Intrinsics__rosidl_typesupport_introspection_c__Intrinsics_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_interfaces__msg__Intrinsics__rosidl_typesupport_introspection_c__Intrinsics_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_interfaces__msg__Intrinsics__rosidl_typesupport_introspection_c__Intrinsics_message_type_support_handle = {
  0,
  &robot_interfaces__msg__Intrinsics__rosidl_typesupport_introspection_c__Intrinsics_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, msg, Intrinsics)() {
  if (!robot_interfaces__msg__Intrinsics__rosidl_typesupport_introspection_c__Intrinsics_message_type_support_handle.typesupport_identifier) {
    robot_interfaces__msg__Intrinsics__rosidl_typesupport_introspection_c__Intrinsics_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_interfaces__msg__Intrinsics__rosidl_typesupport_introspection_c__Intrinsics_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
