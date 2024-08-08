; Auto-generated. Do not edit!


(cl:in-package mobiman_msgs-msg)


;//! \htmlinclude JointSpeed.msg.html

(cl:defclass <JointSpeed> (roslisp-msg-protocol:ros-message)
  ((speed
    :reader speed
    :initarg :speed
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0)))
)

(cl:defclass JointSpeed (<JointSpeed>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <JointSpeed>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'JointSpeed)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name mobiman_msgs-msg:<JointSpeed> is deprecated: use mobiman_msgs-msg:JointSpeed instead.")))

(cl:ensure-generic-function 'speed-val :lambda-list '(m))
(cl:defmethod speed-val ((m <JointSpeed>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mobiman_msgs-msg:speed-val is deprecated.  Use mobiman_msgs-msg:speed instead.")
  (speed m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <JointSpeed>) ostream)
  "Serializes a message object of type '<JointSpeed>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'speed))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'speed))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <JointSpeed>) istream)
  "Deserializes a message object of type '<JointSpeed>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'speed) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'speed)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<JointSpeed>)))
  "Returns string type for a message object of type '<JointSpeed>"
  "mobiman_msgs/JointSpeed")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'JointSpeed)))
  "Returns string type for a message object of type 'JointSpeed"
  "mobiman_msgs/JointSpeed")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<JointSpeed>)))
  "Returns md5sum for a message object of type '<JointSpeed>"
  "c2d600321673904df95b6b086e7cca22")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'JointSpeed)))
  "Returns md5sum for a message object of type 'JointSpeed"
  "c2d600321673904df95b6b086e7cca22")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<JointSpeed>)))
  "Returns full string definition for message of type '<JointSpeed>"
  (cl:format cl:nil "float32[] speed~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'JointSpeed)))
  "Returns full string definition for message of type 'JointSpeed"
  (cl:format cl:nil "float32[] speed~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <JointSpeed>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'speed) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <JointSpeed>))
  "Converts a ROS message object to a list"
  (cl:list 'JointSpeed
    (cl:cons ':speed (speed msg))
))
