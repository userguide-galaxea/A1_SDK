; Auto-generated. Do not edit!


(cl:in-package ocs2_msgs-msg)


;//! \htmlinclude lagrangian_metrics.msg.html

(cl:defclass <lagrangian_metrics> (roslisp-msg-protocol:ros-message)
  ((time
    :reader time
    :initarg :time
    :type cl:float
    :initform 0.0)
   (penalty
    :reader penalty
    :initarg :penalty
    :type cl:float
    :initform 0.0)
   (constraint
    :reader constraint
    :initarg :constraint
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0)))
)

(cl:defclass lagrangian_metrics (<lagrangian_metrics>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <lagrangian_metrics>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'lagrangian_metrics)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ocs2_msgs-msg:<lagrangian_metrics> is deprecated: use ocs2_msgs-msg:lagrangian_metrics instead.")))

(cl:ensure-generic-function 'time-val :lambda-list '(m))
(cl:defmethod time-val ((m <lagrangian_metrics>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocs2_msgs-msg:time-val is deprecated.  Use ocs2_msgs-msg:time instead.")
  (time m))

(cl:ensure-generic-function 'penalty-val :lambda-list '(m))
(cl:defmethod penalty-val ((m <lagrangian_metrics>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocs2_msgs-msg:penalty-val is deprecated.  Use ocs2_msgs-msg:penalty instead.")
  (penalty m))

(cl:ensure-generic-function 'constraint-val :lambda-list '(m))
(cl:defmethod constraint-val ((m <lagrangian_metrics>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocs2_msgs-msg:constraint-val is deprecated.  Use ocs2_msgs-msg:constraint instead.")
  (constraint m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <lagrangian_metrics>) ostream)
  "Serializes a message object of type '<lagrangian_metrics>"
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'time))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'penalty))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'constraint))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'constraint))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <lagrangian_metrics>) istream)
  "Deserializes a message object of type '<lagrangian_metrics>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'time) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'penalty) (roslisp-utils:decode-single-float-bits bits)))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'constraint) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'constraint)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<lagrangian_metrics>)))
  "Returns string type for a message object of type '<lagrangian_metrics>"
  "ocs2_msgs/lagrangian_metrics")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'lagrangian_metrics)))
  "Returns string type for a message object of type 'lagrangian_metrics"
  "ocs2_msgs/lagrangian_metrics")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<lagrangian_metrics>)))
  "Returns md5sum for a message object of type '<lagrangian_metrics>"
  "1734f3665afb7d38e9db59de18711863")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'lagrangian_metrics)))
  "Returns md5sum for a message object of type 'lagrangian_metrics"
  "1734f3665afb7d38e9db59de18711863")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<lagrangian_metrics>)))
  "Returns full string definition for message of type '<lagrangian_metrics>"
  (cl:format cl:nil "# MPC Lagrangian metrics~%~%float32   time~%float32   penalty~%float32[] constraint~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'lagrangian_metrics)))
  "Returns full string definition for message of type 'lagrangian_metrics"
  (cl:format cl:nil "# MPC Lagrangian metrics~%~%float32   time~%float32   penalty~%float32[] constraint~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <lagrangian_metrics>))
  (cl:+ 0
     4
     4
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'constraint) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <lagrangian_metrics>))
  "Converts a ROS message object to a list"
  (cl:list 'lagrangian_metrics
    (cl:cons ':time (time msg))
    (cl:cons ':penalty (penalty msg))
    (cl:cons ':constraint (constraint msg))
))
