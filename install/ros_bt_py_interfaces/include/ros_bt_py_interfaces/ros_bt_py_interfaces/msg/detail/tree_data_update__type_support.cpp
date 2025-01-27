// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros_bt_py_interfaces:msg/TreeDataUpdate.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros_bt_py_interfaces/msg/detail/tree_data_update__struct.hpp"
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

void TreeDataUpdate_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros_bt_py_interfaces::msg::TreeDataUpdate(_init);
}

void TreeDataUpdate_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros_bt_py_interfaces::msg::TreeDataUpdate *>(message_memory);
  typed_message->~TreeDataUpdate();
}

size_t size_function__TreeDataUpdate__data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros_bt_py_interfaces::msg::NodeDataLocation> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TreeDataUpdate__data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros_bt_py_interfaces::msg::NodeDataLocation> *>(untyped_member);
  return &member[index];
}

void * get_function__TreeDataUpdate__data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros_bt_py_interfaces::msg::NodeDataLocation> *>(untyped_member);
  return &member[index];
}

void fetch_function__TreeDataUpdate__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros_bt_py_interfaces::msg::NodeDataLocation *>(
    get_const_function__TreeDataUpdate__data(untyped_member, index));
  auto & value = *reinterpret_cast<ros_bt_py_interfaces::msg::NodeDataLocation *>(untyped_value);
  value = item;
}

void assign_function__TreeDataUpdate__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros_bt_py_interfaces::msg::NodeDataLocation *>(
    get_function__TreeDataUpdate__data(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros_bt_py_interfaces::msg::NodeDataLocation *>(untyped_value);
  item = value;
}

void resize_function__TreeDataUpdate__data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros_bt_py_interfaces::msg::NodeDataLocation> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TreeDataUpdate_message_member_array[1] = {
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros_bt_py_interfaces::msg::NodeDataLocation>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces::msg::TreeDataUpdate, data),  // bytes offset in struct
    nullptr,  // default value
    size_function__TreeDataUpdate__data,  // size() function pointer
    get_const_function__TreeDataUpdate__data,  // get_const(index) function pointer
    get_function__TreeDataUpdate__data,  // get(index) function pointer
    fetch_function__TreeDataUpdate__data,  // fetch(index, &value) function pointer
    assign_function__TreeDataUpdate__data,  // assign(index, value) function pointer
    resize_function__TreeDataUpdate__data  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TreeDataUpdate_message_members = {
  "ros_bt_py_interfaces::msg",  // message namespace
  "TreeDataUpdate",  // message name
  1,  // number of fields
  sizeof(ros_bt_py_interfaces::msg::TreeDataUpdate),
  TreeDataUpdate_message_member_array,  // message members
  TreeDataUpdate_init_function,  // function to initialize message memory (memory has to be allocated)
  TreeDataUpdate_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TreeDataUpdate_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TreeDataUpdate_message_members,
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
get_message_type_support_handle<ros_bt_py_interfaces::msg::TreeDataUpdate>()
{
  return &::ros_bt_py_interfaces::msg::rosidl_typesupport_introspection_cpp::TreeDataUpdate_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_bt_py_interfaces, msg, TreeDataUpdate)() {
  return &::ros_bt_py_interfaces::msg::rosidl_typesupport_introspection_cpp::TreeDataUpdate_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
