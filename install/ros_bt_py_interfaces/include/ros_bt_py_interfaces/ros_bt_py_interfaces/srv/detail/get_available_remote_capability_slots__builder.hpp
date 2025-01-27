// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:srv/GetAvailableRemoteCapabilitySlots.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_AVAILABLE_REMOTE_CAPABILITY_SLOTS__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_AVAILABLE_REMOTE_CAPABILITY_SLOTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/srv/detail/get_available_remote_capability_slots__struct.hpp"
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
auto build<::ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Request>()
{
  return ::ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetAvailableRemoteCapabilitySlots_Response_available_remote_capability_slots
{
public:
  Init_GetAvailableRemoteCapabilitySlots_Response_available_remote_capability_slots()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Response available_remote_capability_slots(::ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Response::_available_remote_capability_slots_type arg)
  {
    msg_.available_remote_capability_slots = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Response>()
{
  return ros_bt_py_interfaces::srv::builder::Init_GetAvailableRemoteCapabilitySlots_Response_available_remote_capability_slots();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_AVAILABLE_REMOTE_CAPABILITY_SLOTS__BUILDER_HPP_
