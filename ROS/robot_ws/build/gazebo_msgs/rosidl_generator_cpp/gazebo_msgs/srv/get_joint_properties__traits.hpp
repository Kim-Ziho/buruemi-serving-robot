// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gazebo_msgs:srv/GetJointProperties.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__GET_JOINT_PROPERTIES__TRAITS_HPP_
#define GAZEBO_MSGS__SRV__GET_JOINT_PROPERTIES__TRAITS_HPP_

#include "gazebo_msgs/srv/get_joint_properties__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::srv::GetJointProperties_Request>()
{
  return "gazebo_msgs::srv::GetJointProperties_Request";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::GetJointProperties_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gazebo_msgs::srv::GetJointProperties_Request>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::srv::GetJointProperties_Response>()
{
  return "gazebo_msgs::srv::GetJointProperties_Response";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::GetJointProperties_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gazebo_msgs::srv::GetJointProperties_Response>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::srv::GetJointProperties>()
{
  return "gazebo_msgs::srv::GetJointProperties";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::GetJointProperties>
  : std::integral_constant<
    bool,
    has_fixed_size<gazebo_msgs::srv::GetJointProperties_Request>::value &&
    has_fixed_size<gazebo_msgs::srv::GetJointProperties_Response>::value
  >
{
};

template<>
struct has_bounded_size<gazebo_msgs::srv::GetJointProperties>
  : std::integral_constant<
    bool,
    has_bounded_size<gazebo_msgs::srv::GetJointProperties_Request>::value &&
    has_bounded_size<gazebo_msgs::srv::GetJointProperties_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // GAZEBO_MSGS__SRV__GET_JOINT_PROPERTIES__TRAITS_HPP_
