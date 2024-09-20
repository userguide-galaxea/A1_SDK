# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ocs2_msgs:msg/MpcFlattenedController.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'time_trajectory'
# Member 'post_event_indices'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MpcFlattenedController(type):
    """Metaclass of message 'MpcFlattenedController'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CONTROLLER_UNKNOWN': 0,
        'CONTROLLER_FEEDFORWARD': 1,
        'CONTROLLER_LINEAR': 2,
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
                'ocs2_msgs.msg.MpcFlattenedController')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mpc_flattened_controller
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mpc_flattened_controller
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mpc_flattened_controller
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mpc_flattened_controller
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mpc_flattened_controller

            from ocs2_msgs.msg import ControllerData
            if ControllerData.__class__._TYPE_SUPPORT is None:
                ControllerData.__class__.__import_type_support__()

            from ocs2_msgs.msg import ModeSchedule
            if ModeSchedule.__class__._TYPE_SUPPORT is None:
                ModeSchedule.__class__.__import_type_support__()

            from ocs2_msgs.msg import MpcInput
            if MpcInput.__class__._TYPE_SUPPORT is None:
                MpcInput.__class__.__import_type_support__()

            from ocs2_msgs.msg import MpcObservation
            if MpcObservation.__class__._TYPE_SUPPORT is None:
                MpcObservation.__class__.__import_type_support__()

            from ocs2_msgs.msg import MpcPerformanceIndices
            if MpcPerformanceIndices.__class__._TYPE_SUPPORT is None:
                MpcPerformanceIndices.__class__.__import_type_support__()

            from ocs2_msgs.msg import MpcState
            if MpcState.__class__._TYPE_SUPPORT is None:
                MpcState.__class__.__import_type_support__()

            from ocs2_msgs.msg import MpcTargetTrajectories
            if MpcTargetTrajectories.__class__._TYPE_SUPPORT is None:
                MpcTargetTrajectories.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CONTROLLER_UNKNOWN': cls.__constants['CONTROLLER_UNKNOWN'],
            'CONTROLLER_FEEDFORWARD': cls.__constants['CONTROLLER_FEEDFORWARD'],
            'CONTROLLER_LINEAR': cls.__constants['CONTROLLER_LINEAR'],
        }

    @property
    def CONTROLLER_UNKNOWN(self):
        """Message constant 'CONTROLLER_UNKNOWN'."""
        return Metaclass_MpcFlattenedController.__constants['CONTROLLER_UNKNOWN']

    @property
    def CONTROLLER_FEEDFORWARD(self):
        """Message constant 'CONTROLLER_FEEDFORWARD'."""
        return Metaclass_MpcFlattenedController.__constants['CONTROLLER_FEEDFORWARD']

    @property
    def CONTROLLER_LINEAR(self):
        """Message constant 'CONTROLLER_LINEAR'."""
        return Metaclass_MpcFlattenedController.__constants['CONTROLLER_LINEAR']


class MpcFlattenedController(metaclass=Metaclass_MpcFlattenedController):
    """
    Message class 'MpcFlattenedController'.

    Constants:
      CONTROLLER_UNKNOWN
      CONTROLLER_FEEDFORWARD
      CONTROLLER_LINEAR
    """

    __slots__ = [
        '_controller_type',
        '_init_observation',
        '_plan_target_trajectories',
        '_state_trajectory',
        '_input_trajectory',
        '_time_trajectory',
        '_post_event_indices',
        '_mode_schedule',
        '_data',
        '_performance_indices',
    ]

    _fields_and_field_types = {
        'controller_type': 'uint8',
        'init_observation': 'ocs2_msgs/MpcObservation',
        'plan_target_trajectories': 'ocs2_msgs/MpcTargetTrajectories',
        'state_trajectory': 'sequence<ocs2_msgs/MpcState>',
        'input_trajectory': 'sequence<ocs2_msgs/MpcInput>',
        'time_trajectory': 'sequence<double>',
        'post_event_indices': 'sequence<uint16>',
        'mode_schedule': 'ocs2_msgs/ModeSchedule',
        'data': 'sequence<ocs2_msgs/ControllerData>',
        'performance_indices': 'ocs2_msgs/MpcPerformanceIndices',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ocs2_msgs', 'msg'], 'MpcObservation'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ocs2_msgs', 'msg'], 'MpcTargetTrajectories'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ocs2_msgs', 'msg'], 'MpcState')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ocs2_msgs', 'msg'], 'MpcInput')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint16')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ocs2_msgs', 'msg'], 'ModeSchedule'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ocs2_msgs', 'msg'], 'ControllerData')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ocs2_msgs', 'msg'], 'MpcPerformanceIndices'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.controller_type = kwargs.get('controller_type', int())
        from ocs2_msgs.msg import MpcObservation
        self.init_observation = kwargs.get('init_observation', MpcObservation())
        from ocs2_msgs.msg import MpcTargetTrajectories
        self.plan_target_trajectories = kwargs.get('plan_target_trajectories', MpcTargetTrajectories())
        self.state_trajectory = kwargs.get('state_trajectory', [])
        self.input_trajectory = kwargs.get('input_trajectory', [])
        self.time_trajectory = array.array('d', kwargs.get('time_trajectory', []))
        self.post_event_indices = array.array('H', kwargs.get('post_event_indices', []))
        from ocs2_msgs.msg import ModeSchedule
        self.mode_schedule = kwargs.get('mode_schedule', ModeSchedule())
        self.data = kwargs.get('data', [])
        from ocs2_msgs.msg import MpcPerformanceIndices
        self.performance_indices = kwargs.get('performance_indices', MpcPerformanceIndices())

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
        if self.controller_type != other.controller_type:
            return False
        if self.init_observation != other.init_observation:
            return False
        if self.plan_target_trajectories != other.plan_target_trajectories:
            return False
        if self.state_trajectory != other.state_trajectory:
            return False
        if self.input_trajectory != other.input_trajectory:
            return False
        if self.time_trajectory != other.time_trajectory:
            return False
        if self.post_event_indices != other.post_event_indices:
            return False
        if self.mode_schedule != other.mode_schedule:
            return False
        if self.data != other.data:
            return False
        if self.performance_indices != other.performance_indices:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def controller_type(self):
        """Message field 'controller_type'."""
        return self._controller_type

    @controller_type.setter
    def controller_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'controller_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'controller_type' field must be an unsigned integer in [0, 255]"
        self._controller_type = value

    @builtins.property
    def init_observation(self):
        """Message field 'init_observation'."""
        return self._init_observation

    @init_observation.setter
    def init_observation(self, value):
        if __debug__:
            from ocs2_msgs.msg import MpcObservation
            assert \
                isinstance(value, MpcObservation), \
                "The 'init_observation' field must be a sub message of type 'MpcObservation'"
        self._init_observation = value

    @builtins.property
    def plan_target_trajectories(self):
        """Message field 'plan_target_trajectories'."""
        return self._plan_target_trajectories

    @plan_target_trajectories.setter
    def plan_target_trajectories(self, value):
        if __debug__:
            from ocs2_msgs.msg import MpcTargetTrajectories
            assert \
                isinstance(value, MpcTargetTrajectories), \
                "The 'plan_target_trajectories' field must be a sub message of type 'MpcTargetTrajectories'"
        self._plan_target_trajectories = value

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
    def post_event_indices(self):
        """Message field 'post_event_indices'."""
        return self._post_event_indices

    @post_event_indices.setter
    def post_event_indices(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'H', \
                "The 'post_event_indices' array.array() must have the type code of 'H'"
            self._post_event_indices = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'post_event_indices' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._post_event_indices = array.array('H', value)

    @builtins.property
    def mode_schedule(self):
        """Message field 'mode_schedule'."""
        return self._mode_schedule

    @mode_schedule.setter
    def mode_schedule(self, value):
        if __debug__:
            from ocs2_msgs.msg import ModeSchedule
            assert \
                isinstance(value, ModeSchedule), \
                "The 'mode_schedule' field must be a sub message of type 'ModeSchedule'"
        self._mode_schedule = value

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if __debug__:
            from ocs2_msgs.msg import ControllerData
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
                 all(isinstance(v, ControllerData) for v in value) and
                 True), \
                "The 'data' field must be a set or sequence and each value of type 'ControllerData'"
        self._data = value

    @builtins.property
    def performance_indices(self):
        """Message field 'performance_indices'."""
        return self._performance_indices

    @performance_indices.setter
    def performance_indices(self, value):
        if __debug__:
            from ocs2_msgs.msg import MpcPerformanceIndices
            assert \
                isinstance(value, MpcPerformanceIndices), \
                "The 'performance_indices' field must be a sub message of type 'MpcPerformanceIndices'"
        self._performance_indices = value
