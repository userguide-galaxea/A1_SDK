; Auto-generated. Do not edit!


(cl:in-package mobiman_msgs-msg)


;//! \htmlinclude Panel3d.msg.html

(cl:defclass <Panel3d> (roslisp-msg-protocol:ros-message)
  ((origin
    :reader origin
    :initarg :origin
    :type geometry_msgs-msg:Point
    :initform (cl:make-instance 'geometry_msgs-msg:Point))
   (normal
    :reader normal
    :initarg :normal
    :type geometry_msgs-msg:Vector3
    :initform (cl:make-instance 'geometry_msgs-msg:Vector3))
   (length
    :reader length
    :initarg :length
    :type cl:float
    :initform 0.0)
   (width
    :reader width
    :initarg :width
    :type cl:float
    :initform 0.0)
   (buttons_3d
    :reader buttons_3d
    :initarg :buttons_3d
    :type (cl:vector mobiman_msgs-msg:Button3d)
   :initform (cl:make-array 0 :element-type 'mobiman_msgs-msg:Button3d :initial-element (cl:make-instance 'mobiman_msgs-msg:Button3d))))
)

(cl:defclass Panel3d (<Panel3d>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Panel3d>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Panel3d)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name mobiman_msgs-msg:<Panel3d> is deprecated: use mobiman_msgs-msg:Panel3d instead.")))

(cl:ensure-generic-function 'origin-val :lambda-list '(m))
(cl:defmethod origin-val ((m <Panel3d>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mobiman_msgs-msg:origin-val is deprecated.  Use mobiman_msgs-msg:origin instead.")
  (origin m))

(cl:ensure-generic-function 'normal-val :lambda-list '(m))
(cl:defmethod normal-val ((m <Panel3d>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mobiman_msgs-msg:normal-val is deprecated.  Use mobiman_msgs-msg:normal instead.")
  (normal m))

(cl:ensure-generic-function 'length-val :lambda-list '(m))
(cl:defmethod length-val ((m <Panel3d>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mobiman_msgs-msg:length-val is deprecated.  Use mobiman_msgs-msg:length instead.")
  (length m))

(cl:ensure-generic-function 'width-val :lambda-list '(m))
(cl:defmethod width-val ((m <Panel3d>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mobiman_msgs-msg:width-val is deprecated.  Use mobiman_msgs-msg:width instead.")
  (width m))

(cl:ensure-generic-function 'buttons_3d-val :lambda-list '(m))
(cl:defmethod buttons_3d-val ((m <Panel3d>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mobiman_msgs-msg:buttons_3d-val is deprecated.  Use mobiman_msgs-msg:buttons_3d instead.")
  (buttons_3d m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Panel3d>) ostream)
  "Serializes a message object of type '<Panel3d>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'origin) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'normal) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'length))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'width))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'buttons_3d))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'buttons_3d))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Panel3d>) istream)
  "Deserializes a message object of type '<Panel3d>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'origin) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'normal) istream)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'length) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'width) (roslisp-utils:decode-single-float-bits bits)))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'buttons_3d) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'buttons_3d)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'mobiman_msgs-msg:Button3d))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Panel3d>)))
  "Returns string type for a message object of type '<Panel3d>"
  "mobiman_msgs/Panel3d")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Panel3d)))
  "Returns string type for a message object of type 'Panel3d"
  "mobiman_msgs/Panel3d")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Panel3d>)))
  "Returns md5sum for a message object of type '<Panel3d>"
  "a836babba9d9025b436af0ca907d0866")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Panel3d)))
  "Returns md5sum for a message object of type 'Panel3d"
  "a836babba9d9025b436af0ca907d0866")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Panel3d>)))
  "Returns full string definition for message of type '<Panel3d>"
  (cl:format cl:nil "geometry_msgs/Point origin~%geometry_msgs/Vector3 normal~%float32 length~%float32 width~%Button3d[] buttons_3d~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%================================================================================~%MSG: mobiman_msgs/Button3d~%geometry_msgs/Pose pose~%ButtonSemantics button_semantics~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: mobiman_msgs/ButtonSemantics~%string name~%uint8 button_status~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Panel3d)))
  "Returns full string definition for message of type 'Panel3d"
  (cl:format cl:nil "geometry_msgs/Point origin~%geometry_msgs/Vector3 normal~%float32 length~%float32 width~%Button3d[] buttons_3d~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%================================================================================~%MSG: mobiman_msgs/Button3d~%geometry_msgs/Pose pose~%ButtonSemantics button_semantics~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: mobiman_msgs/ButtonSemantics~%string name~%uint8 button_status~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Panel3d>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'origin))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'normal))
     4
     4
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'buttons_3d) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Panel3d>))
  "Converts a ROS message object to a list"
  (cl:list 'Panel3d
    (cl:cons ':origin (origin msg))
    (cl:cons ':normal (normal msg))
    (cl:cons ':length (length msg))
    (cl:cons ':width (width msg))
    (cl:cons ':buttons_3d (buttons_3d msg))
))
