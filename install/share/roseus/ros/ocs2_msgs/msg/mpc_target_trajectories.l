;; Auto-generated. Do not edit!


(when (boundp 'ocs2_msgs::mpc_target_trajectories)
  (if (not (find-package "OCS2_MSGS"))
    (make-package "OCS2_MSGS"))
  (shadow 'mpc_target_trajectories (find-package "OCS2_MSGS")))
(unless (find-package "OCS2_MSGS::MPC_TARGET_TRAJECTORIES")
  (make-package "OCS2_MSGS::MPC_TARGET_TRAJECTORIES"))

(in-package "ROS")
;;//! \htmlinclude mpc_target_trajectories.msg.html


(defclass ocs2_msgs::mpc_target_trajectories
  :super ros::object
  :slots (_timeTrajectory _stateTrajectory _inputTrajectory ))

(defmethod ocs2_msgs::mpc_target_trajectories
  (:init
   (&key
    ((:timeTrajectory __timeTrajectory) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:stateTrajectory __stateTrajectory) ())
    ((:inputTrajectory __inputTrajectory) ())
    )
   (send-super :init)
   (setq _timeTrajectory __timeTrajectory)
   (setq _stateTrajectory __stateTrajectory)
   (setq _inputTrajectory __inputTrajectory)
   self)
  (:timeTrajectory
   (&optional __timeTrajectory)
   (if __timeTrajectory (setq _timeTrajectory __timeTrajectory)) _timeTrajectory)
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
  (:serialization-length
   ()
   (+
    ;; float64[] _timeTrajectory
    (* 8    (length _timeTrajectory)) 4
    ;; ocs2_msgs/mpc_state[] _stateTrajectory
    (apply #'+ (send-all _stateTrajectory :serialization-length)) 4
    ;; ocs2_msgs/mpc_input[] _inputTrajectory
    (apply #'+ (send-all _inputTrajectory :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64[] _timeTrajectory
     (write-long (length _timeTrajectory) s)
     (dotimes (i (length _timeTrajectory))
       (sys::poke (elt _timeTrajectory i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
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
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64[] _timeTrajectory
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _timeTrajectory (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _timeTrajectory i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     ))
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
   ;;
   self)
  )

(setf (get ocs2_msgs::mpc_target_trajectories :md5sum-) "2d8da69ddfcd018a998edad053f8c7b6")
(setf (get ocs2_msgs::mpc_target_trajectories :datatype-) "ocs2_msgs/mpc_target_trajectories")
(setf (get ocs2_msgs::mpc_target_trajectories :definition-)
      "# MPC target trajectories

float64[]    timeTrajectory        # MPC target time trajectory
mpc_state[]  stateTrajectory       # MPC target state trajectory
mpc_input[]  inputTrajectory       # MPC target input trajectory


================================================================================
MSG: ocs2_msgs/mpc_state
# MPC internal model state vector
float32[] value

================================================================================
MSG: ocs2_msgs/mpc_input
# MPC internal model input vector 

float32[] value
")



(provide :ocs2_msgs/mpc_target_trajectories "2d8da69ddfcd018a998edad053f8c7b6")


