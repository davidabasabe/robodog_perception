// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:srv/GetStorageFolders.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_STORAGE_FOLDERS__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_STORAGE_FOLDERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/srv/detail/get_storage_folders__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::GetStorageFolders_Request>()
{
  return ::ros_bt_py_interfaces::srv::GetStorageFolders_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetStorageFolders_Response_storage_folders
{
public:
  Init_GetStorageFolders_Response_storage_folders()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_bt_py_interfaces::srv::GetStorageFolders_Response storage_folders(::ros_bt_py_interfaces::srv::GetStorageFolders_Response::_storage_folders_type arg)
  {
    msg_.storage_folders = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GetStorageFolders_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::GetStorageFolders_Response>()
{
  return ros_bt_py_interfaces::srv::builder::Init_GetStorageFolders_Response_storage_folders();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_STORAGE_FOLDERS__BUILDER_HPP_
