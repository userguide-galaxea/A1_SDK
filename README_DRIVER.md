# A1 Driver Kit

## Table of Contents

- [A1 Driver SDK](#a1-driver-sdk)
  - [Table of Contents](#table-of-contents)
  - [Project Introduction](#project-introduction)
  - [Software Dependency](#software-dependency)
  - [Installation](#installation)
  - [Usage and Development](#usage-and-development)
  - [Interface Introduction](#interface-introduction)
    - [Topic Names and Message Types](#topic-names-and-message-types)
    - [Topic Field Details](#topic-field-details)
    - [Gripper Control Code Examples](#gripper-control-code-examples)
    - [Fault Code Locations and Corresponding States](#fault-code-locations-and-corresponding-states)

## Project Introduction

We developed an efficient driver for converting the serial signals through the slave computer and finally released it as ROS (Robot Operating System) topics. This driver not only enables the control of the slave computer but also obtains the feedback information and error codes of the device, thus enabling two-way communication and real-time control.

## Software Dependency

- Ubuntu 20.04 LTS
- ROS Noetic

## Installation

This SDK does not need to be recompiled, please refer to the Developing and Operating Tutorial to use directly.

## Usage and Development Tutorials

1. For the first time, after confirming the power supply and USB connection, run the following command to modify the read and write permission of serial port files:

    ```sh
    sudo chmod 777 /dev/ttyACM0
    ```

2. After confirming the modification, you can initialize the SDK:

    ```sh
    cd install/
    source setup.bash
    roslaunch signal_arm single_arm_node.launch
    ```

## Interface Introduction

| Topic Name                     | Description                        | Message Type                        |
| ------------------------------ | ---------------------------------- | ----------------------------------- |
| /joint_states_host             | Robot Arm Joint State Feedback     | sensor_msgs/JointState              |
| /arm_status_host               | Robot Arm Motor State Feedback     | signal_arm/arm_status               |
| /arm_joint_command_host        | Robot Arm Control Interface        | signal_arm/arm_control              |
| /gripper_force_control_host    | Gripper Force Control Interface    | signal_arm/gripper_joint_command    |
| /gripper_position_control_host | Gripper Position Control Interface | signal_arm/gripper_position_control |
| /gripper_stroke_host           | Gripper Stroke Feedback Interface  | sensor_msgs/JointState              |

### Topic Field Details

| Topic Name                     | Field                               | Description                        | Data Type | Unit  | Remarks                   |
| ------------------------------ | ----------------------------------- | ---------------------------------- | --------- | ----- | ------------------------- |
| /joint_states_host             | header                              | Standard ROS Header                | -         | -     | -                         |
|                                | name                                | Robot Arm Joint Names              | string[]  | -     | -                         |
|                                | position                            | Robot Arm Joint Positions          | float64[] | rad   | -                         |
|                                | velocity                            | Robot Arm Joint Velocities         | float64[] | rad/s | -                         |
|                                | effort                              | Robot Arm Joint Efforts            | float64[] | Nm    | -                         |
| /arm_status_host               | header                              | Standard ROS Header                | -         | -     | -                         |
|                                | data.name                           | Robot Arm Joint Names              | string[]  | -     | -                         |
|                                | data.motor_errors.error_code        | Robot Arm Joint Error Codes        | float32[] | -     | -                         |
|                                | data.motor_errors.error_description | Robot Arm Joint Error Descriptions | float32[] | °C    | -                         |
| /arm_joint_command_host        | header                              | Standard ROS Header                | -         | -     | -                         |
|                                | p_des                               | Desired Position                   | float32[] | rad   | -                         |
|                                | v_des                               | Desired Velocity                   | float32[] | rad/s | -                         |
|                                | t_ff                                | Desired Torque                     | float32[] | Nm    | -                         |
|                                | kp                                  | Position Proportional Gain         | float32[] | -     | -                         |
|                                | kd                                  | Position Derivative Gain           | float32[] | -     | -                         |
|                                | mode                                | Control Mode                       | uint8     | -     | Default is 0, MIT control |
| /gripper_force_control_host    | header                              | Standard ROS Header                | -         | -     | -                         |
|                                | gripper_force                       | Gripper Force                      | float32   | N     | -                         |
| /gripper_position_control_host | header                              | Standard ROS Header                | -         | -     | -                         |
|                                | gripper_stroke                      | Desired Gripper Stroke             | float32   | mm    | -                         |
| /gripper_stroke_host           | header                              | Standard ROS Header                | -         | -     | -                         |
|                                | name                                | Gripper Names                      | string[]  | -     | -                         |
|                                | position                            | Gripper Stroke                     | float64[] | mm    | -                         |
|                                | velocity                            | Gripper Velocity                   | float64[] | -     | -                         |
|                                | effort                              | Gripper Effort                     | float64[] | -     | -                         |

### Gripper Control Code Examples

1. Gripper Force Control Interface

```sh
# Control the gripper to a specified force
# Positive gripper_force closes the gripper; negative gripper_force opens it
rostopic pub /gripper_force_control_host signal_arm/gripper_joint_command "header:
  seq: 0
  stamp:
    secs: 0
    nsecs: 0
  frame_id: ''
gripper_force: 10.0"
```

2. Gripper Position Control Interface

```sh
# Control the gripper to a specified position, 60 for open, 0 for closed
rostopic pub /gripper_position_control_host signal_arm/gripper_position_control "header:
  seq: 0
  stamp:
    secs: 0
    nsecs: 0
  frame_id: ''
gripper_stroke: 40.0"
```

### Fault Code Locations and Corresponding States

| Fault Code Location | Corresponding State                                      |
| ------------------- | -------------------------------------------------------- |
| 0                   | ACU Feedback: Disabled                                   |
| 1                   | ACU Feedback: Enabled                                    |
| 2                   | ACU Feedback: Motor Disconnected                         |
| 3                   | ACU Feedback: Position Jump                              |
| 4                   | ACU Feedback: Continuous High Current                    |
| 5                   | ACU Feedback: Huge Torque                                |
| 6                   | ACU Feedback: ECU -> ACU Timeout                         |
| 7                   | ACU Feedback: Exceed Position Limit                      |
| 8                   | ACU Feedback: Exceed Speed Limit                         |
| 9                   | ACU Feedback: Exceed Torque Limit                        |
| 10                  | ACU Feedback: Overvoltage                                |
| 11                  | ACU Feedback: Undervoltage                               |
| 12                  | ACU Feedback: Overcurrent                                |
| 13                  | ACU Feedback: MOS Overtemperature                        |
| 14                  | ACU Feedback: Motor Winding Overtemperature              |
| 15                  | ACU Feedback: Communication Loss                         |
| 16                  | ACU Feedback: Overload                                   |
| 17                  | Driver Feedback: Serial Connection Lost (No Device File) |
| 18                  | Driver Feedback: Device File Connected but No Message    |
| 19                  | Driver Feedback: Serial Read/Write Fault                 |
| 20                  | Driver Feedback: Feedback Overrun                        |