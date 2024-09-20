// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ocs2_msgs:msg/MpcPerformanceIndices.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__MSG__DETAIL__MPC_PERFORMANCE_INDICES__BUILDER_HPP_
#define OCS2_MSGS__MSG__DETAIL__MPC_PERFORMANCE_INDICES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ocs2_msgs/msg/detail/mpc_performance_indices__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ocs2_msgs
{

namespace msg
{

namespace builder
{

class Init_MpcPerformanceIndices_inequality_lagrangian
{
public:
  explicit Init_MpcPerformanceIndices_inequality_lagrangian(::ocs2_msgs::msg::MpcPerformanceIndices & msg)
  : msg_(msg)
  {}
  ::ocs2_msgs::msg::MpcPerformanceIndices inequality_lagrangian(::ocs2_msgs::msg::MpcPerformanceIndices::_inequality_lagrangian_type arg)
  {
    msg_.inequality_lagrangian = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ocs2_msgs::msg::MpcPerformanceIndices msg_;
};

class Init_MpcPerformanceIndices_equality_lagrangian
{
public:
  explicit Init_MpcPerformanceIndices_equality_lagrangian(::ocs2_msgs::msg::MpcPerformanceIndices & msg)
  : msg_(msg)
  {}
  Init_MpcPerformanceIndices_inequality_lagrangian equality_lagrangian(::ocs2_msgs::msg::MpcPerformanceIndices::_equality_lagrangian_type arg)
  {
    msg_.equality_lagrangian = std::move(arg);
    return Init_MpcPerformanceIndices_inequality_lagrangian(msg_);
  }

private:
  ::ocs2_msgs::msg::MpcPerformanceIndices msg_;
};

class Init_MpcPerformanceIndices_equality_constraints_sse
{
public:
  explicit Init_MpcPerformanceIndices_equality_constraints_sse(::ocs2_msgs::msg::MpcPerformanceIndices & msg)
  : msg_(msg)
  {}
  Init_MpcPerformanceIndices_equality_lagrangian equality_constraints_sse(::ocs2_msgs::msg::MpcPerformanceIndices::_equality_constraints_sse_type arg)
  {
    msg_.equality_constraints_sse = std::move(arg);
    return Init_MpcPerformanceIndices_equality_lagrangian(msg_);
  }

private:
  ::ocs2_msgs::msg::MpcPerformanceIndices msg_;
};

class Init_MpcPerformanceIndices_dynamics_violation_sse
{
public:
  explicit Init_MpcPerformanceIndices_dynamics_violation_sse(::ocs2_msgs::msg::MpcPerformanceIndices & msg)
  : msg_(msg)
  {}
  Init_MpcPerformanceIndices_equality_constraints_sse dynamics_violation_sse(::ocs2_msgs::msg::MpcPerformanceIndices::_dynamics_violation_sse_type arg)
  {
    msg_.dynamics_violation_sse = std::move(arg);
    return Init_MpcPerformanceIndices_equality_constraints_sse(msg_);
  }

private:
  ::ocs2_msgs::msg::MpcPerformanceIndices msg_;
};

class Init_MpcPerformanceIndices_cost
{
public:
  explicit Init_MpcPerformanceIndices_cost(::ocs2_msgs::msg::MpcPerformanceIndices & msg)
  : msg_(msg)
  {}
  Init_MpcPerformanceIndices_dynamics_violation_sse cost(::ocs2_msgs::msg::MpcPerformanceIndices::_cost_type arg)
  {
    msg_.cost = std::move(arg);
    return Init_MpcPerformanceIndices_dynamics_violation_sse(msg_);
  }

private:
  ::ocs2_msgs::msg::MpcPerformanceIndices msg_;
};

class Init_MpcPerformanceIndices_merit
{
public:
  explicit Init_MpcPerformanceIndices_merit(::ocs2_msgs::msg::MpcPerformanceIndices & msg)
  : msg_(msg)
  {}
  Init_MpcPerformanceIndices_cost merit(::ocs2_msgs::msg::MpcPerformanceIndices::_merit_type arg)
  {
    msg_.merit = std::move(arg);
    return Init_MpcPerformanceIndices_cost(msg_);
  }

private:
  ::ocs2_msgs::msg::MpcPerformanceIndices msg_;
};

class Init_MpcPerformanceIndices_init_time
{
public:
  Init_MpcPerformanceIndices_init_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MpcPerformanceIndices_merit init_time(::ocs2_msgs::msg::MpcPerformanceIndices::_init_time_type arg)
  {
    msg_.init_time = std::move(arg);
    return Init_MpcPerformanceIndices_merit(msg_);
  }

private:
  ::ocs2_msgs::msg::MpcPerformanceIndices msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ocs2_msgs::msg::MpcPerformanceIndices>()
{
  return ocs2_msgs::msg::builder::Init_MpcPerformanceIndices_init_time();
}

}  // namespace ocs2_msgs

#endif  // OCS2_MSGS__MSG__DETAIL__MPC_PERFORMANCE_INDICES__BUILDER_HPP_
