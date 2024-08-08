
(cl:in-package :asdf)

(defsystem "signal_chassis-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :std_msgs-msg
)
  :components ((:file "_package")
    (:file "Drivetrain" :depends-on ("_package_Drivetrain"))
    (:file "_package_Drivetrain" :depends-on ("_package"))
    (:file "DrivetrainStamped" :depends-on ("_package_DrivetrainStamped"))
    (:file "_package_DrivetrainStamped" :depends-on ("_package"))
    (:file "DrivetrainStamped_r1" :depends-on ("_package_DrivetrainStamped_r1"))
    (:file "_package_DrivetrainStamped_r1" :depends-on ("_package"))
    (:file "Drivetrain_r1" :depends-on ("_package_Drivetrain_r1"))
    (:file "_package_Drivetrain_r1" :depends-on ("_package"))
    (:file "controller_signal" :depends-on ("_package_controller_signal"))
    (:file "_package_controller_signal" :depends-on ("_package"))
    (:file "controller_signal_stamped" :depends-on ("_package_controller_signal_stamped"))
    (:file "_package_controller_signal_stamped" :depends-on ("_package"))
  ))