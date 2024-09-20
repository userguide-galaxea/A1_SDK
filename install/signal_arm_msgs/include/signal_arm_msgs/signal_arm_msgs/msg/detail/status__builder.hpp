// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from signal_arm_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef SIGNAL_ARM_MSGS__MSG__DETAIL__STATUS__BUILDER_HPP_
#define SIGNAL_ARM_MSGS__MSG__DETAIL__STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "signal_arm_msgs/msg/detail/status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace signal_arm_msgs
{

namespace msg
{

namespace builder
{

class Init_Status_motor_errors
{
public:
  explicit Init_Status_motor_errors(::signal_arm_msgs::msg::Status & msg)
  : msg_(msg)
  {}
  ::signal_arm_msgs::msg::Status motor_errors(::signal_arm_msgs::msg::Status::_motor_errors_type arg)
  {
    msg_.motor_errors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::signal_arm_msgs::msg::Status msg_;
};

class Init_Status_name
{
public:
  Init_Status_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Status_motor_errors name(::signal_arm_msgs::msg::Status::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Status_motor_errors(msg_);
  }

private:
  ::signal_arm_msgs::msg::Status msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::signal_arm_msgs::msg::Status>()
{
  return signal_arm_msgs::msg::builder::Init_Status_name();
}

}  // namespace signal_arm_msgs

#endif  // SIGNAL_ARM_MSGS__MSG__DETAIL__STATUS__BUILDER_HPP_
