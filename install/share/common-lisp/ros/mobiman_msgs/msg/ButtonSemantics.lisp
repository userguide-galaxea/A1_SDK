; Auto-generated. Do not edit!


(cl:in-package mobiman_msgs-msg)


;//! \htmlinclude ButtonSemantics.msg.html

(cl:defclass <ButtonSemantics> (roslisp-msg-protocol:ros-message)
  ((name
    :reader name
    :initarg :name
    :type cl:string
    :initform "")
   (button_status
    :reader button_status
    :initarg :button_status
    :type cl:fixnum
    :initform 0))
)

(cl:defclass ButtonSemantics (<ButtonSemantics>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ButtonSemantics>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ButtonSemantics)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name mobiman_msgs-msg:<ButtonSemantics> is deprecated: use mobiman_msgs-msg:ButtonSemantics instead.")))

(cl:ensure-generic-function 'name-val :lambda-list '(m))
(cl:defmethod name-val ((m <ButtonSemantics>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mobiman_msgs-msg:name-val is deprecated.  Use mobiman_msgs-msg:name instead.")
  (name m))

(cl:ensure-generic-function 'button_status-val :lambda-list '(m))
(cl:defmethod button_status-val ((m <ButtonSemantics>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mobiman_msgs-msg:button_status-val is deprecated.  Use mobiman_msgs-msg:button_status instead.")
  (button_status m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ButtonSemantics>) ostream)
  "Serializes a message object of type '<ButtonSemantics>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'name))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'name))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'button_status)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ButtonSemantics>) istream)
  "Deserializes a message object of type '<ButtonSemantics>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'name) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'name) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'button_status)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ButtonSemantics>)))
  "Returns string type for a message object of type '<ButtonSemantics>"
  "mobiman_msgs/ButtonSemantics")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ButtonSemantics)))
  "Returns string type for a message object of type 'ButtonSemantics"
  "mobiman_msgs/ButtonSemantics")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ButtonSemantics>)))
  "Returns md5sum for a message object of type '<ButtonSemantics>"
  "d1a817089c894e9e4413de25d5c745b7")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ButtonSemantics)))
  "Returns md5sum for a message object of type 'ButtonSemantics"
  "d1a817089c894e9e4413de25d5c745b7")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ButtonSemantics>)))
  "Returns full string definition for message of type '<ButtonSemantics>"
  (cl:format cl:nil "string name~%uint8 button_status~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ButtonSemantics)))
  "Returns full string definition for message of type 'ButtonSemantics"
  (cl:format cl:nil "string name~%uint8 button_status~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ButtonSemantics>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'name))
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ButtonSemantics>))
  "Converts a ROS message object to a list"
  (cl:list 'ButtonSemantics
    (cl:cons ':name (name msg))
    (cl:cons ':button_status (button_status msg))
))
