// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:msg/Intrinsics.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__INTRINSICS__BUILDER_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__INTRINSICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/msg/detail/intrinsics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_Intrinsics_coeffs
{
public:
  explicit Init_Intrinsics_coeffs(::robot_interfaces::msg::Intrinsics & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::msg::Intrinsics coeffs(::robot_interfaces::msg::Intrinsics::_coeffs_type arg)
  {
    msg_.coeffs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::msg::Intrinsics msg_;
};

class Init_Intrinsics_model
{
public:
  explicit Init_Intrinsics_model(::robot_interfaces::msg::Intrinsics & msg)
  : msg_(msg)
  {}
  Init_Intrinsics_coeffs model(::robot_interfaces::msg::Intrinsics::_model_type arg)
  {
    msg_.model = std::move(arg);
    return Init_Intrinsics_coeffs(msg_);
  }

private:
  ::robot_interfaces::msg::Intrinsics msg_;
};

class Init_Intrinsics_depth_scale
{
public:
  explicit Init_Intrinsics_depth_scale(::robot_interfaces::msg::Intrinsics & msg)
  : msg_(msg)
  {}
  Init_Intrinsics_model depth_scale(::robot_interfaces::msg::Intrinsics::_depth_scale_type arg)
  {
    msg_.depth_scale = std::move(arg);
    return Init_Intrinsics_model(msg_);
  }

private:
  ::robot_interfaces::msg::Intrinsics msg_;
};

class Init_Intrinsics_fy
{
public:
  explicit Init_Intrinsics_fy(::robot_interfaces::msg::Intrinsics & msg)
  : msg_(msg)
  {}
  Init_Intrinsics_depth_scale fy(::robot_interfaces::msg::Intrinsics::_fy_type arg)
  {
    msg_.fy = std::move(arg);
    return Init_Intrinsics_depth_scale(msg_);
  }

private:
  ::robot_interfaces::msg::Intrinsics msg_;
};

class Init_Intrinsics_fx
{
public:
  explicit Init_Intrinsics_fx(::robot_interfaces::msg::Intrinsics & msg)
  : msg_(msg)
  {}
  Init_Intrinsics_fy fx(::robot_interfaces::msg::Intrinsics::_fx_type arg)
  {
    msg_.fx = std::move(arg);
    return Init_Intrinsics_fy(msg_);
  }

private:
  ::robot_interfaces::msg::Intrinsics msg_;
};

class Init_Intrinsics_ppy
{
public:
  explicit Init_Intrinsics_ppy(::robot_interfaces::msg::Intrinsics & msg)
  : msg_(msg)
  {}
  Init_Intrinsics_fx ppy(::robot_interfaces::msg::Intrinsics::_ppy_type arg)
  {
    msg_.ppy = std::move(arg);
    return Init_Intrinsics_fx(msg_);
  }

private:
  ::robot_interfaces::msg::Intrinsics msg_;
};

class Init_Intrinsics_ppx
{
public:
  explicit Init_Intrinsics_ppx(::robot_interfaces::msg::Intrinsics & msg)
  : msg_(msg)
  {}
  Init_Intrinsics_ppy ppx(::robot_interfaces::msg::Intrinsics::_ppx_type arg)
  {
    msg_.ppx = std::move(arg);
    return Init_Intrinsics_ppy(msg_);
  }

private:
  ::robot_interfaces::msg::Intrinsics msg_;
};

class Init_Intrinsics_height
{
public:
  explicit Init_Intrinsics_height(::robot_interfaces::msg::Intrinsics & msg)
  : msg_(msg)
  {}
  Init_Intrinsics_ppx height(::robot_interfaces::msg::Intrinsics::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_Intrinsics_ppx(msg_);
  }

private:
  ::robot_interfaces::msg::Intrinsics msg_;
};

class Init_Intrinsics_width
{
public:
  Init_Intrinsics_width()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Intrinsics_height width(::robot_interfaces::msg::Intrinsics::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_Intrinsics_height(msg_);
  }

private:
  ::robot_interfaces::msg::Intrinsics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::msg::Intrinsics>()
{
  return robot_interfaces::msg::builder::Init_Intrinsics_width();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__INTRINSICS__BUILDER_HPP_
