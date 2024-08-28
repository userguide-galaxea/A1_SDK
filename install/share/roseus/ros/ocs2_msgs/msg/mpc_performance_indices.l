;; Auto-generated. Do not edit!


(when (boundp 'ocs2_msgs::mpc_performance_indices)
  (if (not (find-package "OCS2_MSGS"))
    (make-package "OCS2_MSGS"))
  (shadow 'mpc_performance_indices (find-package "OCS2_MSGS")))
(unless (find-package "OCS2_MSGS::MPC_PERFORMANCE_INDICES")
  (make-package "OCS2_MSGS::MPC_PERFORMANCE_INDICES"))

(in-package "ROS")
;;//! \htmlinclude mpc_performance_indices.msg.html


(defclass ocs2_msgs::mpc_performance_indices
  :super ros::object
  :slots (_initTime _merit _cost _dynamicsViolationSSE _equalityConstraintsSSE _equalityLagrangian _inequalityLagrangian ))

(defmethod ocs2_msgs::mpc_performance_indices
  (:init
   (&key
    ((:initTime __initTime) 0.0)
    ((:merit __merit) 0.0)
    ((:cost __cost) 0.0)
    ((:dynamicsViolationSSE __dynamicsViolationSSE) 0.0)
    ((:equalityConstraintsSSE __equalityConstraintsSSE) 0.0)
    ((:equalityLagrangian __equalityLagrangian) 0.0)
    ((:inequalityLagrangian __inequalityLagrangian) 0.0)
    )
   (send-super :init)
   (setq _initTime (float __initTime))
   (setq _merit (float __merit))
   (setq _cost (float __cost))
   (setq _dynamicsViolationSSE (float __dynamicsViolationSSE))
   (setq _equalityConstraintsSSE (float __equalityConstraintsSSE))
   (setq _equalityLagrangian (float __equalityLagrangian))
   (setq _inequalityLagrangian (float __inequalityLagrangian))
   self)
  (:initTime
   (&optional __initTime)
   (if __initTime (setq _initTime __initTime)) _initTime)
  (:merit
   (&optional __merit)
   (if __merit (setq _merit __merit)) _merit)
  (:cost
   (&optional __cost)
   (if __cost (setq _cost __cost)) _cost)
  (:dynamicsViolationSSE
   (&optional __dynamicsViolationSSE)
   (if __dynamicsViolationSSE (setq _dynamicsViolationSSE __dynamicsViolationSSE)) _dynamicsViolationSSE)
  (:equalityConstraintsSSE
   (&optional __equalityConstraintsSSE)
   (if __equalityConstraintsSSE (setq _equalityConstraintsSSE __equalityConstraintsSSE)) _equalityConstraintsSSE)
  (:equalityLagrangian
   (&optional __equalityLagrangian)
   (if __equalityLagrangian (setq _equalityLagrangian __equalityLagrangian)) _equalityLagrangian)
  (:inequalityLagrangian
   (&optional __inequalityLagrangian)
   (if __inequalityLagrangian (setq _inequalityLagrangian __inequalityLagrangian)) _inequalityLagrangian)
  (:serialization-length
   ()
   (+
    ;; float32 _initTime
    4
    ;; float32 _merit
    4
    ;; float32 _cost
    4
    ;; float32 _dynamicsViolationSSE
    4
    ;; float32 _equalityConstraintsSSE
    4
    ;; float32 _equalityLagrangian
    4
    ;; float32 _inequalityLagrangian
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _initTime
       (sys::poke _initTime (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _merit
       (sys::poke _merit (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _cost
       (sys::poke _cost (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _dynamicsViolationSSE
       (sys::poke _dynamicsViolationSSE (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _equalityConstraintsSSE
       (sys::poke _equalityConstraintsSSE (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _equalityLagrangian
       (sys::poke _equalityLagrangian (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _inequalityLagrangian
       (sys::poke _inequalityLagrangian (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _initTime
     (setq _initTime (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _merit
     (setq _merit (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _cost
     (setq _cost (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _dynamicsViolationSSE
     (setq _dynamicsViolationSSE (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _equalityConstraintsSSE
     (setq _equalityConstraintsSSE (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _equalityLagrangian
     (setq _equalityLagrangian (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _inequalityLagrangian
     (setq _inequalityLagrangian (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get ocs2_msgs::mpc_performance_indices :md5sum-) "d3efdce4c946e170e65e642157f48398")
(setf (get ocs2_msgs::mpc_performance_indices :datatype-) "ocs2_msgs/mpc_performance_indices")
(setf (get ocs2_msgs::mpc_performance_indices :definition-)
      "# MPC performance indices
float32     initTime
float32     merit
float32     cost
float32     dynamicsViolationSSE
float32     equalityConstraintsSSE
float32     equalityLagrangian
float32     inequalityLagrangian

")



(provide :ocs2_msgs/mpc_performance_indices "d3efdce4c946e170e65e642157f48398")


