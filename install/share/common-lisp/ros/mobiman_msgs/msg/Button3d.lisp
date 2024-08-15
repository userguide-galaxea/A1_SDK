; Auto-generated. Do not edit!


(cl:in-package mobiman_msgs-msg)


;//! \htmlinclude Button3d.msg.html

(cl:defclass <Button3d> (roslisp-msg-protocol:ros-message)
  ((pose
    :reader pose
    :initarg :pose
    :type geometry_msgs-msg:Pose
    :initform (cl:make-instance 'geometry_msgs-msg:Pose))
   (button_semantics
    :reader button_semantics
    :initarg :button_semantics
    :type mobiman_msgs-msg:ButtonSemantics
    :initform (cl:make-instance 'mobiman_msgs-msg:ButtonSemantics)))
)

(cl:defclass Button3d (<Button3d>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Button3d>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Button3d)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name mobiman_msgs-msg:<Button3d> is deprecated: use mobiman_msgs-msg:Button3d instead.")))

(cl:ensure-generic-function 'pose-val :lambda-list '(m))
(cl:defmethod pose-val ((m <Button3d>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mobiman_msgs-msg:pose-val is deprecated.  Use mobiman_msgs-msg:pose instead.")
  (pose m))

(cl:ensure-generic-function 'button_semantics-val :lambda-list '(m))
(cl:defmethod button_semantics-val ((m <Button3d>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mobiman_msgs-msg:button_semantics-val is deprecated.  Use mobiman_msgs-msg:button_semantics instead.")
  (button_semantics m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Button3d>) ostream)
  "Serializes a message object of type '<Button3d>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'pose) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'button_semantics) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Button3d>) istream)
  "Deserializes a message object of type '<Button3d>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'pose) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'button_semantics) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Button3d>)))
  "Returns string type for a message object of type '<Button3d>"
  "mobiman_msgs/Button3d")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Button3d)))
  "Returns string type for a message object of type 'Button3d"
  "mobiman_msgs/Button3d")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Button3d>)))
  "Returns md5sum for a message object of type '<Button3d>"
  "4cebf7d3838aade9d4cfafbd7ef66592")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Button3d)))
  "Returns md5sum for a message object of type 'Button3d"
  "4cebf7d3838aade9d4cfafbd7ef66592")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Button3d>)))
  "Returns full string definition for message of type '<Button3d>"
  (cl:format cl:nil "geometry_msgs/Pose pose~%ButtonSemantics button_semantics~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: mobiman_msgs/ButtonSemantics~%string name~%uint8 button_status~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Button3d)))
  "Returns full string definition for message of type 'Button3d"
  (cl:format cl:nil "geometry_msgs/Pose pose~%ButtonSemantics button_semantics~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: mobiman_msgs/ButtonSemantics~%string name~%uint8 button_status~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Button3d>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'pose))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'button_semantics))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Button3d>))
  "Converts a ROS message object to a list"
  (cl:list 'Button3d
    (cl:cons ':pose (pose msg))
    (cl:cons ':button_semantics (button_semantics msg))
))
