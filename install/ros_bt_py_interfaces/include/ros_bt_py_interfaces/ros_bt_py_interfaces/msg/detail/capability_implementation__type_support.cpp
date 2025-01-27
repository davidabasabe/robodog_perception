// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros_bt_py_interfaces:msg/CapabilityImplementation.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros_bt_py_interfaces/msg/detail/capability_implementation__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ros_bt_py_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void CapabilityImplementation_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros_bt_py_interfaces::msg::CapabilityImplementation(_init);
}

void CapabilityImplementation_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros_bt_py_interfaces::msg::CapabilityImplementation *>(message_memory);
  typed_message->~CapabilityImplementation();
}

size_t size_function__CapabilityImplementation__preconditions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros_bt_py_interfaces::msg::Precondition> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CapabilityImplementation__preconditions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros_bt_py_interfaces::msg::Precondition> *>(untyped_member);
  return &member[index];
}

void * get_function__CapabilityImplementation__preconditions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros_bt_py_interfaces::msg::Precondition> *>(untyped_member);
  return &member[index];
}

void fetch_function__CapabilityImplementation__preconditions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros_bt_py_interfaces::msg::Precondition *>(
    get_const_function__CapabilityImplementation__preconditions(untyped_member, index));
  auto & value = *reinterpret_cast<ros_bt_py_interfaces::msg::Precondition *>(untyped_value);
  value = item;
}

void assign_function__CapabilityImplementation__preconditions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros_bt_py_interfaces::msg::Precondition *>(
    get_function__CapabilityImplementation__preconditions(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros_bt_py_interfaces::msg::Precondition *>(untyped_value);
  item = value;
}

void resize_function__CapabilityImplementation__preconditions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros_bt_py_interfaces::msg::Precondition> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CapabilityImplementation_message_member_array[5] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces::msg::CapabilityImplementation, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "version",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces::msg::CapabilityImplementation, version),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "preconditions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros_bt_py_interfaces::msg::Precondition>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces::msg::CapabilityImplementation, preconditions),  // bytes offset in struct
    nullptr,  // default value
    size_function__CapabilityImplementation__preconditions,  // size() function pointer
    get_const_function__CapabilityImplementation__preconditions,  // get_const(index) function pointer
    get_function__CapabilityImplementation__preconditions,  // get(index) function pointer
    fetch_function__CapabilityImplementation__preconditions,  // fetch(index, &value) function pointer
    assign_function__CapabilityImplementation__preconditions,  // assign(index, value) function pointer
    resize_function__CapabilityImplementation__preconditions  // resize(index) function pointer
  },
  {
    "tags_dict",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces::msg::CapabilityImplementation, tags_dict),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tree",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros_bt_py_interfaces::msg::Tree>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces::msg::CapabilityImplementation, tree),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CapabilityImplementation_message_members = {
  "ros_bt_py_interfaces::msg",  // message namespace
  "CapabilityImplementation",  // message name
  5,  // number of fields
  sizeof(ros_bt_py_interfaces::msg::CapabilityImplementation),
  CapabilityImplementation_message_member_array,  // message members
  CapabilityImplementation_init_function,  // function to initialize message memory (memory has to be allocated)
  CapabilityImplementation_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CapabilityImplementation_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CapabilityImplementation_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ros_bt_py_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_bt_py_interfaces::msg::CapabilityImplementation>()
{
  return &::ros_bt_py_interfaces::msg::rosidl_typesupport_introspection_cpp::CapabilityImplementation_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_bt_py_interfaces, msg, CapabilityImplementation)() {
  return &::ros_bt_py_interfaces::msg::rosidl_typesupport_introspection_cpp::CapabilityImplementation_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
