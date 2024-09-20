// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from signal_arm_msgs:msg/MotorError.idl
// generated code does not contain a copyright notice

#ifndef SIGNAL_ARM_MSGS__MSG__DETAIL__MOTOR_ERROR__BUILDER_HPP_
#define SIGNAL_ARM_MSGS__MSG__DETAIL__MOTOR_ERROR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "signal_arm_msgs/msg/detail/motor_error__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace signal_arm_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorError_error_description
{
public:
  explicit Init_MotorError_error_description(::signal_arm_msgs::msg::MotorError & msg)
  : msg_(msg)
  {}
  ::signal_arm_msgs::msg::MotorError error_description(::signal_arm_msgs::msg::MotorError::_error_description_type arg)
  {
    msg_.error_description = std::move(arg);
    return std::move(msg_);
  }

private:
  ::signal_arm_msgs::msg::MotorError msg_;
};

class Init_MotorError_error_code
{
public:
  Init_MotorError_error_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorError_error_description error_code(::signal_arm_msgs::msg::MotorError::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_MotorError_error_description(msg_);
  }

private:
  ::signal_arm_msgs::msg::MotorError msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::signal_arm_msgs::msg::MotorError>()
{
  return signal_arm_msgs::msg::builder::Init_MotorError_error_code();
}

}  // namespace signal_arm_msgs

#endif  // SIGNAL_ARM_MSGS__MSG__DETAIL__MOTOR_ERROR__BUILDER_HPP_
