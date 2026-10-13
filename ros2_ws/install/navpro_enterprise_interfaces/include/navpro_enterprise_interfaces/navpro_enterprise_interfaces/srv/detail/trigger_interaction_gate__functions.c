// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from navpro_enterprise_interfaces:srv/TriggerInteractionGate.idl
// generated code does not contain a copyright notice
#include "navpro_enterprise_interfaces/srv/detail/trigger_interaction_gate__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `gate_id`
// Member `prompt_message`
// Member `available_actions`
#include "rosidl_runtime_c/string_functions.h"

bool
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__init(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request * msg)
{
  if (!msg) {
    return false;
  }
  // gate_id
  if (!rosidl_runtime_c__String__init(&msg->gate_id)) {
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__fini(msg);
    return false;
  }
  // prompt_message
  if (!rosidl_runtime_c__String__init(&msg->prompt_message)) {
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__fini(msg);
    return false;
  }
  // available_actions
  if (!rosidl_runtime_c__String__Sequence__init(&msg->available_actions, 0)) {
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__fini(msg);
    return false;
  }
  // timeout_seconds
  return true;
}

void
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__fini(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request * msg)
{
  if (!msg) {
    return;
  }
  // gate_id
  rosidl_runtime_c__String__fini(&msg->gate_id);
  // prompt_message
  rosidl_runtime_c__String__fini(&msg->prompt_message);
  // available_actions
  rosidl_runtime_c__String__Sequence__fini(&msg->available_actions);
  // timeout_seconds
}

bool
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__are_equal(const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request * lhs, const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // gate_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->gate_id), &(rhs->gate_id)))
  {
    return false;
  }
  // prompt_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->prompt_message), &(rhs->prompt_message)))
  {
    return false;
  }
  // available_actions
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->available_actions), &(rhs->available_actions)))
  {
    return false;
  }
  // timeout_seconds
  if (lhs->timeout_seconds != rhs->timeout_seconds) {
    return false;
  }
  return true;
}

bool
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__copy(
  const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request * input,
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // gate_id
  if (!rosidl_runtime_c__String__copy(
      &(input->gate_id), &(output->gate_id)))
  {
    return false;
  }
  // prompt_message
  if (!rosidl_runtime_c__String__copy(
      &(input->prompt_message), &(output->prompt_message)))
  {
    return false;
  }
  // available_actions
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->available_actions), &(output->available_actions)))
  {
    return false;
  }
  // timeout_seconds
  output->timeout_seconds = input->timeout_seconds;
  return true;
}

navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request *
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request * msg = (navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request *)allocator.allocate(sizeof(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request));
  bool success = navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__destroy(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence__init(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request)) {
      return false;
    }
    data = (navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request *)allocator.zero_allocate(size, sizeof(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__fini(&data[i - 1]);
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
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence__fini(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence * array)
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
      navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__fini(&array->data[i]);
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

navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence *
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence * array = (navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence *)allocator.allocate(sizeof(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence__destroy(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence__are_equal(const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence * lhs, const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence__copy(
  const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence * input,
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request * data =
      (navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `selected_action`
// Member `operator_notes`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__init(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // selected_action
  if (!rosidl_runtime_c__String__init(&msg->selected_action)) {
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__fini(msg);
    return false;
  }
  // operator_notes
  if (!rosidl_runtime_c__String__init(&msg->operator_notes)) {
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__fini(msg);
    return false;
  }
  return true;
}

void
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__fini(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // selected_action
  rosidl_runtime_c__String__fini(&msg->selected_action);
  // operator_notes
  rosidl_runtime_c__String__fini(&msg->operator_notes);
}

bool
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__are_equal(const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response * lhs, const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // selected_action
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->selected_action), &(rhs->selected_action)))
  {
    return false;
  }
  // operator_notes
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->operator_notes), &(rhs->operator_notes)))
  {
    return false;
  }
  return true;
}

bool
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__copy(
  const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response * input,
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // selected_action
  if (!rosidl_runtime_c__String__copy(
      &(input->selected_action), &(output->selected_action)))
  {
    return false;
  }
  // operator_notes
  if (!rosidl_runtime_c__String__copy(
      &(input->operator_notes), &(output->operator_notes)))
  {
    return false;
  }
  return true;
}

navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response *
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response * msg = (navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response *)allocator.allocate(sizeof(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response));
  bool success = navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__destroy(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence__init(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response)) {
      return false;
    }
    data = (navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response *)allocator.zero_allocate(size, sizeof(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__fini(&data[i - 1]);
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
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence__fini(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence * array)
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
      navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__fini(&array->data[i]);
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

navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence *
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence * array = (navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence *)allocator.allocate(sizeof(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence__destroy(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence__are_equal(const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence * lhs, const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence__copy(
  const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence * input,
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response * data =
      (navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "navpro_enterprise_interfaces/srv/detail/trigger_interaction_gate__functions.h"

bool
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__init(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__fini(msg);
    return false;
  }
  // request
  if (!navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence__init(&msg->request, 0)) {
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__fini(msg);
    return false;
  }
  // response
  if (!navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence__init(&msg->response, 0)) {
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__fini(msg);
    return false;
  }
  return true;
}

void
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__fini(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence__fini(&msg->request);
  // response
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence__fini(&msg->response);
}

bool
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__are_equal(const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event * lhs, const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__copy(
  const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event * input,
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event *
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event * msg = (navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event *)allocator.allocate(sizeof(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event));
  bool success = navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__destroy(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__Sequence__init(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event)) {
      return false;
    }
    data = (navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event *)allocator.zero_allocate(size, sizeof(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__fini(&data[i - 1]);
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
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__Sequence__fini(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__Sequence * array)
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
      navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__fini(&array->data[i]);
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

navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__Sequence *
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__Sequence * array = (navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__Sequence *)allocator.allocate(sizeof(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__Sequence__destroy(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__Sequence__are_equal(const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__Sequence * lhs, const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__Sequence__copy(
  const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__Sequence * input,
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event * data =
      (navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
