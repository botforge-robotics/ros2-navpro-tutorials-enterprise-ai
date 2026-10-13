// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from navpro_enterprise_interfaces:msg/FleetTelemetry.idl
// generated code does not contain a copyright notice
#include "navpro_enterprise_interfaces/msg/detail/fleet_telemetry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `robot_id`
// Member `operational_status`
// Member `current_mission_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `velocity`
#include "geometry_msgs/msg/detail/twist__functions.h"

bool
navpro_enterprise_interfaces__msg__FleetTelemetry__init(navpro_enterprise_interfaces__msg__FleetTelemetry * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    navpro_enterprise_interfaces__msg__FleetTelemetry__fini(msg);
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__init(&msg->robot_id)) {
    navpro_enterprise_interfaces__msg__FleetTelemetry__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    navpro_enterprise_interfaces__msg__FleetTelemetry__fini(msg);
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Twist__init(&msg->velocity)) {
    navpro_enterprise_interfaces__msg__FleetTelemetry__fini(msg);
    return false;
  }
  // battery_percentage
  // battery_voltage
  // is_charging
  // estop_engaged
  // operational_status
  if (!rosidl_runtime_c__String__init(&msg->operational_status)) {
    navpro_enterprise_interfaces__msg__FleetTelemetry__fini(msg);
    return false;
  }
  // current_mission_id
  if (!rosidl_runtime_c__String__init(&msg->current_mission_id)) {
    navpro_enterprise_interfaces__msg__FleetTelemetry__fini(msg);
    return false;
  }
  return true;
}

void
navpro_enterprise_interfaces__msg__FleetTelemetry__fini(navpro_enterprise_interfaces__msg__FleetTelemetry * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // robot_id
  rosidl_runtime_c__String__fini(&msg->robot_id);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // velocity
  geometry_msgs__msg__Twist__fini(&msg->velocity);
  // battery_percentage
  // battery_voltage
  // is_charging
  // estop_engaged
  // operational_status
  rosidl_runtime_c__String__fini(&msg->operational_status);
  // current_mission_id
  rosidl_runtime_c__String__fini(&msg->current_mission_id);
}

bool
navpro_enterprise_interfaces__msg__FleetTelemetry__are_equal(const navpro_enterprise_interfaces__msg__FleetTelemetry * lhs, const navpro_enterprise_interfaces__msg__FleetTelemetry * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_id), &(rhs->robot_id)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // battery_percentage
  if (lhs->battery_percentage != rhs->battery_percentage) {
    return false;
  }
  // battery_voltage
  if (lhs->battery_voltage != rhs->battery_voltage) {
    return false;
  }
  // is_charging
  if (lhs->is_charging != rhs->is_charging) {
    return false;
  }
  // estop_engaged
  if (lhs->estop_engaged != rhs->estop_engaged) {
    return false;
  }
  // operational_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->operational_status), &(rhs->operational_status)))
  {
    return false;
  }
  // current_mission_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_mission_id), &(rhs->current_mission_id)))
  {
    return false;
  }
  return true;
}

bool
navpro_enterprise_interfaces__msg__FleetTelemetry__copy(
  const navpro_enterprise_interfaces__msg__FleetTelemetry * input,
  navpro_enterprise_interfaces__msg__FleetTelemetry * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_id), &(output->robot_id)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Twist__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // battery_percentage
  output->battery_percentage = input->battery_percentage;
  // battery_voltage
  output->battery_voltage = input->battery_voltage;
  // is_charging
  output->is_charging = input->is_charging;
  // estop_engaged
  output->estop_engaged = input->estop_engaged;
  // operational_status
  if (!rosidl_runtime_c__String__copy(
      &(input->operational_status), &(output->operational_status)))
  {
    return false;
  }
  // current_mission_id
  if (!rosidl_runtime_c__String__copy(
      &(input->current_mission_id), &(output->current_mission_id)))
  {
    return false;
  }
  return true;
}

navpro_enterprise_interfaces__msg__FleetTelemetry *
navpro_enterprise_interfaces__msg__FleetTelemetry__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__msg__FleetTelemetry * msg = (navpro_enterprise_interfaces__msg__FleetTelemetry *)allocator.allocate(sizeof(navpro_enterprise_interfaces__msg__FleetTelemetry), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navpro_enterprise_interfaces__msg__FleetTelemetry));
  bool success = navpro_enterprise_interfaces__msg__FleetTelemetry__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navpro_enterprise_interfaces__msg__FleetTelemetry__destroy(navpro_enterprise_interfaces__msg__FleetTelemetry * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navpro_enterprise_interfaces__msg__FleetTelemetry__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navpro_enterprise_interfaces__msg__FleetTelemetry__Sequence__init(navpro_enterprise_interfaces__msg__FleetTelemetry__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__msg__FleetTelemetry * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(navpro_enterprise_interfaces__msg__FleetTelemetry)) {
      return false;
    }
    data = (navpro_enterprise_interfaces__msg__FleetTelemetry *)allocator.zero_allocate(size, sizeof(navpro_enterprise_interfaces__msg__FleetTelemetry), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navpro_enterprise_interfaces__msg__FleetTelemetry__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navpro_enterprise_interfaces__msg__FleetTelemetry__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
navpro_enterprise_interfaces__msg__FleetTelemetry__Sequence__fini(navpro_enterprise_interfaces__msg__FleetTelemetry__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      navpro_enterprise_interfaces__msg__FleetTelemetry__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

navpro_enterprise_interfaces__msg__FleetTelemetry__Sequence *
navpro_enterprise_interfaces__msg__FleetTelemetry__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__msg__FleetTelemetry__Sequence * array = (navpro_enterprise_interfaces__msg__FleetTelemetry__Sequence *)allocator.allocate(sizeof(navpro_enterprise_interfaces__msg__FleetTelemetry__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navpro_enterprise_interfaces__msg__FleetTelemetry__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navpro_enterprise_interfaces__msg__FleetTelemetry__Sequence__destroy(navpro_enterprise_interfaces__msg__FleetTelemetry__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navpro_enterprise_interfaces__msg__FleetTelemetry__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navpro_enterprise_interfaces__msg__FleetTelemetry__Sequence__are_equal(const navpro_enterprise_interfaces__msg__FleetTelemetry__Sequence * lhs, const navpro_enterprise_interfaces__msg__FleetTelemetry__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navpro_enterprise_interfaces__msg__FleetTelemetry__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navpro_enterprise_interfaces__msg__FleetTelemetry__Sequence__copy(
  const navpro_enterprise_interfaces__msg__FleetTelemetry__Sequence * input,
  navpro_enterprise_interfaces__msg__FleetTelemetry__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(navpro_enterprise_interfaces__msg__FleetTelemetry)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(navpro_enterprise_interfaces__msg__FleetTelemetry);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navpro_enterprise_interfaces__msg__FleetTelemetry * data =
      (navpro_enterprise_interfaces__msg__FleetTelemetry *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navpro_enterprise_interfaces__msg__FleetTelemetry__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navpro_enterprise_interfaces__msg__FleetTelemetry__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navpro_enterprise_interfaces__msg__FleetTelemetry__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
