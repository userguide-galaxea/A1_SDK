// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mobiman_msgs:msg/JointPositionStamped.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__MSG__DETAIL__JOINT_POSITION_STAMPED__BUILDER_HPP_
#define MOBIMAN_MSGS__MSG__DETAIL__JOINT_POSITION_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mobiman_msgs/msg/detail/joint_position_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mobiman_msgs
{

namespace msg
{

namespace builder
{

class Init_JointPositionStamped_pos
{
public:
  explicit Init_JointPositionStamped_pos(::mobiman_msgs::msg::JointPositionStamped & msg)
  : msg_(msg)
  {}
  ::mobiman_msgs::msg::JointPositionStamped pos(::mobiman_msgs::msg::JointPositionStamped::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mobiman_msgs::msg::JointPositionStamped msg_;
};

class Init_JointPositionStamped_header
{
public:
  Init_JointPositionStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointPositionStamped_pos header(::mobiman_msgs::msg::JointPositionStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_JointPositionStamped_pos(msg_);
  }

private:
  ::mobiman_msgs::msg::JointPositionStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mobiman_msgs::msg::JointPositionStamped>()
{
  return mobiman_msgs::msg::builder::Init_JointPositionStamped_header();
}

}  // namespace mobiman_msgs

#endif  // MOBIMAN_MSGS__MSG__DETAIL__JOINT_POSITION_STAMPED__BUILDER_HPP_
