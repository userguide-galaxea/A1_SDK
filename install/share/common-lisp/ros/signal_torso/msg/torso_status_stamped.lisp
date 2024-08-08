; Auto-generated. Do not edit!


(cl:in-package signal_torso-msg)


;//! \htmlinclude torso_status_stamped.msg.html

(cl:defclass <torso_status_stamped> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (status
    :reader status
    :initarg :status
    :type signal_torso-msg:torso_status
    :initform (cl:make-instance 'signal_torso-msg:torso_status)))
)

(cl:defclass torso_status_stamped (<torso_status_stamped>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <torso_status_stamped>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'torso_status_stamped)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name signal_torso-msg:<torso_status_stamped> is deprecated: use signal_torso-msg:torso_status_stamped instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <torso_status_stamped>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_torso-msg:header-val is deprecated.  Use signal_torso-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'status-val :lambda-list '(m))
(cl:defmethod status-val ((m <torso_status_stamped>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_torso-msg:status-val is deprecated.  Use signal_torso-msg:status instead.")
  (status m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <torso_status_stamped>) ostream)
  "Serializes a message object of type '<torso_status_stamped>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'status) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <torso_status_stamped>) istream)
  "Deserializes a message object of type '<torso_status_stamped>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'status) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<torso_status_stamped>)))
  "Returns string type for a message object of type '<torso_status_stamped>"
  "signal_torso/torso_status_stamped")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'torso_status_stamped)))
  "Returns string type for a message object of type 'torso_status_stamped"
  "signal_torso/torso_status_stamped")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<torso_status_stamped>)))
  "Returns md5sum for a message object of type '<torso_status_stamped>"
  "0131c1b125296bd68a121c0755f75986")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'torso_status_stamped)))
  "Returns md5sum for a message object of type 'torso_status_stamped"
  "0131c1b125296bd68a121c0755f75986")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<torso_status_stamped>)))
  "Returns full string definition for message of type '<torso_status_stamped>"
  (cl:format cl:nil "std_msgs/Header header~%torso_status status~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: signal_torso/torso_status~%string[] name~%uint8[] motor_temperature~%uint8[] braking_state~%uint16[] motor_voltage~%uint16[] error_code~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'torso_status_stamped)))
  "Returns full string definition for message of type 'torso_status_stamped"
  (cl:format cl:nil "std_msgs/Header header~%torso_status status~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: signal_torso/torso_status~%string[] name~%uint8[] motor_temperature~%uint8[] braking_state~%uint16[] motor_voltage~%uint16[] error_code~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <torso_status_stamped>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'status))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <torso_status_stamped>))
  "Converts a ROS message object to a list"
  (cl:list 'torso_status_stamped
    (cl:cons ':header (header msg))
    (cl:cons ':status (status msg))
))
