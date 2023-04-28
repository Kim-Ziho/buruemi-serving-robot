// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dwb_msgs:msg/CriticScore.idl
// generated code does not contain a copyright notice

#ifndef DWB_MSGS__MSG__CRITIC_SCORE__STRUCT_H_
#define DWB_MSGS__MSG__CRITIC_SCORE__STRUCT_H_

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
#include "rosidl_generator_c/string.h"

// Struct defined in msg/CriticScore in the package dwb_msgs.
typedef struct dwb_msgs__msg__CriticScore
{
  rosidl_generator_c__String name;
  float raw_score;
  float scale;
} dwb_msgs__msg__CriticScore;

// Struct for a sequence of dwb_msgs__msg__CriticScore.
typedef struct dwb_msgs__msg__CriticScore__Sequence
{
  dwb_msgs__msg__CriticScore * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dwb_msgs__msg__CriticScore__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DWB_MSGS__MSG__CRITIC_SCORE__STRUCT_H_
