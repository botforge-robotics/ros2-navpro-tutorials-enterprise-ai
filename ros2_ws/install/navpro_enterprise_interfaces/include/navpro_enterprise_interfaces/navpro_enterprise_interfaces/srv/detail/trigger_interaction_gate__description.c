// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from navpro_enterprise_interfaces:srv/TriggerInteractionGate.idl
// generated code does not contain a copyright notice

#include "navpro_enterprise_interfaces/srv/detail/trigger_interaction_gate__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_navpro_enterprise_interfaces
const rosidl_type_hash_t *
navpro_enterprise_interfaces__srv__TriggerInteractionGate__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd2, 0x7d, 0xe8, 0xb3, 0xd1, 0x9a, 0x51, 0xf8,
      0x59, 0x7c, 0xd6, 0x71, 0xf9, 0xdb, 0x17, 0x68,
      0x42, 0x80, 0xdf, 0xb4, 0x56, 0x1c, 0x59, 0xb3,
      0xca, 0xf8, 0x87, 0xfa, 0xbb, 0x2a, 0xab, 0xb4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_navpro_enterprise_interfaces
const rosidl_type_hash_t *
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa0, 0x92, 0x4e, 0x1f, 0x78, 0xb5, 0x21, 0x6e,
      0xb9, 0xb1, 0x0b, 0x52, 0x6c, 0x34, 0xb2, 0xfa,
      0xee, 0xcd, 0xf7, 0x30, 0x2a, 0xed, 0x6f, 0x62,
      0x03, 0x97, 0xd2, 0xc5, 0xaa, 0x54, 0x93, 0x6b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_navpro_enterprise_interfaces
const rosidl_type_hash_t *
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8c, 0xd8, 0x0e, 0x83, 0x69, 0xff, 0x8a, 0x70,
      0xc5, 0x18, 0x3b, 0x92, 0x7b, 0x03, 0xe9, 0x6f,
      0xf9, 0x44, 0x35, 0x9f, 0xc7, 0x1b, 0x9c, 0x58,
      0xf0, 0x36, 0x1b, 0x3d, 0x86, 0x69, 0x8c, 0x2b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_navpro_enterprise_interfaces
const rosidl_type_hash_t *
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x92, 0x00, 0x1c, 0xd9, 0x92, 0xcc, 0xfd, 0xb3,
      0xb8, 0x3a, 0xd5, 0xea, 0xf2, 0x3c, 0xb9, 0x18,
      0x78, 0x2d, 0x69, 0x81, 0x04, 0x6a, 0xed, 0x9a,
      0x3a, 0x1c, 0xcc, 0x6e, 0x28, 0x12, 0xaf, 0x59,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char navpro_enterprise_interfaces__srv__TriggerInteractionGate__TYPE_NAME[] = "navpro_enterprise_interfaces/srv/TriggerInteractionGate";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__TYPE_NAME[] = "navpro_enterprise_interfaces/srv/TriggerInteractionGate_Event";
static char navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__TYPE_NAME[] = "navpro_enterprise_interfaces/srv/TriggerInteractionGate_Request";
static char navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__TYPE_NAME[] = "navpro_enterprise_interfaces/srv/TriggerInteractionGate_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char navpro_enterprise_interfaces__srv__TriggerInteractionGate__FIELD_NAME__request_message[] = "request_message";
static char navpro_enterprise_interfaces__srv__TriggerInteractionGate__FIELD_NAME__response_message[] = "response_message";
static char navpro_enterprise_interfaces__srv__TriggerInteractionGate__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field navpro_enterprise_interfaces__srv__TriggerInteractionGate__FIELDS[] = {
  {
    {navpro_enterprise_interfaces__srv__TriggerInteractionGate__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__TYPE_NAME, 63, 63},
    },
    {NULL, 0, 0},
  },
  {
    {navpro_enterprise_interfaces__srv__TriggerInteractionGate__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__TYPE_NAME, 64, 64},
    },
    {NULL, 0, 0},
  },
  {
    {navpro_enterprise_interfaces__srv__TriggerInteractionGate__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__TYPE_NAME, 61, 61},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription navpro_enterprise_interfaces__srv__TriggerInteractionGate__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__TYPE_NAME, 61, 61},
    {NULL, 0, 0},
  },
  {
    {navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__TYPE_NAME, 63, 63},
    {NULL, 0, 0},
  },
  {
    {navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__TYPE_NAME, 64, 64},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
navpro_enterprise_interfaces__srv__TriggerInteractionGate__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {navpro_enterprise_interfaces__srv__TriggerInteractionGate__TYPE_NAME, 55, 55},
      {navpro_enterprise_interfaces__srv__TriggerInteractionGate__FIELDS, 3, 3},
    },
    {navpro_enterprise_interfaces__srv__TriggerInteractionGate__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__FIELD_NAME__gate_id[] = "gate_id";
static char navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__FIELD_NAME__prompt_message[] = "prompt_message";
static char navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__FIELD_NAME__available_actions[] = "available_actions";
static char navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__FIELD_NAME__timeout_seconds[] = "timeout_seconds";

static rosidl_runtime_c__type_description__Field navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__FIELDS[] = {
  {
    {navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__FIELD_NAME__gate_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__FIELD_NAME__prompt_message, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__FIELD_NAME__available_actions, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__FIELD_NAME__timeout_seconds, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__TYPE_NAME, 63, 63},
      {navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__FIELD_NAME__success[] = "success";
static char navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__FIELD_NAME__selected_action[] = "selected_action";
static char navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__FIELD_NAME__operator_notes[] = "operator_notes";

static rosidl_runtime_c__type_description__Field navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__FIELDS[] = {
  {
    {navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__FIELD_NAME__selected_action, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__FIELD_NAME__operator_notes, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__TYPE_NAME, 64, 64},
      {navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__FIELD_NAME__info[] = "info";
static char navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__FIELD_NAME__request[] = "request";
static char navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__FIELDS[] = {
  {
    {navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__TYPE_NAME, 63, 63},
    },
    {NULL, 0, 0},
  },
  {
    {navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__TYPE_NAME, 64, 64},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__TYPE_NAME, 63, 63},
    {NULL, 0, 0},
  },
  {
    {navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__TYPE_NAME, 64, 64},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__TYPE_NAME, 61, 61},
      {navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__FIELDS, 3, 3},
    },
    {navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string gate_id\n"
  "string prompt_message\n"
  "string[] available_actions\n"
  "int32 timeout_seconds\n"
  "---\n"
  "bool success\n"
  "string selected_action\n"
  "string operator_notes";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
navpro_enterprise_interfaces__srv__TriggerInteractionGate__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {navpro_enterprise_interfaces__srv__TriggerInteractionGate__TYPE_NAME, 55, 55},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 148, 148},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__TYPE_NAME, 63, 63},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__TYPE_NAME, 64, 64},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__TYPE_NAME, 61, 61},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
navpro_enterprise_interfaces__srv__TriggerInteractionGate__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *navpro_enterprise_interfaces__srv__TriggerInteractionGate__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__get_individual_type_description_source(NULL);
    sources[3] = *navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__get_individual_type_description_source(NULL);
    sources[4] = *navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__get_individual_type_description_source(NULL);
    sources[3] = *navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
