// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from signal_arm_msgs:msg/MotorError.idl
// generated code does not contain a copyright notice

#ifndef SIGNAL_ARM_MSGS__MSG__DETAIL__MOTOR_ERROR__TRAITS_HPP_
#define SIGNAL_ARM_MSGS__MSG__DETAIL__MOTOR_ERROR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "signal_arm_msgs/msg/detail/motor_error__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace signal_arm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorError & msg,
  std::ostream & out)
{
  out << "{";
  // member: error_code
  {
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << ", ";
  }

  // member: error_description
  {
    if (msg.error_description.size() == 0) {
      out << "error_description: []";
    } else {
      out << "error_description: [";
      size_t pending_items = msg.error_description.size();
      for (auto item : msg.error_description) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorError & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << "\n";
  }

  // member: error_description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.error_description.size() == 0) {
      out << "error_description: []\n";
    } else {
      out << "error_description:\n";
      for (auto item : msg.error_description) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorError & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace signal_arm_msgs

namespace rosidl_generator_traits
{

[[deprecated("use signal_arm_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const signal_arm_msgs::msg::MotorError & msg,
  std::ostream & out, size_t indentation = 0)
{
  signal_arm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use signal_arm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const signal_arm_msgs::msg::MotorError & msg)
{
  return signal_arm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<signal_arm_msgs::msg::MotorError>()
{
  return "signal_arm_msgs::msg::MotorError";
}

template<>
inline const char * name<signal_arm_msgs::msg::MotorError>()
{
  return "signal_arm_msgs/msg/MotorError";
}

template<>
struct has_fixed_size<signal_arm_msgs::msg::MotorError>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<signal_arm_msgs::msg::MotorError>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<signal_arm_msgs::msg::MotorError>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SIGNAL_ARM_MSGS__MSG__DETAIL__MOTOR_ERROR__TRAITS_HPP_
