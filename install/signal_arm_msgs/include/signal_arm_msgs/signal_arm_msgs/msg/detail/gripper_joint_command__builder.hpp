// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from signal_arm_msgs:msg/GripperJointCommand.idl
// generated code does not contain a copyright notice

#ifndef SIGNAL_ARM_MSGS__MSG__DETAIL__GRIPPER_JOINT_COMMAND__BUILDER_HPP_
#define SIGNAL_ARM_MSGS__MSG__DETAIL__GRIPPER_JOINT_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "signal_arm_msgs/msg/detail/gripper_joint_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace signal_arm_msgs
{

namespace msg
{

namespace builder
{

class Init_GripperJointCommand_gripper_force
{
public:
  explicit Init_GripperJointCommand_gripper_force(::signal_arm_msgs::msg::GripperJointCommand & msg)
  : msg_(msg)
  {}
  ::signal_arm_msgs::msg::GripperJointCommand gripper_force(::signal_arm_msgs::msg::GripperJointCommand::_gripper_force_type arg)
  {
    msg_.gripper_force = std::move(arg);
    return std::move(msg_);
  }

private:
  ::signal_arm_msgs::msg::GripperJointCommand msg_;
};

class Init_GripperJointCommand_header
{
public:
  Init_GripperJointCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperJointCommand_gripper_force header(::signal_arm_msgs::msg::GripperJointCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GripperJointCommand_gripper_force(msg_);
  }

private:
  ::signal_arm_msgs::msg::GripperJointCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::signal_arm_msgs::msg::GripperJointCommand>()
{
  return signal_arm_msgs::msg::builder::Init_GripperJointCommand_header();
}

}  // namespace signal_arm_msgs

#endif  // SIGNAL_ARM_MSGS__MSG__DETAIL__GRIPPER_JOINT_COMMAND__BUILDER_HPP_
