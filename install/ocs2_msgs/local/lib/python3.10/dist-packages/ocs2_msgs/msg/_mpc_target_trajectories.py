# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ocs2_msgs:msg/MpcTargetTrajectories.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'time_trajectory'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MpcTargetTrajectories(type):
    """Metaclass of message 'MpcTargetTrajectories'."""

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
                'ocs2_msgs.msg.MpcTargetTrajectories')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mpc_target_trajectories
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mpc_target_trajectories
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mpc_target_trajectories
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mpc_target_trajectories
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mpc_target_trajectories

            from ocs2_msgs.msg import MpcInput
            if MpcInput.__class__._TYPE_SUPPORT is None:
                MpcInput.__class__.__import_type_support__()

            from ocs2_msgs.msg import MpcState
            if MpcState.__class__._TYPE_SUPPORT is None:
                MpcState.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MpcTargetTrajectories(metaclass=Metaclass_MpcTargetTrajectories):
    """Message class 'MpcTargetTrajectories'."""

    __slots__ = [
        '_time_trajectory',
        '_state_trajectory',
        '_input_trajectory',
    ]

    _fields_and_field_types = {
        'time_trajectory': 'sequence<double>',
        'state_trajectory': 'sequence<ocs2_msgs/MpcState>',
        'input_trajectory': 'sequence<ocs2_msgs/MpcInput>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ocs2_msgs', 'msg'], 'MpcState')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ocs2_msgs', 'msg'], 'MpcInput')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.time_trajectory = array.array('d', kwargs.get('time_trajectory', []))
        self.state_trajectory = kwargs.get('state_trajectory', [])
        self.input_trajectory = kwargs.get('input_trajectory', [])

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
        if self.time_trajectory != other.time_trajectory:
            return False
        if self.state_trajectory != other.state_trajectory:
            return False
        if self.input_trajectory != other.input_trajectory:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def time_trajectory(self):
        """Message field 'time_trajectory'."""
        return self._time_trajectory

    @time_trajectory.setter
    def time_trajectory(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'time_trajectory' array.array() must have the type code of 'd'"
            self._time_trajectory = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'time_trajectory' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._time_trajectory = array.array('d', value)

    @builtins.property
    def state_trajectory(self):
        """Message field 'state_trajectory'."""
        return self._state_trajectory

    @state_trajectory.setter
    def state_trajectory(self, value):
        if __debug__:
            from ocs2_msgs.msg import MpcState
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
                 all(isinstance(v, MpcState) for v in value) and
                 True), \
                "The 'state_trajectory' field must be a set or sequence and each value of type 'MpcState'"
        self._state_trajectory = value

    @builtins.property
    def input_trajectory(self):
        """Message field 'input_trajectory'."""
        return self._input_trajectory

    @input_trajectory.setter
    def input_trajectory(self, value):
        if __debug__:
            from ocs2_msgs.msg import MpcInput
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
                 all(isinstance(v, MpcInput) for v in value) and
                 True), \
                "The 'input_trajectory' field must be a set or sequence and each value of type 'MpcInput'"
        self._input_trajectory = value
