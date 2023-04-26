# generated from rosidl_generator_py/resource/_idl.py.em
# with input from happymini_msgs:srv/BagLocalization.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BagLocalization_Request(type):
    """Metaclass of message 'BagLocalization_Request'."""

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
            module = import_type_support('happymini_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'happymini_msgs.srv.BagLocalization_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__bag_localization__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__bag_localization__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__bag_localization__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__bag_localization__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__bag_localization__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BagLocalization_Request(metaclass=Metaclass_BagLocalization_Request):
    """Message class 'BagLocalization_Request'."""

    __slots__ = [
        '_left_right',
        '_degree',
        '_graph',
    ]

    _fields_and_field_types = {
        'left_right': 'string',
        'degree': 'int32',
        'graph': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.left_right = kwargs.get('left_right', str())
        self.degree = kwargs.get('degree', int())
        self.graph = kwargs.get('graph', bool())

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
        if self.left_right != other.left_right:
            return False
        if self.degree != other.degree:
            return False
        if self.graph != other.graph:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def left_right(self):
        """Message field 'left_right'."""
        return self._left_right

    @left_right.setter
    def left_right(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'left_right' field must be of type 'str'"
        self._left_right = value

    @builtins.property
    def degree(self):
        """Message field 'degree'."""
        return self._degree

    @degree.setter
    def degree(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'degree' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'degree' field must be an integer in [-2147483648, 2147483647]"
        self._degree = value

    @builtins.property
    def graph(self):
        """Message field 'graph'."""
        return self._graph

    @graph.setter
    def graph(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'graph' field must be of type 'bool'"
        self._graph = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_BagLocalization_Response(type):
    """Metaclass of message 'BagLocalization_Response'."""

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
            module = import_type_support('happymini_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'happymini_msgs.srv.BagLocalization_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__bag_localization__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__bag_localization__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__bag_localization__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__bag_localization__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__bag_localization__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BagLocalization_Response(metaclass=Metaclass_BagLocalization_Response):
    """Message class 'BagLocalization_Response'."""

    __slots__ = [
        '_angle_to_bag',
        '_distance_to_bag',
    ]

    _fields_and_field_types = {
        'angle_to_bag': 'float',
        'distance_to_bag': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.angle_to_bag = kwargs.get('angle_to_bag', float())
        self.distance_to_bag = kwargs.get('distance_to_bag', float())

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
        if self.angle_to_bag != other.angle_to_bag:
            return False
        if self.distance_to_bag != other.distance_to_bag:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def angle_to_bag(self):
        """Message field 'angle_to_bag'."""
        return self._angle_to_bag

    @angle_to_bag.setter
    def angle_to_bag(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_to_bag' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'angle_to_bag' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._angle_to_bag = value

    @builtins.property
    def distance_to_bag(self):
        """Message field 'distance_to_bag'."""
        return self._distance_to_bag

    @distance_to_bag.setter
    def distance_to_bag(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance_to_bag' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance_to_bag' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance_to_bag = value


class Metaclass_BagLocalization(type):
    """Metaclass of service 'BagLocalization'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('happymini_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'happymini_msgs.srv.BagLocalization')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__bag_localization

            from happymini_msgs.srv import _bag_localization
            if _bag_localization.Metaclass_BagLocalization_Request._TYPE_SUPPORT is None:
                _bag_localization.Metaclass_BagLocalization_Request.__import_type_support__()
            if _bag_localization.Metaclass_BagLocalization_Response._TYPE_SUPPORT is None:
                _bag_localization.Metaclass_BagLocalization_Response.__import_type_support__()


class BagLocalization(metaclass=Metaclass_BagLocalization):
    from happymini_msgs.srv._bag_localization import BagLocalization_Request as Request
    from happymini_msgs.srv._bag_localization import BagLocalization_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
