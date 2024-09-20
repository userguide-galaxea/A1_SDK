// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from signal_arm_msgs:srv/FunctionFrame.idl
// generated code does not contain a copyright notice

#ifndef SIGNAL_ARM_MSGS__SRV__DETAIL__FUNCTION_FRAME__BUILDER_HPP_
#define SIGNAL_ARM_MSGS__SRV__DETAIL__FUNCTION_FRAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "signal_arm_msgs/srv/detail/function_frame__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace signal_arm_msgs
{

namespace srv
{

namespace builder
{

class Init_FunctionFrame_Request_command
{
public:
  Init_FunctionFrame_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::signal_arm_msgs::srv::FunctionFrame_Request command(::signal_arm_msgs::srv::FunctionFrame_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::signal_arm_msgs::srv::FunctionFrame_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::signal_arm_msgs::srv::FunctionFrame_Request>()
{
  return signal_arm_msgs::srv::builder::Init_FunctionFrame_Request_command();
}

}  // namespace signal_arm_msgs


namespace signal_arm_msgs
{

namespace srv
{

namespace builder
{

class Init_FunctionFrame_Response_message
{
public:
  explicit Init_FunctionFrame_Response_message(::signal_arm_msgs::srv::FunctionFrame_Response & msg)
  : msg_(msg)
  {}
  ::signal_arm_msgs::srv::FunctionFrame_Response message(::signal_arm_msgs::srv::FunctionFrame_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::signal_arm_msgs::srv::FunctionFrame_Response msg_;
};

class Init_FunctionFrame_Response_success
{
public:
  Init_FunctionFrame_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FunctionFrame_Response_message success(::signal_arm_msgs::srv::FunctionFrame_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_FunctionFrame_Response_message(msg_);
  }

private:
  ::signal_arm_msgs::srv::FunctionFrame_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::signal_arm_msgs::srv::FunctionFrame_Response>()
{
  return signal_arm_msgs::srv::builder::Init_FunctionFrame_Response_success();
}

}  // namespace signal_arm_msgs

#endif  // SIGNAL_ARM_MSGS__SRV__DETAIL__FUNCTION_FRAME__BUILDER_HPP_
