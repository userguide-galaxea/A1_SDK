// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ocs2_msgs:msg/Constraint.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__MSG__DETAIL__CONSTRAINT__BUILDER_HPP_
#define OCS2_MSGS__MSG__DETAIL__CONSTRAINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ocs2_msgs/msg/detail/constraint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ocs2_msgs
{

namespace msg
{

namespace builder
{

class Init_Constraint_value
{
public:
  explicit Init_Constraint_value(::ocs2_msgs::msg::Constraint & msg)
  : msg_(msg)
  {}
  ::ocs2_msgs::msg::Constraint value(::ocs2_msgs::msg::Constraint::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ocs2_msgs::msg::Constraint msg_;
};

class Init_Constraint_time
{
public:
  Init_Constraint_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Constraint_value time(::ocs2_msgs::msg::Constraint::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_Constraint_value(msg_);
  }

private:
  ::ocs2_msgs::msg::Constraint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ocs2_msgs::msg::Constraint>()
{
  return ocs2_msgs::msg::builder::Init_Constraint_time();
}

}  // namespace ocs2_msgs

#endif  // OCS2_MSGS__MSG__DETAIL__CONSTRAINT__BUILDER_HPP_
