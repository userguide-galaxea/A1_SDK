;; Auto-generated. Do not edit!


(when (boundp 'mobiman_msgs::CameraDetection)
  (if (not (find-package "MOBIMAN_MSGS"))
    (make-package "MOBIMAN_MSGS"))
  (shadow 'CameraDetection (find-package "MOBIMAN_MSGS")))
(unless (find-package "MOBIMAN_MSGS::CAMERADETECTION")
  (make-package "MOBIMAN_MSGS::CAMERADETECTION"))

(in-package "ROS")
;;//! \htmlinclude CameraDetection.msg.html
(if (not (find-package "SENSOR_MSGS"))
  (ros::roseus-add-msgs "sensor_msgs"))
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass mobiman_msgs::CameraDetection
  :super ros::object
  :slots (_header _source_img _mask ))

(defmethod mobiman_msgs::CameraDetection
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:source_img __source_img) (instance sensor_msgs::Image :init))
    ((:mask __mask) (instance mobiman_msgs::Mask :init))
    )
   (send-super :init)
   (setq _header __header)
   (setq _source_img __source_img)
   (setq _mask __mask)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:source_img
   (&rest __source_img)
   (if (keywordp (car __source_img))
       (send* _source_img __source_img)
     (progn
       (if __source_img (setq _source_img (car __source_img)))
       _source_img)))
  (:mask
   (&rest __mask)
   (if (keywordp (car __mask))
       (send* _mask __mask)
     (progn
       (if __mask (setq _mask (car __mask)))
       _mask)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; sensor_msgs/Image _source_img
    (send _source_img :serialization-length)
    ;; mobiman_msgs/Mask _mask
    (send _mask :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; sensor_msgs/Image _source_img
       (send _source_img :serialize s)
     ;; mobiman_msgs/Mask _mask
       (send _mask :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; sensor_msgs/Image _source_img
     (send _source_img :deserialize buf ptr-) (incf ptr- (send _source_img :serialization-length))
   ;; mobiman_msgs/Mask _mask
     (send _mask :deserialize buf ptr-) (incf ptr- (send _mask :serialization-length))
   ;;
   self)
  )

(setf (get mobiman_msgs::CameraDetection :md5sum-) "a9d0a9437372acb4fb00e7aff83be190")
(setf (get mobiman_msgs::CameraDetection :datatype-) "mobiman_msgs/CameraDetection")
(setf (get mobiman_msgs::CameraDetection :definition-)
      "Header header
sensor_msgs/Image source_img
Mask mask

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: sensor_msgs/Image
# This message contains an uncompressed image
# (0, 0) is at top-left corner of image
#

Header header        # Header timestamp should be acquisition time of image
                     # Header frame_id should be optical frame of camera
                     # origin of frame should be optical center of camera
                     # +x should point to the right in the image
                     # +y should point down in the image
                     # +z should point into to plane of the image
                     # If the frame_id here and the frame_id of the CameraInfo
                     # message associated with the image conflict
                     # the behavior is undefined

uint32 height         # image height, that is, number of rows
uint32 width          # image width, that is, number of columns

# The legal values for encoding are in file src/image_encodings.cpp
# If you want to standardize a new string format, join
# ros-users@lists.sourceforge.net and send an email proposing a new encoding.

string encoding       # Encoding of pixels -- channel meaning, ordering, size
                      # taken from the list of strings in include/sensor_msgs/image_encodings.h

uint8 is_bigendian    # is this data bigendian?
uint32 step           # Full row length in bytes
uint8[] data          # actual matrix data, size is (step * rows)

================================================================================
MSG: mobiman_msgs/Mask
Header header
uint16 height
uint16 width
uint8[] data # size h * w, array of mask instance
uint8[] mask_types # size number of instance
string[] instance_description # size number of instance
")



(provide :mobiman_msgs/CameraDetection "a9d0a9437372acb4fb00e7aff83be190")


