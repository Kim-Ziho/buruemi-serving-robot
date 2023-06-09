// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gazebo_msgs:msg/ODEPhysics.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__ODE_PHYSICS__FUNCTIONS_H_
#define GAZEBO_MSGS__MSG__ODE_PHYSICS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "gazebo_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "gazebo_msgs/msg/ode_physics__struct.h"

/// Initialize msg/ODEPhysics message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gazebo_msgs__msg__ODEPhysics
 * )) before or use
 * gazebo_msgs__msg__ODEPhysics__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
bool
gazebo_msgs__msg__ODEPhysics__init(gazebo_msgs__msg__ODEPhysics * msg);

/// Finalize msg/ODEPhysics message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
void
gazebo_msgs__msg__ODEPhysics__fini(gazebo_msgs__msg__ODEPhysics * msg);

/// Create msg/ODEPhysics message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gazebo_msgs__msg__ODEPhysics__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
gazebo_msgs__msg__ODEPhysics *
gazebo_msgs__msg__ODEPhysics__create();

/// Destroy msg/ODEPhysics message.
/**
 * It calls
 * gazebo_msgs__msg__ODEPhysics__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
void
gazebo_msgs__msg__ODEPhysics__destroy(gazebo_msgs__msg__ODEPhysics * msg);


/// Initialize array of msg/ODEPhysics messages.
/**
 * It allocates the memory for the number of elements and calls
 * gazebo_msgs__msg__ODEPhysics__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
bool
gazebo_msgs__msg__ODEPhysics__Sequence__init(gazebo_msgs__msg__ODEPhysics__Sequence * array, size_t size);

/// Finalize array of msg/ODEPhysics messages.
/**
 * It calls
 * gazebo_msgs__msg__ODEPhysics__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
void
gazebo_msgs__msg__ODEPhysics__Sequence__fini(gazebo_msgs__msg__ODEPhysics__Sequence * array);

/// Create array of msg/ODEPhysics messages.
/**
 * It allocates the memory for the array and calls
 * gazebo_msgs__msg__ODEPhysics__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
gazebo_msgs__msg__ODEPhysics__Sequence *
gazebo_msgs__msg__ODEPhysics__Sequence__create(size_t size);

/// Destroy array of msg/ODEPhysics messages.
/**
 * It calls
 * gazebo_msgs__msg__ODEPhysics__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
void
gazebo_msgs__msg__ODEPhysics__Sequence__destroy(gazebo_msgs__msg__ODEPhysics__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__MSG__ODE_PHYSICS__FUNCTIONS_H_
