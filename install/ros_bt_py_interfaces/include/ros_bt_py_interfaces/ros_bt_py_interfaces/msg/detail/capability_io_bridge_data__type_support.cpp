// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros_bt_py_interfaces:msg/CapabilityIOBridgeData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros_bt_py_interfaces/msg/detail/capability_io_bridge_data__struct.hpp"
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

void CapabilityIOBridgeData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros_bt_py_interfaces::msg::CapabilityIOBridgeData(_init);
}

void CapabilityIOBridgeData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros_bt_py_interfaces::msg::CapabilityIOBridgeData *>(message_memory);
  typed_message->~CapabilityIOBridgeData();
}

size_t size_function__CapabilityIOBridgeData__bridge_data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros_bt_py_interfaces::msg::NodeData> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CapabilityIOBridgeData__bridge_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros_bt_py_interfaces::msg::NodeData> *>(untyped_member);
  return &member[index];
}

void * get_function__CapabilityIOBridgeData__bridge_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros_bt_py_interfaces::msg::NodeData> *>(untyped_member);
  return &member[index];
}

void fetch_function__CapabilityIOBridgeData__bridge_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros_bt_py_interfaces::msg::NodeData *>(
    get_const_function__CapabilityIOBridgeData__bridge_data(untyped_member, index));
  auto & value = *reinterpret_cast<ros_bt_py_interfaces::msg::NodeData *>(untyped_value);
  value = item;
}

void assign_function__CapabilityIOBridgeData__bridge_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros_bt_py_interfaces::msg::NodeData *>(
    get_function__CapabilityIOBridgeData__bridge_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros_bt_py_interfaces::msg::NodeData *>(untyped_value);
  item = value;
}

void resize_function__CapabilityIOBridgeData__bridge_data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros_bt_py_interfaces::msg::NodeData> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CapabilityIOBridgeData_message_member_array[4] = {
  {
    "node_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces::msg::CapabilityIOBridgeData, node_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces::msg::CapabilityIOBridgeData, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bridge_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros_bt_py_interfaces::msg::NodeData>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces::msg::CapabilityIOBridgeData, bridge_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__CapabilityIOBridgeData__bridge_data,  // size() function pointer
    get_const_function__CapabilityIOBridgeData__bridge_data,  // get_const(index) function pointer
    get_function__CapabilityIOBridgeData__bridge_data,  // get(index) function pointer
    fetch_function__CapabilityIOBridgeData__bridge_data,  // fetch(index, &value) function pointer
    assign_function__CapabilityIOBridgeData__bridge_data,  // assign(index, value) function pointer
    resize_function__CapabilityIOBridgeData__bridge_data  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_bt_py_interfaces::msg::CapabilityIOBridgeData, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CapabilityIOBridgeData_message_members = {
  "ros_bt_py_interfaces::msg",  // message namespace
  "CapabilityIOBridgeData",  // message name
  4,  // number of fields
  sizeof(ros_bt_py_interfaces::msg::CapabilityIOBridgeData),
  CapabilityIOBridgeData_message_member_array,  // message members
  CapabilityIOBridgeData_init_function,  // function to initialize message memory (memory has to be allocated)
  CapabilityIOBridgeData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CapabilityIOBridgeData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CapabilityIOBridgeData_message_members,
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
get_message_type_support_handle<ros_bt_py_interfaces::msg::CapabilityIOBridgeData>()
{
  return &::ros_bt_py_interfaces::msg::rosidl_typesupport_introspection_cpp::CapabilityIOBridgeData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_bt_py_interfaces, msg, CapabilityIOBridgeData)() {
  return &::ros_bt_py_interfaces::msg::rosidl_typesupport_introspection_cpp::CapabilityIOBridgeData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
