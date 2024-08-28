;; Auto-generated. Do not edit!


(when (boundp 'signal_torso::torso_control)
  (if (not (find-package "SIGNAL_TORSO"))
    (make-package "SIGNAL_TORSO"))
  (shadow 'torso_control (find-package "SIGNAL_TORSO")))
(unless (find-package "SIGNAL_TORSO::TORSO_CONTROL")
  (make-package "SIGNAL_TORSO::TORSO_CONTROL"))

(in-package "ROS")
;;//! \htmlinclude torso_control.msg.html


(defclass signal_torso::torso_control
  :super ros::object
  :slots (_position_des _speed_des _current_kp _current_kd _speed_kp _speed_kd _position_kp _position_kd ))

(defmethod signal_torso::torso_control
  (:init
   (&key
    ((:position_des __position_des) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:speed_des __speed_des) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:current_kp __current_kp) (make-array 0 :initial-element 0 :element-type :char))
    ((:current_kd __current_kd) (make-array 0 :initial-element 0 :element-type :char))
    ((:speed_kp __speed_kp) (make-array 0 :initial-element 0 :element-type :char))
    ((:speed_kd __speed_kd) (make-array 0 :initial-element 0 :element-type :char))
    ((:position_kp __position_kp) (make-array 0 :initial-element 0 :element-type :char))
    ((:position_kd __position_kd) (make-array 0 :initial-element 0 :element-type :char))
    )
   (send-super :init)
   (setq _position_des __position_des)
   (setq _speed_des __speed_des)
   (setq _current_kp __current_kp)
   (setq _current_kd __current_kd)
   (setq _speed_kp __speed_kp)
   (setq _speed_kd __speed_kd)
   (setq _position_kp __position_kp)
   (setq _position_kd __position_kd)
   self)
  (:position_des
   (&optional __position_des)
   (if __position_des (setq _position_des __position_des)) _position_des)
  (:speed_des
   (&optional __speed_des)
   (if __speed_des (setq _speed_des __speed_des)) _speed_des)
  (:current_kp
   (&optional __current_kp)
   (if __current_kp (setq _current_kp __current_kp)) _current_kp)
  (:current_kd
   (&optional __current_kd)
   (if __current_kd (setq _current_kd __current_kd)) _current_kd)
  (:speed_kp
   (&optional __speed_kp)
   (if __speed_kp (setq _speed_kp __speed_kp)) _speed_kp)
  (:speed_kd
   (&optional __speed_kd)
   (if __speed_kd (setq _speed_kd __speed_kd)) _speed_kd)
  (:position_kp
   (&optional __position_kp)
   (if __position_kp (setq _position_kp __position_kp)) _position_kp)
  (:position_kd
   (&optional __position_kd)
   (if __position_kd (setq _position_kd __position_kd)) _position_kd)
  (:serialization-length
   ()
   (+
    ;; float32[] _position_des
    (* 4    (length _position_des)) 4
    ;; float32[] _speed_des
    (* 4    (length _speed_des)) 4
    ;; uint8[] _current_kp
    (* 1    (length _current_kp)) 4
    ;; uint8[] _current_kd
    (* 1    (length _current_kd)) 4
    ;; uint8[] _speed_kp
    (* 1    (length _speed_kp)) 4
    ;; uint8[] _speed_kd
    (* 1    (length _speed_kd)) 4
    ;; uint8[] _position_kp
    (* 1    (length _position_kp)) 4
    ;; uint8[] _position_kd
    (* 1    (length _position_kd)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32[] _position_des
     (write-long (length _position_des) s)
     (dotimes (i (length _position_des))
       (sys::poke (elt _position_des i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; float32[] _speed_des
     (write-long (length _speed_des) s)
     (dotimes (i (length _speed_des))
       (sys::poke (elt _speed_des i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; uint8[] _current_kp
     (write-long (length _current_kp) s)
     (princ _current_kp s)
     ;; uint8[] _current_kd
     (write-long (length _current_kd) s)
     (princ _current_kd s)
     ;; uint8[] _speed_kp
     (write-long (length _speed_kp) s)
     (princ _speed_kp s)
     ;; uint8[] _speed_kd
     (write-long (length _speed_kd) s)
     (princ _speed_kd s)
     ;; uint8[] _position_kp
     (write-long (length _position_kp) s)
     (princ _position_kp s)
     ;; uint8[] _position_kd
     (write-long (length _position_kd) s)
     (princ _position_kd s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32[] _position_des
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _position_des (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _position_des i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; float32[] _speed_des
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _speed_des (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _speed_des i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; uint8[] _current_kp
   (let ((n (sys::peek buf ptr- :integer))) (incf ptr- 4)
     (setq _current_kp (make-array n :element-type :char))
     (replace _current_kp buf :start2 ptr-) (incf ptr- n))
   ;; uint8[] _current_kd
   (let ((n (sys::peek buf ptr- :integer))) (incf ptr- 4)
     (setq _current_kd (make-array n :element-type :char))
     (replace _current_kd buf :start2 ptr-) (incf ptr- n))
   ;; uint8[] _speed_kp
   (let ((n (sys::peek buf ptr- :integer))) (incf ptr- 4)
     (setq _speed_kp (make-array n :element-type :char))
     (replace _speed_kp buf :start2 ptr-) (incf ptr- n))
   ;; uint8[] _speed_kd
   (let ((n (sys::peek buf ptr- :integer))) (incf ptr- 4)
     (setq _speed_kd (make-array n :element-type :char))
     (replace _speed_kd buf :start2 ptr-) (incf ptr- n))
   ;; uint8[] _position_kp
   (let ((n (sys::peek buf ptr- :integer))) (incf ptr- 4)
     (setq _position_kp (make-array n :element-type :char))
     (replace _position_kp buf :start2 ptr-) (incf ptr- n))
   ;; uint8[] _position_kd
   (let ((n (sys::peek buf ptr- :integer))) (incf ptr- 4)
     (setq _position_kd (make-array n :element-type :char))
     (replace _position_kd buf :start2 ptr-) (incf ptr- n))
   ;;
   self)
  )

(setf (get signal_torso::torso_control :md5sum-) "1ef265c20ffbd4e92c2ffec96f296f0c")
(setf (get signal_torso::torso_control :datatype-) "signal_torso/torso_control")
(setf (get signal_torso::torso_control :definition-)
      "float32[] position_des
float32[] speed_des
uint8[] current_kp
uint8[] current_kd
uint8[] speed_kp
uint8[] speed_kd
uint8[] position_kp
uint8[] position_kd
")



(provide :signal_torso/torso_control "1ef265c20ffbd4e92c2ffec96f296f0c")


