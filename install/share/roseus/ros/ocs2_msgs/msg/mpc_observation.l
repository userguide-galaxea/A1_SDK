;; Auto-generated. Do not edit!


(when (boundp 'ocs2_msgs::mpc_observation)
  (if (not (find-package "OCS2_MSGS"))
    (make-package "OCS2_MSGS"))
  (shadow 'mpc_observation (find-package "OCS2_MSGS")))
(unless (find-package "OCS2_MSGS::MPC_OBSERVATION")
  (make-package "OCS2_MSGS::MPC_OBSERVATION"))

(in-package "ROS")
;;//! \htmlinclude mpc_observation.msg.html


(defclass ocs2_msgs::mpc_observation
  :super ros::object
  :slots (_time _state _input _mode ))

(defmethod ocs2_msgs::mpc_observation
  (:init
   (&key
    ((:time __time) 0.0)
    ((:state __state) (instance ocs2_msgs::mpc_state :init))
    ((:input __input) (instance ocs2_msgs::mpc_input :init))
    ((:mode __mode) 0)
    )
   (send-super :init)
   (setq _time (float __time))
   (setq _state __state)
   (setq _input __input)
   (setq _mode (round __mode))
   self)
  (:time
   (&optional __time)
   (if __time (setq _time __time)) _time)
  (:state
   (&rest __state)
   (if (keywordp (car __state))
       (send* _state __state)
     (progn
       (if __state (setq _state (car __state)))
       _state)))
  (:input
   (&rest __input)
   (if (keywordp (car __input))
       (send* _input __input)
     (progn
       (if __input (setq _input (car __input)))
       _input)))
  (:mode
   (&optional __mode)
   (if __mode (setq _mode __mode)) _mode)
  (:serialization-length
   ()
   (+
    ;; float64 _time
    8
    ;; ocs2_msgs/mpc_state _state
    (send _state :serialization-length)
    ;; ocs2_msgs/mpc_input _input
    (send _input :serialization-length)
    ;; int8 _mode
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _time
       (sys::poke _time (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; ocs2_msgs/mpc_state _state
       (send _state :serialize s)
     ;; ocs2_msgs/mpc_input _input
       (send _input :serialize s)
     ;; int8 _mode
       (write-byte _mode s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _time
     (setq _time (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; ocs2_msgs/mpc_state _state
     (send _state :deserialize buf ptr-) (incf ptr- (send _state :serialization-length))
   ;; ocs2_msgs/mpc_input _input
     (send _input :deserialize buf ptr-) (incf ptr- (send _input :serialization-length))
   ;; int8 _mode
     (setq _mode (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _mode 127) (setq _mode (- _mode 256)))
   ;;
   self)
  )

(setf (get ocs2_msgs::mpc_observation :md5sum-) "c4075a25799f2a89c6d62b26e93cb66f")
(setf (get ocs2_msgs::mpc_observation :datatype-) "ocs2_msgs/mpc_observation")
(setf (get ocs2_msgs::mpc_observation :definition-)
      "# MPC observation
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
")



(provide :ocs2_msgs/mpc_observation "c4075a25799f2a89c6d62b26e93cb66f")


