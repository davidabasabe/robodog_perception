// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:msg/UtilityBounds.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__UTILITY_BOUNDS__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__UTILITY_BOUNDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/msg/detail/utility_bounds__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace msg
{

namespace builder
{

class Init_UtilityBounds_lower_bound_failure
{
public:
  explicit Init_UtilityBounds_lower_bound_failure(::ros_bt_py_interfaces::msg::UtilityBounds & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::msg::UtilityBounds lower_bound_failure(::ros_bt_py_interfaces::msg::UtilityBounds::_lower_bound_failure_type arg)
  {
    msg_.lower_bound_failure = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::UtilityBounds msg_;
};

class Init_UtilityBounds_has_lower_bound_failure
{
public:
  explicit Init_UtilityBounds_has_lower_bound_failure(::ros_bt_py_interfaces::msg::UtilityBounds & msg)
  : msg_(msg)
  {}
  Init_UtilityBounds_lower_bound_failure has_lower_bound_failure(::ros_bt_py_interfaces::msg::UtilityBounds::_has_lower_bound_failure_type arg)
  {
    msg_.has_lower_bound_failure = std::move(arg);
    return Init_UtilityBounds_lower_bound_failure(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::UtilityBounds msg_;
};

class Init_UtilityBounds_upper_bound_failure
{
public:
  explicit Init_UtilityBounds_upper_bound_failure(::ros_bt_py_interfaces::msg::UtilityBounds & msg)
  : msg_(msg)
  {}
  Init_UtilityBounds_has_lower_bound_failure upper_bound_failure(::ros_bt_py_interfaces::msg::UtilityBounds::_upper_bound_failure_type arg)
  {
    msg_.upper_bound_failure = std::move(arg);
    return Init_UtilityBounds_has_lower_bound_failure(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::UtilityBounds msg_;
};

class Init_UtilityBounds_has_upper_bound_failure
{
public:
  explicit Init_UtilityBounds_has_upper_bound_failure(::ros_bt_py_interfaces::msg::UtilityBounds & msg)
  : msg_(msg)
  {}
  Init_UtilityBounds_upper_bound_failure has_upper_bound_failure(::ros_bt_py_interfaces::msg::UtilityBounds::_has_upper_bound_failure_type arg)
  {
    msg_.has_upper_bound_failure = std::move(arg);
    return Init_UtilityBounds_upper_bound_failure(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::UtilityBounds msg_;
};

class Init_UtilityBounds_lower_bound_success
{
public:
  explicit Init_UtilityBounds_lower_bound_success(::ros_bt_py_interfaces::msg::UtilityBounds & msg)
  : msg_(msg)
  {}
  Init_UtilityBounds_has_upper_bound_failure lower_bound_success(::ros_bt_py_interfaces::msg::UtilityBounds::_lower_bound_success_type arg)
  {
    msg_.lower_bound_success = std::move(arg);
    return Init_UtilityBounds_has_upper_bound_failure(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::UtilityBounds msg_;
};

class Init_UtilityBounds_has_lower_bound_success
{
public:
  explicit Init_UtilityBounds_has_lower_bound_success(::ros_bt_py_interfaces::msg::UtilityBounds & msg)
  : msg_(msg)
  {}
  Init_UtilityBounds_lower_bound_success has_lower_bound_success(::ros_bt_py_interfaces::msg::UtilityBounds::_has_lower_bound_success_type arg)
  {
    msg_.has_lower_bound_success = std::move(arg);
    return Init_UtilityBounds_lower_bound_success(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::UtilityBounds msg_;
};

class Init_UtilityBounds_upper_bound_success
{
public:
  explicit Init_UtilityBounds_upper_bound_success(::ros_bt_py_interfaces::msg::UtilityBounds & msg)
  : msg_(msg)
  {}
  Init_UtilityBounds_has_lower_bound_success upper_bound_success(::ros_bt_py_interfaces::msg::UtilityBounds::_upper_bound_success_type arg)
  {
    msg_.upper_bound_success = std::move(arg);
    return Init_UtilityBounds_has_lower_bound_success(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::UtilityBounds msg_;
};

class Init_UtilityBounds_has_upper_bound_success
{
public:
  explicit Init_UtilityBounds_has_upper_bound_success(::ros_bt_py_interfaces::msg::UtilityBounds & msg)
  : msg_(msg)
  {}
  Init_UtilityBounds_upper_bound_success has_upper_bound_success(::ros_bt_py_interfaces::msg::UtilityBounds::_has_upper_bound_success_type arg)
  {
    msg_.has_upper_bound_success = std::move(arg);
    return Init_UtilityBounds_upper_bound_success(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::UtilityBounds msg_;
};

class Init_UtilityBounds_can_execute
{
public:
  Init_UtilityBounds_can_execute()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UtilityBounds_has_upper_bound_success can_execute(::ros_bt_py_interfaces::msg::UtilityBounds::_can_execute_type arg)
  {
    msg_.can_execute = std::move(arg);
    return Init_UtilityBounds_has_upper_bound_success(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::UtilityBounds msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::msg::UtilityBounds>()
{
  return ros_bt_py_interfaces::msg::builder::Init_UtilityBounds_can_execute();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__UTILITY_BOUNDS__BUILDER_HPP_
