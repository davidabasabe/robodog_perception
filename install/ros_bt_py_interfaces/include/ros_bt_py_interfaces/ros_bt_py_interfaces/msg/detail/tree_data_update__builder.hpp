// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:msg/TreeDataUpdate.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__TREE_DATA_UPDATE__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__TREE_DATA_UPDATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/msg/detail/tree_data_update__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace msg
{

namespace builder
{

class Init_TreeDataUpdate_data
{
public:
  Init_TreeDataUpdate_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_bt_py_interfaces::msg::TreeDataUpdate data(::ros_bt_py_interfaces::msg::TreeDataUpdate::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::TreeDataUpdate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::msg::TreeDataUpdate>()
{
  return ros_bt_py_interfaces::msg::builder::Init_TreeDataUpdate_data();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__TREE_DATA_UPDATE__BUILDER_HPP_
