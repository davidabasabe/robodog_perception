// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:msg/PingMsg.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__PING_MSG__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__PING_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/msg/detail/ping_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace msg
{

namespace builder
{

class Init_PingMsg_timestamp
{
public:
  explicit Init_PingMsg_timestamp(::ros_bt_py_interfaces::msg::PingMsg & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::msg::PingMsg timestamp(::ros_bt_py_interfaces::msg::PingMsg::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::PingMsg msg_;
};

class Init_PingMsg_node_id
{
public:
  Init_PingMsg_node_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PingMsg_timestamp node_id(::ros_bt_py_interfaces::msg::PingMsg::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return Init_PingMsg_timestamp(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::PingMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::msg::PingMsg>()
{
  return ros_bt_py_interfaces::msg::builder::Init_PingMsg_node_id();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__PING_MSG__BUILDER_HPP_
