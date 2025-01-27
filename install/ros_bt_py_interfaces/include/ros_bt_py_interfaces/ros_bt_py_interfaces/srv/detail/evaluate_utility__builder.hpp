// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:srv/EvaluateUtility.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__EVALUATE_UTILITY__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__EVALUATE_UTILITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/srv/detail/evaluate_utility__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_EvaluateUtility_Request_tree
{
public:
  Init_EvaluateUtility_Request_tree()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_bt_py_interfaces::srv::EvaluateUtility_Request tree(::ros_bt_py_interfaces::srv::EvaluateUtility_Request::_tree_type arg)
  {
    msg_.tree = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::EvaluateUtility_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::EvaluateUtility_Request>()
{
  return ros_bt_py_interfaces::srv::builder::Init_EvaluateUtility_Request_tree();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_EvaluateUtility_Response_utility
{
public:
  Init_EvaluateUtility_Response_utility()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_bt_py_interfaces::srv::EvaluateUtility_Response utility(::ros_bt_py_interfaces::srv::EvaluateUtility_Response::_utility_type arg)
  {
    msg_.utility = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::EvaluateUtility_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::EvaluateUtility_Response>()
{
  return ros_bt_py_interfaces::srv::builder::Init_EvaluateUtility_Response_utility();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__EVALUATE_UTILITY__BUILDER_HPP_
