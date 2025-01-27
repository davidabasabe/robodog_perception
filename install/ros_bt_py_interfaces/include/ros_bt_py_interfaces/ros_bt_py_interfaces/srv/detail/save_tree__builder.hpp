// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:srv/SaveTree.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__SAVE_TREE__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__SAVE_TREE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/srv/detail/save_tree__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_SaveTree_Request_allow_rename
{
public:
  explicit Init_SaveTree_Request_allow_rename(::ros_bt_py_interfaces::srv::SaveTree_Request & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::SaveTree_Request allow_rename(::ros_bt_py_interfaces::srv::SaveTree_Request::_allow_rename_type arg)
  {
    msg_.allow_rename = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::SaveTree_Request msg_;
};

class Init_SaveTree_Request_allow_overwrite
{
public:
  explicit Init_SaveTree_Request_allow_overwrite(::ros_bt_py_interfaces::srv::SaveTree_Request & msg)
  : msg_(msg)
  {}
  Init_SaveTree_Request_allow_rename allow_overwrite(::ros_bt_py_interfaces::srv::SaveTree_Request::_allow_overwrite_type arg)
  {
    msg_.allow_overwrite = std::move(arg);
    return Init_SaveTree_Request_allow_rename(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::SaveTree_Request msg_;
};

class Init_SaveTree_Request_tree
{
public:
  explicit Init_SaveTree_Request_tree(::ros_bt_py_interfaces::srv::SaveTree_Request & msg)
  : msg_(msg)
  {}
  Init_SaveTree_Request_allow_overwrite tree(::ros_bt_py_interfaces::srv::SaveTree_Request::_tree_type arg)
  {
    msg_.tree = std::move(arg);
    return Init_SaveTree_Request_allow_overwrite(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::SaveTree_Request msg_;
};

class Init_SaveTree_Request_filepath
{
public:
  explicit Init_SaveTree_Request_filepath(::ros_bt_py_interfaces::srv::SaveTree_Request & msg)
  : msg_(msg)
  {}
  Init_SaveTree_Request_tree filepath(::ros_bt_py_interfaces::srv::SaveTree_Request::_filepath_type arg)
  {
    msg_.filepath = std::move(arg);
    return Init_SaveTree_Request_tree(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::SaveTree_Request msg_;
};

class Init_SaveTree_Request_storage_path
{
public:
  Init_SaveTree_Request_storage_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveTree_Request_filepath storage_path(::ros_bt_py_interfaces::srv::SaveTree_Request::_storage_path_type arg)
  {
    msg_.storage_path = std::move(arg);
    return Init_SaveTree_Request_filepath(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::SaveTree_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::SaveTree_Request>()
{
  return ros_bt_py_interfaces::srv::builder::Init_SaveTree_Request_storage_path();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_SaveTree_Response_file_path
{
public:
  explicit Init_SaveTree_Response_file_path(::ros_bt_py_interfaces::srv::SaveTree_Response & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::SaveTree_Response file_path(::ros_bt_py_interfaces::srv::SaveTree_Response::_file_path_type arg)
  {
    msg_.file_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::SaveTree_Response msg_;
};

class Init_SaveTree_Response_error_message
{
public:
  explicit Init_SaveTree_Response_error_message(::ros_bt_py_interfaces::srv::SaveTree_Response & msg)
  : msg_(msg)
  {}
  Init_SaveTree_Response_file_path error_message(::ros_bt_py_interfaces::srv::SaveTree_Response::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return Init_SaveTree_Response_file_path(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::SaveTree_Response msg_;
};

class Init_SaveTree_Response_success
{
public:
  Init_SaveTree_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveTree_Response_error_message success(::ros_bt_py_interfaces::srv::SaveTree_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SaveTree_Response_error_message(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::SaveTree_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::SaveTree_Response>()
{
  return ros_bt_py_interfaces::srv::builder::Init_SaveTree_Response_success();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__SAVE_TREE__BUILDER_HPP_
