// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from signal_arm_msgs:msg/StatusStamped.idl
// generated code does not contain a copyright notice

#ifndef SIGNAL_ARM_MSGS__MSG__DETAIL__STATUS_STAMPED__BUILDER_HPP_
#define SIGNAL_ARM_MSGS__MSG__DETAIL__STATUS_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "signal_arm_msgs/msg/detail/status_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace signal_arm_msgs
{

namespace msg
{

namespace builder
{

class Init_StatusStamped_data
{
public:
  explicit Init_StatusStamped_data(::signal_arm_msgs::msg::StatusStamped & msg)
  : msg_(msg)
  {}
  ::signal_arm_msgs::msg::StatusStamped data(::signal_arm_msgs::msg::StatusStamped::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::signal_arm_msgs::msg::StatusStamped msg_;
};

class Init_StatusStamped_header
{
public:
  Init_StatusStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StatusStamped_data header(::signal_arm_msgs::msg::StatusStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StatusStamped_data(msg_);
  }

private:
  ::signal_arm_msgs::msg::StatusStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::signal_arm_msgs::msg::StatusStamped>()
{
  return signal_arm_msgs::msg::builder::Init_StatusStamped_header();
}

}  // namespace signal_arm_msgs

#endif  // SIGNAL_ARM_MSGS__MSG__DETAIL__STATUS_STAMPED__BUILDER_HPP_
