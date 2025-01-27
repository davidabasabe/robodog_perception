// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:msg/Package.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__PACKAGE__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__PACKAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/msg/detail/package__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace msg
{

namespace builder
{

class Init_Package_path
{
public:
  explicit Init_Package_path(::ros_bt_py_interfaces::msg::Package & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::msg::Package path(::ros_bt_py_interfaces::msg::Package::_path_type arg)
  {
    msg_.path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::Package msg_;
};

class Init_Package_package
{
public:
  Init_Package_package()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Package_path package(::ros_bt_py_interfaces::msg::Package::_package_type arg)
  {
    msg_.package = std::move(arg);
    return Init_Package_path(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::Package msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::msg::Package>()
{
  return ros_bt_py_interfaces::msg::builder::Init_Package_package();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__PACKAGE__BUILDER_HPP_
