; Auto-generated. Do not edit!


(cl:in-package mobiman_msgs-msg)


;//! \htmlinclude ChassisCommand.msg.html

(cl:defclass <ChassisCommand> (roslisp-msg-protocol:ros-message)
  ((steer_angles
    :reader steer_angles
    :initarg :steer_angles
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0))
   (wheel_speed
    :reader wheel_speed
    :initarg :wheel_speed
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0)))
)

(cl:defclass ChassisCommand (<ChassisCommand>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ChassisCommand>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ChassisCommand)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name mobiman_msgs-msg:<ChassisCommand> is deprecated: use mobiman_msgs-msg:ChassisCommand instead.")))

(cl:ensure-generic-function 'steer_angles-val :lambda-list '(m))
(cl:defmethod steer_angles-val ((m <ChassisCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mobiman_msgs-msg:steer_angles-val is deprecated.  Use mobiman_msgs-msg:steer_angles instead.")
  (steer_angles m))

(cl:ensure-generic-function 'wheel_speed-val :lambda-list '(m))
(cl:defmethod wheel_speed-val ((m <ChassisCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mobiman_msgs-msg:wheel_speed-val is deprecated.  Use mobiman_msgs-msg:wheel_speed instead.")
  (wheel_speed m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ChassisCommand>) ostream)
  "Serializes a message object of type '<ChassisCommand>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'steer_angles))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'steer_angles))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'wheel_speed))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'wheel_speed))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ChassisCommand>) istream)
  "Deserializes a message object of type '<ChassisCommand>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'steer_angles) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'steer_angles)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits))))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'wheel_speed) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'wheel_speed)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ChassisCommand>)))
  "Returns string type for a message object of type '<ChassisCommand>"
  "mobiman_msgs/ChassisCommand")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ChassisCommand)))
  "Returns string type for a message object of type 'ChassisCommand"
  "mobiman_msgs/ChassisCommand")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ChassisCommand>)))
  "Returns md5sum for a message object of type '<ChassisCommand>"
  "913eccfc8322dbc90f30c89655e26445")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ChassisCommand)))
  "Returns md5sum for a message object of type 'ChassisCommand"
  "913eccfc8322dbc90f30c89655e26445")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ChassisCommand>)))
  "Returns full string definition for message of type '<ChassisCommand>"
  (cl:format cl:nil "# for 4w4s vehicles, the order is [fl, fr, rl ,rr]~%float32[] steer_angles~%float32[] wheel_speed~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ChassisCommand)))
  "Returns full string definition for message of type 'ChassisCommand"
  (cl:format cl:nil "# for 4w4s vehicles, the order is [fl, fr, rl ,rr]~%float32[] steer_angles~%float32[] wheel_speed~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ChassisCommand>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'steer_angles) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'wheel_speed) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ChassisCommand>))
  "Converts a ROS message object to a list"
  (cl:list 'ChassisCommand
    (cl:cons ':steer_angles (steer_angles msg))
    (cl:cons ':wheel_speed (wheel_speed msg))
))
