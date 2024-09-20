// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ocs2_msgs:msg/LagrangianMetrics.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__MSG__DETAIL__LAGRANGIAN_METRICS__BUILDER_HPP_
#define OCS2_MSGS__MSG__DETAIL__LAGRANGIAN_METRICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ocs2_msgs/msg/detail/lagrangian_metrics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ocs2_msgs
{

namespace msg
{

namespace builder
{

class Init_LagrangianMetrics_constraint
{
public:
  explicit Init_LagrangianMetrics_constraint(::ocs2_msgs::msg::LagrangianMetrics & msg)
  : msg_(msg)
  {}
  ::ocs2_msgs::msg::LagrangianMetrics constraint(::ocs2_msgs::msg::LagrangianMetrics::_constraint_type arg)
  {
    msg_.constraint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ocs2_msgs::msg::LagrangianMetrics msg_;
};

class Init_LagrangianMetrics_penalty
{
public:
  explicit Init_LagrangianMetrics_penalty(::ocs2_msgs::msg::LagrangianMetrics & msg)
  : msg_(msg)
  {}
  Init_LagrangianMetrics_constraint penalty(::ocs2_msgs::msg::LagrangianMetrics::_penalty_type arg)
  {
    msg_.penalty = std::move(arg);
    return Init_LagrangianMetrics_constraint(msg_);
  }

private:
  ::ocs2_msgs::msg::LagrangianMetrics msg_;
};

class Init_LagrangianMetrics_time
{
public:
  Init_LagrangianMetrics_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LagrangianMetrics_penalty time(::ocs2_msgs::msg::LagrangianMetrics::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_LagrangianMetrics_penalty(msg_);
  }

private:
  ::ocs2_msgs::msg::LagrangianMetrics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ocs2_msgs::msg::LagrangianMetrics>()
{
  return ocs2_msgs::msg::builder::Init_LagrangianMetrics_time();
}

}  // namespace ocs2_msgs

#endif  // OCS2_MSGS__MSG__DETAIL__LAGRANGIAN_METRICS__BUILDER_HPP_
