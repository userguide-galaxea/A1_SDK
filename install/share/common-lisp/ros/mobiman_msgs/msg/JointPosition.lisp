; Auto-generated. Do not edit!


(cl:in-package mobiman_msgs-msg)


;//! \htmlinclude JointPosition.msg.html

(cl:defclass <JointPosition> (roslisp-msg-protocol:ros-message)
  ((pos
    :reader pos
    :initarg :pos
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0)))
)

(cl:defclass JointPosition (<JointPosition>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <JointPosition>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'JointPosition)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name mobiman_msgs-msg:<JointPosition> is deprecated: use mobiman_msgs-msg:JointPosition instead.")))

(cl:ensure-generic-function 'pos-val :lambda-list '(m))
(cl:defmethod pos-val ((m <JointPosition>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mobiman_msgs-msg:pos-val is deprecated.  Use mobiman_msgs-msg:pos instead.")
  (pos m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <JointPosition>) ostream)
  "Serializes a message object of type '<JointPosition>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'pos))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'pos))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <JointPosition>) istream)
  "Deserializes a message object of type '<JointPosition>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'pos) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'pos)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<JointPosition>)))
  "Returns string type for a message object of type '<JointPosition>"
  "mobiman_msgs/JointPosition")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'JointPosition)))
  "Returns string type for a message object of type 'JointPosition"
  "mobiman_msgs/JointPosition")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<JointPosition>)))
  "Returns md5sum for a message object of type '<JointPosition>"
  "2ddbdf76cbefd59cd9a914780fdf2963")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'JointPosition)))
  "Returns md5sum for a message object of type 'JointPosition"
  "2ddbdf76cbefd59cd9a914780fdf2963")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<JointPosition>)))
  "Returns full string definition for message of type '<JointPosition>"
  (cl:format cl:nil "float32[] pos~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'JointPosition)))
  "Returns full string definition for message of type 'JointPosition"
  (cl:format cl:nil "float32[] pos~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <JointPosition>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'pos) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <JointPosition>))
  "Converts a ROS message object to a list"
  (cl:list 'JointPosition
    (cl:cons ':pos (pos msg))
))
