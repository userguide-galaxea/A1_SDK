; Auto-generated. Do not edit!


(cl:in-package mobiman_msgs-msg)


;//! \htmlinclude ChassisCommandStamped.msg.html

(cl:defclass <ChassisCommandStamped> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (command
    :reader command
    :initarg :command
    :type mobiman_msgs-msg:ChassisCommand
    :initform (cl:make-instance 'mobiman_msgs-msg:ChassisCommand)))
)

(cl:defclass ChassisCommandStamped (<ChassisCommandStamped>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ChassisCommandStamped>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ChassisCommandStamped)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name mobiman_msgs-msg:<ChassisCommandStamped> is deprecated: use mobiman_msgs-msg:ChassisCommandStamped instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <ChassisCommandStamped>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mobiman_msgs-msg:header-val is deprecated.  Use mobiman_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'command-val :lambda-list '(m))
(cl:defmethod command-val ((m <ChassisCommandStamped>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mobiman_msgs-msg:command-val is deprecated.  Use mobiman_msgs-msg:command instead.")
  (command m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ChassisCommandStamped>) ostream)
  "Serializes a message object of type '<ChassisCommandStamped>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'command) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ChassisCommandStamped>) istream)
  "Deserializes a message object of type '<ChassisCommandStamped>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'command) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ChassisCommandStamped>)))
  "Returns string type for a message object of type '<ChassisCommandStamped>"
  "mobiman_msgs/ChassisCommandStamped")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ChassisCommandStamped)))
  "Returns string type for a message object of type 'ChassisCommandStamped"
  "mobiman_msgs/ChassisCommandStamped")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ChassisCommandStamped>)))
  "Returns md5sum for a message object of type '<ChassisCommandStamped>"
  "123c2e06ca5169bd3a46b31694b50130")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ChassisCommandStamped)))
  "Returns md5sum for a message object of type 'ChassisCommandStamped"
  "123c2e06ca5169bd3a46b31694b50130")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ChassisCommandStamped>)))
  "Returns full string definition for message of type '<ChassisCommandStamped>"
  (cl:format cl:nil "Header header~%ChassisCommand command~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: mobiman_msgs/ChassisCommand~%# for 4w4s vehicles, the order is [fl, fr, rl ,rr]~%float32[] steer_angles~%float32[] wheel_speed~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ChassisCommandStamped)))
  "Returns full string definition for message of type 'ChassisCommandStamped"
  (cl:format cl:nil "Header header~%ChassisCommand command~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: mobiman_msgs/ChassisCommand~%# for 4w4s vehicles, the order is [fl, fr, rl ,rr]~%float32[] steer_angles~%float32[] wheel_speed~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ChassisCommandStamped>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'command))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ChassisCommandStamped>))
  "Converts a ROS message object to a list"
  (cl:list 'ChassisCommandStamped
    (cl:cons ':header (header msg))
    (cl:cons ':command (command msg))
))
