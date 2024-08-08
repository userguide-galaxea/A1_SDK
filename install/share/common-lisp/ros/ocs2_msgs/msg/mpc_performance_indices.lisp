; Auto-generated. Do not edit!


(cl:in-package ocs2_msgs-msg)


;//! \htmlinclude mpc_performance_indices.msg.html

(cl:defclass <mpc_performance_indices> (roslisp-msg-protocol:ros-message)
  ((initTime
    :reader initTime
    :initarg :initTime
    :type cl:float
    :initform 0.0)
   (merit
    :reader merit
    :initarg :merit
    :type cl:float
    :initform 0.0)
   (cost
    :reader cost
    :initarg :cost
    :type cl:float
    :initform 0.0)
   (dynamicsViolationSSE
    :reader dynamicsViolationSSE
    :initarg :dynamicsViolationSSE
    :type cl:float
    :initform 0.0)
   (equalityConstraintsSSE
    :reader equalityConstraintsSSE
    :initarg :equalityConstraintsSSE
    :type cl:float
    :initform 0.0)
   (equalityLagrangian
    :reader equalityLagrangian
    :initarg :equalityLagrangian
    :type cl:float
    :initform 0.0)
   (inequalityLagrangian
    :reader inequalityLagrangian
    :initarg :inequalityLagrangian
    :type cl:float
    :initform 0.0))
)

(cl:defclass mpc_performance_indices (<mpc_performance_indices>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <mpc_performance_indices>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'mpc_performance_indices)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ocs2_msgs-msg:<mpc_performance_indices> is deprecated: use ocs2_msgs-msg:mpc_performance_indices instead.")))

(cl:ensure-generic-function 'initTime-val :lambda-list '(m))
(cl:defmethod initTime-val ((m <mpc_performance_indices>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocs2_msgs-msg:initTime-val is deprecated.  Use ocs2_msgs-msg:initTime instead.")
  (initTime m))

(cl:ensure-generic-function 'merit-val :lambda-list '(m))
(cl:defmethod merit-val ((m <mpc_performance_indices>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocs2_msgs-msg:merit-val is deprecated.  Use ocs2_msgs-msg:merit instead.")
  (merit m))

(cl:ensure-generic-function 'cost-val :lambda-list '(m))
(cl:defmethod cost-val ((m <mpc_performance_indices>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocs2_msgs-msg:cost-val is deprecated.  Use ocs2_msgs-msg:cost instead.")
  (cost m))

(cl:ensure-generic-function 'dynamicsViolationSSE-val :lambda-list '(m))
(cl:defmethod dynamicsViolationSSE-val ((m <mpc_performance_indices>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocs2_msgs-msg:dynamicsViolationSSE-val is deprecated.  Use ocs2_msgs-msg:dynamicsViolationSSE instead.")
  (dynamicsViolationSSE m))

(cl:ensure-generic-function 'equalityConstraintsSSE-val :lambda-list '(m))
(cl:defmethod equalityConstraintsSSE-val ((m <mpc_performance_indices>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocs2_msgs-msg:equalityConstraintsSSE-val is deprecated.  Use ocs2_msgs-msg:equalityConstraintsSSE instead.")
  (equalityConstraintsSSE m))

(cl:ensure-generic-function 'equalityLagrangian-val :lambda-list '(m))
(cl:defmethod equalityLagrangian-val ((m <mpc_performance_indices>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocs2_msgs-msg:equalityLagrangian-val is deprecated.  Use ocs2_msgs-msg:equalityLagrangian instead.")
  (equalityLagrangian m))

(cl:ensure-generic-function 'inequalityLagrangian-val :lambda-list '(m))
(cl:defmethod inequalityLagrangian-val ((m <mpc_performance_indices>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocs2_msgs-msg:inequalityLagrangian-val is deprecated.  Use ocs2_msgs-msg:inequalityLagrangian instead.")
  (inequalityLagrangian m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <mpc_performance_indices>) ostream)
  "Serializes a message object of type '<mpc_performance_indices>"
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'initTime))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'merit))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'cost))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'dynamicsViolationSSE))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'equalityConstraintsSSE))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'equalityLagrangian))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'inequalityLagrangian))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <mpc_performance_indices>) istream)
  "Deserializes a message object of type '<mpc_performance_indices>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'initTime) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'merit) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'cost) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'dynamicsViolationSSE) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'equalityConstraintsSSE) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'equalityLagrangian) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'inequalityLagrangian) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<mpc_performance_indices>)))
  "Returns string type for a message object of type '<mpc_performance_indices>"
  "ocs2_msgs/mpc_performance_indices")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'mpc_performance_indices)))
  "Returns string type for a message object of type 'mpc_performance_indices"
  "ocs2_msgs/mpc_performance_indices")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<mpc_performance_indices>)))
  "Returns md5sum for a message object of type '<mpc_performance_indices>"
  "d3efdce4c946e170e65e642157f48398")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'mpc_performance_indices)))
  "Returns md5sum for a message object of type 'mpc_performance_indices"
  "d3efdce4c946e170e65e642157f48398")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<mpc_performance_indices>)))
  "Returns full string definition for message of type '<mpc_performance_indices>"
  (cl:format cl:nil "# MPC performance indices~%float32     initTime~%float32     merit~%float32     cost~%float32     dynamicsViolationSSE~%float32     equalityConstraintsSSE~%float32     equalityLagrangian~%float32     inequalityLagrangian~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'mpc_performance_indices)))
  "Returns full string definition for message of type 'mpc_performance_indices"
  (cl:format cl:nil "# MPC performance indices~%float32     initTime~%float32     merit~%float32     cost~%float32     dynamicsViolationSSE~%float32     equalityConstraintsSSE~%float32     equalityLagrangian~%float32     inequalityLagrangian~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <mpc_performance_indices>))
  (cl:+ 0
     4
     4
     4
     4
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <mpc_performance_indices>))
  "Converts a ROS message object to a list"
  (cl:list 'mpc_performance_indices
    (cl:cons ':initTime (initTime msg))
    (cl:cons ':merit (merit msg))
    (cl:cons ':cost (cost msg))
    (cl:cons ':dynamicsViolationSSE (dynamicsViolationSSE msg))
    (cl:cons ':equalityConstraintsSSE (equalityConstraintsSSE msg))
    (cl:cons ':equalityLagrangian (equalityLagrangian msg))
    (cl:cons ':inequalityLagrangian (inequalityLagrangian msg))
))
