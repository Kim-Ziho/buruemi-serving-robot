// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav2_msgs:action/FollowPath.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__ACTION__FOLLOW_PATH__TRAITS_HPP_
#define NAV2_MSGS__ACTION__FOLLOW_PATH__TRAITS_HPP_

#include "nav2_msgs/action/follow_path__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'path'
#include "nav2_msgs/msg/path__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::action::FollowPath_Goal>()
{
  return "nav2_msgs::action::FollowPath_Goal";
}

template<>
struct has_fixed_size<nav2_msgs::action::FollowPath_Goal>
  : std::integral_constant<bool, has_fixed_size<nav2_msgs::msg::Path>::value> {};

template<>
struct has_bounded_size<nav2_msgs::action::FollowPath_Goal>
  : std::integral_constant<bool, has_bounded_size<nav2_msgs::msg::Path>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
#include "std_msgs/msg/empty__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::action::FollowPath_Result>()
{
  return "nav2_msgs::action::FollowPath_Result";
}

template<>
struct has_fixed_size<nav2_msgs::action::FollowPath_Result>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Empty>::value> {};

template<>
struct has_bounded_size<nav2_msgs::action::FollowPath_Result>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Empty>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::action::FollowPath_Feedback>()
{
  return "nav2_msgs::action::FollowPath_Feedback";
}

template<>
struct has_fixed_size<nav2_msgs::action::FollowPath_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<nav2_msgs::action::FollowPath_Feedback>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/uuid__traits.hpp"
// Member 'goal'
#include "nav2_msgs/action/follow_path__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::action::FollowPath_SendGoal_Request>()
{
  return "nav2_msgs::action::FollowPath_SendGoal_Request";
}

template<>
struct has_fixed_size<nav2_msgs::action::FollowPath_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<nav2_msgs::action::FollowPath_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<nav2_msgs::action::FollowPath_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<nav2_msgs::action::FollowPath_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::action::FollowPath_SendGoal_Response>()
{
  return "nav2_msgs::action::FollowPath_SendGoal_Response";
}

template<>
struct has_fixed_size<nav2_msgs::action::FollowPath_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<nav2_msgs::action::FollowPath_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::action::FollowPath_SendGoal>()
{
  return "nav2_msgs::action::FollowPath_SendGoal";
}

template<>
struct has_fixed_size<nav2_msgs::action::FollowPath_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<nav2_msgs::action::FollowPath_SendGoal_Request>::value &&
    has_fixed_size<nav2_msgs::action::FollowPath_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<nav2_msgs::action::FollowPath_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<nav2_msgs::action::FollowPath_SendGoal_Request>::value &&
    has_bounded_size<nav2_msgs::action::FollowPath_SendGoal_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::action::FollowPath_GetResult_Request>()
{
  return "nav2_msgs::action::FollowPath_GetResult_Request";
}

template<>
struct has_fixed_size<nav2_msgs::action::FollowPath_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<nav2_msgs::action::FollowPath_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "nav2_msgs/action/follow_path__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::action::FollowPath_GetResult_Response>()
{
  return "nav2_msgs::action::FollowPath_GetResult_Response";
}

template<>
struct has_fixed_size<nav2_msgs::action::FollowPath_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<nav2_msgs::action::FollowPath_Result>::value> {};

template<>
struct has_bounded_size<nav2_msgs::action::FollowPath_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<nav2_msgs::action::FollowPath_Result>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::action::FollowPath_GetResult>()
{
  return "nav2_msgs::action::FollowPath_GetResult";
}

template<>
struct has_fixed_size<nav2_msgs::action::FollowPath_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<nav2_msgs::action::FollowPath_GetResult_Request>::value &&
    has_fixed_size<nav2_msgs::action::FollowPath_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<nav2_msgs::action::FollowPath_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<nav2_msgs::action::FollowPath_GetResult_Request>::value &&
    has_bounded_size<nav2_msgs::action::FollowPath_GetResult_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "nav2_msgs/action/follow_path__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::action::FollowPath_FeedbackMessage>()
{
  return "nav2_msgs::action::FollowPath_FeedbackMessage";
}

template<>
struct has_fixed_size<nav2_msgs::action::FollowPath_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<nav2_msgs::action::FollowPath_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<nav2_msgs::action::FollowPath_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<nav2_msgs::action::FollowPath_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

#endif  // NAV2_MSGS__ACTION__FOLLOW_PATH__TRAITS_HPP_
