// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from signal_arm_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef SIGNAL_ARM_MSGS__MSG__DETAIL__STATUS__TRAITS_HPP_
#define SIGNAL_ARM_MSGS__MSG__DETAIL__STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "signal_arm_msgs/msg/detail/status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'motor_errors'
#include "signal_arm_msgs/msg/detail/motor_error__traits.hpp"

namespace signal_arm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Status & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    if (msg.name.size() == 0) {
      out << "name: []";
    } else {
      out << "name: [";
      size_t pending_items = msg.name.size();
      for (auto item : msg.name) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: motor_errors
  {
    if (msg.motor_errors.size() == 0) {
      out << "motor_errors: []";
    } else {
      out << "motor_errors: [";
      size_t pending_items = msg.motor_errors.size();
      for (auto item : msg.motor_errors) {
        to_flow_style_yaml(item, out);
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
  const Status & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.name.size() == 0) {
      out << "name: []\n";
    } else {
      out << "name:\n";
      for (auto item : msg.name) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: motor_errors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motor_errors.size() == 0) {
      out << "motor_errors: []\n";
    } else {
      out << "motor_errors:\n";
      for (auto item : msg.motor_errors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Status & msg, bool use_flow_style = false)
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
  const signal_arm_msgs::msg::Status & msg,
  std::ostream & out, size_t indentation = 0)
{
  signal_arm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use signal_arm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const signal_arm_msgs::msg::Status & msg)
{
  return signal_arm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<signal_arm_msgs::msg::Status>()
{
  return "signal_arm_msgs::msg::Status";
}

template<>
inline const char * name<signal_arm_msgs::msg::Status>()
{
  return "signal_arm_msgs/msg/Status";
}

template<>
struct has_fixed_size<signal_arm_msgs::msg::Status>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<signal_arm_msgs::msg::Status>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<signal_arm_msgs::msg::Status>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SIGNAL_ARM_MSGS__MSG__DETAIL__STATUS__TRAITS_HPP_
