// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mobiman_msgs:msg/ArmBasicCommand.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__MSG__DETAIL__ARM_BASIC_COMMAND__BUILDER_HPP_
#define MOBIMAN_MSGS__MSG__DETAIL__ARM_BASIC_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mobiman_msgs/msg/detail/arm_basic_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mobiman_msgs
{

namespace msg
{

namespace builder
{

class Init_ArmBasicCommand_jspeed
{
public:
  explicit Init_ArmBasicCommand_jspeed(::mobiman_msgs::msg::ArmBasicCommand & msg)
  : msg_(msg)
  {}
  ::mobiman_msgs::msg::ArmBasicCommand jspeed(::mobiman_msgs::msg::ArmBasicCommand::_jspeed_type arg)
  {
    msg_.jspeed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mobiman_msgs::msg::ArmBasicCommand msg_;
};

class Init_ArmBasicCommand_jpos
{
public:
  explicit Init_ArmBasicCommand_jpos(::mobiman_msgs::msg::ArmBasicCommand & msg)
  : msg_(msg)
  {}
  Init_ArmBasicCommand_jspeed jpos(::mobiman_msgs::msg::ArmBasicCommand::_jpos_type arg)
  {
    msg_.jpos = std::move(arg);
    return Init_ArmBasicCommand_jspeed(msg_);
  }

private:
  ::mobiman_msgs::msg::ArmBasicCommand msg_;
};

class Init_ArmBasicCommand_header
{
public:
  Init_ArmBasicCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmBasicCommand_jpos header(::mobiman_msgs::msg::ArmBasicCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ArmBasicCommand_jpos(msg_);
  }

private:
  ::mobiman_msgs::msg::ArmBasicCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mobiman_msgs::msg::ArmBasicCommand>()
{
  return mobiman_msgs::msg::builder::Init_ArmBasicCommand_header();
}

}  // namespace mobiman_msgs

#endif  // MOBIMAN_MSGS__MSG__DETAIL__ARM_BASIC_COMMAND__BUILDER_HPP_
