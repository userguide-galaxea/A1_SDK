# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ocs2_msgs:msg/MpcPerformanceIndices.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MpcPerformanceIndices(type):
    """Metaclass of message 'MpcPerformanceIndices'."""

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
            module = import_type_support('ocs2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ocs2_msgs.msg.MpcPerformanceIndices')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mpc_performance_indices
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mpc_performance_indices
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mpc_performance_indices
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mpc_performance_indices
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mpc_performance_indices

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MpcPerformanceIndices(metaclass=Metaclass_MpcPerformanceIndices):
    """Message class 'MpcPerformanceIndices'."""

    __slots__ = [
        '_init_time',
        '_merit',
        '_cost',
        '_dynamics_violation_sse',
        '_equality_constraints_sse',
        '_equality_lagrangian',
        '_inequality_lagrangian',
    ]

    _fields_and_field_types = {
        'init_time': 'float',
        'merit': 'float',
        'cost': 'float',
        'dynamics_violation_sse': 'float',
        'equality_constraints_sse': 'float',
        'equality_lagrangian': 'float',
        'inequality_lagrangian': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.init_time = kwargs.get('init_time', float())
        self.merit = kwargs.get('merit', float())
        self.cost = kwargs.get('cost', float())
        self.dynamics_violation_sse = kwargs.get('dynamics_violation_sse', float())
        self.equality_constraints_sse = kwargs.get('equality_constraints_sse', float())
        self.equality_lagrangian = kwargs.get('equality_lagrangian', float())
        self.inequality_lagrangian = kwargs.get('inequality_lagrangian', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.init_time != other.init_time:
            return False
        if self.merit != other.merit:
            return False
        if self.cost != other.cost:
            return False
        if self.dynamics_violation_sse != other.dynamics_violation_sse:
            return False
        if self.equality_constraints_sse != other.equality_constraints_sse:
            return False
        if self.equality_lagrangian != other.equality_lagrangian:
            return False
        if self.inequality_lagrangian != other.inequality_lagrangian:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def init_time(self):
        """Message field 'init_time'."""
        return self._init_time

    @init_time.setter
    def init_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'init_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'init_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._init_time = value

    @builtins.property
    def merit(self):
        """Message field 'merit'."""
        return self._merit

    @merit.setter
    def merit(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'merit' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'merit' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._merit = value

    @builtins.property
    def cost(self):
        """Message field 'cost'."""
        return self._cost

    @cost.setter
    def cost(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cost' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cost' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cost = value

    @builtins.property
    def dynamics_violation_sse(self):
        """Message field 'dynamics_violation_sse'."""
        return self._dynamics_violation_sse

    @dynamics_violation_sse.setter
    def dynamics_violation_sse(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dynamics_violation_sse' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'dynamics_violation_sse' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._dynamics_violation_sse = value

    @builtins.property
    def equality_constraints_sse(self):
        """Message field 'equality_constraints_sse'."""
        return self._equality_constraints_sse

    @equality_constraints_sse.setter
    def equality_constraints_sse(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'equality_constraints_sse' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'equality_constraints_sse' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._equality_constraints_sse = value

    @builtins.property
    def equality_lagrangian(self):
        """Message field 'equality_lagrangian'."""
        return self._equality_lagrangian

    @equality_lagrangian.setter
    def equality_lagrangian(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'equality_lagrangian' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'equality_lagrangian' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._equality_lagrangian = value

    @builtins.property
    def inequality_lagrangian(self):
        """Message field 'inequality_lagrangian'."""
        return self._inequality_lagrangian

    @inequality_lagrangian.setter
    def inequality_lagrangian(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'inequality_lagrangian' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'inequality_lagrangian' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._inequality_lagrangian = value
