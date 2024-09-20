// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mobiman_msgs:msg/Panel3d.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__MSG__DETAIL__PANEL3D__BUILDER_HPP_
#define MOBIMAN_MSGS__MSG__DETAIL__PANEL3D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mobiman_msgs/msg/detail/panel3d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mobiman_msgs
{

namespace msg
{

namespace builder
{

class Init_Panel3d_buttons_3d
{
public:
  explicit Init_Panel3d_buttons_3d(::mobiman_msgs::msg::Panel3d & msg)
  : msg_(msg)
  {}
  ::mobiman_msgs::msg::Panel3d buttons_3d(::mobiman_msgs::msg::Panel3d::_buttons_3d_type arg)
  {
    msg_.buttons_3d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mobiman_msgs::msg::Panel3d msg_;
};

class Init_Panel3d_width
{
public:
  explicit Init_Panel3d_width(::mobiman_msgs::msg::Panel3d & msg)
  : msg_(msg)
  {}
  Init_Panel3d_buttons_3d width(::mobiman_msgs::msg::Panel3d::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_Panel3d_buttons_3d(msg_);
  }

private:
  ::mobiman_msgs::msg::Panel3d msg_;
};

class Init_Panel3d_length
{
public:
  explicit Init_Panel3d_length(::mobiman_msgs::msg::Panel3d & msg)
  : msg_(msg)
  {}
  Init_Panel3d_width length(::mobiman_msgs::msg::Panel3d::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_Panel3d_width(msg_);
  }

private:
  ::mobiman_msgs::msg::Panel3d msg_;
};

class Init_Panel3d_normal
{
public:
  explicit Init_Panel3d_normal(::mobiman_msgs::msg::Panel3d & msg)
  : msg_(msg)
  {}
  Init_Panel3d_length normal(::mobiman_msgs::msg::Panel3d::_normal_type arg)
  {
    msg_.normal = std::move(arg);
    return Init_Panel3d_length(msg_);
  }

private:
  ::mobiman_msgs::msg::Panel3d msg_;
};

class Init_Panel3d_origin
{
public:
  Init_Panel3d_origin()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Panel3d_normal origin(::mobiman_msgs::msg::Panel3d::_origin_type arg)
  {
    msg_.origin = std::move(arg);
    return Init_Panel3d_normal(msg_);
  }

private:
  ::mobiman_msgs::msg::Panel3d msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mobiman_msgs::msg::Panel3d>()
{
  return mobiman_msgs::msg::builder::Init_Panel3d_origin();
}

}  // namespace mobiman_msgs

#endif  // MOBIMAN_MSGS__MSG__DETAIL__PANEL3D__BUILDER_HPP_
