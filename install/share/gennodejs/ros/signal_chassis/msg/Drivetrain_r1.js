// Auto-generated. Do not edit!

// (in-package signal_chassis.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class Drivetrain_r1 {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.steer_angle_front_left = null;
      this.steer_angle_front_right = null;
      this.steer_angle_rear = null;
      this.drive_speed_front_left = null;
      this.drive_speed_front_right = null;
      this.drive_speed_rear = null;
      this.drive_angular_speed_front_left = null;
      this.drive_angular_speed_front_right = null;
      this.drive_angular_speed_rear = null;
    }
    else {
      if (initObj.hasOwnProperty('steer_angle_front_left')) {
        this.steer_angle_front_left = initObj.steer_angle_front_left
      }
      else {
        this.steer_angle_front_left = 0.0;
      }
      if (initObj.hasOwnProperty('steer_angle_front_right')) {
        this.steer_angle_front_right = initObj.steer_angle_front_right
      }
      else {
        this.steer_angle_front_right = 0.0;
      }
      if (initObj.hasOwnProperty('steer_angle_rear')) {
        this.steer_angle_rear = initObj.steer_angle_rear
      }
      else {
        this.steer_angle_rear = 0.0;
      }
      if (initObj.hasOwnProperty('drive_speed_front_left')) {
        this.drive_speed_front_left = initObj.drive_speed_front_left
      }
      else {
        this.drive_speed_front_left = 0.0;
      }
      if (initObj.hasOwnProperty('drive_speed_front_right')) {
        this.drive_speed_front_right = initObj.drive_speed_front_right
      }
      else {
        this.drive_speed_front_right = 0.0;
      }
      if (initObj.hasOwnProperty('drive_speed_rear')) {
        this.drive_speed_rear = initObj.drive_speed_rear
      }
      else {
        this.drive_speed_rear = 0.0;
      }
      if (initObj.hasOwnProperty('drive_angular_speed_front_left')) {
        this.drive_angular_speed_front_left = initObj.drive_angular_speed_front_left
      }
      else {
        this.drive_angular_speed_front_left = 0.0;
      }
      if (initObj.hasOwnProperty('drive_angular_speed_front_right')) {
        this.drive_angular_speed_front_right = initObj.drive_angular_speed_front_right
      }
      else {
        this.drive_angular_speed_front_right = 0.0;
      }
      if (initObj.hasOwnProperty('drive_angular_speed_rear')) {
        this.drive_angular_speed_rear = initObj.drive_angular_speed_rear
      }
      else {
        this.drive_angular_speed_rear = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Drivetrain_r1
    // Serialize message field [steer_angle_front_left]
    bufferOffset = _serializer.float32(obj.steer_angle_front_left, buffer, bufferOffset);
    // Serialize message field [steer_angle_front_right]
    bufferOffset = _serializer.float32(obj.steer_angle_front_right, buffer, bufferOffset);
    // Serialize message field [steer_angle_rear]
    bufferOffset = _serializer.float32(obj.steer_angle_rear, buffer, bufferOffset);
    // Serialize message field [drive_speed_front_left]
    bufferOffset = _serializer.float32(obj.drive_speed_front_left, buffer, bufferOffset);
    // Serialize message field [drive_speed_front_right]
    bufferOffset = _serializer.float32(obj.drive_speed_front_right, buffer, bufferOffset);
    // Serialize message field [drive_speed_rear]
    bufferOffset = _serializer.float32(obj.drive_speed_rear, buffer, bufferOffset);
    // Serialize message field [drive_angular_speed_front_left]
    bufferOffset = _serializer.float32(obj.drive_angular_speed_front_left, buffer, bufferOffset);
    // Serialize message field [drive_angular_speed_front_right]
    bufferOffset = _serializer.float32(obj.drive_angular_speed_front_right, buffer, bufferOffset);
    // Serialize message field [drive_angular_speed_rear]
    bufferOffset = _serializer.float32(obj.drive_angular_speed_rear, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Drivetrain_r1
    let len;
    let data = new Drivetrain_r1(null);
    // Deserialize message field [steer_angle_front_left]
    data.steer_angle_front_left = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [steer_angle_front_right]
    data.steer_angle_front_right = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [steer_angle_rear]
    data.steer_angle_rear = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [drive_speed_front_left]
    data.drive_speed_front_left = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [drive_speed_front_right]
    data.drive_speed_front_right = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [drive_speed_rear]
    data.drive_speed_rear = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [drive_angular_speed_front_left]
    data.drive_angular_speed_front_left = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [drive_angular_speed_front_right]
    data.drive_angular_speed_front_right = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [drive_angular_speed_rear]
    data.drive_angular_speed_rear = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 36;
  }

  static datatype() {
    // Returns string type for a message object
    return 'signal_chassis/Drivetrain_r1';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'd64ee0e637d15c359801b97bc246779d';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float32 steer_angle_front_left
    float32 steer_angle_front_right
    float32 steer_angle_rear
    float32 drive_speed_front_left
    float32 drive_speed_front_right
    float32 drive_speed_rear
    float32 drive_angular_speed_front_left
    float32 drive_angular_speed_front_right
    float32 drive_angular_speed_rear
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Drivetrain_r1(null);
    if (msg.steer_angle_front_left !== undefined) {
      resolved.steer_angle_front_left = msg.steer_angle_front_left;
    }
    else {
      resolved.steer_angle_front_left = 0.0
    }

    if (msg.steer_angle_front_right !== undefined) {
      resolved.steer_angle_front_right = msg.steer_angle_front_right;
    }
    else {
      resolved.steer_angle_front_right = 0.0
    }

    if (msg.steer_angle_rear !== undefined) {
      resolved.steer_angle_rear = msg.steer_angle_rear;
    }
    else {
      resolved.steer_angle_rear = 0.0
    }

    if (msg.drive_speed_front_left !== undefined) {
      resolved.drive_speed_front_left = msg.drive_speed_front_left;
    }
    else {
      resolved.drive_speed_front_left = 0.0
    }

    if (msg.drive_speed_front_right !== undefined) {
      resolved.drive_speed_front_right = msg.drive_speed_front_right;
    }
    else {
      resolved.drive_speed_front_right = 0.0
    }

    if (msg.drive_speed_rear !== undefined) {
      resolved.drive_speed_rear = msg.drive_speed_rear;
    }
    else {
      resolved.drive_speed_rear = 0.0
    }

    if (msg.drive_angular_speed_front_left !== undefined) {
      resolved.drive_angular_speed_front_left = msg.drive_angular_speed_front_left;
    }
    else {
      resolved.drive_angular_speed_front_left = 0.0
    }

    if (msg.drive_angular_speed_front_right !== undefined) {
      resolved.drive_angular_speed_front_right = msg.drive_angular_speed_front_right;
    }
    else {
      resolved.drive_angular_speed_front_right = 0.0
    }

    if (msg.drive_angular_speed_rear !== undefined) {
      resolved.drive_angular_speed_rear = msg.drive_angular_speed_rear;
    }
    else {
      resolved.drive_angular_speed_rear = 0.0
    }

    return resolved;
    }
};

module.exports = Drivetrain_r1;
