; Auto-generated. Do not edit!


(cl:in-package ocs2_msgs-msg)


;//! \htmlinclude mode_schedule.msg.html

(cl:defclass <mode_schedule> (roslisp-msg-protocol:ros-message)
  ((eventTimes
    :reader eventTimes
    :initarg :eventTimes
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0))
   (modeSequence
    :reader modeSequence
    :initarg :modeSequence
    :type (cl:vector cl:fixnum)
   :initform (cl:make-array 0 :element-type 'cl:fixnum :initial-element 0)))
)

(cl:defclass mode_schedule (<mode_schedule>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <mode_schedule>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'mode_schedule)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ocs2_msgs-msg:<mode_schedule> is deprecated: use ocs2_msgs-msg:mode_schedule instead.")))

(cl:ensure-generic-function 'eventTimes-val :lambda-list '(m))
(cl:defmethod eventTimes-val ((m <mode_schedule>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocs2_msgs-msg:eventTimes-val is deprecated.  Use ocs2_msgs-msg:eventTimes instead.")
  (eventTimes m))

(cl:ensure-generic-function 'modeSequence-val :lambda-list '(m))
(cl:defmethod modeSequence-val ((m <mode_schedule>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocs2_msgs-msg:modeSequence-val is deprecated.  Use ocs2_msgs-msg:modeSequence instead.")
  (modeSequence m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <mode_schedule>) ostream)
  "Serializes a message object of type '<mode_schedule>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'eventTimes))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-double-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream)))
   (cl:slot-value msg 'eventTimes))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'modeSequence))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let* ((signed ele) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    ))
   (cl:slot-value msg 'modeSequence))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <mode_schedule>) istream)
  "Deserializes a message object of type '<mode_schedule>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'eventTimes) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'eventTimes)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-double-float-bits bits))))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'modeSequence) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'modeSequence)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:aref vals i) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256)))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<mode_schedule>)))
  "Returns string type for a message object of type '<mode_schedule>"
  "ocs2_msgs/mode_schedule")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'mode_schedule)))
  "Returns string type for a message object of type 'mode_schedule"
  "ocs2_msgs/mode_schedule")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<mode_schedule>)))
  "Returns md5sum for a message object of type '<mode_schedule>"
  "9aa75d28b36c292b797e36e87614038a")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'mode_schedule)))
  "Returns md5sum for a message object of type 'mode_schedule"
  "9aa75d28b36c292b797e36e87614038a")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<mode_schedule>)))
  "Returns full string definition for message of type '<mode_schedule>"
  (cl:format cl:nil "# MPC mode sequence~%~%float64[] eventTimes           # event times: its size is equal to the size of phaseSequence minus one~%int8[]    modeSequence         # mode sequence: e.g., for a quadrupedal robot, it is in the set {0, 1,..., 15}~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'mode_schedule)))
  "Returns full string definition for message of type 'mode_schedule"
  (cl:format cl:nil "# MPC mode sequence~%~%float64[] eventTimes           # event times: its size is equal to the size of phaseSequence minus one~%int8[]    modeSequence         # mode sequence: e.g., for a quadrupedal robot, it is in the set {0, 1,..., 15}~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <mode_schedule>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'eventTimes) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 8)))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'modeSequence) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 1)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <mode_schedule>))
  "Converts a ROS message object to a list"
  (cl:list 'mode_schedule
    (cl:cons ':eventTimes (eventTimes msg))
    (cl:cons ':modeSequence (modeSequence msg))
))
