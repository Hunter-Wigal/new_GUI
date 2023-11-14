# generated from rosidl_generator_py/resource/_idl.py.em
# with input from theora_webcams:srv/ChangeVideo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ChangeVideo_Request(type):
    """Metaclass of message 'ChangeVideo_Request'."""

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
            module = import_type_support('theora_webcams')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'theora_webcams.srv.ChangeVideo_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__change_video__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__change_video__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__change_video__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__change_video__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__change_video__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ChangeVideo_Request(metaclass=Metaclass_ChangeVideo_Request):
    """Message class 'ChangeVideo_Request'."""

    __slots__ = [
        '_width',
        '_height',
        '_fps_num',
        '_fps_den',
        '_start',
        '_force_restart',
    ]

    _fields_and_field_types = {
        'width': 'int32',
        'height': 'int32',
        'fps_num': 'int32',
        'fps_den': 'int32',
        'start': 'boolean',
        'force_restart': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.width = kwargs.get('width', int())
        self.height = kwargs.get('height', int())
        self.fps_num = kwargs.get('fps_num', int())
        self.fps_den = kwargs.get('fps_den', int())
        self.start = kwargs.get('start', bool())
        self.force_restart = kwargs.get('force_restart', bool())

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
        if self.width != other.width:
            return False
        if self.height != other.height:
            return False
        if self.fps_num != other.fps_num:
            return False
        if self.fps_den != other.fps_den:
            return False
        if self.start != other.start:
            return False
        if self.force_restart != other.force_restart:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'width' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'width' field must be an integer in [-2147483648, 2147483647]"
        self._width = value

    @builtins.property
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'height' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'height' field must be an integer in [-2147483648, 2147483647]"
        self._height = value

    @builtins.property
    def fps_num(self):
        """Message field 'fps_num'."""
        return self._fps_num

    @fps_num.setter
    def fps_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fps_num' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'fps_num' field must be an integer in [-2147483648, 2147483647]"
        self._fps_num = value

    @builtins.property
    def fps_den(self):
        """Message field 'fps_den'."""
        return self._fps_den

    @fps_den.setter
    def fps_den(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fps_den' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'fps_den' field must be an integer in [-2147483648, 2147483647]"
        self._fps_den = value

    @builtins.property
    def start(self):
        """Message field 'start'."""
        return self._start

    @start.setter
    def start(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'start' field must be of type 'bool'"
        self._start = value

    @builtins.property
    def force_restart(self):
        """Message field 'force_restart'."""
        return self._force_restart

    @force_restart.setter
    def force_restart(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'force_restart' field must be of type 'bool'"
        self._force_restart = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ChangeVideo_Response(type):
    """Metaclass of message 'ChangeVideo_Response'."""

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
            module = import_type_support('theora_webcams')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'theora_webcams.srv.ChangeVideo_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__change_video__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__change_video__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__change_video__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__change_video__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__change_video__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ChangeVideo_Response(metaclass=Metaclass_ChangeVideo_Response):
    """Message class 'ChangeVideo_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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
        if self.success != other.success:
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
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_ChangeVideo(type):
    """Metaclass of service 'ChangeVideo'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('theora_webcams')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'theora_webcams.srv.ChangeVideo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__change_video

            from theora_webcams.srv import _change_video
            if _change_video.Metaclass_ChangeVideo_Request._TYPE_SUPPORT is None:
                _change_video.Metaclass_ChangeVideo_Request.__import_type_support__()
            if _change_video.Metaclass_ChangeVideo_Response._TYPE_SUPPORT is None:
                _change_video.Metaclass_ChangeVideo_Response.__import_type_support__()


class ChangeVideo(metaclass=Metaclass_ChangeVideo):
    from theora_webcams.srv._change_video import ChangeVideo_Request as Request
    from theora_webcams.srv._change_video import ChangeVideo_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
