; Auto-generated. Do not edit!


(cl:in-package signal_torso-msg)


;//! \htmlinclude torso_status.msg.html

(cl:defclass <torso_status> (roslisp-msg-protocol:ros-message)
  ((name
    :reader name
    :initarg :name
    :type (cl:vector cl:string)
   :initform (cl:make-array 0 :element-type 'cl:string :initial-element ""))
   (motor_temperature
    :reader motor_temperature
    :initarg :motor_temperature
    :type (cl:vector cl:fixnum)
   :initform (cl:make-array 0 :element-type 'cl:fixnum :initial-element 0))
   (braking_state
    :reader braking_state
    :initarg :braking_state
    :type (cl:vector cl:fixnum)
   :initform (cl:make-array 0 :element-type 'cl:fixnum :initial-element 0))
   (motor_voltage
    :reader motor_voltage
    :initarg :motor_voltage
    :type (cl:vector cl:fixnum)
   :initform (cl:make-array 0 :element-type 'cl:fixnum :initial-element 0))
   (error_code
    :reader error_code
    :initarg :error_code
    :type (cl:vector cl:fixnum)
   :initform (cl:make-array 0 :element-type 'cl:fixnum :initial-element 0)))
)

(cl:defclass torso_status (<torso_status>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <torso_status>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'torso_status)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name signal_torso-msg:<torso_status> is deprecated: use signal_torso-msg:torso_status instead.")))

(cl:ensure-generic-function 'name-val :lambda-list '(m))
(cl:defmethod name-val ((m <torso_status>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_torso-msg:name-val is deprecated.  Use signal_torso-msg:name instead.")
  (name m))

(cl:ensure-generic-function 'motor_temperature-val :lambda-list '(m))
(cl:defmethod motor_temperature-val ((m <torso_status>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_torso-msg:motor_temperature-val is deprecated.  Use signal_torso-msg:motor_temperature instead.")
  (motor_temperature m))

(cl:ensure-generic-function 'braking_state-val :lambda-list '(m))
(cl:defmethod braking_state-val ((m <torso_status>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_torso-msg:braking_state-val is deprecated.  Use signal_torso-msg:braking_state instead.")
  (braking_state m))

(cl:ensure-generic-function 'motor_voltage-val :lambda-list '(m))
(cl:defmethod motor_voltage-val ((m <torso_status>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_torso-msg:motor_voltage-val is deprecated.  Use signal_torso-msg:motor_voltage instead.")
  (motor_voltage m))

(cl:ensure-generic-function 'error_code-val :lambda-list '(m))
(cl:defmethod error_code-val ((m <torso_status>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_torso-msg:error_code-val is deprecated.  Use signal_torso-msg:error_code instead.")
  (error_code m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <torso_status>) ostream)
  "Serializes a message object of type '<torso_status>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'name))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((__ros_str_len (cl:length ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) ele))
   (cl:slot-value msg 'name))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'motor_temperature))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:write-byte (cl:ldb (cl:byte 8 0) ele) ostream))
   (cl:slot-value msg 'motor_temperature))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'braking_state))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:write-byte (cl:ldb (cl:byte 8 0) ele) ostream))
   (cl:slot-value msg 'braking_state))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'motor_voltage))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:write-byte (cl:ldb (cl:byte 8 0) ele) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) ele) ostream))
   (cl:slot-value msg 'motor_voltage))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'error_code))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:write-byte (cl:ldb (cl:byte 8 0) ele) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) ele) ostream))
   (cl:slot-value msg 'error_code))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <torso_status>) istream)
  "Deserializes a message object of type '<torso_status>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'name) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'name)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:aref vals i) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:aref vals i) __ros_str_idx) (cl:code-char (cl:read-byte istream))))))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'motor_temperature) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'motor_temperature)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:aref vals i)) (cl:read-byte istream)))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'braking_state) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'braking_state)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:aref vals i)) (cl:read-byte istream)))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'motor_voltage) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'motor_voltage)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:aref vals i)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:aref vals i)) (cl:read-byte istream)))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'error_code) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'error_code)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:aref vals i)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:aref vals i)) (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<torso_status>)))
  "Returns string type for a message object of type '<torso_status>"
  "signal_torso/torso_status")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'torso_status)))
  "Returns string type for a message object of type 'torso_status"
  "signal_torso/torso_status")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<torso_status>)))
  "Returns md5sum for a message object of type '<torso_status>"
  "3302cf44c7333c5f9df707eac2f97f07")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'torso_status)))
  "Returns md5sum for a message object of type 'torso_status"
  "3302cf44c7333c5f9df707eac2f97f07")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<torso_status>)))
  "Returns full string definition for message of type '<torso_status>"
  (cl:format cl:nil "string[] name~%uint8[] motor_temperature~%uint8[] braking_state~%uint16[] motor_voltage~%uint16[] error_code~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'torso_status)))
  "Returns full string definition for message of type 'torso_status"
  (cl:format cl:nil "string[] name~%uint8[] motor_temperature~%uint8[] braking_state~%uint16[] motor_voltage~%uint16[] error_code~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <torso_status>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'name) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4 (cl:length ele))))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'motor_temperature) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 1)))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'braking_state) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 1)))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'motor_voltage) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 2)))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'error_code) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 2)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <torso_status>))
  "Converts a ROS message object to a list"
  (cl:list 'torso_status
    (cl:cons ':name (name msg))
    (cl:cons ':motor_temperature (motor_temperature msg))
    (cl:cons ':braking_state (braking_state msg))
    (cl:cons ':motor_voltage (motor_voltage msg))
    (cl:cons ':error_code (error_code msg))
))
