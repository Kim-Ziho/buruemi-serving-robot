// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:msg/EntityState.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__ENTITY_STATE__STRUCT_H_
#define GAZEBO_MSGS__MSG__ENTITY_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'reference_frame'
#include "rosidl_generator_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/pose__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/twist__struct.h"

// Struct defined in msg/EntityState in the package gazebo_msgs.
typedef struct gazebo_msgs__msg__EntityState
{
  rosidl_generator_c__String name;
  geometry_msgs__msg__Pose pose;
  geometry_msgs__msg__Twist twist;
  rosidl_generator_c__String reference_frame;
} gazebo_msgs__msg__EntityState;

// Struct for a sequence of gazebo_msgs__msg__EntityState.
typedef struct gazebo_msgs__msg__EntityState__Sequence
{
  gazebo_msgs__msg__EntityState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gazebo_msgs__msg__EntityState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__MSG__ENTITY_STATE__STRUCT_H_
