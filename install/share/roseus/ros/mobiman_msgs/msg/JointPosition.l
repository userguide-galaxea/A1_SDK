;; Auto-generated. Do not edit!


(when (boundp 'mobiman_msgs::JointPosition)
  (if (not (find-package "MOBIMAN_MSGS"))
    (make-package "MOBIMAN_MSGS"))
  (shadow 'JointPosition (find-package "MOBIMAN_MSGS")))
(unless (find-package "MOBIMAN_MSGS::JOINTPOSITION")
  (make-package "MOBIMAN_MSGS::JOINTPOSITION"))

(in-package "ROS")
;;//! \htmlinclude JointPosition.msg.html


(defclass mobiman_msgs::JointPosition
  :super ros::object
  :slots (_pos ))

(defmethod mobiman_msgs::JointPosition
  (:init
   (&key
    ((:pos __pos) (make-array 0 :initial-element 0.0 :element-type :float))
    )
   (send-super :init)
   (setq _pos __pos)
   self)
  (:pos
   (&optional __pos)
   (if __pos (setq _pos __pos)) _pos)
  (:serialization-length
   ()
   (+
    ;; float32[] _pos
    (* 4    (length _pos)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32[] _pos
     (write-long (length _pos) s)
     (dotimes (i (length _pos))
       (sys::poke (elt _pos i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32[] _pos
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _pos (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _pos i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;;
   self)
  )

(setf (get mobiman_msgs::JointPosition :md5sum-) "2ddbdf76cbefd59cd9a914780fdf2963")
(setf (get mobiman_msgs::JointPosition :datatype-) "mobiman_msgs/JointPosition")
(setf (get mobiman_msgs::JointPosition :definition-)
      "float32[] pos
")



(provide :mobiman_msgs/JointPosition "2ddbdf76cbefd59cd9a914780fdf2963")


