; Auto-generated. Do not edit!


(cl:in-package signal_arm-srv)


;//! \htmlinclude FunctionFrame-request.msg.html

(cl:defclass <FunctionFrame-request> (roslisp-msg-protocol:ros-message)
  ((command
    :reader command
    :initarg :command
    :type cl:fixnum
    :initform 0))
)

(cl:defclass FunctionFrame-request (<FunctionFrame-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <FunctionFrame-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'FunctionFrame-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name signal_arm-srv:<FunctionFrame-request> is deprecated: use signal_arm-srv:FunctionFrame-request instead.")))

(cl:ensure-generic-function 'command-val :lambda-list '(m))
(cl:defmethod command-val ((m <FunctionFrame-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_arm-srv:command-val is deprecated.  Use signal_arm-srv:command instead.")
  (command m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <FunctionFrame-request>) ostream)
  "Serializes a message object of type '<FunctionFrame-request>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'command)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <FunctionFrame-request>) istream)
  "Deserializes a message object of type '<FunctionFrame-request>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'command)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<FunctionFrame-request>)))
  "Returns string type for a service object of type '<FunctionFrame-request>"
  "signal_arm/FunctionFrameRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'FunctionFrame-request)))
  "Returns string type for a service object of type 'FunctionFrame-request"
  "signal_arm/FunctionFrameRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<FunctionFrame-request>)))
  "Returns md5sum for a message object of type '<FunctionFrame-request>"
  "28ca10d14356fafac343096e46d08b18")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'FunctionFrame-request)))
  "Returns md5sum for a message object of type 'FunctionFrame-request"
  "28ca10d14356fafac343096e46d08b18")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<FunctionFrame-request>)))
  "Returns full string definition for message of type '<FunctionFrame-request>"
  (cl:format cl:nil "uint8 command~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'FunctionFrame-request)))
  "Returns full string definition for message of type 'FunctionFrame-request"
  (cl:format cl:nil "uint8 command~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <FunctionFrame-request>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <FunctionFrame-request>))
  "Converts a ROS message object to a list"
  (cl:list 'FunctionFrame-request
    (cl:cons ':command (command msg))
))
;//! \htmlinclude FunctionFrame-response.msg.html

(cl:defclass <FunctionFrame-response> (roslisp-msg-protocol:ros-message)
  ((success
    :reader success
    :initarg :success
    :type cl:boolean
    :initform cl:nil)
   (message
    :reader message
    :initarg :message
    :type cl:string
    :initform ""))
)

(cl:defclass FunctionFrame-response (<FunctionFrame-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <FunctionFrame-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'FunctionFrame-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name signal_arm-srv:<FunctionFrame-response> is deprecated: use signal_arm-srv:FunctionFrame-response instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <FunctionFrame-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_arm-srv:success-val is deprecated.  Use signal_arm-srv:success instead.")
  (success m))

(cl:ensure-generic-function 'message-val :lambda-list '(m))
(cl:defmethod message-val ((m <FunctionFrame-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader signal_arm-srv:message-val is deprecated.  Use signal_arm-srv:message instead.")
  (message m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <FunctionFrame-response>) ostream)
  "Serializes a message object of type '<FunctionFrame-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'message))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'message))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <FunctionFrame-response>) istream)
  "Deserializes a message object of type '<FunctionFrame-response>"
    (cl:setf (cl:slot-value msg 'success) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'message) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'message) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<FunctionFrame-response>)))
  "Returns string type for a service object of type '<FunctionFrame-response>"
  "signal_arm/FunctionFrameResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'FunctionFrame-response)))
  "Returns string type for a service object of type 'FunctionFrame-response"
  "signal_arm/FunctionFrameResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<FunctionFrame-response>)))
  "Returns md5sum for a message object of type '<FunctionFrame-response>"
  "28ca10d14356fafac343096e46d08b18")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'FunctionFrame-response)))
  "Returns md5sum for a message object of type 'FunctionFrame-response"
  "28ca10d14356fafac343096e46d08b18")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<FunctionFrame-response>)))
  "Returns full string definition for message of type '<FunctionFrame-response>"
  (cl:format cl:nil "bool success~%string message~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'FunctionFrame-response)))
  "Returns full string definition for message of type 'FunctionFrame-response"
  (cl:format cl:nil "bool success~%string message~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <FunctionFrame-response>))
  (cl:+ 0
     1
     4 (cl:length (cl:slot-value msg 'message))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <FunctionFrame-response>))
  "Converts a ROS message object to a list"
  (cl:list 'FunctionFrame-response
    (cl:cons ':success (success msg))
    (cl:cons ':message (message msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'FunctionFrame)))
  'FunctionFrame-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'FunctionFrame)))
  'FunctionFrame-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'FunctionFrame)))
  "Returns string type for a service object of type '<FunctionFrame>"
  "signal_arm/FunctionFrame")