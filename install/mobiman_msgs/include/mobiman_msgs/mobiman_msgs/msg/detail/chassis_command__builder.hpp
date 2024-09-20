// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mobiman_msgs:msg/ChassisCommand.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__MSG__DETAIL__CHASSIS_COMMAND__BUILDER_HPP_
#define MOBIMAN_MSGS__MSG__DETAIL__CHASSIS_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mobiman_msgs/msg/detail/chassis_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mobiman_msgs
{

namespace msg
{

namespace builder
{

class Init_ChassisCommand_wheel_speed
{
public:
  explicit Init_ChassisCommand_wheel_speed(::mobiman_msgs::msg::ChassisCommand & msg)
  : msg_(msg)
  {}
  ::mobiman_msgs::msg::ChassisCommand wheel_speed(::mobiman_msgs::msg::ChassisCommand::_wheel_speed_type arg)
  {
    msg_.wheel_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mobiman_msgs::msg::ChassisCommand msg_;
};

class Init_ChassisCommand_steer_angles
{
public:
  Init_ChassisCommand_steer_angles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChassisCommand_wheel_speed steer_angles(::mobiman_msgs::msg::ChassisCommand::_steer_angles_type arg)
  {
    msg_.steer_angles = std::move(arg);
    return Init_ChassisCommand_wheel_speed(msg_);
  }

private:
  ::mobiman_msgs::msg::ChassisCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mobiman_msgs::msg::ChassisCommand>()
{
  return mobiman_msgs::msg::builder::Init_ChassisCommand_steer_angles();
}

}  // namespace mobiman_msgs

#endif  // MOBIMAN_MSGS__MSG__DETAIL__CHASSIS_COMMAND__BUILDER_HPP_
