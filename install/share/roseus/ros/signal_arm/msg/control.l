;; Auto-generated. Do not edit!


(when (boundp 'signal_arm::control)
  (if (not (find-package "SIGNAL_ARM"))
    (make-package "SIGNAL_ARM"))
  (shadow 'control (find-package "SIGNAL_ARM")))
(unless (find-package "SIGNAL_ARM::CONTROL")
  (make-package "SIGNAL_ARM::CONTROL"))

(in-package "ROS")
;;//! \htmlinclude control.msg.html


(defclass signal_arm::control
  :super ros::object
  :slots (_p_des _v_des _kp _kd _t_ff ))

(defmethod signal_arm::control
  (:init
   (&key
    ((:p_des __p_des) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:v_des __v_des) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:kp __kp) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:kd __kd) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:t_ff __t_ff) (make-array 0 :initial-element 0.0 :element-type :float))
    )
   (send-super :init)
   (setq _p_des __p_des)
   (setq _v_des __v_des)
   (setq _kp __kp)
   (setq _kd __kd)
   (setq _t_ff __t_ff)
   self)
  (:p_des
   (&optional __p_des)
   (if __p_des (setq _p_des __p_des)) _p_des)
  (:v_des
   (&optional __v_des)
   (if __v_des (setq _v_des __v_des)) _v_des)
  (:kp
   (&optional __kp)
   (if __kp (setq _kp __kp)) _kp)
  (:kd
   (&optional __kd)
   (if __kd (setq _kd __kd)) _kd)
  (:t_ff
   (&optional __t_ff)
   (if __t_ff (setq _t_ff __t_ff)) _t_ff)
  (:serialization-length
   ()
   (+
    ;; float32[] _p_des
    (* 4    (length _p_des)) 4
    ;; float32[] _v_des
    (* 4    (length _v_des)) 4
    ;; float32[] _kp
    (* 4    (length _kp)) 4
    ;; float32[] _kd
    (* 4    (length _kd)) 4
    ;; float32[] _t_ff
    (* 4    (length _t_ff)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32[] _p_des
     (write-long (length _p_des) s)
     (dotimes (i (length _p_des))
       (sys::poke (elt _p_des i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; float32[] _v_des
     (write-long (length _v_des) s)
     (dotimes (i (length _v_des))
       (sys::poke (elt _v_des i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; float32[] _kp
     (write-long (length _kp) s)
     (dotimes (i (length _kp))
       (sys::poke (elt _kp i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; float32[] _kd
     (write-long (length _kd) s)
     (dotimes (i (length _kd))
       (sys::poke (elt _kd i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; float32[] _t_ff
     (write-long (length _t_ff) s)
     (dotimes (i (length _t_ff))
       (sys::poke (elt _t_ff i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32[] _p_des
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _p_des (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _p_des i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; float32[] _v_des
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _v_des (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _v_des i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; float32[] _kp
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _kp (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _kp i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; float32[] _kd
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _kd (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _kd i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; float32[] _t_ff
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _t_ff (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _t_ff i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;;
   self)
  )

(setf (get signal_arm::control :md5sum-) "92db34ecb249af9c33832065efc76c23")
(setf (get signal_arm::control :datatype-) "signal_arm/control")
(setf (get signal_arm::control :definition-)
      "float32[] p_des
float32[] v_des
float32[] kp
float32[] kd
float32[] t_ff
")



(provide :signal_arm/control "92db34ecb249af9c33832065efc76c23")


