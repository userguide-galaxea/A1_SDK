// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mobiman_msgs:msg/Button3d.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__MSG__DETAIL__BUTTON3D__BUILDER_HPP_
#define MOBIMAN_MSGS__MSG__DETAIL__BUTTON3D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mobiman_msgs/msg/detail/button3d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mobiman_msgs
{

namespace msg
{

namespace builder
{

class Init_Button3d_button_semantics
{
public:
  explicit Init_Button3d_button_semantics(::mobiman_msgs::msg::Button3d & msg)
  : msg_(msg)
  {}
  ::mobiman_msgs::msg::Button3d button_semantics(::mobiman_msgs::msg::Button3d::_button_semantics_type arg)
  {
    msg_.button_semantics = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mobiman_msgs::msg::Button3d msg_;
};

class Init_Button3d_pose
{
public:
  Init_Button3d_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Button3d_button_semantics pose(::mobiman_msgs::msg::Button3d::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Button3d_button_semantics(msg_);
  }

private:
  ::mobiman_msgs::msg::Button3d msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mobiman_msgs::msg::Button3d>()
{
  return mobiman_msgs::msg::builder::Init_Button3d_pose();
}

}  // namespace mobiman_msgs

#endif  // MOBIMAN_MSGS__MSG__DETAIL__BUTTON3D__BUILDER_HPP_
