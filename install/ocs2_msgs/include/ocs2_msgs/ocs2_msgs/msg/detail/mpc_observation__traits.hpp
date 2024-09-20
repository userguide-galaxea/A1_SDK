// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ocs2_msgs:msg/MpcObservation.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__MSG__DETAIL__MPC_OBSERVATION__TRAITS_HPP_
#define OCS2_MSGS__MSG__DETAIL__MPC_OBSERVATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ocs2_msgs/msg/detail/mpc_observation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'state'
#include "ocs2_msgs/msg/detail/mpc_state__traits.hpp"
// Member 'input'
#include "ocs2_msgs/msg/detail/mpc_input__traits.hpp"

namespace ocs2_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MpcObservation & msg,
  std::ostream & out)
{
  out << "{";
  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    to_flow_style_yaml(msg.state, out);
    out << ", ";
  }

  // member: input
  {
    out << "input: ";
    to_flow_style_yaml(msg.input, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MpcObservation & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state:\n";
    to_block_style_yaml(msg.state, out, indentation + 2);
  }

  // member: input
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input:\n";
    to_block_style_yaml(msg.input, out, indentation + 2);
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MpcObservation & msg, bool use_flow_style = false)
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

}  // namespace ocs2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ocs2_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ocs2_msgs::msg::MpcObservation & msg,
  std::ostream & out, size_t indentation = 0)
{
  ocs2_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ocs2_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ocs2_msgs::msg::MpcObservation & msg)
{
  return ocs2_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ocs2_msgs::msg::MpcObservation>()
{
  return "ocs2_msgs::msg::MpcObservation";
}

template<>
inline const char * name<ocs2_msgs::msg::MpcObservation>()
{
  return "ocs2_msgs/msg/MpcObservation";
}

template<>
struct has_fixed_size<ocs2_msgs::msg::MpcObservation>
  : std::integral_constant<bool, has_fixed_size<ocs2_msgs::msg::MpcInput>::value && has_fixed_size<ocs2_msgs::msg::MpcState>::value> {};

template<>
struct has_bounded_size<ocs2_msgs::msg::MpcObservation>
  : std::integral_constant<bool, has_bounded_size<ocs2_msgs::msg::MpcInput>::value && has_bounded_size<ocs2_msgs::msg::MpcState>::value> {};

template<>
struct is_message<ocs2_msgs::msg::MpcObservation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OCS2_MSGS__MSG__DETAIL__MPC_OBSERVATION__TRAITS_HPP_
