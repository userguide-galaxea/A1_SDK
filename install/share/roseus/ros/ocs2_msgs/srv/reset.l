;; Auto-generated. Do not edit!


(when (boundp 'ocs2_msgs::reset)
  (if (not (find-package "OCS2_MSGS"))
    (make-package "OCS2_MSGS"))
  (shadow 'reset (find-package "OCS2_MSGS")))
(unless (find-package "OCS2_MSGS::RESET")
  (make-package "OCS2_MSGS::RESET"))
(unless (find-package "OCS2_MSGS::RESETREQUEST")
  (make-package "OCS2_MSGS::RESETREQUEST"))
(unless (find-package "OCS2_MSGS::RESETRESPONSE")
  (make-package "OCS2_MSGS::RESETRESPONSE"))

(in-package "ROS")





(defclass ocs2_msgs::resetRequest
  :super ros::object
  :slots (_reset _targetTrajectories ))

(defmethod ocs2_msgs::resetRequest
  (:init
   (&key
    ((:reset __reset) nil)
    ((:targetTrajectories __targetTrajectories) (instance ocs2_msgs::mpc_target_trajectories :init))
    )
   (send-super :init)
   (setq _reset __reset)
   (setq _targetTrajectories __targetTrajectories)
   self)
  (:reset
   (&optional (__reset :null))
   (if (not (eq __reset :null)) (setq _reset __reset)) _reset)
  (:targetTrajectories
   (&rest __targetTrajectories)
   (if (keywordp (car __targetTrajectories))
       (send* _targetTrajectories __targetTrajectories)
     (progn
       (if __targetTrajectories (setq _targetTrajectories (car __targetTrajectories)))
       _targetTrajectories)))
  (:serialization-length
   ()
   (+
    ;; bool _reset
    1
    ;; ocs2_msgs/mpc_target_trajectories _targetTrajectories
    (send _targetTrajectories :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _reset
       (if _reset (write-byte -1 s) (write-byte 0 s))
     ;; ocs2_msgs/mpc_target_trajectories _targetTrajectories
       (send _targetTrajectories :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _reset
     (setq _reset (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; ocs2_msgs/mpc_target_trajectories _targetTrajectories
     (send _targetTrajectories :deserialize buf ptr-) (incf ptr- (send _targetTrajectories :serialization-length))
   ;;
   self)
  )

(defclass ocs2_msgs::resetResponse
  :super ros::object
  :slots (_done ))

(defmethod ocs2_msgs::resetResponse
  (:init
   (&key
    ((:done __done) nil)
    )
   (send-super :init)
   (setq _done __done)
   self)
  (:done
   (&optional (__done :null))
   (if (not (eq __done :null)) (setq _done __done)) _done)
  (:serialization-length
   ()
   (+
    ;; bool _done
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _done
       (if _done (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _done
     (setq _done (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass ocs2_msgs::reset
  :super ros::object
  :slots ())

(setf (get ocs2_msgs::reset :md5sum-) "5d381de3cef01856decae8f3f4a35b69")
(setf (get ocs2_msgs::reset :datatype-) "ocs2_msgs/reset")
(setf (get ocs2_msgs::reset :request) ocs2_msgs::resetRequest)
(setf (get ocs2_msgs::reset :response) ocs2_msgs::resetResponse)

(defmethod ocs2_msgs::resetRequest
  (:response () (instance ocs2_msgs::resetResponse :init)))

(setf (get ocs2_msgs::resetRequest :md5sum-) "5d381de3cef01856decae8f3f4a35b69")
(setf (get ocs2_msgs::resetRequest :datatype-) "ocs2_msgs/resetRequest")
(setf (get ocs2_msgs::resetRequest :definition-)
      "# Reset service 
bool                      reset
mpc_target_trajectories   targetTrajectories

================================================================================
MSG: ocs2_msgs/mpc_target_trajectories
# MPC target trajectories

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

---
bool                      done
")

(setf (get ocs2_msgs::resetResponse :md5sum-) "5d381de3cef01856decae8f3f4a35b69")
(setf (get ocs2_msgs::resetResponse :datatype-) "ocs2_msgs/resetResponse")
(setf (get ocs2_msgs::resetResponse :definition-)
      "# Reset service 
bool                      reset
mpc_target_trajectories   targetTrajectories

================================================================================
MSG: ocs2_msgs/mpc_target_trajectories
# MPC target trajectories

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

---
bool                      done
")



(provide :ocs2_msgs/reset "5d381de3cef01856decae8f3f4a35b69")


