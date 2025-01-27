// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:msg/SubtreeInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__SUBTREE_INFO__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__SUBTREE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/msg/detail/subtree_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace msg
{

namespace builder
{

class Init_SubtreeInfo_subtree_states
{
public:
  Init_SubtreeInfo_subtree_states()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_bt_py_interfaces::msg::SubtreeInfo subtree_states(::ros_bt_py_interfaces::msg::SubtreeInfo::_subtree_states_type arg)
  {
    msg_.subtree_states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::SubtreeInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::msg::SubtreeInfo>()
{
  return ros_bt_py_interfaces::msg::builder::Init_SubtreeInfo_subtree_states();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__SUBTREE_INFO__BUILDER_HPP_
