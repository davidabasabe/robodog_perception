// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros_bt_py_interfaces:msg/DocumentedNode.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros_bt_py_interfaces/msg/detail/documented_node__struct.hpp"
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

void DocumentedNode_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros_bt_py_interfaces::msg::DocumentedNode(_init);
}

void DocumentedNode_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros_bt_py_interfaces::msg::DocumentedNode *>(message_memory);
  typed_message->~DocumentedNode();
}

size_t size_function__DocumentedNode__child_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DocumentedNode__child_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__DocumentedNode__child_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__DocumentedNode__child_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__DocumentedNode__child_names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__DocumentedNode__child_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__DocumentedNode__child_names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__DocumentedNode__child_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__DocumentedNode__options(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros_bt_py_interfaces::msg::NodeData> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DocumentedNode__options(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros_bt_py_interfaces::msg::NodeData> *>(untyped_member);
  return &member[index];
}

void * get_function__DocumentedNode__options(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros_bt_py_interfaces::msg::NodeData> *>(untyped_member);
  return &member[index];
}

void fetch_function__DocumentedNode__options(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros_bt_py_interfaces::msg::NodeData *>(
    get_const_function__DocumentedNode__options(untyped_member, index));
  auto & value = *reinterpret_cast<ros_bt_py_interfaces::msg::NodeData *>(untyped_value);
  value = item;
}

void assign_function__DocumentedNode__options(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros_bt_py_interfaces::msg::NodeData *>(
    get_function__DocumentedNode__options(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros_bt_py_interfaces::msg::NodeData *>(untyped_value);
  item = value;
}

void resize_function__DocumentedNode__options(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros_bt_py_interfaces::msg::NodeData> *>(untyped_member);
  member->resize(size);
}

size_t size_function__DocumentedNode__inputs(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros_bt_py_interfaces::msg::NodeData> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DocumentedNode__inputs(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros_bt_py_interfaces::msg::NodeData> *>(untyped_member);
  return &member[index];
}

void * get_function__DocumentedNode__inputs(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros_bt_py_interfaces::msg::NodeData> *>(untyped_member);
  return &member[index];
}

void fetch_function__DocumentedNode__inputs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros_bt_py_interfaces::msg::NodeData *>(
    get_const_function__DocumentedNode__inputs(untyped_member, index));
  auto & value = *reinterpret_cast<ros_bt_py_interfaces::msg::NodeData *>(untyped_value);
  value = item;
}

void assign_function__DocumentedNode__inputs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros_bt_py_interfaces::msg::NodeData *>(
    get_function__DocumentedNode__inputs(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros_bt_py_interfaces::msg::NodeData *>(untyped_value);
  item = value;
}

void resize_function__DocumentedNode__inputs(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros_bt_py_interfaces::msg::NodeData> *>(untyped_member);
  member->resize(size);
}

size_t size_function__DocumentedNode__outputs(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros_bt_py_interfaces::msg::NodeData> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DocumentedNode__outputs(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros_bt_py_interfaces::msg::NodeData> *>(untyped_member);
  return &member[index];
}

void * get_function__DocumentedNode__outputs(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros_bt_py_interfaces::msg::NodeData> *>(untyped_member);
  return &member[index];
}

void fetch_function__DocumentedNode__outputs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros_bt_py_interfaces::msg::NodeData *>(
    get_const_function__DocumentedNode__outputs(untyped_member, index));
  auto & value = *reinterpret_cast<ros_bt_py_interfaces::msg::NodeData *>(untyped_value);
  value = item;
}

void assign_function__DocumentedNode__outputs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros_bt_py_interfaces::msg::NodeData *>(
    get_function__DocumentedNode__outputs(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros_bt_py_interfaces::msg::NodeData *>(untyped_value);
  item = value;
}

void resize_function__DocumentedNode__outputs(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros_bt_py_interfaces::msg::NodeData> *>(untyped_member);
  member->resize(size);
}

size_t size_function__DocumentedNode__tags(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DocumentedNode__tags(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__DocumentedNode__tags(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__DocumentedNode__tags(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__DocumentedNode__tags(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__DocumentedNode__tags(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__DocumentedNode__tags(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__DocumentedNode__tags(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DocumentedNode_message_member_array[12] = {
  {
    "module",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces::msg::DocumentedNode, module),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "node_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces::msg::DocumentedNode, node_class),  // bytes offset in struct
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
    offsetof(ros_bt_py_interfaces::msg::DocumentedNode, version),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "max_children",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces::msg::DocumentedNode, max_children),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces::msg::DocumentedNode, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "child_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces::msg::DocumentedNode, child_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__DocumentedNode__child_names,  // size() function pointer
    get_const_function__DocumentedNode__child_names,  // get_const(index) function pointer
    get_function__DocumentedNode__child_names,  // get(index) function pointer
    fetch_function__DocumentedNode__child_names,  // fetch(index, &value) function pointer
    assign_function__DocumentedNode__child_names,  // assign(index, value) function pointer
    resize_function__DocumentedNode__child_names  // resize(index) function pointer
  },
  {
    "options",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros_bt_py_interfaces::msg::NodeData>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces::msg::DocumentedNode, options),  // bytes offset in struct
    nullptr,  // default value
    size_function__DocumentedNode__options,  // size() function pointer
    get_const_function__DocumentedNode__options,  // get_const(index) function pointer
    get_function__DocumentedNode__options,  // get(index) function pointer
    fetch_function__DocumentedNode__options,  // fetch(index, &value) function pointer
    assign_function__DocumentedNode__options,  // assign(index, value) function pointer
    resize_function__DocumentedNode__options  // resize(index) function pointer
  },
  {
    "inputs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros_bt_py_interfaces::msg::NodeData>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces::msg::DocumentedNode, inputs),  // bytes offset in struct
    nullptr,  // default value
    size_function__DocumentedNode__inputs,  // size() function pointer
    get_const_function__DocumentedNode__inputs,  // get_const(index) function pointer
    get_function__DocumentedNode__inputs,  // get(index) function pointer
    fetch_function__DocumentedNode__inputs,  // fetch(index, &value) function pointer
    assign_function__DocumentedNode__inputs,  // assign(index, value) function pointer
    resize_function__DocumentedNode__inputs  // resize(index) function pointer
  },
  {
    "outputs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros_bt_py_interfaces::msg::NodeData>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces::msg::DocumentedNode, outputs),  // bytes offset in struct
    nullptr,  // default value
    size_function__DocumentedNode__outputs,  // size() function pointer
    get_const_function__DocumentedNode__outputs,  // get_const(index) function pointer
    get_function__DocumentedNode__outputs,  // get(index) function pointer
    fetch_function__DocumentedNode__outputs,  // fetch(index, &value) function pointer
    assign_function__DocumentedNode__outputs,  // assign(index, value) function pointer
    resize_function__DocumentedNode__outputs  // resize(index) function pointer
  },
  {
    "doc",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces::msg::DocumentedNode, doc),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tags",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces::msg::DocumentedNode, tags),  // bytes offset in struct
    nullptr,  // default value
    size_function__DocumentedNode__tags,  // size() function pointer
    get_const_function__DocumentedNode__tags,  // get_const(index) function pointer
    get_function__DocumentedNode__tags,  // get(index) function pointer
    fetch_function__DocumentedNode__tags,  // fetch(index, &value) function pointer
    assign_function__DocumentedNode__tags,  // assign(index, value) function pointer
    resize_function__DocumentedNode__tags  // resize(index) function pointer
  },
  {
    "state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces::msg::DocumentedNode, state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DocumentedNode_message_members = {
  "ros_bt_py_interfaces::msg",  // message namespace
  "DocumentedNode",  // message name
  12,  // number of fields
  sizeof(ros_bt_py_interfaces::msg::DocumentedNode),
  DocumentedNode_message_member_array,  // message members
  DocumentedNode_init_function,  // function to initialize message memory (memory has to be allocated)
  DocumentedNode_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DocumentedNode_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DocumentedNode_message_members,
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
get_message_type_support_handle<ros_bt_py_interfaces::msg::DocumentedNode>()
{
  return &::ros_bt_py_interfaces::msg::rosidl_typesupport_introspection_cpp::DocumentedNode_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_bt_py_interfaces, msg, DocumentedNode)() {
  return &::ros_bt_py_interfaces::msg::rosidl_typesupport_introspection_cpp::DocumentedNode_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
