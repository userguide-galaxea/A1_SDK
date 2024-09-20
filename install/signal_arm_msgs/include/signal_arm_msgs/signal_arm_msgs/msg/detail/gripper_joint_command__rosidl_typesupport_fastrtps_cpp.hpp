// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from signal_arm_msgs:msg/GripperJointCommand.idl
// generated code does not contain a copyright notice

#ifndef SIGNAL_ARM_MSGS__MSG__DETAIL__GRIPPER_JOINT_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define SIGNAL_ARM_MSGS__MSG__DETAIL__GRIPPER_JOINT_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "signal_arm_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "signal_arm_msgs/msg/detail/gripper_joint_command__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace signal_arm_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_signal_arm_msgs
cdr_serialize(
  const signal_arm_msgs::msg::GripperJointCommand & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_signal_arm_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  signal_arm_msgs::msg::GripperJointCommand & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_signal_arm_msgs
get_serialized_size(
  const signal_arm_msgs::msg::GripperJointCommand & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_signal_arm_msgs
max_serialized_size_GripperJointCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace signal_arm_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_signal_arm_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, signal_arm_msgs, msg, GripperJointCommand)();

#ifdef __cplusplus
}
#endif

#endif  // SIGNAL_ARM_MSGS__MSG__DETAIL__GRIPPER_JOINT_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
