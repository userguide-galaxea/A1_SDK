// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ocs2_msgs:srv/Reset.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__SRV__DETAIL__RESET__TRAITS_HPP_
#define OCS2_MSGS__SRV__DETAIL__RESET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ocs2_msgs/srv/detail/reset__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'target_trajectories'
#include "ocs2_msgs/msg/detail/mpc_target_trajectories__traits.hpp"

namespace ocs2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Reset_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: reset
  {
    out << "reset: ";
    rosidl_generator_traits::value_to_yaml(msg.reset, out);
    out << ", ";
  }

  // member: target_trajectories
  {
    out << "target_trajectories: ";
    to_flow_style_yaml(msg.target_trajectories, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Reset_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: reset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset: ";
    rosidl_generator_traits::value_to_yaml(msg.reset, out);
    out << "\n";
  }

  // member: target_trajectories
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_trajectories:\n";
    to_block_style_yaml(msg.target_trajectories, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Reset_Request & msg, bool use_flow_style = false)
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

}  // namespace ocs2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ocs2_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ocs2_msgs::srv::Reset_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ocs2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ocs2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ocs2_msgs::srv::Reset_Request & msg)
{
  return ocs2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ocs2_msgs::srv::Reset_Request>()
{
  return "ocs2_msgs::srv::Reset_Request";
}

template<>
inline const char * name<ocs2_msgs::srv::Reset_Request>()
{
  return "ocs2_msgs/srv/Reset_Request";
}

template<>
struct has_fixed_size<ocs2_msgs::srv::Reset_Request>
  : std::integral_constant<bool, has_fixed_size<ocs2_msgs::msg::MpcTargetTrajectories>::value> {};

template<>
struct has_bounded_size<ocs2_msgs::srv::Reset_Request>
  : std::integral_constant<bool, has_bounded_size<ocs2_msgs::msg::MpcTargetTrajectories>::value> {};

template<>
struct is_message<ocs2_msgs::srv::Reset_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ocs2_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Reset_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: done
  {
    out << "done: ";
    rosidl_generator_traits::value_to_yaml(msg.done, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Reset_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: done
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "done: ";
    rosidl_generator_traits::value_to_yaml(msg.done, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Reset_Response & msg, bool use_flow_style = false)
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

}  // namespace ocs2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ocs2_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ocs2_msgs::srv::Reset_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ocs2_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ocs2_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ocs2_msgs::srv::Reset_Response & msg)
{
  return ocs2_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ocs2_msgs::srv::Reset_Response>()
{
  return "ocs2_msgs::srv::Reset_Response";
}

template<>
inline const char * name<ocs2_msgs::srv::Reset_Response>()
{
  return "ocs2_msgs/srv/Reset_Response";
}

template<>
struct has_fixed_size<ocs2_msgs::srv::Reset_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ocs2_msgs::srv::Reset_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ocs2_msgs::srv::Reset_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ocs2_msgs::srv::Reset>()
{
  return "ocs2_msgs::srv::Reset";
}

template<>
inline const char * name<ocs2_msgs::srv::Reset>()
{
  return "ocs2_msgs/srv/Reset";
}

template<>
struct has_fixed_size<ocs2_msgs::srv::Reset>
  : std::integral_constant<
    bool,
    has_fixed_size<ocs2_msgs::srv::Reset_Request>::value &&
    has_fixed_size<ocs2_msgs::srv::Reset_Response>::value
  >
{
};

template<>
struct has_bounded_size<ocs2_msgs::srv::Reset>
  : std::integral_constant<
    bool,
    has_bounded_size<ocs2_msgs::srv::Reset_Request>::value &&
    has_bounded_size<ocs2_msgs::srv::Reset_Response>::value
  >
{
};

template<>
struct is_service<ocs2_msgs::srv::Reset>
  : std::true_type
{
};

template<>
struct is_service_request<ocs2_msgs::srv::Reset_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ocs2_msgs::srv::Reset_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OCS2_MSGS__SRV__DETAIL__RESET__TRAITS_HPP_
