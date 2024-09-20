// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mobiman_msgs:msg/JointSpeedStamped.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__MSG__DETAIL__JOINT_SPEED_STAMPED__BUILDER_HPP_
#define MOBIMAN_MSGS__MSG__DETAIL__JOINT_SPEED_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mobiman_msgs/msg/detail/joint_speed_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mobiman_msgs
{

namespace msg
{

namespace builder
{

class Init_JointSpeedStamped_speed
{
public:
  explicit Init_JointSpeedStamped_speed(::mobiman_msgs::msg::JointSpeedStamped & msg)
  : msg_(msg)
  {}
  ::mobiman_msgs::msg::JointSpeedStamped speed(::mobiman_msgs::msg::JointSpeedStamped::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mobiman_msgs::msg::JointSpeedStamped msg_;
};

class Init_JointSpeedStamped_header
{
public:
  Init_JointSpeedStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointSpeedStamped_speed header(::mobiman_msgs::msg::JointSpeedStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_JointSpeedStamped_speed(msg_);
  }

private:
  ::mobiman_msgs::msg::JointSpeedStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mobiman_msgs::msg::JointSpeedStamped>()
{
  return mobiman_msgs::msg::builder::Init_JointSpeedStamped_header();
}

}  // namespace mobiman_msgs

#endif  // MOBIMAN_MSGS__MSG__DETAIL__JOINT_SPEED_STAMPED__BUILDER_HPP_
