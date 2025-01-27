// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:msg/Stair.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__STAIR__BUILDER_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__STAIR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/msg/detail/stair__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_Stair_distance
{
public:
  explicit Init_Stair_distance(::robot_interfaces::msg::Stair & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::msg::Stair distance(::robot_interfaces::msg::Stair::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::msg::Stair msg_;
};

class Init_Stair_upstairs
{
public:
  explicit Init_Stair_upstairs(::robot_interfaces::msg::Stair & msg)
  : msg_(msg)
  {}
  Init_Stair_distance upstairs(::robot_interfaces::msg::Stair::_upstairs_type arg)
  {
    msg_.upstairs = std::move(arg);
    return Init_Stair_distance(msg_);
  }

private:
  ::robot_interfaces::msg::Stair msg_;
};

class Init_Stair_detected
{
public:
  Init_Stair_detected()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Stair_upstairs detected(::robot_interfaces::msg::Stair::_detected_type arg)
  {
    msg_.detected = std::move(arg);
    return Init_Stair_upstairs(msg_);
  }

private:
  ::robot_interfaces::msg::Stair msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::msg::Stair>()
{
  return robot_interfaces::msg::builder::Init_Stair_detected();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__STAIR__BUILDER_HPP_
