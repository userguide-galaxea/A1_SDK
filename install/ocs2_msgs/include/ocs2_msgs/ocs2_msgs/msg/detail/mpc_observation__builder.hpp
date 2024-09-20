// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ocs2_msgs:msg/MpcObservation.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__MSG__DETAIL__MPC_OBSERVATION__BUILDER_HPP_
#define OCS2_MSGS__MSG__DETAIL__MPC_OBSERVATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ocs2_msgs/msg/detail/mpc_observation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ocs2_msgs
{

namespace msg
{

namespace builder
{

class Init_MpcObservation_mode
{
public:
  explicit Init_MpcObservation_mode(::ocs2_msgs::msg::MpcObservation & msg)
  : msg_(msg)
  {}
  ::ocs2_msgs::msg::MpcObservation mode(::ocs2_msgs::msg::MpcObservation::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ocs2_msgs::msg::MpcObservation msg_;
};

class Init_MpcObservation_input
{
public:
  explicit Init_MpcObservation_input(::ocs2_msgs::msg::MpcObservation & msg)
  : msg_(msg)
  {}
  Init_MpcObservation_mode input(::ocs2_msgs::msg::MpcObservation::_input_type arg)
  {
    msg_.input = std::move(arg);
    return Init_MpcObservation_mode(msg_);
  }

private:
  ::ocs2_msgs::msg::MpcObservation msg_;
};

class Init_MpcObservation_state
{
public:
  explicit Init_MpcObservation_state(::ocs2_msgs::msg::MpcObservation & msg)
  : msg_(msg)
  {}
  Init_MpcObservation_input state(::ocs2_msgs::msg::MpcObservation::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_MpcObservation_input(msg_);
  }

private:
  ::ocs2_msgs::msg::MpcObservation msg_;
};

class Init_MpcObservation_time
{
public:
  Init_MpcObservation_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MpcObservation_state time(::ocs2_msgs::msg::MpcObservation::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_MpcObservation_state(msg_);
  }

private:
  ::ocs2_msgs::msg::MpcObservation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ocs2_msgs::msg::MpcObservation>()
{
  return ocs2_msgs::msg::builder::Init_MpcObservation_time();
}

}  // namespace ocs2_msgs

#endif  // OCS2_MSGS__MSG__DETAIL__MPC_OBSERVATION__BUILDER_HPP_
