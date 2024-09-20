# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mobiman_msgs:msg/ArmBasicCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ArmBasicCommand(type):
    """Metaclass of message 'ArmBasicCommand'."""

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
            module = import_type_support('mobiman_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mobiman_msgs.msg.ArmBasicCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__arm_basic_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__arm_basic_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__arm_basic_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__arm_basic_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__arm_basic_command

            from mobiman_msgs.msg import JointPosition
            if JointPosition.__class__._TYPE_SUPPORT is None:
                JointPosition.__class__.__import_type_support__()

            from mobiman_msgs.msg import JointSpeed
            if JointSpeed.__class__._TYPE_SUPPORT is None:
                JointSpeed.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArmBasicCommand(metaclass=Metaclass_ArmBasicCommand):
    """Message class 'ArmBasicCommand'."""

    __slots__ = [
        '_header',
        '_jpos',
        '_jspeed',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'jpos': 'mobiman_msgs/JointPosition',
        'jspeed': 'mobiman_msgs/JointSpeed',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mobiman_msgs', 'msg'], 'JointPosition'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mobiman_msgs', 'msg'], 'JointSpeed'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from mobiman_msgs.msg import JointPosition
        self.jpos = kwargs.get('jpos', JointPosition())
        from mobiman_msgs.msg import JointSpeed
        self.jspeed = kwargs.get('jspeed', JointSpeed())

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
        if self.header != other.header:
            return False
        if self.jpos != other.jpos:
            return False
        if self.jspeed != other.jspeed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def jpos(self):
        """Message field 'jpos'."""
        return self._jpos

    @jpos.setter
    def jpos(self, value):
        if __debug__:
            from mobiman_msgs.msg import JointPosition
            assert \
                isinstance(value, JointPosition), \
                "The 'jpos' field must be a sub message of type 'JointPosition'"
        self._jpos = value

    @builtins.property
    def jspeed(self):
        """Message field 'jspeed'."""
        return self._jspeed

    @jspeed.setter
    def jspeed(self, value):
        if __debug__:
            from mobiman_msgs.msg import JointSpeed
            assert \
                isinstance(value, JointSpeed), \
                "The 'jspeed' field must be a sub message of type 'JointSpeed'"
        self._jspeed = value
