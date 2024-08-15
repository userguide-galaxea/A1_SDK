; Auto-generated. Do not edit!


(cl:in-package signal_arm-msg)


;//! \htmlinclude status_stamped.msg.html

(cl:defclass <status_stamped> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (data
    :reader data
    :initarg :data
    :type signal_arm-msg:status
    :initform (cl:make-instance 'signal_arm-msg:status)))
)

(cl:defclass status_stamped (<status_stamped>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <status_stamped>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'status_stamped)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name signal_arm-msg:<status_stamped> is deprecated: use signal_arm-msg:status_stamped instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <status_stamped>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_arm-msg:header-val is deprecated.  Use signal_arm-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'data-val :lambda-list '(m))
(cl:defmethod data-val ((m <status_stamped>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_arm-msg:data-val is deprecated.  Use signal_arm-msg:data instead.")
  (data m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <status_stamped>) ostream)
  "Serializes a message object of type '<status_stamped>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'data) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <status_stamped>) istream)
  "Deserializes a message object of type '<status_stamped>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'data) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<status_stamped>)))
  "Returns string type for a message object of type '<status_stamped>"
  "signal_arm/status_stamped")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'status_stamped)))
  "Returns string type for a message object of type 'status_stamped"
  "signal_arm/status_stamped")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<status_stamped>)))
  "Returns md5sum for a message object of type '<status_stamped>"
  "6e3be6b3acaa4d25460958596a1f2bf0")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'status_stamped)))
  "Returns md5sum for a message object of type 'status_stamped"
  "6e3be6b3acaa4d25460958596a1f2bf0")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<status_stamped>)))
  "Returns full string definition for message of type '<status_stamped>"
  (cl:format cl:nil "std_msgs/Header header~%status data~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: signal_arm/status~%string[] name~%motor_error[] motor_errors~%================================================================================~%MSG: signal_arm/motor_error~%uint32 error_code~%string[] error_description~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'status_stamped)))
  "Returns full string definition for message of type 'status_stamped"
  (cl:format cl:nil "std_msgs/Header header~%status data~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: signal_arm/status~%string[] name~%motor_error[] motor_errors~%================================================================================~%MSG: signal_arm/motor_error~%uint32 error_code~%string[] error_description~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <status_stamped>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'data))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <status_stamped>))
  "Converts a ROS message object to a list"
  (cl:list 'status_stamped
    (cl:cons ':header (header msg))
    (cl:cons ':data (data msg))
))
