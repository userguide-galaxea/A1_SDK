;; Auto-generated. Do not edit!


(when (boundp 'ocs2_msgs::mode_schedule)
  (if (not (find-package "OCS2_MSGS"))
    (make-package "OCS2_MSGS"))
  (shadow 'mode_schedule (find-package "OCS2_MSGS")))
(unless (find-package "OCS2_MSGS::MODE_SCHEDULE")
  (make-package "OCS2_MSGS::MODE_SCHEDULE"))

(in-package "ROS")
;;//! \htmlinclude mode_schedule.msg.html


(defclass ocs2_msgs::mode_schedule
  :super ros::object
  :slots (_eventTimes _modeSequence ))

(defmethod ocs2_msgs::mode_schedule
  (:init
   (&key
    ((:eventTimes __eventTimes) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:modeSequence __modeSequence) (make-array 0 :initial-element 0 :element-type :integer))
    )
   (send-super :init)
   (setq _eventTimes __eventTimes)
   (setq _modeSequence __modeSequence)
   self)
  (:eventTimes
   (&optional __eventTimes)
   (if __eventTimes (setq _eventTimes __eventTimes)) _eventTimes)
  (:modeSequence
   (&optional __modeSequence)
   (if __modeSequence (setq _modeSequence __modeSequence)) _modeSequence)
  (:serialization-length
   ()
   (+
    ;; float64[] _eventTimes
    (* 8    (length _eventTimes)) 4
    ;; int8[] _modeSequence
    (* 1    (length _modeSequence)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64[] _eventTimes
     (write-long (length _eventTimes) s)
     (dotimes (i (length _eventTimes))
       (sys::poke (elt _eventTimes i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; int8[] _modeSequence
     (write-long (length _modeSequence) s)
     (dotimes (i (length _modeSequence))
       (write-byte (elt _modeSequence i) s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64[] _eventTimes
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _eventTimes (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _eventTimes i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     ))
   ;; int8[] _modeSequence
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _modeSequence (instantiate integer-vector n))
     (dotimes (i n)
     (setf (elt _modeSequence i) (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> (elt _modeSequence i) 127) (setf (elt _modeSequence i) (- (elt _modeSequence i) 256)))
     ))
   ;;
   self)
  )

(setf (get ocs2_msgs::mode_schedule :md5sum-) "9aa75d28b36c292b797e36e87614038a")
(setf (get ocs2_msgs::mode_schedule :datatype-) "ocs2_msgs/mode_schedule")
(setf (get ocs2_msgs::mode_schedule :definition-)
      "# MPC mode sequence

float64[] eventTimes           # event times: its size is equal to the size of phaseSequence minus one
int8[]    modeSequence         # mode sequence: e.g., for a quadrupedal robot, it is in the set {0, 1,..., 15}
")



(provide :ocs2_msgs/mode_schedule "9aa75d28b36c292b797e36e87614038a")


