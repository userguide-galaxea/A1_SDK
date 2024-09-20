// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ocs2_msgs:msg/ModeSchedule.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__MSG__DETAIL__MODE_SCHEDULE__BUILDER_HPP_
#define OCS2_MSGS__MSG__DETAIL__MODE_SCHEDULE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ocs2_msgs/msg/detail/mode_schedule__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ocs2_msgs
{

namespace msg
{

namespace builder
{

class Init_ModeSchedule_mode_sequence
{
public:
  explicit Init_ModeSchedule_mode_sequence(::ocs2_msgs::msg::ModeSchedule & msg)
  : msg_(msg)
  {}
  ::ocs2_msgs::msg::ModeSchedule mode_sequence(::ocs2_msgs::msg::ModeSchedule::_mode_sequence_type arg)
  {
    msg_.mode_sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ocs2_msgs::msg::ModeSchedule msg_;
};

class Init_ModeSchedule_event_times
{
public:
  Init_ModeSchedule_event_times()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ModeSchedule_mode_sequence event_times(::ocs2_msgs::msg::ModeSchedule::_event_times_type arg)
  {
    msg_.event_times = std::move(arg);
    return Init_ModeSchedule_mode_sequence(msg_);
  }

private:
  ::ocs2_msgs::msg::ModeSchedule msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ocs2_msgs::msg::ModeSchedule>()
{
  return ocs2_msgs::msg::builder::Init_ModeSchedule_event_times();
}

}  // namespace ocs2_msgs

#endif  // OCS2_MSGS__MSG__DETAIL__MODE_SCHEDULE__BUILDER_HPP_
