// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from signal_arm_msgs:msg/GripperPositionControl.idl
// generated code does not contain a copyright notice

#ifndef SIGNAL_ARM_MSGS__MSG__DETAIL__GRIPPER_POSITION_CONTROL__BUILDER_HPP_
#define SIGNAL_ARM_MSGS__MSG__DETAIL__GRIPPER_POSITION_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "signal_arm_msgs/msg/detail/gripper_position_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace signal_arm_msgs
{

namespace msg
{

namespace builder
{

class Init_GripperPositionControl_gripper_stroke
{
public:
  explicit Init_GripperPositionControl_gripper_stroke(::signal_arm_msgs::msg::GripperPositionControl & msg)
  : msg_(msg)
  {}
  ::signal_arm_msgs::msg::GripperPositionControl gripper_stroke(::signal_arm_msgs::msg::GripperPositionControl::_gripper_stroke_type arg)
  {
    msg_.gripper_stroke = std::move(arg);
    return std::move(msg_);
  }

private:
  ::signal_arm_msgs::msg::GripperPositionControl msg_;
};

class Init_GripperPositionControl_header
{
public:
  Init_GripperPositionControl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperPositionControl_gripper_stroke header(::signal_arm_msgs::msg::GripperPositionControl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GripperPositionControl_gripper_stroke(msg_);
  }

private:
  ::signal_arm_msgs::msg::GripperPositionControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::signal_arm_msgs::msg::GripperPositionControl>()
{
  return signal_arm_msgs::msg::builder::Init_GripperPositionControl_header();
}

}  // namespace signal_arm_msgs

#endif  // SIGNAL_ARM_MSGS__MSG__DETAIL__GRIPPER_POSITION_CONTROL__BUILDER_HPP_
