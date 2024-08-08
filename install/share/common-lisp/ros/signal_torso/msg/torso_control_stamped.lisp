; Auto-generated. Do not edit!


(cl:in-package signal_torso-msg)


;//! \htmlinclude torso_control_stamped.msg.html

(cl:defclass <torso_control_stamped> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (data
    :reader data
    :initarg :data
    :type signal_torso-msg:torso_control
    :initform (cl:make-instance 'signal_torso-msg:torso_control)))
)

(cl:defclass torso_control_stamped (<torso_control_stamped>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <torso_control_stamped>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'torso_control_stamped)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name signal_torso-msg:<torso_control_stamped> is deprecated: use signal_torso-msg:torso_control_stamped instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <torso_control_stamped>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_torso-msg:header-val is deprecated.  Use signal_torso-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'data-val :lambda-list '(m))
(cl:defmethod data-val ((m <torso_control_stamped>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_torso-msg:data-val is deprecated.  Use signal_torso-msg:data instead.")
  (data m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <torso_control_stamped>) ostream)
  "Serializes a message object of type '<torso_control_stamped>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'data) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <torso_control_stamped>) istream)
  "Deserializes a message object of type '<torso_control_stamped>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'data) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<torso_control_stamped>)))
  "Returns string type for a message object of type '<torso_control_stamped>"
  "signal_torso/torso_control_stamped")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'torso_control_stamped)))
  "Returns string type for a message object of type 'torso_control_stamped"
  "signal_torso/torso_control_stamped")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<torso_control_stamped>)))
  "Returns md5sum for a message object of type '<torso_control_stamped>"
  "d7f7dd6efa50e7092f967cdd0f0a15ee")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'torso_control_stamped)))
  "Returns md5sum for a message object of type 'torso_control_stamped"
  "d7f7dd6efa50e7092f967cdd0f0a15ee")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<torso_control_stamped>)))
  "Returns full string definition for message of type '<torso_control_stamped>"
  (cl:format cl:nil "std_msgs/Header header~%torso_control data~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: signal_torso/torso_control~%float32[] position_des~%float32[] speed_des~%uint8[] current_kp~%uint8[] current_kd~%uint8[] speed_kp~%uint8[] speed_kd~%uint8[] position_kp~%uint8[] position_kd~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'torso_control_stamped)))
  "Returns full string definition for message of type 'torso_control_stamped"
  (cl:format cl:nil "std_msgs/Header header~%torso_control data~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: signal_torso/torso_control~%float32[] position_des~%float32[] speed_des~%uint8[] current_kp~%uint8[] current_kd~%uint8[] speed_kp~%uint8[] speed_kd~%uint8[] position_kp~%uint8[] position_kd~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <torso_control_stamped>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'data))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <torso_control_stamped>))
  "Converts a ROS message object to a list"
  (cl:list 'torso_control_stamped
    (cl:cons ':header (header msg))
    (cl:cons ':data (data msg))
))
