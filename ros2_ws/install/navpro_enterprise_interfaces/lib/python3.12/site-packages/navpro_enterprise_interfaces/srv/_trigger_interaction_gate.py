# generated from rosidl_generator_py/resource/_idl.py.em
# with input from navpro_enterprise_interfaces:srv/TriggerInteractionGate.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TriggerInteractionGate_Request(type):
    """Metaclass of message 'TriggerInteractionGate_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('navpro_enterprise_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'navpro_enterprise_interfaces.srv.TriggerInteractionGate_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__trigger_interaction_gate__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__trigger_interaction_gate__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__trigger_interaction_gate__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__trigger_interaction_gate__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__trigger_interaction_gate__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TriggerInteractionGate_Request(metaclass=Metaclass_TriggerInteractionGate_Request):
    """Message class 'TriggerInteractionGate_Request'."""

    __slots__ = [
        '_gate_id',
        '_prompt_message',
        '_available_actions',
        '_timeout_seconds',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'gate_id': 'string',
        'prompt_message': 'string',
        'available_actions': 'sequence<string>',
        'timeout_seconds': 'int32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.gate_id = kwargs.get('gate_id', str())
        self.prompt_message = kwargs.get('prompt_message', str())
        self.available_actions = kwargs.get('available_actions', [])
        self.timeout_seconds = kwargs.get('timeout_seconds', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.gate_id != other.gate_id:
            return False
        if self.prompt_message != other.prompt_message:
            return False
        if self.available_actions != other.available_actions:
            return False
        if self.timeout_seconds != other.timeout_seconds:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def gate_id(self):
        """Message field 'gate_id'."""
        return self._gate_id

    @gate_id.setter
    def gate_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'gate_id' field must be of type 'str'"
        self._gate_id = value

    @builtins.property
    def prompt_message(self):
        """Message field 'prompt_message'."""
        return self._prompt_message

    @prompt_message.setter
    def prompt_message(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'prompt_message' field must be of type 'str'"
        self._prompt_message = value

    @builtins.property
    def available_actions(self):
        """Message field 'available_actions'."""
        return self._available_actions

    @available_actions.setter
    def available_actions(self, value):
        if self._check_fields:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'available_actions' field must be a set or sequence and each value of type 'str'"
        self._available_actions = value

    @builtins.property
    def timeout_seconds(self):
        """Message field 'timeout_seconds'."""
        return self._timeout_seconds

    @timeout_seconds.setter
    def timeout_seconds(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'timeout_seconds' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'timeout_seconds' field must be an integer in [-2147483648, 2147483647]"
        self._timeout_seconds = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TriggerInteractionGate_Response(type):
    """Metaclass of message 'TriggerInteractionGate_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('navpro_enterprise_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'navpro_enterprise_interfaces.srv.TriggerInteractionGate_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__trigger_interaction_gate__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__trigger_interaction_gate__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__trigger_interaction_gate__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__trigger_interaction_gate__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__trigger_interaction_gate__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TriggerInteractionGate_Response(metaclass=Metaclass_TriggerInteractionGate_Response):
    """Message class 'TriggerInteractionGate_Response'."""

    __slots__ = [
        '_success',
        '_selected_action',
        '_operator_notes',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'selected_action': 'string',
        'operator_notes': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.selected_action = kwargs.get('selected_action', str())
        self.operator_notes = kwargs.get('operator_notes', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        if self.selected_action != other.selected_action:
            return False
        if self.operator_notes != other.operator_notes:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def selected_action(self):
        """Message field 'selected_action'."""
        return self._selected_action

    @selected_action.setter
    def selected_action(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'selected_action' field must be of type 'str'"
        self._selected_action = value

    @builtins.property
    def operator_notes(self):
        """Message field 'operator_notes'."""
        return self._operator_notes

    @operator_notes.setter
    def operator_notes(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'operator_notes' field must be of type 'str'"
        self._operator_notes = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TriggerInteractionGate_Event(type):
    """Metaclass of message 'TriggerInteractionGate_Event'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('navpro_enterprise_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'navpro_enterprise_interfaces.srv.TriggerInteractionGate_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__trigger_interaction_gate__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__trigger_interaction_gate__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__trigger_interaction_gate__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__trigger_interaction_gate__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__trigger_interaction_gate__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TriggerInteractionGate_Event(metaclass=Metaclass_TriggerInteractionGate_Event):
    """Message class 'TriggerInteractionGate_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<navpro_enterprise_interfaces/TriggerInteractionGate_Request, 1>',
        'response': 'sequence<navpro_enterprise_interfaces/TriggerInteractionGate_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['navpro_enterprise_interfaces', 'srv'], 'TriggerInteractionGate_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['navpro_enterprise_interfaces', 'srv'], 'TriggerInteractionGate_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from navpro_enterprise_interfaces.srv import TriggerInteractionGate_Request
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, TriggerInteractionGate_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'TriggerInteractionGate_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from navpro_enterprise_interfaces.srv import TriggerInteractionGate_Response
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, TriggerInteractionGate_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'TriggerInteractionGate_Response'"
        self._response = value


class Metaclass_TriggerInteractionGate(type):
    """Metaclass of service 'TriggerInteractionGate'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('navpro_enterprise_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'navpro_enterprise_interfaces.srv.TriggerInteractionGate')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__trigger_interaction_gate

            from navpro_enterprise_interfaces.srv import _trigger_interaction_gate
            if _trigger_interaction_gate.Metaclass_TriggerInteractionGate_Request._TYPE_SUPPORT is None:
                _trigger_interaction_gate.Metaclass_TriggerInteractionGate_Request.__import_type_support__()
            if _trigger_interaction_gate.Metaclass_TriggerInteractionGate_Response._TYPE_SUPPORT is None:
                _trigger_interaction_gate.Metaclass_TriggerInteractionGate_Response.__import_type_support__()
            if _trigger_interaction_gate.Metaclass_TriggerInteractionGate_Event._TYPE_SUPPORT is None:
                _trigger_interaction_gate.Metaclass_TriggerInteractionGate_Event.__import_type_support__()


class TriggerInteractionGate(metaclass=Metaclass_TriggerInteractionGate):
    from navpro_enterprise_interfaces.srv._trigger_interaction_gate import TriggerInteractionGate_Request as Request
    from navpro_enterprise_interfaces.srv._trigger_interaction_gate import TriggerInteractionGate_Response as Response
    from navpro_enterprise_interfaces.srv._trigger_interaction_gate import TriggerInteractionGate_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
