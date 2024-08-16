
(cl:in-package :asdf)

(defsystem "signal_torso-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "FunctionFrame" :depends-on ("_package_FunctionFrame"))
    (:file "_package_FunctionFrame" :depends-on ("_package"))
  ))