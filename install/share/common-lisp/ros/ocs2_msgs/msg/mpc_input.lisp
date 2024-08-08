; Auto-generated. Do not edit!


(cl:in-package ocs2_msgs-msg)


;//! \htmlinclude mpc_input.msg.html

(cl:defclass <mpc_input> (roslisp-msg-protocol:ros-message)
  ((value
    :reader value
    :initarg :value
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0)))
)

(cl:defclass mpc_input (<mpc_input>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <mpc_input>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'mpc_input)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ocs2_msgs-msg:<mpc_input> is deprecated: use ocs2_msgs-msg:mpc_input instead.")))

(cl:ensure-generic-function 'value-val :lambda-list '(m))
(cl:defmethod value-val ((m <mpc_input>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocs2_msgs-msg:value-val is deprecated.  Use ocs2_msgs-msg:value instead.")
  (value m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <mpc_input>) ostream)
  "Serializes a message object of type '<mpc_input>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'value))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'value))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <mpc_input>) istream)
  "Deserializes a message object of type '<mpc_input>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'value) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'value)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<mpc_input>)))
  "Returns string type for a message object of type '<mpc_input>"
  "ocs2_msgs/mpc_input")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'mpc_input)))
  "Returns string type for a message object of type 'mpc_input"
  "ocs2_msgs/mpc_input")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<mpc_input>)))
  "Returns md5sum for a message object of type '<mpc_input>"
  "1becc0cb8362a822e3753aa6cf42cf70")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'mpc_input)))
  "Returns md5sum for a message object of type 'mpc_input"
  "1becc0cb8362a822e3753aa6cf42cf70")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<mpc_input>)))
  "Returns full string definition for message of type '<mpc_input>"
  (cl:format cl:nil "# MPC internal model input vector ~%~%float32[] value~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'mpc_input)))
  "Returns full string definition for message of type 'mpc_input"
  (cl:format cl:nil "# MPC internal model input vector ~%~%float32[] value~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <mpc_input>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'value) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <mpc_input>))
  "Converts a ROS message object to a list"
  (cl:list 'mpc_input
    (cl:cons ':value (value msg))
))
