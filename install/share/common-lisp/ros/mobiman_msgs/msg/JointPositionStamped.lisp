; Auto-generated. Do not edit!


(cl:in-package mobiman_msgs-msg)


;//! \htmlinclude JointPositionStamped.msg.html

(cl:defclass <JointPositionStamped> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (pos
    :reader pos
    :initarg :pos
    :type mobiman_msgs-msg:JointPosition
    :initform (cl:make-instance 'mobiman_msgs-msg:JointPosition)))
)

(cl:defclass JointPositionStamped (<JointPositionStamped>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <JointPositionStamped>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'JointPositionStamped)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name mobiman_msgs-msg:<JointPositionStamped> is deprecated: use mobiman_msgs-msg:JointPositionStamped instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <JointPositionStamped>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mobiman_msgs-msg:header-val is deprecated.  Use mobiman_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'pos-val :lambda-list '(m))
(cl:defmethod pos-val ((m <JointPositionStamped>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mobiman_msgs-msg:pos-val is deprecated.  Use mobiman_msgs-msg:pos instead.")
  (pos m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <JointPositionStamped>) ostream)
  "Serializes a message object of type '<JointPositionStamped>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'pos) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <JointPositionStamped>) istream)
  "Deserializes a message object of type '<JointPositionStamped>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'pos) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<JointPositionStamped>)))
  "Returns string type for a message object of type '<JointPositionStamped>"
  "mobiman_msgs/JointPositionStamped")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'JointPositionStamped)))
  "Returns string type for a message object of type 'JointPositionStamped"
  "mobiman_msgs/JointPositionStamped")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<JointPositionStamped>)))
  "Returns md5sum for a message object of type '<JointPositionStamped>"
  "a1eb4f699de878b57462959a77fb2410")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'JointPositionStamped)))
  "Returns md5sum for a message object of type 'JointPositionStamped"
  "a1eb4f699de878b57462959a77fb2410")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<JointPositionStamped>)))
  "Returns full string definition for message of type '<JointPositionStamped>"
  (cl:format cl:nil "Header header~%JointPosition pos~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: mobiman_msgs/JointPosition~%float32[] pos~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'JointPositionStamped)))
  "Returns full string definition for message of type 'JointPositionStamped"
  (cl:format cl:nil "Header header~%JointPosition pos~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: mobiman_msgs/JointPosition~%float32[] pos~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <JointPositionStamped>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'pos))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <JointPositionStamped>))
  "Converts a ROS message object to a list"
  (cl:list 'JointPositionStamped
    (cl:cons ':header (header msg))
    (cl:cons ':pos (pos msg))
))
