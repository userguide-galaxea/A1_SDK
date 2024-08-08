;; Auto-generated. Do not edit!


(when (boundp 'ocs2_msgs::mpc_flattened_controller)
  (if (not (find-package "OCS2_MSGS"))
    (make-package "OCS2_MSGS"))
  (shadow 'mpc_flattened_controller (find-package "OCS2_MSGS")))
(unless (find-package "OCS2_MSGS::MPC_FLATTENED_CONTROLLER")
  (make-package "OCS2_MSGS::MPC_FLATTENED_CONTROLLER"))

(in-package "ROS")
;;//! \htmlinclude mpc_flattened_controller.msg.html


(intern "*CONTROLLER_UNKNOWN*" (find-package "OCS2_MSGS::MPC_FLATTENED_CONTROLLER"))
(shadow '*CONTROLLER_UNKNOWN* (find-package "OCS2_MSGS::MPC_FLATTENED_CONTROLLER"))
(defconstant ocs2_msgs::mpc_flattened_controller::*CONTROLLER_UNKNOWN* 0)
(intern "*CONTROLLER_FEEDFORWARD*" (find-package "OCS2_MSGS::MPC_FLATTENED_CONTROLLER"))
(shadow '*CONTROLLER_FEEDFORWARD* (find-package "OCS2_MSGS::MPC_FLATTENED_CONTROLLER"))
(defconstant ocs2_msgs::mpc_flattened_controller::*CONTROLLER_FEEDFORWARD* 1)
(intern "*CONTROLLER_LINEAR*" (find-package "OCS2_MSGS::MPC_FLATTENED_CONTROLLER"))
(shadow '*CONTROLLER_LINEAR* (find-package "OCS2_MSGS::MPC_FLATTENED_CONTROLLER"))
(defconstant ocs2_msgs::mpc_flattened_controller::*CONTROLLER_LINEAR* 2)

(defun ocs2_msgs::mpc_flattened_controller-to-symbol (const)
  (cond
        ((= const 0) 'ocs2_msgs::mpc_flattened_controller::*CONTROLLER_UNKNOWN*)
        ((= const 1) 'ocs2_msgs::mpc_flattened_controller::*CONTROLLER_FEEDFORWARD*)
        ((= const 2) 'ocs2_msgs::mpc_flattened_controller::*CONTROLLER_LINEAR*)
        (t nil)))

(defclass ocs2_msgs::mpc_flattened_controller
  :super ros::object
  :slots (_controllerType _initObservation _planTargetTrajectories _stateTrajectory _inputTrajectory _timeTrajectory _postEventIndices _modeSchedule _data _performanceIndices ))

(defmethod ocs2_msgs::mpc_flattened_controller
  (:init
   (&key
    ((:controllerType __controllerType) 0)
    ((:initObservation __initObservation) (instance ocs2_msgs::mpc_observation :init))
    ((:planTargetTrajectories __planTargetTrajectories) (instance ocs2_msgs::mpc_target_trajectories :init))
    ((:stateTrajectory __stateTrajectory) ())
    ((:inputTrajectory __inputTrajectory) ())
    ((:timeTrajectory __timeTrajectory) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:postEventIndices __postEventIndices) (make-array 0 :initial-element 0 :element-type :integer))
    ((:modeSchedule __modeSchedule) (instance ocs2_msgs::mode_schedule :init))
    ((:data __data) ())
    ((:performanceIndices __performanceIndices) (instance ocs2_msgs::mpc_performance_indices :init))
    )
   (send-super :init)
   (setq _controllerType (round __controllerType))
   (setq _initObservation __initObservation)
   (setq _planTargetTrajectories __planTargetTrajectories)
   (setq _stateTrajectory __stateTrajectory)
   (setq _inputTrajectory __inputTrajectory)
   (setq _timeTrajectory __timeTrajectory)
   (setq _postEventIndices __postEventIndices)
   (setq _modeSchedule __modeSchedule)
   (setq _data __data)
   (setq _performanceIndices __performanceIndices)
   self)
  (:controllerType
   (&optional __controllerType)
   (if __controllerType (setq _controllerType __controllerType)) _controllerType)
  (:initObservation
   (&rest __initObservation)
   (if (keywordp (car __initObservation))
       (send* _initObservation __initObservation)
     (progn
       (if __initObservation (setq _initObservation (car __initObservation)))
       _initObservation)))
  (:planTargetTrajectories
   (&rest __planTargetTrajectories)
   (if (keywordp (car __planTargetTrajectories))
       (send* _planTargetTrajectories __planTargetTrajectories)
     (progn
       (if __planTargetTrajectories (setq _planTargetTrajectories (car __planTargetTrajectories)))
       _planTargetTrajectories)))
  (:stateTrajectory
   (&rest __stateTrajectory)
   (if (keywordp (car __stateTrajectory))
       (send* _stateTrajectory __stateTrajectory)
     (progn
       (if __stateTrajectory (setq _stateTrajectory (car __stateTrajectory)))
       _stateTrajectory)))
  (:inputTrajectory
   (&rest __inputTrajectory)
   (if (keywordp (car __inputTrajectory))
       (send* _inputTrajectory __inputTrajectory)
     (progn
       (if __inputTrajectory (setq _inputTrajectory (car __inputTrajectory)))
       _inputTrajectory)))
  (:timeTrajectory
   (&optional __timeTrajectory)
   (if __timeTrajectory (setq _timeTrajectory __timeTrajectory)) _timeTrajectory)
  (:postEventIndices
   (&optional __postEventIndices)
   (if __postEventIndices (setq _postEventIndices __postEventIndices)) _postEventIndices)
  (:modeSchedule
   (&rest __modeSchedule)
   (if (keywordp (car __modeSchedule))
       (send* _modeSchedule __modeSchedule)
     (progn
       (if __modeSchedule (setq _modeSchedule (car __modeSchedule)))
       _modeSchedule)))
  (:data
   (&rest __data)
   (if (keywordp (car __data))
       (send* _data __data)
     (progn
       (if __data (setq _data (car __data)))
       _data)))
  (:performanceIndices
   (&rest __performanceIndices)
   (if (keywordp (car __performanceIndices))
       (send* _performanceIndices __performanceIndices)
     (progn
       (if __performanceIndices (setq _performanceIndices (car __performanceIndices)))
       _performanceIndices)))
  (:serialization-length
   ()
   (+
    ;; uint8 _controllerType
    1
    ;; ocs2_msgs/mpc_observation _initObservation
    (send _initObservation :serialization-length)
    ;; ocs2_msgs/mpc_target_trajectories _planTargetTrajectories
    (send _planTargetTrajectories :serialization-length)
    ;; ocs2_msgs/mpc_state[] _stateTrajectory
    (apply #'+ (send-all _stateTrajectory :serialization-length)) 4
    ;; ocs2_msgs/mpc_input[] _inputTrajectory
    (apply #'+ (send-all _inputTrajectory :serialization-length)) 4
    ;; float64[] _timeTrajectory
    (* 8    (length _timeTrajectory)) 4
    ;; uint16[] _postEventIndices
    (* 2    (length _postEventIndices)) 4
    ;; ocs2_msgs/mode_schedule _modeSchedule
    (send _modeSchedule :serialization-length)
    ;; ocs2_msgs/controller_data[] _data
    (apply #'+ (send-all _data :serialization-length)) 4
    ;; ocs2_msgs/mpc_performance_indices _performanceIndices
    (send _performanceIndices :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _controllerType
       (write-byte _controllerType s)
     ;; ocs2_msgs/mpc_observation _initObservation
       (send _initObservation :serialize s)
     ;; ocs2_msgs/mpc_target_trajectories _planTargetTrajectories
       (send _planTargetTrajectories :serialize s)
     ;; ocs2_msgs/mpc_state[] _stateTrajectory
     (write-long (length _stateTrajectory) s)
     (dolist (elem _stateTrajectory)
       (send elem :serialize s)
       )
     ;; ocs2_msgs/mpc_input[] _inputTrajectory
     (write-long (length _inputTrajectory) s)
     (dolist (elem _inputTrajectory)
       (send elem :serialize s)
       )
     ;; float64[] _timeTrajectory
     (write-long (length _timeTrajectory) s)
     (dotimes (i (length _timeTrajectory))
       (sys::poke (elt _timeTrajectory i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; uint16[] _postEventIndices
     (write-long (length _postEventIndices) s)
     (dotimes (i (length _postEventIndices))
       (write-word (elt _postEventIndices i) s)
       )
     ;; ocs2_msgs/mode_schedule _modeSchedule
       (send _modeSchedule :serialize s)
     ;; ocs2_msgs/controller_data[] _data
     (write-long (length _data) s)
     (dolist (elem _data)
       (send elem :serialize s)
       )
     ;; ocs2_msgs/mpc_performance_indices _performanceIndices
       (send _performanceIndices :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _controllerType
     (setq _controllerType (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; ocs2_msgs/mpc_observation _initObservation
     (send _initObservation :deserialize buf ptr-) (incf ptr- (send _initObservation :serialization-length))
   ;; ocs2_msgs/mpc_target_trajectories _planTargetTrajectories
     (send _planTargetTrajectories :deserialize buf ptr-) (incf ptr- (send _planTargetTrajectories :serialization-length))
   ;; ocs2_msgs/mpc_state[] _stateTrajectory
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _stateTrajectory (let (r) (dotimes (i n) (push (instance ocs2_msgs::mpc_state :init) r)) r))
     (dolist (elem- _stateTrajectory)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;; ocs2_msgs/mpc_input[] _inputTrajectory
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _inputTrajectory (let (r) (dotimes (i n) (push (instance ocs2_msgs::mpc_input :init) r)) r))
     (dolist (elem- _inputTrajectory)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;; float64[] _timeTrajectory
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _timeTrajectory (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _timeTrajectory i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     ))
   ;; uint16[] _postEventIndices
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _postEventIndices (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _postEventIndices i) (sys::peek buf ptr- :short)) (incf ptr- 2)
     ))
   ;; ocs2_msgs/mode_schedule _modeSchedule
     (send _modeSchedule :deserialize buf ptr-) (incf ptr- (send _modeSchedule :serialization-length))
   ;; ocs2_msgs/controller_data[] _data
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _data (let (r) (dotimes (i n) (push (instance ocs2_msgs::controller_data :init) r)) r))
     (dolist (elem- _data)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;; ocs2_msgs/mpc_performance_indices _performanceIndices
     (send _performanceIndices :deserialize buf ptr-) (incf ptr- (send _performanceIndices :serialization-length))
   ;;
   self)
  )

(setf (get ocs2_msgs::mpc_flattened_controller :md5sum-) "9355aadb2928f436a41799dd737c0f53")
(setf (get ocs2_msgs::mpc_flattened_controller :datatype-) "ocs2_msgs/mpc_flattened_controller")
(setf (get ocs2_msgs::mpc_flattened_controller :definition-)
      "# Flattened controller: A serialized controller

# define controllerType Enum values
uint8 CONTROLLER_UNKNOWN=0 # safety mechanism: message initalization to zero
uint8 CONTROLLER_FEEDFORWARD=1
uint8 CONTROLLER_LINEAR=2

uint8                   controllerType         # what type of controller is this

mpc_observation         initObservation        # plan initial observation

mpc_target_trajectories planTargetTrajectories # target trajectory in cost function
mpc_state[]             stateTrajectory        # optimized state trajectory from planner
mpc_input[]             inputTrajectory        # optimized input trajectory from planner
float64[]               timeTrajectory         # time trajectory for stateTrajectory and inputTrajectory
uint16[]                postEventIndices       # array of indices indicating the index of post-event time in the trajectories
mode_schedule           modeSchedule           # optimal/predefined MPC mode sequence and event times

controller_data[]       data                   # the actual payload from flatten method: one vector of data per time step

mpc_performance_indices performanceIndices     # solver performance indices

================================================================================
MSG: ocs2_msgs/mpc_observation
# MPC observation
float64        time        # Current time
mpc_state      state       # Current state
mpc_input      input       # Current input
int8           mode        # Current mode

================================================================================
MSG: ocs2_msgs/mpc_state
# MPC internal model state vector
float32[] value

================================================================================
MSG: ocs2_msgs/mpc_input
# MPC internal model input vector 

float32[] value
================================================================================
MSG: ocs2_msgs/mpc_target_trajectories
# MPC target trajectories

float64[]    timeTrajectory        # MPC target time trajectory
mpc_state[]  stateTrajectory       # MPC target state trajectory
mpc_input[]  inputTrajectory       # MPC target input trajectory


================================================================================
MSG: ocs2_msgs/mode_schedule
# MPC mode sequence

float64[] eventTimes           # event times: its size is equal to the size of phaseSequence minus one
int8[]    modeSequence         # mode sequence: e.g., for a quadrupedal robot, it is in the set {0, 1,..., 15}
================================================================================
MSG: ocs2_msgs/controller_data
float32[] data

================================================================================
MSG: ocs2_msgs/mpc_performance_indices
# MPC performance indices
float32     initTime
float32     merit
float32     cost
float32     dynamicsViolationSSE
float32     equalityConstraintsSSE
float32     equalityLagrangian
float32     inequalityLagrangian

")



(provide :ocs2_msgs/mpc_flattened_controller "9355aadb2928f436a41799dd737c0f53")


