// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:msg/Tree.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__TREE__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__TREE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/msg/detail/tree__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace msg
{

namespace builder
{

class Init_Tree_public_node_data
{
public:
  explicit Init_Tree_public_node_data(::ros_bt_py_interfaces::msg::Tree & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::msg::Tree public_node_data(::ros_bt_py_interfaces::msg::Tree::_public_node_data_type arg)
  {
    msg_.public_node_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::Tree msg_;
};

class Init_Tree_state
{
public:
  explicit Init_Tree_state(::ros_bt_py_interfaces::msg::Tree & msg)
  : msg_(msg)
  {}
  Init_Tree_public_node_data state(::ros_bt_py_interfaces::msg::Tree::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_Tree_public_node_data(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::Tree msg_;
};

class Init_Tree_tick_frequency_hz
{
public:
  explicit Init_Tree_tick_frequency_hz(::ros_bt_py_interfaces::msg::Tree & msg)
  : msg_(msg)
  {}
  Init_Tree_state tick_frequency_hz(::ros_bt_py_interfaces::msg::Tree::_tick_frequency_hz_type arg)
  {
    msg_.tick_frequency_hz = std::move(arg);
    return Init_Tree_state(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::Tree msg_;
};

class Init_Tree_data_wirings
{
public:
  explicit Init_Tree_data_wirings(::ros_bt_py_interfaces::msg::Tree & msg)
  : msg_(msg)
  {}
  Init_Tree_tick_frequency_hz data_wirings(::ros_bt_py_interfaces::msg::Tree::_data_wirings_type arg)
  {
    msg_.data_wirings = std::move(arg);
    return Init_Tree_tick_frequency_hz(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::Tree msg_;
};

class Init_Tree_nodes
{
public:
  explicit Init_Tree_nodes(::ros_bt_py_interfaces::msg::Tree & msg)
  : msg_(msg)
  {}
  Init_Tree_data_wirings nodes(::ros_bt_py_interfaces::msg::Tree::_nodes_type arg)
  {
    msg_.nodes = std::move(arg);
    return Init_Tree_data_wirings(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::Tree msg_;
};

class Init_Tree_root_name
{
public:
  explicit Init_Tree_root_name(::ros_bt_py_interfaces::msg::Tree & msg)
  : msg_(msg)
  {}
  Init_Tree_nodes root_name(::ros_bt_py_interfaces::msg::Tree::_root_name_type arg)
  {
    msg_.root_name = std::move(arg);
    return Init_Tree_nodes(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::Tree msg_;
};

class Init_Tree_path
{
public:
  explicit Init_Tree_path(::ros_bt_py_interfaces::msg::Tree & msg)
  : msg_(msg)
  {}
  Init_Tree_root_name path(::ros_bt_py_interfaces::msg::Tree::_path_type arg)
  {
    msg_.path = std::move(arg);
    return Init_Tree_root_name(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::Tree msg_;
};

class Init_Tree_name
{
public:
  Init_Tree_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Tree_path name(::ros_bt_py_interfaces::msg::Tree::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Tree_path(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::Tree msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::msg::Tree>()
{
  return ros_bt_py_interfaces::msg::builder::Init_Tree_name();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__TREE__BUILDER_HPP_
