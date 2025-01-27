// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:msg/CapabilityIOBridgeData.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__CAPABILITY_IO_BRIDGE_DATA__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__CAPABILITY_IO_BRIDGE_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/msg/detail/capability_io_bridge_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace msg
{

namespace builder
{

class Init_CapabilityIOBridgeData_timestamp
{
public:
  explicit Init_CapabilityIOBridgeData_timestamp(::ros_bt_py_interfaces::msg::CapabilityIOBridgeData & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::msg::CapabilityIOBridgeData timestamp(::ros_bt_py_interfaces::msg::CapabilityIOBridgeData::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::CapabilityIOBridgeData msg_;
};

class Init_CapabilityIOBridgeData_bridge_data
{
public:
  explicit Init_CapabilityIOBridgeData_bridge_data(::ros_bt_py_interfaces::msg::CapabilityIOBridgeData & msg)
  : msg_(msg)
  {}
  Init_CapabilityIOBridgeData_timestamp bridge_data(::ros_bt_py_interfaces::msg::CapabilityIOBridgeData::_bridge_data_type arg)
  {
    msg_.bridge_data = std::move(arg);
    return Init_CapabilityIOBridgeData_timestamp(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::CapabilityIOBridgeData msg_;
};

class Init_CapabilityIOBridgeData_type
{
public:
  explicit Init_CapabilityIOBridgeData_type(::ros_bt_py_interfaces::msg::CapabilityIOBridgeData & msg)
  : msg_(msg)
  {}
  Init_CapabilityIOBridgeData_bridge_data type(::ros_bt_py_interfaces::msg::CapabilityIOBridgeData::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_CapabilityIOBridgeData_bridge_data(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::CapabilityIOBridgeData msg_;
};

class Init_CapabilityIOBridgeData_node_id
{
public:
  Init_CapabilityIOBridgeData_node_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CapabilityIOBridgeData_type node_id(::ros_bt_py_interfaces::msg::CapabilityIOBridgeData::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return Init_CapabilityIOBridgeData_type(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::CapabilityIOBridgeData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::msg::CapabilityIOBridgeData>()
{
  return ros_bt_py_interfaces::msg::builder::Init_CapabilityIOBridgeData_node_id();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__CAPABILITY_IO_BRIDGE_DATA__BUILDER_HPP_
