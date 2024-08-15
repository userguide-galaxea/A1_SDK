
(cl:in-package :asdf)

(defsystem "signal_arm-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :std_msgs-msg
)
  :components ((:file "_package")
    (:file "arm_control" :depends-on ("_package_arm_control"))
    (:file "_package_arm_control" :depends-on ("_package"))
    (:file "control" :depends-on ("_package_control"))
    (:file "_package_control" :depends-on ("_package"))
    (:file "control_stamped" :depends-on ("_package_control_stamped"))
    (:file "_package_control_stamped" :depends-on ("_package"))
    (:file "gripper_joint_command" :depends-on ("_package_gripper_joint_command"))
    (:file "_package_gripper_joint_command" :depends-on ("_package"))
    (:file "gripper_position_control" :depends-on ("_package_gripper_position_control"))
    (:file "_package_gripper_position_control" :depends-on ("_package"))
    (:file "motor_error" :depends-on ("_package_motor_error"))
    (:file "_package_motor_error" :depends-on ("_package"))
    (:file "status" :depends-on ("_package_status"))
    (:file "_package_status" :depends-on ("_package"))
    (:file "status_stamped" :depends-on ("_package_status_stamped"))
    (:file "_package_status_stamped" :depends-on ("_package"))
  ))