; Auto-generated. Do not edit!


(cl:in-package signal_arm-msg)


;//! \htmlinclude motor_error.msg.html

(cl:defclass <motor_error> (roslisp-msg-protocol:ros-message)
  ((error_code
    :reader error_code
    :initarg :error_code
    :type cl:integer
    :initform 0)
   (error_description
    :reader error_description
    :initarg :error_description
    :type (cl:vector cl:string)
   :initform (cl:make-array 0 :element-type 'cl:string :initial-element "")))
)

(cl:defclass motor_error (<motor_error>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <motor_error>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'motor_error)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name signal_arm-msg:<motor_error> is deprecated: use signal_arm-msg:motor_error instead.")))

(cl:ensure-generic-function 'error_code-val :lambda-list '(m))
(cl:defmethod error_code-val ((m <motor_error>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_arm-msg:error_code-val is deprecated.  Use signal_arm-msg:error_code instead.")
  (error_code m))

(cl:ensure-generic-function 'error_description-val :lambda-list '(m))
(cl:defmethod error_description-val ((m <motor_error>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_arm-msg:error_description-val is deprecated.  Use signal_arm-msg:error_description instead.")
  (error_description m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <motor_error>) ostream)
  "Serializes a message object of type '<motor_error>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'error_code)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'error_code)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'error_code)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'error_code)) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'error_description))))
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
   (cl:slot-value msg 'error_description))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <motor_error>) istream)
  "Deserializes a message object of type '<motor_error>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'error_code)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'error_code)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'error_code)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'error_code)) (cl:read-byte istream))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'error_description) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'error_description)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:aref vals i) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:aref vals i) __ros_str_idx) (cl:code-char (cl:read-byte istream))))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<motor_error>)))
  "Returns string type for a message object of type '<motor_error>"
  "signal_arm/motor_error")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'motor_error)))
  "Returns string type for a message object of type 'motor_error"
  "signal_arm/motor_error")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<motor_error>)))
  "Returns md5sum for a message object of type '<motor_error>"
  "1a94173f8a054221ce910317553c671d")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'motor_error)))
  "Returns md5sum for a message object of type 'motor_error"
  "1a94173f8a054221ce910317553c671d")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<motor_error>)))
  "Returns full string definition for message of type '<motor_error>"
  (cl:format cl:nil "uint32 error_code~%string[] error_description~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'motor_error)))
  "Returns full string definition for message of type 'motor_error"
  (cl:format cl:nil "uint32 error_code~%string[] error_description~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <motor_error>))
  (cl:+ 0
     4
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'error_description) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4 (cl:length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <motor_error>))
  "Converts a ROS message object to a list"
  (cl:list 'motor_error
    (cl:cons ':error_code (error_code msg))
    (cl:cons ':error_description (error_description msg))
))
