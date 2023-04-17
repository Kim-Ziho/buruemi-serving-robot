// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from gazebo_msgs:srv/GetLightProperties.idl
// generated code does not contain a copyright notice
#include "gazebo_msgs/srv/get_light_properties__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "gazebo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "gazebo_msgs/srv/get_light_properties__struct.h"
#include "gazebo_msgs/srv/get_light_properties__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_generator_c/string.h"  // light_name
#include "rosidl_generator_c/string_functions.h"  // light_name

// forward declare type support functions


using _GetLightProperties_Request__ros_msg_type = gazebo_msgs__srv__GetLightProperties_Request;

static bool _GetLightProperties_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetLightProperties_Request__ros_msg_type * ros_message = static_cast<const _GetLightProperties_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: light_name
  {
    const rosidl_generator_c__String * str = &ros_message->light_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _GetLightProperties_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetLightProperties_Request__ros_msg_type * ros_message = static_cast<_GetLightProperties_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: light_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->light_name.data) {
      rosidl_generator_c__String__init(&ros_message->light_name);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->light_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'light_name'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gazebo_msgs
size_t get_serialized_size_gazebo_msgs__srv__GetLightProperties_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetLightProperties_Request__ros_msg_type * ros_message = static_cast<const _GetLightProperties_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name light_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->light_name.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _GetLightProperties_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_gazebo_msgs__srv__GetLightProperties_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gazebo_msgs
size_t max_serialized_size_gazebo_msgs__srv__GetLightProperties_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: light_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetLightProperties_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_gazebo_msgs__srv__GetLightProperties_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetLightProperties_Request = {
  "gazebo_msgs::srv",
  "GetLightProperties_Request",
  _GetLightProperties_Request__cdr_serialize,
  _GetLightProperties_Request__cdr_deserialize,
  _GetLightProperties_Request__get_serialized_size,
  _GetLightProperties_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetLightProperties_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetLightProperties_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gazebo_msgs, srv, GetLightProperties_Request)() {
  return &_GetLightProperties_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "gazebo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "gazebo_msgs/srv/get_light_properties__struct.h"
// already included above
// #include "gazebo_msgs/srv/get_light_properties__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_generator_c/string.h"  // status_message
// already included above
// #include "rosidl_generator_c/string_functions.h"  // status_message
#include "std_msgs/msg/color_rgba__functions.h"  // diffuse

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gazebo_msgs
size_t get_serialized_size_std_msgs__msg__ColorRGBA(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gazebo_msgs
size_t max_serialized_size_std_msgs__msg__ColorRGBA(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_gazebo_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, ColorRGBA)();


using _GetLightProperties_Response__ros_msg_type = gazebo_msgs__srv__GetLightProperties_Response;

static bool _GetLightProperties_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetLightProperties_Response__ros_msg_type * ros_message = static_cast<const _GetLightProperties_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: diffuse
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, ColorRGBA
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->diffuse, cdr))
    {
      return false;
    }
  }

  // Field name: attenuation_constant
  {
    cdr << ros_message->attenuation_constant;
  }

  // Field name: attenuation_linear
  {
    cdr << ros_message->attenuation_linear;
  }

  // Field name: attenuation_quadratic
  {
    cdr << ros_message->attenuation_quadratic;
  }

  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: status_message
  {
    const rosidl_generator_c__String * str = &ros_message->status_message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _GetLightProperties_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetLightProperties_Response__ros_msg_type * ros_message = static_cast<_GetLightProperties_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: diffuse
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, ColorRGBA
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->diffuse))
    {
      return false;
    }
  }

  // Field name: attenuation_constant
  {
    cdr >> ros_message->attenuation_constant;
  }

  // Field name: attenuation_linear
  {
    cdr >> ros_message->attenuation_linear;
  }

  // Field name: attenuation_quadratic
  {
    cdr >> ros_message->attenuation_quadratic;
  }

  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: status_message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->status_message.data) {
      rosidl_generator_c__String__init(&ros_message->status_message);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->status_message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'status_message'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gazebo_msgs
size_t get_serialized_size_gazebo_msgs__srv__GetLightProperties_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetLightProperties_Response__ros_msg_type * ros_message = static_cast<const _GetLightProperties_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name diffuse

  current_alignment += get_serialized_size_std_msgs__msg__ColorRGBA(
    &(ros_message->diffuse), current_alignment);
  // field.name attenuation_constant
  {
    size_t item_size = sizeof(ros_message->attenuation_constant);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name attenuation_linear
  {
    size_t item_size = sizeof(ros_message->attenuation_linear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name attenuation_quadratic
  {
    size_t item_size = sizeof(ros_message->attenuation_quadratic);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->status_message.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _GetLightProperties_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_gazebo_msgs__srv__GetLightProperties_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gazebo_msgs
size_t max_serialized_size_gazebo_msgs__srv__GetLightProperties_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: diffuse
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__ColorRGBA(
        full_bounded, current_alignment);
    }
  }
  // member: attenuation_constant
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: attenuation_linear
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: attenuation_quadratic
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status_message
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetLightProperties_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_gazebo_msgs__srv__GetLightProperties_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetLightProperties_Response = {
  "gazebo_msgs::srv",
  "GetLightProperties_Response",
  _GetLightProperties_Response__cdr_serialize,
  _GetLightProperties_Response__cdr_deserialize,
  _GetLightProperties_Response__get_serialized_size,
  _GetLightProperties_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetLightProperties_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetLightProperties_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gazebo_msgs, srv, GetLightProperties_Response)() {
  return &_GetLightProperties_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "gazebo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "gazebo_msgs/srv/get_light_properties.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetLightProperties__callbacks = {
  "gazebo_msgs::srv",
  "GetLightProperties",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gazebo_msgs, srv, GetLightProperties_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gazebo_msgs, srv, GetLightProperties_Response)(),
};

static rosidl_service_type_support_t GetLightProperties__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetLightProperties__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gazebo_msgs, srv, GetLightProperties)() {
  return &GetLightProperties__handle;
}

#if defined(__cplusplus)
}
#endif
