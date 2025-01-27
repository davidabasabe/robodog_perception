// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:msg/CapabilityInterface.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__CAPABILITY_INTERFACE__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__CAPABILITY_INTERFACE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/msg/detail/capability_interface__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace msg
{

namespace builder
{

class Init_CapabilityInterface_outputs
{
public:
  explicit Init_CapabilityInterface_outputs(::ros_bt_py_interfaces::msg::CapabilityInterface & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::msg::CapabilityInterface outputs(::ros_bt_py_interfaces::msg::CapabilityInterface::_outputs_type arg)
  {
    msg_.outputs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::CapabilityInterface msg_;
};

class Init_CapabilityInterface_inputs
{
public:
  explicit Init_CapabilityInterface_inputs(::ros_bt_py_interfaces::msg::CapabilityInterface & msg)
  : msg_(msg)
  {}
  Init_CapabilityInterface_outputs inputs(::ros_bt_py_interfaces::msg::CapabilityInterface::_inputs_type arg)
  {
    msg_.inputs = std::move(arg);
    return Init_CapabilityInterface_outputs(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::CapabilityInterface msg_;
};

class Init_CapabilityInterface_options
{
public:
  explicit Init_CapabilityInterface_options(::ros_bt_py_interfaces::msg::CapabilityInterface & msg)
  : msg_(msg)
  {}
  Init_CapabilityInterface_inputs options(::ros_bt_py_interfaces::msg::CapabilityInterface::_options_type arg)
  {
    msg_.options = std::move(arg);
    return Init_CapabilityInterface_inputs(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::CapabilityInterface msg_;
};

class Init_CapabilityInterface_description
{
public:
  explicit Init_CapabilityInterface_description(::ros_bt_py_interfaces::msg::CapabilityInterface & msg)
  : msg_(msg)
  {}
  Init_CapabilityInterface_options description(::ros_bt_py_interfaces::msg::CapabilityInterface::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_CapabilityInterface_options(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::CapabilityInterface msg_;
};

class Init_CapabilityInterface_name
{
public:
  Init_CapabilityInterface_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CapabilityInterface_description name(::ros_bt_py_interfaces::msg::CapabilityInterface::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_CapabilityInterface_description(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::CapabilityInterface msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::msg::CapabilityInterface>()
{
  return ros_bt_py_interfaces::msg::builder::Init_CapabilityInterface_name();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__CAPABILITY_INTERFACE__BUILDER_HPP_
