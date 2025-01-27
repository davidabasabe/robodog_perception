// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:msg/Wall.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__WALL__BUILDER_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__WALL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/msg/detail/wall__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_Wall_angle_right
{
public:
  explicit Init_Wall_angle_right(::robot_interfaces::msg::Wall & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::msg::Wall angle_right(::robot_interfaces::msg::Wall::_angle_right_type arg)
  {
    msg_.angle_right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::msg::Wall msg_;
};

class Init_Wall_angle_left
{
public:
  explicit Init_Wall_angle_left(::robot_interfaces::msg::Wall & msg)
  : msg_(msg)
  {}
  Init_Wall_angle_right angle_left(::robot_interfaces::msg::Wall::_angle_left_type arg)
  {
    msg_.angle_left = std::move(arg);
    return Init_Wall_angle_right(msg_);
  }

private:
  ::robot_interfaces::msg::Wall msg_;
};

class Init_Wall_distance_front
{
public:
  explicit Init_Wall_distance_front(::robot_interfaces::msg::Wall & msg)
  : msg_(msg)
  {}
  Init_Wall_angle_left distance_front(::robot_interfaces::msg::Wall::_distance_front_type arg)
  {
    msg_.distance_front = std::move(arg);
    return Init_Wall_angle_left(msg_);
  }

private:
  ::robot_interfaces::msg::Wall msg_;
};

class Init_Wall_distance_right
{
public:
  explicit Init_Wall_distance_right(::robot_interfaces::msg::Wall & msg)
  : msg_(msg)
  {}
  Init_Wall_distance_front distance_right(::robot_interfaces::msg::Wall::_distance_right_type arg)
  {
    msg_.distance_right = std::move(arg);
    return Init_Wall_distance_front(msg_);
  }

private:
  ::robot_interfaces::msg::Wall msg_;
};

class Init_Wall_distance_left
{
public:
  Init_Wall_distance_left()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Wall_distance_right distance_left(::robot_interfaces::msg::Wall::_distance_left_type arg)
  {
    msg_.distance_left = std::move(arg);
    return Init_Wall_distance_right(msg_);
  }

private:
  ::robot_interfaces::msg::Wall msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::msg::Wall>()
{
  return robot_interfaces::msg::builder::Init_Wall_distance_left();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__WALL__BUILDER_HPP_
