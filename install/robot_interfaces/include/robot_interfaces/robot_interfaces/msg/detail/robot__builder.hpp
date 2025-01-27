// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:msg/Robot.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__ROBOT__BUILDER_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__ROBOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/msg/detail/robot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_Robot_wall
{
public:
  explicit Init_Robot_wall(::robot_interfaces::msg::Robot & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::msg::Robot wall(::robot_interfaces::msg::Robot::_wall_type arg)
  {
    msg_.wall = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::msg::Robot msg_;
};

class Init_Robot_stair
{
public:
  explicit Init_Robot_stair(::robot_interfaces::msg::Robot & msg)
  : msg_(msg)
  {}
  Init_Robot_wall stair(::robot_interfaces::msg::Robot::_stair_type arg)
  {
    msg_.stair = std::move(arg);
    return Init_Robot_wall(msg_);
  }

private:
  ::robot_interfaces::msg::Robot msg_;
};

class Init_Robot_lava
{
public:
  explicit Init_Robot_lava(::robot_interfaces::msg::Robot & msg)
  : msg_(msg)
  {}
  Init_Robot_stair lava(::robot_interfaces::msg::Robot::_lava_type arg)
  {
    msg_.lava = std::move(arg);
    return Init_Robot_stair(msg_);
  }

private:
  ::robot_interfaces::msg::Robot msg_;
};

class Init_Robot_arrow
{
public:
  Init_Robot_arrow()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Robot_lava arrow(::robot_interfaces::msg::Robot::_arrow_type arg)
  {
    msg_.arrow = std::move(arg);
    return Init_Robot_lava(msg_);
  }

private:
  ::robot_interfaces::msg::Robot msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::msg::Robot>()
{
  return robot_interfaces::msg::builder::Init_Robot_arrow();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__ROBOT__BUILDER_HPP_
