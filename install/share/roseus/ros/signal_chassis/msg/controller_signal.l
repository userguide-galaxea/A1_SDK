;; Auto-generated. Do not edit!


(when (boundp 'signal_chassis::controller_signal)
  (if (not (find-package "SIGNAL_CHASSIS"))
    (make-package "SIGNAL_CHASSIS"))
  (shadow 'controller_signal (find-package "SIGNAL_CHASSIS")))
(unless (find-package "SIGNAL_CHASSIS::CONTROLLER_SIGNAL")
  (make-package "SIGNAL_CHASSIS::CONTROLLER_SIGNAL"))

(in-package "ROS")
;;//! \htmlinclude controller_signal.msg.html


(defclass signal_chassis::controller_signal
  :super ros::object
  :slots (_left_x_axis _left_y_axis _right_x_axis _right_y_axis ))

(defmethod signal_chassis::controller_signal
  (:init
   (&key
    ((:left_x_axis __left_x_axis) 0.0)
    ((:left_y_axis __left_y_axis) 0.0)
    ((:right_x_axis __right_x_axis) 0.0)
    ((:right_y_axis __right_y_axis) 0.0)
    )
   (send-super :init)
   (setq _left_x_axis (float __left_x_axis))
   (setq _left_y_axis (float __left_y_axis))
   (setq _right_x_axis (float __right_x_axis))
   (setq _right_y_axis (float __right_y_axis))
   self)
  (:left_x_axis
   (&optional __left_x_axis)
   (if __left_x_axis (setq _left_x_axis __left_x_axis)) _left_x_axis)
  (:left_y_axis
   (&optional __left_y_axis)
   (if __left_y_axis (setq _left_y_axis __left_y_axis)) _left_y_axis)
  (:right_x_axis
   (&optional __right_x_axis)
   (if __right_x_axis (setq _right_x_axis __right_x_axis)) _right_x_axis)
  (:right_y_axis
   (&optional __right_y_axis)
   (if __right_y_axis (setq _right_y_axis __right_y_axis)) _right_y_axis)
  (:serialization-length
   ()
   (+
    ;; float32 _left_x_axis
    4
    ;; float32 _left_y_axis
    4
    ;; float32 _right_x_axis
    4
    ;; float32 _right_y_axis
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _left_x_axis
       (sys::poke _left_x_axis (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _left_y_axis
       (sys::poke _left_y_axis (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _right_x_axis
       (sys::poke _right_x_axis (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _right_y_axis
       (sys::poke _right_y_axis (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _left_x_axis
     (setq _left_x_axis (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _left_y_axis
     (setq _left_y_axis (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _right_x_axis
     (setq _right_x_axis (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _right_y_axis
     (setq _right_y_axis (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get signal_chassis::controller_signal :md5sum-) "c3ae204389da07ed6082cc8bc9e44110")
(setf (get signal_chassis::controller_signal :datatype-) "signal_chassis/controller_signal")
(setf (get signal_chassis::controller_signal :definition-)
      "float32 left_x_axis
float32 left_y_axis
float32 right_x_axis
float32 right_y_axis
")



(provide :signal_chassis/controller_signal "c3ae204389da07ed6082cc8bc9e44110")


