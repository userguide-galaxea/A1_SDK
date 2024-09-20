// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from signal_arm_msgs:srv/FunctionFrame.idl
// generated code does not contain a copyright notice

#ifndef SIGNAL_ARM_MSGS__SRV__DETAIL__FUNCTION_FRAME__TRAITS_HPP_
#define SIGNAL_ARM_MSGS__SRV__DETAIL__FUNCTION_FRAME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "signal_arm_msgs/srv/detail/function_frame__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace signal_arm_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const FunctionFrame_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FunctionFrame_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FunctionFrame_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace signal_arm_msgs

namespace rosidl_generator_traits
{

[[deprecated("use signal_arm_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const signal_arm_msgs::srv::FunctionFrame_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  signal_arm_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use signal_arm_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const signal_arm_msgs::srv::FunctionFrame_Request & msg)
{
  return signal_arm_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<signal_arm_msgs::srv::FunctionFrame_Request>()
{
  return "signal_arm_msgs::srv::FunctionFrame_Request";
}

template<>
inline const char * name<signal_arm_msgs::srv::FunctionFrame_Request>()
{
  return "signal_arm_msgs/srv/FunctionFrame_Request";
}

template<>
struct has_fixed_size<signal_arm_msgs::srv::FunctionFrame_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<signal_arm_msgs::srv::FunctionFrame_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<signal_arm_msgs::srv::FunctionFrame_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace signal_arm_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const FunctionFrame_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FunctionFrame_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FunctionFrame_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace signal_arm_msgs

namespace rosidl_generator_traits
{

[[deprecated("use signal_arm_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const signal_arm_msgs::srv::FunctionFrame_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  signal_arm_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use signal_arm_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const signal_arm_msgs::srv::FunctionFrame_Response & msg)
{
  return signal_arm_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<signal_arm_msgs::srv::FunctionFrame_Response>()
{
  return "signal_arm_msgs::srv::FunctionFrame_Response";
}

template<>
inline const char * name<signal_arm_msgs::srv::FunctionFrame_Response>()
{
  return "signal_arm_msgs/srv/FunctionFrame_Response";
}

template<>
struct has_fixed_size<signal_arm_msgs::srv::FunctionFrame_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<signal_arm_msgs::srv::FunctionFrame_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<signal_arm_msgs::srv::FunctionFrame_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<signal_arm_msgs::srv::FunctionFrame>()
{
  return "signal_arm_msgs::srv::FunctionFrame";
}

template<>
inline const char * name<signal_arm_msgs::srv::FunctionFrame>()
{
  return "signal_arm_msgs/srv/FunctionFrame";
}

template<>
struct has_fixed_size<signal_arm_msgs::srv::FunctionFrame>
  : std::integral_constant<
    bool,
    has_fixed_size<signal_arm_msgs::srv::FunctionFrame_Request>::value &&
    has_fixed_size<signal_arm_msgs::srv::FunctionFrame_Response>::value
  >
{
};

template<>
struct has_bounded_size<signal_arm_msgs::srv::FunctionFrame>
  : std::integral_constant<
    bool,
    has_bounded_size<signal_arm_msgs::srv::FunctionFrame_Request>::value &&
    has_bounded_size<signal_arm_msgs::srv::FunctionFrame_Response>::value
  >
{
};

template<>
struct is_service<signal_arm_msgs::srv::FunctionFrame>
  : std::true_type
{
};

template<>
struct is_service_request<signal_arm_msgs::srv::FunctionFrame_Request>
  : std::true_type
{
};

template<>
struct is_service_response<signal_arm_msgs::srv::FunctionFrame_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SIGNAL_ARM_MSGS__SRV__DETAIL__FUNCTION_FRAME__TRAITS_HPP_
