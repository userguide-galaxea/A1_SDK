; Auto-generated. Do not edit!


(cl:in-package signal_chassis-msg)


;//! \htmlinclude DrivetrainStamped_r1.msg.html

(cl:defclass <DrivetrainStamped_r1> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (data
    :reader data
    :initarg :data
    :type signal_chassis-msg:Drivetrain_r1
    :initform (cl:make-instance 'signal_chassis-msg:Drivetrain_r1)))
)

(cl:defclass DrivetrainStamped_r1 (<DrivetrainStamped_r1>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <DrivetrainStamped_r1>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'DrivetrainStamped_r1)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name signal_chassis-msg:<DrivetrainStamped_r1> is deprecated: use signal_chassis-msg:DrivetrainStamped_r1 instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <DrivetrainStamped_r1>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_chassis-msg:header-val is deprecated.  Use signal_chassis-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'data-val :lambda-list '(m))
(cl:defmethod data-val ((m <DrivetrainStamped_r1>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_chassis-msg:data-val is deprecated.  Use signal_chassis-msg:data instead.")
  (data m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <DrivetrainStamped_r1>) ostream)
  "Serializes a message object of type '<DrivetrainStamped_r1>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'data) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <DrivetrainStamped_r1>) istream)
  "Deserializes a message object of type '<DrivetrainStamped_r1>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'data) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<DrivetrainStamped_r1>)))
  "Returns string type for a message object of type '<DrivetrainStamped_r1>"
  "signal_chassis/DrivetrainStamped_r1")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DrivetrainStamped_r1)))
  "Returns string type for a message object of type 'DrivetrainStamped_r1"
  "signal_chassis/DrivetrainStamped_r1")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<DrivetrainStamped_r1>)))
  "Returns md5sum for a message object of type '<DrivetrainStamped_r1>"
  "b20aade53af85c908f293bec189beeed")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'DrivetrainStamped_r1)))
  "Returns md5sum for a message object of type 'DrivetrainStamped_r1"
  "b20aade53af85c908f293bec189beeed")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<DrivetrainStamped_r1>)))
  "Returns full string definition for message of type '<DrivetrainStamped_r1>"
  (cl:format cl:nil "std_msgs/Header header~%Drivetrain_r1 data~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: signal_chassis/Drivetrain_r1~%float32 steer_angle_front_left~%float32 steer_angle_front_right~%float32 steer_angle_rear~%float32 drive_speed_front_left~%float32 drive_speed_front_right~%float32 drive_speed_rear~%float32 drive_angular_speed_front_left~%float32 drive_angular_speed_front_right~%float32 drive_angular_speed_rear~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'DrivetrainStamped_r1)))
  "Returns full string definition for message of type 'DrivetrainStamped_r1"
  (cl:format cl:nil "std_msgs/Header header~%Drivetrain_r1 data~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: signal_chassis/Drivetrain_r1~%float32 steer_angle_front_left~%float32 steer_angle_front_right~%float32 steer_angle_rear~%float32 drive_speed_front_left~%float32 drive_speed_front_right~%float32 drive_speed_rear~%float32 drive_angular_speed_front_left~%float32 drive_angular_speed_front_right~%float32 drive_angular_speed_rear~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <DrivetrainStamped_r1>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'data))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <DrivetrainStamped_r1>))
  "Converts a ROS message object to a list"
  (cl:list 'DrivetrainStamped_r1
    (cl:cons ':header (header msg))
    (cl:cons ':data (data msg))
))
