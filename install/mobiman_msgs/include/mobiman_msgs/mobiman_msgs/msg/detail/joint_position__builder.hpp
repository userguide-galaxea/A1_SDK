// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mobiman_msgs:msg/JointPosition.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__MSG__DETAIL__JOINT_POSITION__BUILDER_HPP_
#define MOBIMAN_MSGS__MSG__DETAIL__JOINT_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mobiman_msgs/msg/detail/joint_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mobiman_msgs
{

namespace msg
{

namespace builder
{

class Init_JointPosition_pos
{
public:
  Init_JointPosition_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mobiman_msgs::msg::JointPosition pos(::mobiman_msgs::msg::JointPosition::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mobiman_msgs::msg::JointPosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mobiman_msgs::msg::JointPosition>()
{
  return mobiman_msgs::msg::builder::Init_JointPosition_pos();
}

}  // namespace mobiman_msgs

#endif  // MOBIMAN_MSGS__MSG__DETAIL__JOINT_POSITION__BUILDER_HPP_
