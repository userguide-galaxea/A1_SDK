// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ocs2_msgs:msg/MpcInput.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__MSG__DETAIL__MPC_INPUT__BUILDER_HPP_
#define OCS2_MSGS__MSG__DETAIL__MPC_INPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ocs2_msgs/msg/detail/mpc_input__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ocs2_msgs
{

namespace msg
{

namespace builder
{

class Init_MpcInput_value
{
public:
  Init_MpcInput_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ocs2_msgs::msg::MpcInput value(::ocs2_msgs::msg::MpcInput::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ocs2_msgs::msg::MpcInput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ocs2_msgs::msg::MpcInput>()
{
  return ocs2_msgs::msg::builder::Init_MpcInput_value();
}

}  // namespace ocs2_msgs

#endif  // OCS2_MSGS__MSG__DETAIL__MPC_INPUT__BUILDER_HPP_
