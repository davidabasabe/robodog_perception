// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:msg/CapabilityExecutionStatus.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__CAPABILITY_EXECUTION_STATUS__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__CAPABILITY_EXECUTION_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/msg/detail/capability_execution_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace msg
{

namespace builder
{

class Init_CapabilityExecutionStatus_status
{
public:
  explicit Init_CapabilityExecutionStatus_status(::ros_bt_py_interfaces::msg::CapabilityExecutionStatus & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::msg::CapabilityExecutionStatus status(::ros_bt_py_interfaces::msg::CapabilityExecutionStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::CapabilityExecutionStatus msg_;
};

class Init_CapabilityExecutionStatus_node_name
{
public:
  explicit Init_CapabilityExecutionStatus_node_name(::ros_bt_py_interfaces::msg::CapabilityExecutionStatus & msg)
  : msg_(msg)
  {}
  Init_CapabilityExecutionStatus_status node_name(::ros_bt_py_interfaces::msg::CapabilityExecutionStatus::_node_name_type arg)
  {
    msg_.node_name = std::move(arg);
    return Init_CapabilityExecutionStatus_status(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::CapabilityExecutionStatus msg_;
};

class Init_CapabilityExecutionStatus_interface
{
public:
  Init_CapabilityExecutionStatus_interface()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CapabilityExecutionStatus_node_name interface(::ros_bt_py_interfaces::msg::CapabilityExecutionStatus::_interface_type arg)
  {
    msg_.interface = std::move(arg);
    return Init_CapabilityExecutionStatus_node_name(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::CapabilityExecutionStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::msg::CapabilityExecutionStatus>()
{
  return ros_bt_py_interfaces::msg::builder::Init_CapabilityExecutionStatus_interface();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__CAPABILITY_EXECUTION_STATUS__BUILDER_HPP_
