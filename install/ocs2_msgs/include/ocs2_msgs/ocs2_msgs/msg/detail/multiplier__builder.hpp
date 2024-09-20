// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ocs2_msgs:msg/Multiplier.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__MSG__DETAIL__MULTIPLIER__BUILDER_HPP_
#define OCS2_MSGS__MSG__DETAIL__MULTIPLIER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ocs2_msgs/msg/detail/multiplier__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ocs2_msgs
{

namespace msg
{

namespace builder
{

class Init_Multiplier_lagrangian
{
public:
  explicit Init_Multiplier_lagrangian(::ocs2_msgs::msg::Multiplier & msg)
  : msg_(msg)
  {}
  ::ocs2_msgs::msg::Multiplier lagrangian(::ocs2_msgs::msg::Multiplier::_lagrangian_type arg)
  {
    msg_.lagrangian = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ocs2_msgs::msg::Multiplier msg_;
};

class Init_Multiplier_penalty
{
public:
  explicit Init_Multiplier_penalty(::ocs2_msgs::msg::Multiplier & msg)
  : msg_(msg)
  {}
  Init_Multiplier_lagrangian penalty(::ocs2_msgs::msg::Multiplier::_penalty_type arg)
  {
    msg_.penalty = std::move(arg);
    return Init_Multiplier_lagrangian(msg_);
  }

private:
  ::ocs2_msgs::msg::Multiplier msg_;
};

class Init_Multiplier_time
{
public:
  Init_Multiplier_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Multiplier_penalty time(::ocs2_msgs::msg::Multiplier::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_Multiplier_penalty(msg_);
  }

private:
  ::ocs2_msgs::msg::Multiplier msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ocs2_msgs::msg::Multiplier>()
{
  return ocs2_msgs::msg::builder::Init_Multiplier_time();
}

}  // namespace ocs2_msgs

#endif  // OCS2_MSGS__MSG__DETAIL__MULTIPLIER__BUILDER_HPP_
