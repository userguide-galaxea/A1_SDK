; Auto-generated. Do not edit!


(cl:in-package ocs2_msgs-msg)


;//! \htmlinclude multiplier.msg.html

(cl:defclass <multiplier> (roslisp-msg-protocol:ros-message)
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
   (lagrangian
    :reader lagrangian
    :initarg :lagrangian
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0)))
)

(cl:defclass multiplier (<multiplier>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <multiplier>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'multiplier)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ocs2_msgs-msg:<multiplier> is deprecated: use ocs2_msgs-msg:multiplier instead.")))

(cl:ensure-generic-function 'time-val :lambda-list '(m))
(cl:defmethod time-val ((m <multiplier>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocs2_msgs-msg:time-val is deprecated.  Use ocs2_msgs-msg:time instead.")
  (time m))

(cl:ensure-generic-function 'penalty-val :lambda-list '(m))
(cl:defmethod penalty-val ((m <multiplier>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocs2_msgs-msg:penalty-val is deprecated.  Use ocs2_msgs-msg:penalty instead.")
  (penalty m))

(cl:ensure-generic-function 'lagrangian-val :lambda-list '(m))
(cl:defmethod lagrangian-val ((m <multiplier>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocs2_msgs-msg:lagrangian-val is deprecated.  Use ocs2_msgs-msg:lagrangian instead.")
  (lagrangian m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <multiplier>) ostream)
  "Serializes a message object of type '<multiplier>"
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
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'lagrangian))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'lagrangian))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <multiplier>) istream)
  "Deserializes a message object of type '<multiplier>"
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
  (cl:setf (cl:slot-value msg 'lagrangian) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'lagrangian)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<multiplier>)))
  "Returns string type for a message object of type '<multiplier>"
  "ocs2_msgs/multiplier")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'multiplier)))
  "Returns string type for a message object of type 'multiplier"
  "ocs2_msgs/multiplier")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<multiplier>)))
  "Returns md5sum for a message object of type '<multiplier>"
  "8284394e15f2038e54705abd91aee001")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'multiplier)))
  "Returns md5sum for a message object of type 'multiplier"
  "8284394e15f2038e54705abd91aee001")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<multiplier>)))
  "Returns full string definition for message of type '<multiplier>"
  (cl:format cl:nil "# MPC multiplier~%~%float32   time~%float32   penalty~%float32[] lagrangian~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'multiplier)))
  "Returns full string definition for message of type 'multiplier"
  (cl:format cl:nil "# MPC multiplier~%~%float32   time~%float32   penalty~%float32[] lagrangian~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <multiplier>))
  (cl:+ 0
     4
     4
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'lagrangian) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <multiplier>))
  "Converts a ROS message object to a list"
  (cl:list 'multiplier
    (cl:cons ':time (time msg))
    (cl:cons ':penalty (penalty msg))
    (cl:cons ':lagrangian (lagrangian msg))
))
