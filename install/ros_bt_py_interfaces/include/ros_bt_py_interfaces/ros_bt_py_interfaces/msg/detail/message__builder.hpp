// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:msg/Message.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__MESSAGE__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/msg/detail/message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace msg
{

namespace builder
{

class Init_Message_action
{
public:
  explicit Init_Message_action(::ros_bt_py_interfaces::msg::Message & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::msg::Message action(::ros_bt_py_interfaces::msg::Message::_action_type arg)
  {
    msg_.action = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::Message msg_;
};

class Init_Message_service
{
public:
  explicit Init_Message_service(::ros_bt_py_interfaces::msg::Message & msg)
  : msg_(msg)
  {}
  Init_Message_action service(::ros_bt_py_interfaces::msg::Message::_service_type arg)
  {
    msg_.service = std::move(arg);
    return Init_Message_action(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::Message msg_;
};

class Init_Message_msg
{
public:
  Init_Message_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Message_service msg(::ros_bt_py_interfaces::msg::Message::_msg_type arg)
  {
    msg_.msg = std::move(arg);
    return Init_Message_service(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::Message msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::msg::Message>()
{
  return ros_bt_py_interfaces::msg::builder::Init_Message_msg();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__MESSAGE__BUILDER_HPP_
