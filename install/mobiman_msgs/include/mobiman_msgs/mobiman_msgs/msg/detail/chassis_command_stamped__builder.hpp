// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mobiman_msgs:msg/ChassisCommandStamped.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__MSG__DETAIL__CHASSIS_COMMAND_STAMPED__BUILDER_HPP_
#define MOBIMAN_MSGS__MSG__DETAIL__CHASSIS_COMMAND_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mobiman_msgs/msg/detail/chassis_command_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mobiman_msgs
{

namespace msg
{

namespace builder
{

class Init_ChassisCommandStamped_command
{
public:
  explicit Init_ChassisCommandStamped_command(::mobiman_msgs::msg::ChassisCommandStamped & msg)
  : msg_(msg)
  {}
  ::mobiman_msgs::msg::ChassisCommandStamped command(::mobiman_msgs::msg::ChassisCommandStamped::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mobiman_msgs::msg::ChassisCommandStamped msg_;
};

class Init_ChassisCommandStamped_header
{
public:
  Init_ChassisCommandStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChassisCommandStamped_command header(::mobiman_msgs::msg::ChassisCommandStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ChassisCommandStamped_command(msg_);
  }

private:
  ::mobiman_msgs::msg::ChassisCommandStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mobiman_msgs::msg::ChassisCommandStamped>()
{
  return mobiman_msgs::msg::builder::Init_ChassisCommandStamped_header();
}

}  // namespace mobiman_msgs

#endif  // MOBIMAN_MSGS__MSG__DETAIL__CHASSIS_COMMAND_STAMPED__BUILDER_HPP_
