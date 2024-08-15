; Auto-generated. Do not edit!


(cl:in-package ocs2_msgs-msg)


;//! \htmlinclude controller_data.msg.html

(cl:defclass <controller_data> (roslisp-msg-protocol:ros-message)
  ((data
    :reader data
    :initarg :data
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0)))
)

(cl:defclass controller_data (<controller_data>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <controller_data>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'controller_data)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ocs2_msgs-msg:<controller_data> is deprecated: use ocs2_msgs-msg:controller_data instead.")))

(cl:ensure-generic-function 'data-val :lambda-list '(m))
(cl:defmethod data-val ((m <controller_data>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocs2_msgs-msg:data-val is deprecated.  Use ocs2_msgs-msg:data instead.")
  (data m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <controller_data>) ostream)
  "Serializes a message object of type '<controller_data>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'data))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'data))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <controller_data>) istream)
  "Deserializes a message object of type '<controller_data>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'data) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'data)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<controller_data>)))
  "Returns string type for a message object of type '<controller_data>"
  "ocs2_msgs/controller_data")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'controller_data)))
  "Returns string type for a message object of type 'controller_data"
  "ocs2_msgs/controller_data")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<controller_data>)))
  "Returns md5sum for a message object of type '<controller_data>"
  "420cd38b6b071cd49f2970c3e2cee511")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'controller_data)))
  "Returns md5sum for a message object of type 'controller_data"
  "420cd38b6b071cd49f2970c3e2cee511")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<controller_data>)))
  "Returns full string definition for message of type '<controller_data>"
  (cl:format cl:nil "float32[] data~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'controller_data)))
  "Returns full string definition for message of type 'controller_data"
  (cl:format cl:nil "float32[] data~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <controller_data>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'data) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <controller_data>))
  "Converts a ROS message object to a list"
  (cl:list 'controller_data
    (cl:cons ':data (data msg))
))
