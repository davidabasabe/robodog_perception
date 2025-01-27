// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:srv/GetFolderStructure.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_FOLDER_STRUCTURE__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_FOLDER_STRUCTURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/srv/detail/get_folder_structure__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetFolderStructure_Request_show_hidden
{
public:
  explicit Init_GetFolderStructure_Request_show_hidden(::ros_bt_py_interfaces::srv::GetFolderStructure_Request & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::GetFolderStructure_Request show_hidden(::ros_bt_py_interfaces::srv::GetFolderStructure_Request::_show_hidden_type arg)
  {
    msg_.show_hidden = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GetFolderStructure_Request msg_;
};

class Init_GetFolderStructure_Request_storage_folder
{
public:
  Init_GetFolderStructure_Request_storage_folder()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetFolderStructure_Request_show_hidden storage_folder(::ros_bt_py_interfaces::srv::GetFolderStructure_Request::_storage_folder_type arg)
  {
    msg_.storage_folder = std::move(arg);
    return Init_GetFolderStructure_Request_show_hidden(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GetFolderStructure_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::GetFolderStructure_Request>()
{
  return ros_bt_py_interfaces::srv::builder::Init_GetFolderStructure_Request_storage_folder();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetFolderStructure_Response_storage_folder_structure
{
public:
  explicit Init_GetFolderStructure_Response_storage_folder_structure(::ros_bt_py_interfaces::srv::GetFolderStructure_Response & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::GetFolderStructure_Response storage_folder_structure(::ros_bt_py_interfaces::srv::GetFolderStructure_Response::_storage_folder_structure_type arg)
  {
    msg_.storage_folder_structure = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GetFolderStructure_Response msg_;
};

class Init_GetFolderStructure_Response_error_message
{
public:
  explicit Init_GetFolderStructure_Response_error_message(::ros_bt_py_interfaces::srv::GetFolderStructure_Response & msg)
  : msg_(msg)
  {}
  Init_GetFolderStructure_Response_storage_folder_structure error_message(::ros_bt_py_interfaces::srv::GetFolderStructure_Response::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return Init_GetFolderStructure_Response_storage_folder_structure(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GetFolderStructure_Response msg_;
};

class Init_GetFolderStructure_Response_success
{
public:
  Init_GetFolderStructure_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetFolderStructure_Response_error_message success(::ros_bt_py_interfaces::srv::GetFolderStructure_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetFolderStructure_Response_error_message(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GetFolderStructure_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::GetFolderStructure_Response>()
{
  return ros_bt_py_interfaces::srv::builder::Init_GetFolderStructure_Response_success();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_FOLDER_STRUCTURE__BUILDER_HPP_
