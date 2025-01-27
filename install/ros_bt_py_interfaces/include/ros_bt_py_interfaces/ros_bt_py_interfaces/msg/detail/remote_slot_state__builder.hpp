// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:msg/RemoteSlotState.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__REMOTE_SLOT_STATE__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__REMOTE_SLOT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/msg/detail/remote_slot_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace msg
{

namespace builder
{

class Init_RemoteSlotState_tree_finished
{
public:
  explicit Init_RemoteSlotState_tree_finished(::ros_bt_py_interfaces::msg::RemoteSlotState & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::msg::RemoteSlotState tree_finished(::ros_bt_py_interfaces::msg::RemoteSlotState::_tree_finished_type arg)
  {
    msg_.tree_finished = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::RemoteSlotState msg_;
};

class Init_RemoteSlotState_tree_running
{
public:
  explicit Init_RemoteSlotState_tree_running(::ros_bt_py_interfaces::msg::RemoteSlotState & msg)
  : msg_(msg)
  {}
  Init_RemoteSlotState_tree_finished tree_running(::ros_bt_py_interfaces::msg::RemoteSlotState::_tree_running_type arg)
  {
    msg_.tree_running = std::move(arg);
    return Init_RemoteSlotState_tree_finished(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::RemoteSlotState msg_;
};

class Init_RemoteSlotState_tree_in_slot
{
public:
  Init_RemoteSlotState_tree_in_slot()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RemoteSlotState_tree_running tree_in_slot(::ros_bt_py_interfaces::msg::RemoteSlotState::_tree_in_slot_type arg)
  {
    msg_.tree_in_slot = std::move(arg);
    return Init_RemoteSlotState_tree_running(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::RemoteSlotState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::msg::RemoteSlotState>()
{
  return ros_bt_py_interfaces::msg::builder::Init_RemoteSlotState_tree_in_slot();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__REMOTE_SLOT_STATE__BUILDER_HPP_
