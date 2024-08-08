; Auto-generated. Do not edit!


(cl:in-package ocs2_msgs-msg)


;//! \htmlinclude mpc_target_trajectories.msg.html

(cl:defclass <mpc_target_trajectories> (roslisp-msg-protocol:ros-message)
  ((timeTrajectory
    :reader timeTrajectory
    :initarg :timeTrajectory
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0))
   (stateTrajectory
    :reader stateTrajectory
    :initarg :stateTrajectory
    :type (cl:vector ocs2_msgs-msg:mpc_state)
   :initform (cl:make-array 0 :element-type 'ocs2_msgs-msg:mpc_state :initial-element (cl:make-instance 'ocs2_msgs-msg:mpc_state)))
   (inputTrajectory
    :reader inputTrajectory
    :initarg :inputTrajectory
    :type (cl:vector ocs2_msgs-msg:mpc_input)
   :initform (cl:make-array 0 :element-type 'ocs2_msgs-msg:mpc_input :initial-element (cl:make-instance 'ocs2_msgs-msg:mpc_input))))
)

(cl:defclass mpc_target_trajectories (<mpc_target_trajectories>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <mpc_target_trajectories>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'mpc_target_trajectories)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ocs2_msgs-msg:<mpc_target_trajectories> is deprecated: use ocs2_msgs-msg:mpc_target_trajectories instead.")))

(cl:ensure-generic-function 'timeTrajectory-val :lambda-list '(m))
(cl:defmethod timeTrajectory-val ((m <mpc_target_trajectories>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocs2_msgs-msg:timeTrajectory-val is deprecated.  Use ocs2_msgs-msg:timeTrajectory instead.")
  (timeTrajectory m))

(cl:ensure-generic-function 'stateTrajectory-val :lambda-list '(m))
(cl:defmethod stateTrajectory-val ((m <mpc_target_trajectories>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocs2_msgs-msg:stateTrajectory-val is deprecated.  Use ocs2_msgs-msg:stateTrajectory instead.")
  (stateTrajectory m))

(cl:ensure-generic-function 'inputTrajectory-val :lambda-list '(m))
(cl:defmethod inputTrajectory-val ((m <mpc_target_trajectories>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocs2_msgs-msg:inputTrajectory-val is deprecated.  Use ocs2_msgs-msg:inputTrajectory instead.")
  (inputTrajectory m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <mpc_target_trajectories>) ostream)
  "Serializes a message object of type '<mpc_target_trajectories>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'timeTrajectory))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-double-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream)))
   (cl:slot-value msg 'timeTrajectory))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'stateTrajectory))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'stateTrajectory))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'inputTrajectory))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'inputTrajectory))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <mpc_target_trajectories>) istream)
  "Deserializes a message object of type '<mpc_target_trajectories>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'timeTrajectory) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'timeTrajectory)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-double-float-bits bits))))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'stateTrajectory) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'stateTrajectory)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'ocs2_msgs-msg:mpc_state))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'inputTrajectory) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'inputTrajectory)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'ocs2_msgs-msg:mpc_input))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<mpc_target_trajectories>)))
  "Returns string type for a message object of type '<mpc_target_trajectories>"
  "ocs2_msgs/mpc_target_trajectories")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'mpc_target_trajectories)))
  "Returns string type for a message object of type 'mpc_target_trajectories"
  "ocs2_msgs/mpc_target_trajectories")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<mpc_target_trajectories>)))
  "Returns md5sum for a message object of type '<mpc_target_trajectories>"
  "2d8da69ddfcd018a998edad053f8c7b6")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'mpc_target_trajectories)))
  "Returns md5sum for a message object of type 'mpc_target_trajectories"
  "2d8da69ddfcd018a998edad053f8c7b6")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<mpc_target_trajectories>)))
  "Returns full string definition for message of type '<mpc_target_trajectories>"
  (cl:format cl:nil "# MPC target trajectories~%~%float64[]    timeTrajectory        # MPC target time trajectory~%mpc_state[]  stateTrajectory       # MPC target state trajectory~%mpc_input[]  inputTrajectory       # MPC target input trajectory~%~%~%================================================================================~%MSG: ocs2_msgs/mpc_state~%# MPC internal model state vector~%float32[] value~%~%================================================================================~%MSG: ocs2_msgs/mpc_input~%# MPC internal model input vector ~%~%float32[] value~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'mpc_target_trajectories)))
  "Returns full string definition for message of type 'mpc_target_trajectories"
  (cl:format cl:nil "# MPC target trajectories~%~%float64[]    timeTrajectory        # MPC target time trajectory~%mpc_state[]  stateTrajectory       # MPC target state trajectory~%mpc_input[]  inputTrajectory       # MPC target input trajectory~%~%~%================================================================================~%MSG: ocs2_msgs/mpc_state~%# MPC internal model state vector~%float32[] value~%~%================================================================================~%MSG: ocs2_msgs/mpc_input~%# MPC internal model input vector ~%~%float32[] value~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <mpc_target_trajectories>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'timeTrajectory) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 8)))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'stateTrajectory) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'inputTrajectory) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <mpc_target_trajectories>))
  "Converts a ROS message object to a list"
  (cl:list 'mpc_target_trajectories
    (cl:cons ':timeTrajectory (timeTrajectory msg))
    (cl:cons ':stateTrajectory (stateTrajectory msg))
    (cl:cons ':inputTrajectory (inputTrajectory msg))
))
