; Auto-generated. Do not edit!


(cl:in-package ocs2_msgs-msg)


;//! \htmlinclude mpc_observation.msg.html

(cl:defclass <mpc_observation> (roslisp-msg-protocol:ros-message)
  ((time
    :reader time
    :initarg :time
    :type cl:float
    :initform 0.0)
   (state
    :reader state
    :initarg :state
    :type ocs2_msgs-msg:mpc_state
    :initform (cl:make-instance 'ocs2_msgs-msg:mpc_state))
   (input
    :reader input
    :initarg :input
    :type ocs2_msgs-msg:mpc_input
    :initform (cl:make-instance 'ocs2_msgs-msg:mpc_input))
   (mode
    :reader mode
    :initarg :mode
    :type cl:fixnum
    :initform 0))
)

(cl:defclass mpc_observation (<mpc_observation>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <mpc_observation>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'mpc_observation)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ocs2_msgs-msg:<mpc_observation> is deprecated: use ocs2_msgs-msg:mpc_observation instead.")))

(cl:ensure-generic-function 'time-val :lambda-list '(m))
(cl:defmethod time-val ((m <mpc_observation>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocs2_msgs-msg:time-val is deprecated.  Use ocs2_msgs-msg:time instead.")
  (time m))

(cl:ensure-generic-function 'state-val :lambda-list '(m))
(cl:defmethod state-val ((m <mpc_observation>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocs2_msgs-msg:state-val is deprecated.  Use ocs2_msgs-msg:state instead.")
  (state m))

(cl:ensure-generic-function 'input-val :lambda-list '(m))
(cl:defmethod input-val ((m <mpc_observation>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocs2_msgs-msg:input-val is deprecated.  Use ocs2_msgs-msg:input instead.")
  (input m))

(cl:ensure-generic-function 'mode-val :lambda-list '(m))
(cl:defmethod mode-val ((m <mpc_observation>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocs2_msgs-msg:mode-val is deprecated.  Use ocs2_msgs-msg:mode instead.")
  (mode m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <mpc_observation>) ostream)
  "Serializes a message object of type '<mpc_observation>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'time))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'state) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'input) ostream)
  (cl:let* ((signed (cl:slot-value msg 'mode)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <mpc_observation>) istream)
  "Deserializes a message object of type '<mpc_observation>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'time) (roslisp-utils:decode-double-float-bits bits)))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'state) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'input) istream)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'mode) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<mpc_observation>)))
  "Returns string type for a message object of type '<mpc_observation>"
  "ocs2_msgs/mpc_observation")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'mpc_observation)))
  "Returns string type for a message object of type 'mpc_observation"
  "ocs2_msgs/mpc_observation")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<mpc_observation>)))
  "Returns md5sum for a message object of type '<mpc_observation>"
  "c4075a25799f2a89c6d62b26e93cb66f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'mpc_observation)))
  "Returns md5sum for a message object of type 'mpc_observation"
  "c4075a25799f2a89c6d62b26e93cb66f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<mpc_observation>)))
  "Returns full string definition for message of type '<mpc_observation>"
  (cl:format cl:nil "# MPC observation~%float64        time        # Current time~%mpc_state      state       # Current state~%mpc_input      input       # Current input~%int8           mode        # Current mode~%~%================================================================================~%MSG: ocs2_msgs/mpc_state~%# MPC internal model state vector~%float32[] value~%~%================================================================================~%MSG: ocs2_msgs/mpc_input~%# MPC internal model input vector ~%~%float32[] value~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'mpc_observation)))
  "Returns full string definition for message of type 'mpc_observation"
  (cl:format cl:nil "# MPC observation~%float64        time        # Current time~%mpc_state      state       # Current state~%mpc_input      input       # Current input~%int8           mode        # Current mode~%~%================================================================================~%MSG: ocs2_msgs/mpc_state~%# MPC internal model state vector~%float32[] value~%~%================================================================================~%MSG: ocs2_msgs/mpc_input~%# MPC internal model input vector ~%~%float32[] value~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <mpc_observation>))
  (cl:+ 0
     8
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'state))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'input))
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <mpc_observation>))
  "Converts a ROS message object to a list"
  (cl:list 'mpc_observation
    (cl:cons ':time (time msg))
    (cl:cons ':state (state msg))
    (cl:cons ':input (input msg))
    (cl:cons ':mode (mode msg))
))
