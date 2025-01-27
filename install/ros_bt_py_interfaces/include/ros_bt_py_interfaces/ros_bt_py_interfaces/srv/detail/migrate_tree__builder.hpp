// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:srv/MigrateTree.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__MIGRATE_TREE__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__MIGRATE_TREE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/srv/detail/migrate_tree__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_MigrateTree_Request_tree
{
public:
  Init_MigrateTree_Request_tree()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_bt_py_interfaces::srv::MigrateTree_Request tree(::ros_bt_py_interfaces::srv::MigrateTree_Request::_tree_type arg)
  {
    msg_.tree = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::MigrateTree_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::MigrateTree_Request>()
{
  return ros_bt_py_interfaces::srv::builder::Init_MigrateTree_Request_tree();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_MigrateTree_Response_error_message
{
public:
  explicit Init_MigrateTree_Response_error_message(::ros_bt_py_interfaces::srv::MigrateTree_Response & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::MigrateTree_Response error_message(::ros_bt_py_interfaces::srv::MigrateTree_Response::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::MigrateTree_Response msg_;
};

class Init_MigrateTree_Response_success
{
public:
  explicit Init_MigrateTree_Response_success(::ros_bt_py_interfaces::srv::MigrateTree_Response & msg)
  : msg_(msg)
  {}
  Init_MigrateTree_Response_error_message success(::ros_bt_py_interfaces::srv::MigrateTree_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MigrateTree_Response_error_message(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::MigrateTree_Response msg_;
};

class Init_MigrateTree_Response_migrated
{
public:
  explicit Init_MigrateTree_Response_migrated(::ros_bt_py_interfaces::srv::MigrateTree_Response & msg)
  : msg_(msg)
  {}
  Init_MigrateTree_Response_success migrated(::ros_bt_py_interfaces::srv::MigrateTree_Response::_migrated_type arg)
  {
    msg_.migrated = std::move(arg);
    return Init_MigrateTree_Response_success(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::MigrateTree_Response msg_;
};

class Init_MigrateTree_Response_tree
{
public:
  Init_MigrateTree_Response_tree()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MigrateTree_Response_migrated tree(::ros_bt_py_interfaces::srv::MigrateTree_Response::_tree_type arg)
  {
    msg_.tree = std::move(arg);
    return Init_MigrateTree_Response_migrated(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::MigrateTree_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::MigrateTree_Response>()
{
  return ros_bt_py_interfaces::srv::builder::Init_MigrateTree_Response_tree();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__MIGRATE_TREE__BUILDER_HPP_
