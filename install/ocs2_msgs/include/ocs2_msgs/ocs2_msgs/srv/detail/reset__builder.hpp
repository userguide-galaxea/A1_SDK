// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ocs2_msgs:srv/Reset.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__SRV__DETAIL__RESET__BUILDER_HPP_
#define OCS2_MSGS__SRV__DETAIL__RESET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ocs2_msgs/srv/detail/reset__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ocs2_msgs
{

namespace srv
{

namespace builder
{

class Init_Reset_Request_target_trajectories
{
public:
  explicit Init_Reset_Request_target_trajectories(::ocs2_msgs::srv::Reset_Request & msg)
  : msg_(msg)
  {}
  ::ocs2_msgs::srv::Reset_Request target_trajectories(::ocs2_msgs::srv::Reset_Request::_target_trajectories_type arg)
  {
    msg_.target_trajectories = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ocs2_msgs::srv::Reset_Request msg_;
};

class Init_Reset_Request_reset
{
public:
  Init_Reset_Request_reset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Reset_Request_target_trajectories reset(::ocs2_msgs::srv::Reset_Request::_reset_type arg)
  {
    msg_.reset = std::move(arg);
    return Init_Reset_Request_target_trajectories(msg_);
  }

private:
  ::ocs2_msgs::srv::Reset_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ocs2_msgs::srv::Reset_Request>()
{
  return ocs2_msgs::srv::builder::Init_Reset_Request_reset();
}

}  // namespace ocs2_msgs


namespace ocs2_msgs
{

namespace srv
{

namespace builder
{

class Init_Reset_Response_done
{
public:
  Init_Reset_Response_done()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ocs2_msgs::srv::Reset_Response done(::ocs2_msgs::srv::Reset_Response::_done_type arg)
  {
    msg_.done = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ocs2_msgs::srv::Reset_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ocs2_msgs::srv::Reset_Response>()
{
  return ocs2_msgs::srv::builder::Init_Reset_Response_done();
}

}  // namespace ocs2_msgs

#endif  // OCS2_MSGS__SRV__DETAIL__RESET__BUILDER_HPP_
