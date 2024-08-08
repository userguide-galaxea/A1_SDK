; Auto-generated. Do not edit!


(cl:in-package signal_chassis-msg)


;//! \htmlinclude Drivetrain.msg.html

(cl:defclass <Drivetrain> (roslisp-msg-protocol:ros-message)
  ((steer_angle_fl
    :reader steer_angle_fl
    :initarg :steer_angle_fl
    :type cl:float
    :initform 0.0)
   (steer_angle_fr
    :reader steer_angle_fr
    :initarg :steer_angle_fr
    :type cl:float
    :initform 0.0)
   (steer_angle_rl
    :reader steer_angle_rl
    :initarg :steer_angle_rl
    :type cl:float
    :initform 0.0)
   (steer_angle_rr
    :reader steer_angle_rr
    :initarg :steer_angle_rr
    :type cl:float
    :initform 0.0)
   (drive_speed_fl
    :reader drive_speed_fl
    :initarg :drive_speed_fl
    :type cl:float
    :initform 0.0)
   (drive_speed_fr
    :reader drive_speed_fr
    :initarg :drive_speed_fr
    :type cl:float
    :initform 0.0)
   (drive_speed_rl
    :reader drive_speed_rl
    :initarg :drive_speed_rl
    :type cl:float
    :initform 0.0)
   (drive_speed_rr
    :reader drive_speed_rr
    :initarg :drive_speed_rr
    :type cl:float
    :initform 0.0)
   (drive_angular_speed_fl
    :reader drive_angular_speed_fl
    :initarg :drive_angular_speed_fl
    :type cl:float
    :initform 0.0)
   (drive_angular_speed_fr
    :reader drive_angular_speed_fr
    :initarg :drive_angular_speed_fr
    :type cl:float
    :initform 0.0)
   (drive_angular_speed_rl
    :reader drive_angular_speed_rl
    :initarg :drive_angular_speed_rl
    :type cl:float
    :initform 0.0)
   (drive_angular_speed_rr
    :reader drive_angular_speed_rr
    :initarg :drive_angular_speed_rr
    :type cl:float
    :initform 0.0)
   (motion_mode
    :reader motion_mode
    :initarg :motion_mode
    :type cl:integer
    :initform 0))
)

(cl:defclass Drivetrain (<Drivetrain>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Drivetrain>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Drivetrain)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name signal_chassis-msg:<Drivetrain> is deprecated: use signal_chassis-msg:Drivetrain instead.")))

(cl:ensure-generic-function 'steer_angle_fl-val :lambda-list '(m))
(cl:defmethod steer_angle_fl-val ((m <Drivetrain>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_chassis-msg:steer_angle_fl-val is deprecated.  Use signal_chassis-msg:steer_angle_fl instead.")
  (steer_angle_fl m))

(cl:ensure-generic-function 'steer_angle_fr-val :lambda-list '(m))
(cl:defmethod steer_angle_fr-val ((m <Drivetrain>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_chassis-msg:steer_angle_fr-val is deprecated.  Use signal_chassis-msg:steer_angle_fr instead.")
  (steer_angle_fr m))

(cl:ensure-generic-function 'steer_angle_rl-val :lambda-list '(m))
(cl:defmethod steer_angle_rl-val ((m <Drivetrain>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_chassis-msg:steer_angle_rl-val is deprecated.  Use signal_chassis-msg:steer_angle_rl instead.")
  (steer_angle_rl m))

(cl:ensure-generic-function 'steer_angle_rr-val :lambda-list '(m))
(cl:defmethod steer_angle_rr-val ((m <Drivetrain>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_chassis-msg:steer_angle_rr-val is deprecated.  Use signal_chassis-msg:steer_angle_rr instead.")
  (steer_angle_rr m))

(cl:ensure-generic-function 'drive_speed_fl-val :lambda-list '(m))
(cl:defmethod drive_speed_fl-val ((m <Drivetrain>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_chassis-msg:drive_speed_fl-val is deprecated.  Use signal_chassis-msg:drive_speed_fl instead.")
  (drive_speed_fl m))

(cl:ensure-generic-function 'drive_speed_fr-val :lambda-list '(m))
(cl:defmethod drive_speed_fr-val ((m <Drivetrain>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_chassis-msg:drive_speed_fr-val is deprecated.  Use signal_chassis-msg:drive_speed_fr instead.")
  (drive_speed_fr m))

(cl:ensure-generic-function 'drive_speed_rl-val :lambda-list '(m))
(cl:defmethod drive_speed_rl-val ((m <Drivetrain>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_chassis-msg:drive_speed_rl-val is deprecated.  Use signal_chassis-msg:drive_speed_rl instead.")
  (drive_speed_rl m))

(cl:ensure-generic-function 'drive_speed_rr-val :lambda-list '(m))
(cl:defmethod drive_speed_rr-val ((m <Drivetrain>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_chassis-msg:drive_speed_rr-val is deprecated.  Use signal_chassis-msg:drive_speed_rr instead.")
  (drive_speed_rr m))

(cl:ensure-generic-function 'drive_angular_speed_fl-val :lambda-list '(m))
(cl:defmethod drive_angular_speed_fl-val ((m <Drivetrain>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_chassis-msg:drive_angular_speed_fl-val is deprecated.  Use signal_chassis-msg:drive_angular_speed_fl instead.")
  (drive_angular_speed_fl m))

(cl:ensure-generic-function 'drive_angular_speed_fr-val :lambda-list '(m))
(cl:defmethod drive_angular_speed_fr-val ((m <Drivetrain>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_chassis-msg:drive_angular_speed_fr-val is deprecated.  Use signal_chassis-msg:drive_angular_speed_fr instead.")
  (drive_angular_speed_fr m))

(cl:ensure-generic-function 'drive_angular_speed_rl-val :lambda-list '(m))
(cl:defmethod drive_angular_speed_rl-val ((m <Drivetrain>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_chassis-msg:drive_angular_speed_rl-val is deprecated.  Use signal_chassis-msg:drive_angular_speed_rl instead.")
  (drive_angular_speed_rl m))

(cl:ensure-generic-function 'drive_angular_speed_rr-val :lambda-list '(m))
(cl:defmethod drive_angular_speed_rr-val ((m <Drivetrain>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_chassis-msg:drive_angular_speed_rr-val is deprecated.  Use signal_chassis-msg:drive_angular_speed_rr instead.")
  (drive_angular_speed_rr m))

(cl:ensure-generic-function 'motion_mode-val :lambda-list '(m))
(cl:defmethod motion_mode-val ((m <Drivetrain>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_chassis-msg:motion_mode-val is deprecated.  Use signal_chassis-msg:motion_mode instead.")
  (motion_mode m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Drivetrain>) ostream)
  "Serializes a message object of type '<Drivetrain>"
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'steer_angle_fl))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'steer_angle_fr))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'steer_angle_rl))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'steer_angle_rr))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'drive_speed_fl))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'drive_speed_fr))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'drive_speed_rl))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'drive_speed_rr))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'drive_angular_speed_fl))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'drive_angular_speed_fr))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'drive_angular_speed_rl))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'drive_angular_speed_rr))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let* ((signed (cl:slot-value msg 'motion_mode)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Drivetrain>) istream)
  "Deserializes a message object of type '<Drivetrain>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'steer_angle_fl) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'steer_angle_fr) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'steer_angle_rl) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'steer_angle_rr) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'drive_speed_fl) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'drive_speed_fr) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'drive_speed_rl) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'drive_speed_rr) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'drive_angular_speed_fl) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'drive_angular_speed_fr) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'drive_angular_speed_rl) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'drive_angular_speed_rr) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'motion_mode) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Drivetrain>)))
  "Returns string type for a message object of type '<Drivetrain>"
  "signal_chassis/Drivetrain")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Drivetrain)))
  "Returns string type for a message object of type 'Drivetrain"
  "signal_chassis/Drivetrain")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Drivetrain>)))
  "Returns md5sum for a message object of type '<Drivetrain>"
  "46db51bd1f2094081def30cd2e74f33b")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Drivetrain)))
  "Returns md5sum for a message object of type 'Drivetrain"
  "46db51bd1f2094081def30cd2e74f33b")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Drivetrain>)))
  "Returns full string definition for message of type '<Drivetrain>"
  (cl:format cl:nil "float32 steer_angle_fl~%float32 steer_angle_fr~%float32 steer_angle_rl~%float32 steer_angle_rr~%float32 drive_speed_fl~%float32 drive_speed_fr~%float32 drive_speed_rl~%float32 drive_speed_rr~%float32 drive_angular_speed_fl~%float32 drive_angular_speed_fr~%float32 drive_angular_speed_rl~%float32 drive_angular_speed_rr~%int32 motion_mode~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Drivetrain)))
  "Returns full string definition for message of type 'Drivetrain"
  (cl:format cl:nil "float32 steer_angle_fl~%float32 steer_angle_fr~%float32 steer_angle_rl~%float32 steer_angle_rr~%float32 drive_speed_fl~%float32 drive_speed_fr~%float32 drive_speed_rl~%float32 drive_speed_rr~%float32 drive_angular_speed_fl~%float32 drive_angular_speed_fr~%float32 drive_angular_speed_rl~%float32 drive_angular_speed_rr~%int32 motion_mode~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Drivetrain>))
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
     4
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Drivetrain>))
  "Converts a ROS message object to a list"
  (cl:list 'Drivetrain
    (cl:cons ':steer_angle_fl (steer_angle_fl msg))
    (cl:cons ':steer_angle_fr (steer_angle_fr msg))
    (cl:cons ':steer_angle_rl (steer_angle_rl msg))
    (cl:cons ':steer_angle_rr (steer_angle_rr msg))
    (cl:cons ':drive_speed_fl (drive_speed_fl msg))
    (cl:cons ':drive_speed_fr (drive_speed_fr msg))
    (cl:cons ':drive_speed_rl (drive_speed_rl msg))
    (cl:cons ':drive_speed_rr (drive_speed_rr msg))
    (cl:cons ':drive_angular_speed_fl (drive_angular_speed_fl msg))
    (cl:cons ':drive_angular_speed_fr (drive_angular_speed_fr msg))
    (cl:cons ':drive_angular_speed_rl (drive_angular_speed_rl msg))
    (cl:cons ':drive_angular_speed_rr (drive_angular_speed_rr msg))
    (cl:cons ':motion_mode (motion_mode msg))
))
