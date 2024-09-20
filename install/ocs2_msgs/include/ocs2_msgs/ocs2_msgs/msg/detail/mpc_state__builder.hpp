// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ocs2_msgs:msg/MpcState.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__MSG__DETAIL__MPC_STATE__BUILDER_HPP_
#define OCS2_MSGS__MSG__DETAIL__MPC_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ocs2_msgs/msg/detail/mpc_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ocs2_msgs
{

namespace msg
{

namespace builder
{

class Init_MpcState_value
{
public:
  Init_MpcState_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ocs2_msgs::msg::MpcState value(::ocs2_msgs::msg::MpcState::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ocs2_msgs::msg::MpcState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ocs2_msgs::msg::MpcState>()
{
  return ocs2_msgs::msg::builder::Init_MpcState_value();
}

}  // namespace ocs2_msgs

#endif  // OCS2_MSGS__MSG__DETAIL__MPC_STATE__BUILDER_HPP_
