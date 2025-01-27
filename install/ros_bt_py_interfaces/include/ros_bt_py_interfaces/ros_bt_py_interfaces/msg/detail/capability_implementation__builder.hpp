// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:msg/CapabilityImplementation.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__CAPABILITY_IMPLEMENTATION__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__CAPABILITY_IMPLEMENTATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/msg/detail/capability_implementation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace msg
{

namespace builder
{

class Init_CapabilityImplementation_tree
{
public:
  explicit Init_CapabilityImplementation_tree(::ros_bt_py_interfaces::msg::CapabilityImplementation & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::msg::CapabilityImplementation tree(::ros_bt_py_interfaces::msg::CapabilityImplementation::_tree_type arg)
  {
    msg_.tree = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::CapabilityImplementation msg_;
};

class Init_CapabilityImplementation_tags_dict
{
public:
  explicit Init_CapabilityImplementation_tags_dict(::ros_bt_py_interfaces::msg::CapabilityImplementation & msg)
  : msg_(msg)
  {}
  Init_CapabilityImplementation_tree tags_dict(::ros_bt_py_interfaces::msg::CapabilityImplementation::_tags_dict_type arg)
  {
    msg_.tags_dict = std::move(arg);
    return Init_CapabilityImplementation_tree(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::CapabilityImplementation msg_;
};

class Init_CapabilityImplementation_preconditions
{
public:
  explicit Init_CapabilityImplementation_preconditions(::ros_bt_py_interfaces::msg::CapabilityImplementation & msg)
  : msg_(msg)
  {}
  Init_CapabilityImplementation_tags_dict preconditions(::ros_bt_py_interfaces::msg::CapabilityImplementation::_preconditions_type arg)
  {
    msg_.preconditions = std::move(arg);
    return Init_CapabilityImplementation_tags_dict(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::CapabilityImplementation msg_;
};

class Init_CapabilityImplementation_version
{
public:
  explicit Init_CapabilityImplementation_version(::ros_bt_py_interfaces::msg::CapabilityImplementation & msg)
  : msg_(msg)
  {}
  Init_CapabilityImplementation_preconditions version(::ros_bt_py_interfaces::msg::CapabilityImplementation::_version_type arg)
  {
    msg_.version = std::move(arg);
    return Init_CapabilityImplementation_preconditions(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::CapabilityImplementation msg_;
};

class Init_CapabilityImplementation_name
{
public:
  Init_CapabilityImplementation_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CapabilityImplementation_version name(::ros_bt_py_interfaces::msg::CapabilityImplementation::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_CapabilityImplementation_version(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::CapabilityImplementation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::msg::CapabilityImplementation>()
{
  return ros_bt_py_interfaces::msg::builder::Init_CapabilityImplementation_name();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__CAPABILITY_IMPLEMENTATION__BUILDER_HPP_
