// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:msg/Precondition.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__PRECONDITION__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__PRECONDITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/msg/detail/precondition__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace msg
{

namespace builder
{

class Init_Precondition_capability
{
public:
  explicit Init_Precondition_capability(::ros_bt_py_interfaces::msg::Precondition & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::msg::Precondition capability(::ros_bt_py_interfaces::msg::Precondition::_capability_type arg)
  {
    msg_.capability = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::Precondition msg_;
};

class Init_Precondition_type
{
public:
  Init_Precondition_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Precondition_capability type(::ros_bt_py_interfaces::msg::Precondition::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Precondition_capability(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::Precondition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::msg::Precondition>()
{
  return ros_bt_py_interfaces::msg::builder::Init_Precondition_type();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__PRECONDITION__BUILDER_HPP_
