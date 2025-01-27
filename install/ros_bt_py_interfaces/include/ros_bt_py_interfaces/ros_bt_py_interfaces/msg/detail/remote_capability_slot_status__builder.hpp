// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:msg/RemoteCapabilitySlotStatus.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__REMOTE_CAPABILITY_SLOT_STATUS__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__REMOTE_CAPABILITY_SLOT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/msg/detail/remote_capability_slot_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace msg
{

namespace builder
{

class Init_RemoteCapabilitySlotStatus_timestamp
{
public:
  explicit Init_RemoteCapabilitySlotStatus_timestamp(::ros_bt_py_interfaces::msg::RemoteCapabilitySlotStatus & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::msg::RemoteCapabilitySlotStatus timestamp(::ros_bt_py_interfaces::msg::RemoteCapabilitySlotStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::RemoteCapabilitySlotStatus msg_;
};

class Init_RemoteCapabilitySlotStatus_status
{
public:
  explicit Init_RemoteCapabilitySlotStatus_status(::ros_bt_py_interfaces::msg::RemoteCapabilitySlotStatus & msg)
  : msg_(msg)
  {}
  Init_RemoteCapabilitySlotStatus_timestamp status(::ros_bt_py_interfaces::msg::RemoteCapabilitySlotStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RemoteCapabilitySlotStatus_timestamp(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::RemoteCapabilitySlotStatus msg_;
};

class Init_RemoteCapabilitySlotStatus_name
{
public:
  Init_RemoteCapabilitySlotStatus_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RemoteCapabilitySlotStatus_status name(::ros_bt_py_interfaces::msg::RemoteCapabilitySlotStatus::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_RemoteCapabilitySlotStatus_status(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::RemoteCapabilitySlotStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::msg::RemoteCapabilitySlotStatus>()
{
  return ros_bt_py_interfaces::msg::builder::Init_RemoteCapabilitySlotStatus_name();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__REMOTE_CAPABILITY_SLOT_STATUS__BUILDER_HPP_
