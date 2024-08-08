; Auto-generated. Do not edit!


(cl:in-package ocs2_msgs-msg)


;//! \htmlinclude mpc_flattened_controller.msg.html

(cl:defclass <mpc_flattened_controller> (roslisp-msg-protocol:ros-message)
  ((controllerType
    :reader controllerType
    :initarg :controllerType
    :type cl:fixnum
    :initform 0)
   (initObservation
    :reader initObservation
    :initarg :initObservation
    :type ocs2_msgs-msg:mpc_observation
    :initform (cl:make-instance 'ocs2_msgs-msg:mpc_observation))
   (planTargetTrajectories
    :reader planTargetTrajectories
    :initarg :planTargetTrajectories
    :type ocs2_msgs-msg:mpc_target_trajectories
    :initform (cl:make-instance 'ocs2_msgs-msg:mpc_target_trajectories))
   (stateTrajectory
    :reader stateTrajectory
    :initarg :stateTrajectory
    :type (cl:vector ocs2_msgs-msg:mpc_state)
   :initform (cl:make-array 0 :element-type 'ocs2_msgs-msg:mpc_state :initial-element (cl:make-instance 'ocs2_msgs-msg:mpc_state)))
   (inputTrajectory
    :reader inputTrajectory
    :initarg :inputTrajectory
    :type (cl:vector ocs2_msgs-msg:mpc_input)
   :initform (cl:make-array 0 :element-type 'ocs2_msgs-msg:mpc_input :initial-element (cl:make-instance 'ocs2_msgs-msg:mpc_input)))
   (timeTrajectory
    :reader timeTrajectory
    :initarg :timeTrajectory
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0))
   (postEventIndices
    :reader postEventIndices
    :initarg :postEventIndices
    :type (cl:vector cl:fixnum)
   :initform (cl:make-array 0 :element-type 'cl:fixnum :initial-element 0))
   (modeSchedule
    :reader modeSchedule
    :initarg :modeSchedule
    :type ocs2_msgs-msg:mode_schedule
    :initform (cl:make-instance 'ocs2_msgs-msg:mode_schedule))
   (data
    :reader data
    :initarg :data
    :type (cl:vector ocs2_msgs-msg:controller_data)
   :initform (cl:make-array 0 :element-type 'ocs2_msgs-msg:controller_data :initial-element (cl:make-instance 'ocs2_msgs-msg:controller_data)))
   (performanceIndices
    :reader performanceIndices
    :initarg :performanceIndices
    :type ocs2_msgs-msg:mpc_performance_indices
    :initform (cl:make-instance 'ocs2_msgs-msg:mpc_performance_indices)))
)

(cl:defclass mpc_flattened_controller (<mpc_flattened_controller>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <mpc_flattened_controller>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'mpc_flattened_controller)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ocs2_msgs-msg:<mpc_flattened_controller> is deprecated: use ocs2_msgs-msg:mpc_flattened_controller instead.")))

(cl:ensure-generic-function 'controllerType-val :lambda-list '(m))
(cl:defmethod controllerType-val ((m <mpc_flattened_controller>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocs2_msgs-msg:controllerType-val is deprecated.  Use ocs2_msgs-msg:controllerType instead.")
  (controllerType m))

(cl:ensure-generic-function 'initObservation-val :lambda-list '(m))
(cl:defmethod initObservation-val ((m <mpc_flattened_controller>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocs2_msgs-msg:initObservation-val is deprecated.  Use ocs2_msgs-msg:initObservation instead.")
  (initObservation m))

(cl:ensure-generic-function 'planTargetTrajectories-val :lambda-list '(m))
(cl:defmethod planTargetTrajectories-val ((m <mpc_flattened_controller>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocs2_msgs-msg:planTargetTrajectories-val is deprecated.  Use ocs2_msgs-msg:planTargetTrajectories instead.")
  (planTargetTrajectories m))

(cl:ensure-generic-function 'stateTrajectory-val :lambda-list '(m))
(cl:defmethod stateTrajectory-val ((m <mpc_flattened_controller>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocs2_msgs-msg:stateTrajectory-val is deprecated.  Use ocs2_msgs-msg:stateTrajectory instead.")
  (stateTrajectory m))

(cl:ensure-generic-function 'inputTrajectory-val :lambda-list '(m))
(cl:defmethod inputTrajectory-val ((m <mpc_flattened_controller>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocs2_msgs-msg:inputTrajectory-val is deprecated.  Use ocs2_msgs-msg:inputTrajectory instead.")
  (inputTrajectory m))

(cl:ensure-generic-function 'timeTrajectory-val :lambda-list '(m))
(cl:defmethod timeTrajectory-val ((m <mpc_flattened_controller>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocs2_msgs-msg:timeTrajectory-val is deprecated.  Use ocs2_msgs-msg:timeTrajectory instead.")
  (timeTrajectory m))

(cl:ensure-generic-function 'postEventIndices-val :lambda-list '(m))
(cl:defmethod postEventIndices-val ((m <mpc_flattened_controller>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocs2_msgs-msg:postEventIndices-val is deprecated.  Use ocs2_msgs-msg:postEventIndices instead.")
  (postEventIndices m))

(cl:ensure-generic-function 'modeSchedule-val :lambda-list '(m))
(cl:defmethod modeSchedule-val ((m <mpc_flattened_controller>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocs2_msgs-msg:modeSchedule-val is deprecated.  Use ocs2_msgs-msg:modeSchedule instead.")
  (modeSchedule m))

(cl:ensure-generic-function 'data-val :lambda-list '(m))
(cl:defmethod data-val ((m <mpc_flattened_controller>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocs2_msgs-msg:data-val is deprecated.  Use ocs2_msgs-msg:data instead.")
  (data m))

(cl:ensure-generic-function 'performanceIndices-val :lambda-list '(m))
(cl:defmethod performanceIndices-val ((m <mpc_flattened_controller>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ocs2_msgs-msg:performanceIndices-val is deprecated.  Use ocs2_msgs-msg:performanceIndices instead.")
  (performanceIndices m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<mpc_flattened_controller>)))
    "Constants for message type '<mpc_flattened_controller>"
  '((:CONTROLLER_UNKNOWN . 0)
    (:CONTROLLER_FEEDFORWARD . 1)
    (:CONTROLLER_LINEAR . 2))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'mpc_flattened_controller)))
    "Constants for message type 'mpc_flattened_controller"
  '((:CONTROLLER_UNKNOWN . 0)
    (:CONTROLLER_FEEDFORWARD . 1)
    (:CONTROLLER_LINEAR . 2))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <mpc_flattened_controller>) ostream)
  "Serializes a message object of type '<mpc_flattened_controller>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'controllerType)) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'initObservation) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'planTargetTrajectories) ostream)
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
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'postEventIndices))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:write-byte (cl:ldb (cl:byte 8 0) ele) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) ele) ostream))
   (cl:slot-value msg 'postEventIndices))
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'modeSchedule) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'data))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'data))
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'performanceIndices) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <mpc_flattened_controller>) istream)
  "Deserializes a message object of type '<mpc_flattened_controller>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'controllerType)) (cl:read-byte istream))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'initObservation) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'planTargetTrajectories) istream)
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
  (cl:setf (cl:slot-value msg 'postEventIndices) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'postEventIndices)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:aref vals i)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:aref vals i)) (cl:read-byte istream)))))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'modeSchedule) istream)
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'data) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'data)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'ocs2_msgs-msg:controller_data))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'performanceIndices) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<mpc_flattened_controller>)))
  "Returns string type for a message object of type '<mpc_flattened_controller>"
  "ocs2_msgs/mpc_flattened_controller")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'mpc_flattened_controller)))
  "Returns string type for a message object of type 'mpc_flattened_controller"
  "ocs2_msgs/mpc_flattened_controller")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<mpc_flattened_controller>)))
  "Returns md5sum for a message object of type '<mpc_flattened_controller>"
  "9355aadb2928f436a41799dd737c0f53")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'mpc_flattened_controller)))
  "Returns md5sum for a message object of type 'mpc_flattened_controller"
  "9355aadb2928f436a41799dd737c0f53")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<mpc_flattened_controller>)))
  "Returns full string definition for message of type '<mpc_flattened_controller>"
  (cl:format cl:nil "# Flattened controller: A serialized controller~%~%# define controllerType Enum values~%uint8 CONTROLLER_UNKNOWN=0 # safety mechanism: message initalization to zero~%uint8 CONTROLLER_FEEDFORWARD=1~%uint8 CONTROLLER_LINEAR=2~%~%uint8                   controllerType         # what type of controller is this~%~%mpc_observation         initObservation        # plan initial observation~%~%mpc_target_trajectories planTargetTrajectories # target trajectory in cost function~%mpc_state[]             stateTrajectory        # optimized state trajectory from planner~%mpc_input[]             inputTrajectory        # optimized input trajectory from planner~%float64[]               timeTrajectory         # time trajectory for stateTrajectory and inputTrajectory~%uint16[]                postEventIndices       # array of indices indicating the index of post-event time in the trajectories~%mode_schedule           modeSchedule           # optimal/predefined MPC mode sequence and event times~%~%controller_data[]       data                   # the actual payload from flatten method: one vector of data per time step~%~%mpc_performance_indices performanceIndices     # solver performance indices~%~%================================================================================~%MSG: ocs2_msgs/mpc_observation~%# MPC observation~%float64        time        # Current time~%mpc_state      state       # Current state~%mpc_input      input       # Current input~%int8           mode        # Current mode~%~%================================================================================~%MSG: ocs2_msgs/mpc_state~%# MPC internal model state vector~%float32[] value~%~%================================================================================~%MSG: ocs2_msgs/mpc_input~%# MPC internal model input vector ~%~%float32[] value~%================================================================================~%MSG: ocs2_msgs/mpc_target_trajectories~%# MPC target trajectories~%~%float64[]    timeTrajectory        # MPC target time trajectory~%mpc_state[]  stateTrajectory       # MPC target state trajectory~%mpc_input[]  inputTrajectory       # MPC target input trajectory~%~%~%================================================================================~%MSG: ocs2_msgs/mode_schedule~%# MPC mode sequence~%~%float64[] eventTimes           # event times: its size is equal to the size of phaseSequence minus one~%int8[]    modeSequence         # mode sequence: e.g., for a quadrupedal robot, it is in the set {0, 1,..., 15}~%================================================================================~%MSG: ocs2_msgs/controller_data~%float32[] data~%~%================================================================================~%MSG: ocs2_msgs/mpc_performance_indices~%# MPC performance indices~%float32     initTime~%float32     merit~%float32     cost~%float32     dynamicsViolationSSE~%float32     equalityConstraintsSSE~%float32     equalityLagrangian~%float32     inequalityLagrangian~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'mpc_flattened_controller)))
  "Returns full string definition for message of type 'mpc_flattened_controller"
  (cl:format cl:nil "# Flattened controller: A serialized controller~%~%# define controllerType Enum values~%uint8 CONTROLLER_UNKNOWN=0 # safety mechanism: message initalization to zero~%uint8 CONTROLLER_FEEDFORWARD=1~%uint8 CONTROLLER_LINEAR=2~%~%uint8                   controllerType         # what type of controller is this~%~%mpc_observation         initObservation        # plan initial observation~%~%mpc_target_trajectories planTargetTrajectories # target trajectory in cost function~%mpc_state[]             stateTrajectory        # optimized state trajectory from planner~%mpc_input[]             inputTrajectory        # optimized input trajectory from planner~%float64[]               timeTrajectory         # time trajectory for stateTrajectory and inputTrajectory~%uint16[]                postEventIndices       # array of indices indicating the index of post-event time in the trajectories~%mode_schedule           modeSchedule           # optimal/predefined MPC mode sequence and event times~%~%controller_data[]       data                   # the actual payload from flatten method: one vector of data per time step~%~%mpc_performance_indices performanceIndices     # solver performance indices~%~%================================================================================~%MSG: ocs2_msgs/mpc_observation~%# MPC observation~%float64        time        # Current time~%mpc_state      state       # Current state~%mpc_input      input       # Current input~%int8           mode        # Current mode~%~%================================================================================~%MSG: ocs2_msgs/mpc_state~%# MPC internal model state vector~%float32[] value~%~%================================================================================~%MSG: ocs2_msgs/mpc_input~%# MPC internal model input vector ~%~%float32[] value~%================================================================================~%MSG: ocs2_msgs/mpc_target_trajectories~%# MPC target trajectories~%~%float64[]    timeTrajectory        # MPC target time trajectory~%mpc_state[]  stateTrajectory       # MPC target state trajectory~%mpc_input[]  inputTrajectory       # MPC target input trajectory~%~%~%================================================================================~%MSG: ocs2_msgs/mode_schedule~%# MPC mode sequence~%~%float64[] eventTimes           # event times: its size is equal to the size of phaseSequence minus one~%int8[]    modeSequence         # mode sequence: e.g., for a quadrupedal robot, it is in the set {0, 1,..., 15}~%================================================================================~%MSG: ocs2_msgs/controller_data~%float32[] data~%~%================================================================================~%MSG: ocs2_msgs/mpc_performance_indices~%# MPC performance indices~%float32     initTime~%float32     merit~%float32     cost~%float32     dynamicsViolationSSE~%float32     equalityConstraintsSSE~%float32     equalityLagrangian~%float32     inequalityLagrangian~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <mpc_flattened_controller>))
  (cl:+ 0
     1
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'initObservation))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'planTargetTrajectories))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'stateTrajectory) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'inputTrajectory) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'timeTrajectory) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 8)))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'postEventIndices) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 2)))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'modeSchedule))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'data) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'performanceIndices))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <mpc_flattened_controller>))
  "Converts a ROS message object to a list"
  (cl:list 'mpc_flattened_controller
    (cl:cons ':controllerType (controllerType msg))
    (cl:cons ':initObservation (initObservation msg))
    (cl:cons ':planTargetTrajectories (planTargetTrajectories msg))
    (cl:cons ':stateTrajectory (stateTrajectory msg))
    (cl:cons ':inputTrajectory (inputTrajectory msg))
    (cl:cons ':timeTrajectory (timeTrajectory msg))
    (cl:cons ':postEventIndices (postEventIndices msg))
    (cl:cons ':modeSchedule (modeSchedule msg))
    (cl:cons ':data (data msg))
    (cl:cons ':performanceIndices (performanceIndices msg))
))
