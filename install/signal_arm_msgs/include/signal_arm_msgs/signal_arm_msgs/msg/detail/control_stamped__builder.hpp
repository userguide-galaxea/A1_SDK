// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from signal_arm_msgs:msg/ControlStamped.idl
// generated code does not contain a copyright notice

#ifndef SIGNAL_ARM_MSGS__MSG__DETAIL__CONTROL_STAMPED__BUILDER_HPP_
#define SIGNAL_ARM_MSGS__MSG__DETAIL__CONTROL_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "signal_arm_msgs/msg/detail/control_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace signal_arm_msgs
{

namespace msg
{

namespace builder
{

class Init_ControlStamped_data
{
public:
  explicit Init_ControlStamped_data(::signal_arm_msgs::msg::ControlStamped & msg)
  : msg_(msg)
  {}
  ::signal_arm_msgs::msg::ControlStamped data(::signal_arm_msgs::msg::ControlStamped::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::signal_arm_msgs::msg::ControlStamped msg_;
};

class Init_ControlStamped_header
{
public:
  Init_ControlStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlStamped_data header(::signal_arm_msgs::msg::ControlStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ControlStamped_data(msg_);
  }

private:
  ::signal_arm_msgs::msg::ControlStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::signal_arm_msgs::msg::ControlStamped>()
{
  return signal_arm_msgs::msg::builder::Init_ControlStamped_header();
}

}  // namespace signal_arm_msgs

#endif  // SIGNAL_ARM_MSGS__MSG__DETAIL__CONTROL_STAMPED__BUILDER_HPP_
