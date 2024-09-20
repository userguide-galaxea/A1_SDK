// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ocs2_msgs:msg/ControllerData.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__MSG__DETAIL__CONTROLLER_DATA__BUILDER_HPP_
#define OCS2_MSGS__MSG__DETAIL__CONTROLLER_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ocs2_msgs/msg/detail/controller_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ocs2_msgs
{

namespace msg
{

namespace builder
{

class Init_ControllerData_data
{
public:
  Init_ControllerData_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ocs2_msgs::msg::ControllerData data(::ocs2_msgs::msg::ControllerData::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ocs2_msgs::msg::ControllerData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ocs2_msgs::msg::ControllerData>()
{
  return ocs2_msgs::msg::builder::Init_ControllerData_data();
}

}  // namespace ocs2_msgs

#endif  // OCS2_MSGS__MSG__DETAIL__CONTROLLER_DATA__BUILDER_HPP_
