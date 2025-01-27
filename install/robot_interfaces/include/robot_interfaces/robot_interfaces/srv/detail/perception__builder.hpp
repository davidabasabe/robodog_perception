// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:srv/Perception.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__SRV__DETAIL__PERCEPTION__BUILDER_HPP_
#define ROBOT_INTERFACES__SRV__DETAIL__PERCEPTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/srv/detail/perception__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::srv::Perception_Request>()
{
  return ::robot_interfaces::srv::Perception_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace robot_interfaces


namespace robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_Perception_Response_robot
{
public:
  Init_Perception_Response_robot()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_interfaces::srv::Perception_Response robot(::robot_interfaces::srv::Perception_Response::_robot_type arg)
  {
    msg_.robot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::srv::Perception_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::srv::Perception_Response>()
{
  return robot_interfaces::srv::builder::Init_Perception_Response_robot();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__SRV__DETAIL__PERCEPTION__BUILDER_HPP_
