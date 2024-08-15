; Auto-generated. Do not edit!


(cl:in-package mobiman_msgs-srv)


;//! \htmlinclude PoseArrayService-request.msg.html

(cl:defclass <PoseArrayService-request> (roslisp-msg-protocol:ros-message)
  ((poses
    :reader poses
    :initarg :poses
    :type geometry_msgs-msg:PoseArray
    :initform (cl:make-instance 'geometry_msgs-msg:PoseArray)))
)

(cl:defclass PoseArrayService-request (<PoseArrayService-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <PoseArrayService-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'PoseArrayService-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name mobiman_msgs-srv:<PoseArrayService-request> is deprecated: use mobiman_msgs-srv:PoseArrayService-request instead.")))

(cl:ensure-generic-function 'poses-val :lambda-list '(m))
(cl:defmethod poses-val ((m <PoseArrayService-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mobiman_msgs-srv:poses-val is deprecated.  Use mobiman_msgs-srv:poses instead.")
  (poses m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <PoseArrayService-request>) ostream)
  "Serializes a message object of type '<PoseArrayService-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'poses) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <PoseArrayService-request>) istream)
  "Deserializes a message object of type '<PoseArrayService-request>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'poses) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<PoseArrayService-request>)))
  "Returns string type for a service object of type '<PoseArrayService-request>"
  "mobiman_msgs/PoseArrayServiceRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PoseArrayService-request)))
  "Returns string type for a service object of type 'PoseArrayService-request"
  "mobiman_msgs/PoseArrayServiceRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<PoseArrayService-request>)))
  "Returns md5sum for a message object of type '<PoseArrayService-request>"
  "248320f22709534d9c1f1e28f3b6fa63")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'PoseArrayService-request)))
  "Returns md5sum for a message object of type 'PoseArrayService-request"
  "248320f22709534d9c1f1e28f3b6fa63")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<PoseArrayService-request>)))
  "Returns full string definition for message of type '<PoseArrayService-request>"
  (cl:format cl:nil "geometry_msgs/PoseArray poses~%~%================================================================================~%MSG: geometry_msgs/PoseArray~%# An array of poses with a header for global reference.~%~%Header header~%~%Pose[] poses~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'PoseArrayService-request)))
  "Returns full string definition for message of type 'PoseArrayService-request"
  (cl:format cl:nil "geometry_msgs/PoseArray poses~%~%================================================================================~%MSG: geometry_msgs/PoseArray~%# An array of poses with a header for global reference.~%~%Header header~%~%Pose[] poses~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <PoseArrayService-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'poses))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <PoseArrayService-request>))
  "Converts a ROS message object to a list"
  (cl:list 'PoseArrayService-request
    (cl:cons ':poses (poses msg))
))
;//! \htmlinclude PoseArrayService-response.msg.html

(cl:defclass <PoseArrayService-response> (roslisp-msg-protocol:ros-message)
  ((success
    :reader success
    :initarg :success
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass PoseArrayService-response (<PoseArrayService-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <PoseArrayService-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'PoseArrayService-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name mobiman_msgs-srv:<PoseArrayService-response> is deprecated: use mobiman_msgs-srv:PoseArrayService-response instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <PoseArrayService-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mobiman_msgs-srv:success-val is deprecated.  Use mobiman_msgs-srv:success instead.")
  (success m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <PoseArrayService-response>) ostream)
  "Serializes a message object of type '<PoseArrayService-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <PoseArrayService-response>) istream)
  "Deserializes a message object of type '<PoseArrayService-response>"
    (cl:setf (cl:slot-value msg 'success) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<PoseArrayService-response>)))
  "Returns string type for a service object of type '<PoseArrayService-response>"
  "mobiman_msgs/PoseArrayServiceResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PoseArrayService-response)))
  "Returns string type for a service object of type 'PoseArrayService-response"
  "mobiman_msgs/PoseArrayServiceResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<PoseArrayService-response>)))
  "Returns md5sum for a message object of type '<PoseArrayService-response>"
  "248320f22709534d9c1f1e28f3b6fa63")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'PoseArrayService-response)))
  "Returns md5sum for a message object of type 'PoseArrayService-response"
  "248320f22709534d9c1f1e28f3b6fa63")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<PoseArrayService-response>)))
  "Returns full string definition for message of type '<PoseArrayService-response>"
  (cl:format cl:nil "bool success~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'PoseArrayService-response)))
  "Returns full string definition for message of type 'PoseArrayService-response"
  (cl:format cl:nil "bool success~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <PoseArrayService-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <PoseArrayService-response>))
  "Converts a ROS message object to a list"
  (cl:list 'PoseArrayService-response
    (cl:cons ':success (success msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'PoseArrayService)))
  'PoseArrayService-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'PoseArrayService)))
  'PoseArrayService-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PoseArrayService)))
  "Returns string type for a service object of type '<PoseArrayService>"
  "mobiman_msgs/PoseArrayService")