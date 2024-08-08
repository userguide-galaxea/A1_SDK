; Auto-generated. Do not edit!


(cl:in-package signal_chassis-msg)


;//! \htmlinclude Drivetrain_r1.msg.html

(cl:defclass <Drivetrain_r1> (roslisp-msg-protocol:ros-message)
  ((steer_angle_front_left
    :reader steer_angle_front_left
    :initarg :steer_angle_front_left
    :type cl:float
    :initform 0.0)
   (steer_angle_front_right
    :reader steer_angle_front_right
    :initarg :steer_angle_front_right
    :type cl:float
    :initform 0.0)
   (steer_angle_rear
    :reader steer_angle_rear
    :initarg :steer_angle_rear
    :type cl:float
    :initform 0.0)
   (drive_speed_front_left
    :reader drive_speed_front_left
    :initarg :drive_speed_front_left
    :type cl:float
    :initform 0.0)
   (drive_speed_front_right
    :reader drive_speed_front_right
    :initarg :drive_speed_front_right
    :type cl:float
    :initform 0.0)
   (drive_speed_rear
    :reader drive_speed_rear
    :initarg :drive_speed_rear
    :type cl:float
    :initform 0.0)
   (drive_angular_speed_front_left
    :reader drive_angular_speed_front_left
    :initarg :drive_angular_speed_front_left
    :type cl:float
    :initform 0.0)
   (drive_angular_speed_front_right
    :reader drive_angular_speed_front_right
    :initarg :drive_angular_speed_front_right
    :type cl:float
    :initform 0.0)
   (drive_angular_speed_rear
    :reader drive_angular_speed_rear
    :initarg :drive_angular_speed_rear
    :type cl:float
    :initform 0.0))
)

(cl:defclass Drivetrain_r1 (<Drivetrain_r1>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Drivetrain_r1>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Drivetrain_r1)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name signal_chassis-msg:<Drivetrain_r1> is deprecated: use signal_chassis-msg:Drivetrain_r1 instead.")))

(cl:ensure-generic-function 'steer_angle_front_left-val :lambda-list '(m))
(cl:defmethod steer_angle_front_left-val ((m <Drivetrain_r1>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_chassis-msg:steer_angle_front_left-val is deprecated.  Use signal_chassis-msg:steer_angle_front_left instead.")
  (steer_angle_front_left m))

(cl:ensure-generic-function 'steer_angle_front_right-val :lambda-list '(m))
(cl:defmethod steer_angle_front_right-val ((m <Drivetrain_r1>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_chassis-msg:steer_angle_front_right-val is deprecated.  Use signal_chassis-msg:steer_angle_front_right instead.")
  (steer_angle_front_right m))

(cl:ensure-generic-function 'steer_angle_rear-val :lambda-list '(m))
(cl:defmethod steer_angle_rear-val ((m <Drivetrain_r1>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_chassis-msg:steer_angle_rear-val is deprecated.  Use signal_chassis-msg:steer_angle_rear instead.")
  (steer_angle_rear m))

(cl:ensure-generic-function 'drive_speed_front_left-val :lambda-list '(m))
(cl:defmethod drive_speed_front_left-val ((m <Drivetrain_r1>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_chassis-msg:drive_speed_front_left-val is deprecated.  Use signal_chassis-msg:drive_speed_front_left instead.")
  (drive_speed_front_left m))

(cl:ensure-generic-function 'drive_speed_front_right-val :lambda-list '(m))
(cl:defmethod drive_speed_front_right-val ((m <Drivetrain_r1>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_chassis-msg:drive_speed_front_right-val is deprecated.  Use signal_chassis-msg:drive_speed_front_right instead.")
  (drive_speed_front_right m))

(cl:ensure-generic-function 'drive_speed_rear-val :lambda-list '(m))
(cl:defmethod drive_speed_rear-val ((m <Drivetrain_r1>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_chassis-msg:drive_speed_rear-val is deprecated.  Use signal_chassis-msg:drive_speed_rear instead.")
  (drive_speed_rear m))

(cl:ensure-generic-function 'drive_angular_speed_front_left-val :lambda-list '(m))
(cl:defmethod drive_angular_speed_front_left-val ((m <Drivetrain_r1>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_chassis-msg:drive_angular_speed_front_left-val is deprecated.  Use signal_chassis-msg:drive_angular_speed_front_left instead.")
  (drive_angular_speed_front_left m))

(cl:ensure-generic-function 'drive_angular_speed_front_right-val :lambda-list '(m))
(cl:defmethod drive_angular_speed_front_right-val ((m <Drivetrain_r1>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_chassis-msg:drive_angular_speed_front_right-val is deprecated.  Use signal_chassis-msg:drive_angular_speed_front_right instead.")
  (drive_angular_speed_front_right m))

(cl:ensure-generic-function 'drive_angular_speed_rear-val :lambda-list '(m))
(cl:defmethod drive_angular_speed_rear-val ((m <Drivetrain_r1>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_chassis-msg:drive_angular_speed_rear-val is deprecated.  Use signal_chassis-msg:drive_angular_speed_rear instead.")
  (drive_angular_speed_rear m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Drivetrain_r1>) ostream)
  "Serializes a message object of type '<Drivetrain_r1>"
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'steer_angle_front_left))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'steer_angle_front_right))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'steer_angle_rear))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'drive_speed_front_left))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'drive_speed_front_right))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'drive_speed_rear))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'drive_angular_speed_front_left))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'drive_angular_speed_front_right))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'drive_angular_speed_rear))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Drivetrain_r1>) istream)
  "Deserializes a message object of type '<Drivetrain_r1>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'steer_angle_front_left) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'steer_angle_front_right) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'steer_angle_rear) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'drive_speed_front_left) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'drive_speed_front_right) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'drive_speed_rear) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'drive_angular_speed_front_left) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'drive_angular_speed_front_right) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'drive_angular_speed_rear) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Drivetrain_r1>)))
  "Returns string type for a message object of type '<Drivetrain_r1>"
  "signal_chassis/Drivetrain_r1")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Drivetrain_r1)))
  "Returns string type for a message object of type 'Drivetrain_r1"
  "signal_chassis/Drivetrain_r1")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Drivetrain_r1>)))
  "Returns md5sum for a message object of type '<Drivetrain_r1>"
  "d64ee0e637d15c359801b97bc246779d")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Drivetrain_r1)))
  "Returns md5sum for a message object of type 'Drivetrain_r1"
  "d64ee0e637d15c359801b97bc246779d")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Drivetrain_r1>)))
  "Returns full string definition for message of type '<Drivetrain_r1>"
  (cl:format cl:nil "float32 steer_angle_front_left~%float32 steer_angle_front_right~%float32 steer_angle_rear~%float32 drive_speed_front_left~%float32 drive_speed_front_right~%float32 drive_speed_rear~%float32 drive_angular_speed_front_left~%float32 drive_angular_speed_front_right~%float32 drive_angular_speed_rear~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Drivetrain_r1)))
  "Returns full string definition for message of type 'Drivetrain_r1"
  (cl:format cl:nil "float32 steer_angle_front_left~%float32 steer_angle_front_right~%float32 steer_angle_rear~%float32 drive_speed_front_left~%float32 drive_speed_front_right~%float32 drive_speed_rear~%float32 drive_angular_speed_front_left~%float32 drive_angular_speed_front_right~%float32 drive_angular_speed_rear~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Drivetrain_r1>))
  (cl:+ 0
     4
     4
     4
     4
     4
     4
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Drivetrain_r1>))
  "Converts a ROS message object to a list"
  (cl:list 'Drivetrain_r1
    (cl:cons ':steer_angle_front_left (steer_angle_front_left msg))
    (cl:cons ':steer_angle_front_right (steer_angle_front_right msg))
    (cl:cons ':steer_angle_rear (steer_angle_rear msg))
    (cl:cons ':drive_speed_front_left (drive_speed_front_left msg))
    (cl:cons ':drive_speed_front_right (drive_speed_front_right msg))
    (cl:cons ':drive_speed_rear (drive_speed_rear msg))
    (cl:cons ':drive_angular_speed_front_left (drive_angular_speed_front_left msg))
    (cl:cons ':drive_angular_speed_front_right (drive_angular_speed_front_right msg))
    (cl:cons ':drive_angular_speed_rear (drive_angular_speed_rear msg))
))
