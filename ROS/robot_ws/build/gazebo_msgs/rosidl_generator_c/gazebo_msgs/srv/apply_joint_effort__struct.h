// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:srv/ApplyJointEffort.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__APPLY_JOINT_EFFORT__STRUCT_H_
#define GAZEBO_MSGS__SRV__APPLY_JOINT_EFFORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_name'
#include "rosidl_generator_c/string.h"
// Member 'start_time'
#include "builtin_interfaces/msg/time__struct.h"
// Member 'duration'
#include "builtin_interfaces/msg/duration__struct.h"

// Struct defined in srv/ApplyJointEffort in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__ApplyJointEffort_Request
{
  rosidl_generator_c__String joint_name;
  double effort;
  builtin_interfaces__msg__Time start_time;
  builtin_interfaces__msg__Duration duration;
} gazebo_msgs__srv__ApplyJointEffort_Request;

// Struct for a sequence of gazebo_msgs__srv__ApplyJointEffort_Request.
typedef struct gazebo_msgs__srv__ApplyJointEffort_Request__Sequence
{
  gazebo_msgs__srv__ApplyJointEffort_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__ApplyJointEffort_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status_message'
// already included above
// #include "rosidl_generator_c/string.h"

// Struct defined in srv/ApplyJointEffort in the package gazebo_msgs.
typedef struct gazebo_msgs__srv__ApplyJointEffort_Response
{
  bool success;
  rosidl_generator_c__String status_message;
} gazebo_msgs__srv__ApplyJointEffort_Response;

// Struct for a sequence of gazebo_msgs__srv__ApplyJointEffort_Response.
typedef struct gazebo_msgs__srv__ApplyJointEffort_Response__Sequence
{
  gazebo_msgs__srv__ApplyJointEffort_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__srv__ApplyJointEffort_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__SRV__APPLY_JOINT_EFFORT__STRUCT_H_
