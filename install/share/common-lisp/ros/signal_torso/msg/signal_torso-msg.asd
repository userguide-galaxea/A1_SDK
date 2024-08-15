
(cl:in-package :asdf)

(defsystem "signal_torso-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :std_msgs-msg
)
  :components ((:file "_package")
    (:file "arm_control" :depends-on ("_package_arm_control"))
    (:file "_package_arm_control" :depends-on ("_package"))
    (:file "status" :depends-on ("_package_status"))
    (:file "_package_status" :depends-on ("_package"))
    (:file "status_stamped" :depends-on ("_package_status_stamped"))
    (:file "_package_status_stamped" :depends-on ("_package"))
    (:file "torso_control" :depends-on ("_package_torso_control"))
    (:file "_package_torso_control" :depends-on ("_package"))
    (:file "torso_control_stamped" :depends-on ("_package_torso_control_stamped"))
    (:file "_package_torso_control_stamped" :depends-on ("_package"))
    (:file "torso_status" :depends-on ("_package_torso_status"))
    (:file "_package_torso_status" :depends-on ("_package"))
    (:file "torso_status_stamped" :depends-on ("_package_torso_status_stamped"))
    (:file "_package_torso_status_stamped" :depends-on ("_package"))
  ))