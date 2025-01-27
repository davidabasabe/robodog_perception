// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:msg/NodeDataWiring.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__NODE_DATA_WIRING__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__NODE_DATA_WIRING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/msg/detail/node_data_wiring__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace msg
{

namespace builder
{

class Init_NodeDataWiring_target
{
public:
  explicit Init_NodeDataWiring_target(::ros_bt_py_interfaces::msg::NodeDataWiring & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::msg::NodeDataWiring target(::ros_bt_py_interfaces::msg::NodeDataWiring::_target_type arg)
  {
    msg_.target = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::NodeDataWiring msg_;
};

class Init_NodeDataWiring_source
{
public:
  Init_NodeDataWiring_source()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeDataWiring_target source(::ros_bt_py_interfaces::msg::NodeDataWiring::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_NodeDataWiring_target(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::NodeDataWiring msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::msg::NodeDataWiring>()
{
  return ros_bt_py_interfaces::msg::builder::Init_NodeDataWiring_source();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__NODE_DATA_WIRING__BUILDER_HPP_
