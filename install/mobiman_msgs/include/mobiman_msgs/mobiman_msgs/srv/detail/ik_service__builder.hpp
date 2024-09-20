// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mobiman_msgs:srv/IKService.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__SRV__DETAIL__IK_SERVICE__BUILDER_HPP_
#define MOBIMAN_MSGS__SRV__DETAIL__IK_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mobiman_msgs/srv/detail/ik_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mobiman_msgs
{

namespace srv
{

namespace builder
{

class Init_IKService_Request_pose
{
public:
  Init_IKService_Request_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mobiman_msgs::srv::IKService_Request pose(::mobiman_msgs::srv::IKService_Request::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mobiman_msgs::srv::IKService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mobiman_msgs::srv::IKService_Request>()
{
  return mobiman_msgs::srv::builder::Init_IKService_Request_pose();
}

}  // namespace mobiman_msgs


namespace mobiman_msgs
{

namespace srv
{

namespace builder
{

class Init_IKService_Response_joint_states
{
public:
  Init_IKService_Response_joint_states()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mobiman_msgs::srv::IKService_Response joint_states(::mobiman_msgs::srv::IKService_Response::_joint_states_type arg)
  {
    msg_.joint_states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mobiman_msgs::srv::IKService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mobiman_msgs::srv::IKService_Response>()
{
  return mobiman_msgs::srv::builder::Init_IKService_Response_joint_states();
}

}  // namespace mobiman_msgs

#endif  // MOBIMAN_MSGS__SRV__DETAIL__IK_SERVICE__BUILDER_HPP_
