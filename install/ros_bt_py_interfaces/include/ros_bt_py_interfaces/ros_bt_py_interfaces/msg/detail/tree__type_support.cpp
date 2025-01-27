// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros_bt_py_interfaces:msg/Tree.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros_bt_py_interfaces/msg/detail/tree__struct.hpp"
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

void Tree_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros_bt_py_interfaces::msg::Tree(_init);
}

void Tree_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros_bt_py_interfaces::msg::Tree *>(message_memory);
  typed_message->~Tree();
}

size_t size_function__Tree__nodes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros_bt_py_interfaces::msg::Node> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Tree__nodes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros_bt_py_interfaces::msg::Node> *>(untyped_member);
  return &member[index];
}

void * get_function__Tree__nodes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros_bt_py_interfaces::msg::Node> *>(untyped_member);
  return &member[index];
}

void fetch_function__Tree__nodes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros_bt_py_interfaces::msg::Node *>(
    get_const_function__Tree__nodes(untyped_member, index));
  auto & value = *reinterpret_cast<ros_bt_py_interfaces::msg::Node *>(untyped_value);
  value = item;
}

void assign_function__Tree__nodes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros_bt_py_interfaces::msg::Node *>(
    get_function__Tree__nodes(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros_bt_py_interfaces::msg::Node *>(untyped_value);
  item = value;
}

void resize_function__Tree__nodes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros_bt_py_interfaces::msg::Node> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Tree__data_wirings(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros_bt_py_interfaces::msg::NodeDataWiring> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Tree__data_wirings(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros_bt_py_interfaces::msg::NodeDataWiring> *>(untyped_member);
  return &member[index];
}

void * get_function__Tree__data_wirings(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros_bt_py_interfaces::msg::NodeDataWiring> *>(untyped_member);
  return &member[index];
}

void fetch_function__Tree__data_wirings(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros_bt_py_interfaces::msg::NodeDataWiring *>(
    get_const_function__Tree__data_wirings(untyped_member, index));
  auto & value = *reinterpret_cast<ros_bt_py_interfaces::msg::NodeDataWiring *>(untyped_value);
  value = item;
}

void assign_function__Tree__data_wirings(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros_bt_py_interfaces::msg::NodeDataWiring *>(
    get_function__Tree__data_wirings(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros_bt_py_interfaces::msg::NodeDataWiring *>(untyped_value);
  item = value;
}

void resize_function__Tree__data_wirings(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros_bt_py_interfaces::msg::NodeDataWiring> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Tree__public_node_data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros_bt_py_interfaces::msg::NodeDataLocation> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Tree__public_node_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros_bt_py_interfaces::msg::NodeDataLocation> *>(untyped_member);
  return &member[index];
}

void * get_function__Tree__public_node_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros_bt_py_interfaces::msg::NodeDataLocation> *>(untyped_member);
  return &member[index];
}

void fetch_function__Tree__public_node_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros_bt_py_interfaces::msg::NodeDataLocation *>(
    get_const_function__Tree__public_node_data(untyped_member, index));
  auto & value = *reinterpret_cast<ros_bt_py_interfaces::msg::NodeDataLocation *>(untyped_value);
  value = item;
}

void assign_function__Tree__public_node_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros_bt_py_interfaces::msg::NodeDataLocation *>(
    get_function__Tree__public_node_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros_bt_py_interfaces::msg::NodeDataLocation *>(untyped_value);
  item = value;
}

void resize_function__Tree__public_node_data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros_bt_py_interfaces::msg::NodeDataLocation> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Tree_message_member_array[8] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces::msg::Tree, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "path",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces::msg::Tree, path),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "root_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces::msg::Tree, root_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "nodes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros_bt_py_interfaces::msg::Node>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces::msg::Tree, nodes),  // bytes offset in struct
    nullptr,  // default value
    size_function__Tree__nodes,  // size() function pointer
    get_const_function__Tree__nodes,  // get_const(index) function pointer
    get_function__Tree__nodes,  // get(index) function pointer
    fetch_function__Tree__nodes,  // fetch(index, &value) function pointer
    assign_function__Tree__nodes,  // assign(index, value) function pointer
    resize_function__Tree__nodes  // resize(index) function pointer
  },
  {
    "data_wirings",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros_bt_py_interfaces::msg::NodeDataWiring>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces::msg::Tree, data_wirings),  // bytes offset in struct
    nullptr,  // default value
    size_function__Tree__data_wirings,  // size() function pointer
    get_const_function__Tree__data_wirings,  // get_const(index) function pointer
    get_function__Tree__data_wirings,  // get(index) function pointer
    fetch_function__Tree__data_wirings,  // fetch(index, &value) function pointer
    assign_function__Tree__data_wirings,  // assign(index, value) function pointer
    resize_function__Tree__data_wirings  // resize(index) function pointer
  },
  {
    "tick_frequency_hz",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces::msg::Tree, tick_frequency_hz),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces::msg::Tree, state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "public_node_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros_bt_py_interfaces::msg::NodeDataLocation>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces::msg::Tree, public_node_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__Tree__public_node_data,  // size() function pointer
    get_const_function__Tree__public_node_data,  // get_const(index) function pointer
    get_function__Tree__public_node_data,  // get(index) function pointer
    fetch_function__Tree__public_node_data,  // fetch(index, &value) function pointer
    assign_function__Tree__public_node_data,  // assign(index, value) function pointer
    resize_function__Tree__public_node_data  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Tree_message_members = {
  "ros_bt_py_interfaces::msg",  // message namespace
  "Tree",  // message name
  8,  // number of fields
  sizeof(ros_bt_py_interfaces::msg::Tree),
  Tree_message_member_array,  // message members
  Tree_init_function,  // function to initialize message memory (memory has to be allocated)
  Tree_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Tree_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Tree_message_members,
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
get_message_type_support_handle<ros_bt_py_interfaces::msg::Tree>()
{
  return &::ros_bt_py_interfaces::msg::rosidl_typesupport_introspection_cpp::Tree_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_bt_py_interfaces, msg, Tree)() {
  return &::ros_bt_py_interfaces::msg::rosidl_typesupport_introspection_cpp::Tree_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
