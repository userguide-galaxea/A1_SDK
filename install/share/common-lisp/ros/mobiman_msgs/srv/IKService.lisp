; Auto-generated. Do not edit!


(cl:in-package mobiman_msgs-srv)


;//! \htmlinclude IKService-request.msg.html

(cl:defclass <IKService-request> (roslisp-msg-protocol:ros-message)
  ((pose
    :reader pose
    :initarg :pose
    :type geometry_msgs-msg:Pose
    :initform (cl:make-instance 'geometry_msgs-msg:Pose)))
)

(cl:defclass IKService-request (<IKService-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <IKService-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'IKService-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name mobiman_msgs-srv:<IKService-request> is deprecated: use mobiman_msgs-srv:IKService-request instead.")))

(cl:ensure-generic-function 'pose-val :lambda-list '(m))
(cl:defmethod pose-val ((m <IKService-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mobiman_msgs-srv:pose-val is deprecated.  Use mobiman_msgs-srv:pose instead.")
  (pose m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <IKService-request>) ostream)
  "Serializes a message object of type '<IKService-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'pose) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <IKService-request>) istream)
  "Deserializes a message object of type '<IKService-request>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'pose) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<IKService-request>)))
  "Returns string type for a service object of type '<IKService-request>"
  "mobiman_msgs/IKServiceRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'IKService-request)))
  "Returns string type for a service object of type 'IKService-request"
  "mobiman_msgs/IKServiceRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<IKService-request>)))
  "Returns md5sum for a message object of type '<IKService-request>"
  "32fb633238027c7a4108018cf3944fa3")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'IKService-request)))
  "Returns md5sum for a message object of type 'IKService-request"
  "32fb633238027c7a4108018cf3944fa3")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<IKService-request>)))
  "Returns full string definition for message of type '<IKService-request>"
  (cl:format cl:nil "geometry_msgs/Pose pose~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'IKService-request)))
  "Returns full string definition for message of type 'IKService-request"
  (cl:format cl:nil "geometry_msgs/Pose pose~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <IKService-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'pose))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <IKService-request>))
  "Converts a ROS message object to a list"
  (cl:list 'IKService-request
    (cl:cons ':pose (pose msg))
))
;//! \htmlinclude IKService-response.msg.html

(cl:defclass <IKService-response> (roslisp-msg-protocol:ros-message)
  ((joint_states
    :reader joint_states
    :initarg :joint_states
    :type sensor_msgs-msg:JointState
    :initform (cl:make-instance 'sensor_msgs-msg:JointState)))
)

(cl:defclass IKService-response (<IKService-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <IKService-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'IKService-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name mobiman_msgs-srv:<IKService-response> is deprecated: use mobiman_msgs-srv:IKService-response instead.")))

(cl:ensure-generic-function 'joint_states-val :lambda-list '(m))
(cl:defmethod joint_states-val ((m <IKService-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mobiman_msgs-srv:joint_states-val is deprecated.  Use mobiman_msgs-srv:joint_states instead.")
  (joint_states m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <IKService-response>) ostream)
  "Serializes a message object of type '<IKService-response>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'joint_states) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <IKService-response>) istream)
  "Deserializes a message object of type '<IKService-response>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'joint_states) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<IKService-response>)))
  "Returns string type for a service object of type '<IKService-response>"
  "mobiman_msgs/IKServiceResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'IKService-response)))
  "Returns string type for a service object of type 'IKService-response"
  "mobiman_msgs/IKServiceResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<IKService-response>)))
  "Returns md5sum for a message object of type '<IKService-response>"
  "32fb633238027c7a4108018cf3944fa3")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'IKService-response)))
  "Returns md5sum for a message object of type 'IKService-response"
  "32fb633238027c7a4108018cf3944fa3")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<IKService-response>)))
  "Returns full string definition for message of type '<IKService-response>"
  (cl:format cl:nil "sensor_msgs/JointState joint_states~%~%================================================================================~%MSG: sensor_msgs/JointState~%# This is a message that holds data to describe the state of a set of torque controlled joints. ~%#~%# The state of each joint (revolute or prismatic) is defined by:~%#  * the position of the joint (rad or m),~%#  * the velocity of the joint (rad/s or m/s) and ~%#  * the effort that is applied in the joint (Nm or N).~%#~%# Each joint is uniquely identified by its name~%# The header specifies the time at which the joint states were recorded. All the joint states~%# in one message have to be recorded at the same time.~%#~%# This message consists of a multiple arrays, one for each part of the joint state. ~%# The goal is to make each of the fields optional. When e.g. your joints have no~%# effort associated with them, you can leave the effort array empty. ~%#~%# All arrays in this message should have the same size, or be empty.~%# This is the only way to uniquely associate the joint name with the correct~%# states.~%~%~%Header header~%~%string[] name~%float64[] position~%float64[] velocity~%float64[] effort~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'IKService-response)))
  "Returns full string definition for message of type 'IKService-response"
  (cl:format cl:nil "sensor_msgs/JointState joint_states~%~%================================================================================~%MSG: sensor_msgs/JointState~%# This is a message that holds data to describe the state of a set of torque controlled joints. ~%#~%# The state of each joint (revolute or prismatic) is defined by:~%#  * the position of the joint (rad or m),~%#  * the velocity of the joint (rad/s or m/s) and ~%#  * the effort that is applied in the joint (Nm or N).~%#~%# Each joint is uniquely identified by its name~%# The header specifies the time at which the joint states were recorded. All the joint states~%# in one message have to be recorded at the same time.~%#~%# This message consists of a multiple arrays, one for each part of the joint state. ~%# The goal is to make each of the fields optional. When e.g. your joints have no~%# effort associated with them, you can leave the effort array empty. ~%#~%# All arrays in this message should have the same size, or be empty.~%# This is the only way to uniquely associate the joint name with the correct~%# states.~%~%~%Header header~%~%string[] name~%float64[] position~%float64[] velocity~%float64[] effort~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <IKService-response>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'joint_states))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <IKService-response>))
  "Converts a ROS message object to a list"
  (cl:list 'IKService-response
    (cl:cons ':joint_states (joint_states msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'IKService)))
  'IKService-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'IKService)))
  'IKService-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'IKService)))
  "Returns string type for a service object of type '<IKService>"
  "mobiman_msgs/IKService")