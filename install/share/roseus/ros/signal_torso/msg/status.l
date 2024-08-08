;; Auto-generated. Do not edit!


(when (boundp 'signal_torso::status)
  (if (not (find-package "SIGNAL_TORSO"))
    (make-package "SIGNAL_TORSO"))
  (shadow 'status (find-package "SIGNAL_TORSO")))
(unless (find-package "SIGNAL_TORSO::STATUS")
  (make-package "SIGNAL_TORSO::STATUS"))

(in-package "ROS")
;;//! \htmlinclude status.msg.html


(defclass signal_torso::status
  :super ros::object
  :slots (_name _error_code _t_mos _t_rotor ))

(defmethod signal_torso::status
  (:init
   (&key
    ((:name __name) (let (r) (dotimes (i 0) (push "" r)) r))
    ((:error_code __error_code) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:t_mos __t_mos) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:t_rotor __t_rotor) (make-array 0 :initial-element 0.0 :element-type :float))
    )
   (send-super :init)
   (setq _name __name)
   (setq _error_code __error_code)
   (setq _t_mos __t_mos)
   (setq _t_rotor __t_rotor)
   self)
  (:name
   (&optional __name)
   (if __name (setq _name __name)) _name)
  (:error_code
   (&optional __error_code)
   (if __error_code (setq _error_code __error_code)) _error_code)
  (:t_mos
   (&optional __t_mos)
   (if __t_mos (setq _t_mos __t_mos)) _t_mos)
  (:t_rotor
   (&optional __t_rotor)
   (if __t_rotor (setq _t_rotor __t_rotor)) _t_rotor)
  (:serialization-length
   ()
   (+
    ;; string[] _name
    (apply #'+ (mapcar #'(lambda (x) (+ 4 (length x))) _name)) 4
    ;; float32[] _error_code
    (* 4    (length _error_code)) 4
    ;; float32[] _t_mos
    (* 4    (length _t_mos)) 4
    ;; float32[] _t_rotor
    (* 4    (length _t_rotor)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string[] _name
     (write-long (length _name) s)
     (dolist (elem _name)
       (write-long (length elem) s) (princ elem s)
       )
     ;; float32[] _error_code
     (write-long (length _error_code) s)
     (dotimes (i (length _error_code))
       (sys::poke (elt _error_code i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; float32[] _t_mos
     (write-long (length _t_mos) s)
     (dotimes (i (length _t_mos))
       (sys::poke (elt _t_mos i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; float32[] _t_rotor
     (write-long (length _t_rotor) s)
     (dotimes (i (length _t_rotor))
       (sys::poke (elt _t_rotor i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string[] _name
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _name (make-list n))
     (dotimes (i n)
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setf (elt _name i) (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
     ))
   ;; float32[] _error_code
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _error_code (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _error_code i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; float32[] _t_mos
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _t_mos (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _t_mos i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; float32[] _t_rotor
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _t_rotor (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _t_rotor i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;;
   self)
  )

(setf (get signal_torso::status :md5sum-) "cdb5a2cf356c951d5ba2c2340b5e26f1")
(setf (get signal_torso::status :datatype-) "signal_torso/status")
(setf (get signal_torso::status :definition-)
      "string[] name
float32[] error_code
float32[] t_mos
float32[] t_rotor
")



(provide :signal_torso/status "cdb5a2cf356c951d5ba2c2340b5e26f1")


