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

class Drivetrain {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.steer_angle_fl = null;
      this.steer_angle_fr = null;
      this.steer_angle_rl = null;
      this.steer_angle_rr = null;
      this.drive_speed_fl = null;
      this.drive_speed_fr = null;
      this.drive_speed_rl = null;
      this.drive_speed_rr = null;
      this.drive_angular_speed_fl = null;
      this.drive_angular_speed_fr = null;
      this.drive_angular_speed_rl = null;
      this.drive_angular_speed_rr = null;
      this.motion_mode = null;
    }
    else {
      if (initObj.hasOwnProperty('steer_angle_fl')) {
        this.steer_angle_fl = initObj.steer_angle_fl
      }
      else {
        this.steer_angle_fl = 0.0;
      }
      if (initObj.hasOwnProperty('steer_angle_fr')) {
        this.steer_angle_fr = initObj.steer_angle_fr
      }
      else {
        this.steer_angle_fr = 0.0;
      }
      if (initObj.hasOwnProperty('steer_angle_rl')) {
        this.steer_angle_rl = initObj.steer_angle_rl
      }
      else {
        this.steer_angle_rl = 0.0;
      }
      if (initObj.hasOwnProperty('steer_angle_rr')) {
        this.steer_angle_rr = initObj.steer_angle_rr
      }
      else {
        this.steer_angle_rr = 0.0;
      }
      if (initObj.hasOwnProperty('drive_speed_fl')) {
        this.drive_speed_fl = initObj.drive_speed_fl
      }
      else {
        this.drive_speed_fl = 0.0;
      }
      if (initObj.hasOwnProperty('drive_speed_fr')) {
        this.drive_speed_fr = initObj.drive_speed_fr
      }
      else {
        this.drive_speed_fr = 0.0;
      }
      if (initObj.hasOwnProperty('drive_speed_rl')) {
        this.drive_speed_rl = initObj.drive_speed_rl
      }
      else {
        this.drive_speed_rl = 0.0;
      }
      if (initObj.hasOwnProperty('drive_speed_rr')) {
        this.drive_speed_rr = initObj.drive_speed_rr
      }
      else {
        this.drive_speed_rr = 0.0;
      }
      if (initObj.hasOwnProperty('drive_angular_speed_fl')) {
        this.drive_angular_speed_fl = initObj.drive_angular_speed_fl
      }
      else {
        this.drive_angular_speed_fl = 0.0;
      }
      if (initObj.hasOwnProperty('drive_angular_speed_fr')) {
        this.drive_angular_speed_fr = initObj.drive_angular_speed_fr
      }
      else {
        this.drive_angular_speed_fr = 0.0;
      }
      if (initObj.hasOwnProperty('drive_angular_speed_rl')) {
        this.drive_angular_speed_rl = initObj.drive_angular_speed_rl
      }
      else {
        this.drive_angular_speed_rl = 0.0;
      }
      if (initObj.hasOwnProperty('drive_angular_speed_rr')) {
        this.drive_angular_speed_rr = initObj.drive_angular_speed_rr
      }
      else {
        this.drive_angular_speed_rr = 0.0;
      }
      if (initObj.hasOwnProperty('motion_mode')) {
        this.motion_mode = initObj.motion_mode
      }
      else {
        this.motion_mode = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Drivetrain
    // Serialize message field [steer_angle_fl]
    bufferOffset = _serializer.float32(obj.steer_angle_fl, buffer, bufferOffset);
    // Serialize message field [steer_angle_fr]
    bufferOffset = _serializer.float32(obj.steer_angle_fr, buffer, bufferOffset);
    // Serialize message field [steer_angle_rl]
    bufferOffset = _serializer.float32(obj.steer_angle_rl, buffer, bufferOffset);
    // Serialize message field [steer_angle_rr]
    bufferOffset = _serializer.float32(obj.steer_angle_rr, buffer, bufferOffset);
    // Serialize message field [drive_speed_fl]
    bufferOffset = _serializer.float32(obj.drive_speed_fl, buffer, bufferOffset);
    // Serialize message field [drive_speed_fr]
    bufferOffset = _serializer.float32(obj.drive_speed_fr, buffer, bufferOffset);
    // Serialize message field [drive_speed_rl]
    bufferOffset = _serializer.float32(obj.drive_speed_rl, buffer, bufferOffset);
    // Serialize message field [drive_speed_rr]
    bufferOffset = _serializer.float32(obj.drive_speed_rr, buffer, bufferOffset);
    // Serialize message field [drive_angular_speed_fl]
    bufferOffset = _serializer.float32(obj.drive_angular_speed_fl, buffer, bufferOffset);
    // Serialize message field [drive_angular_speed_fr]
    bufferOffset = _serializer.float32(obj.drive_angular_speed_fr, buffer, bufferOffset);
    // Serialize message field [drive_angular_speed_rl]
    bufferOffset = _serializer.float32(obj.drive_angular_speed_rl, buffer, bufferOffset);
    // Serialize message field [drive_angular_speed_rr]
    bufferOffset = _serializer.float32(obj.drive_angular_speed_rr, buffer, bufferOffset);
    // Serialize message field [motion_mode]
    bufferOffset = _serializer.int32(obj.motion_mode, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Drivetrain
    let len;
    let data = new Drivetrain(null);
    // Deserialize message field [steer_angle_fl]
    data.steer_angle_fl = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [steer_angle_fr]
    data.steer_angle_fr = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [steer_angle_rl]
    data.steer_angle_rl = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [steer_angle_rr]
    data.steer_angle_rr = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [drive_speed_fl]
    data.drive_speed_fl = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [drive_speed_fr]
    data.drive_speed_fr = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [drive_speed_rl]
    data.drive_speed_rl = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [drive_speed_rr]
    data.drive_speed_rr = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [drive_angular_speed_fl]
    data.drive_angular_speed_fl = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [drive_angular_speed_fr]
    data.drive_angular_speed_fr = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [drive_angular_speed_rl]
    data.drive_angular_speed_rl = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [drive_angular_speed_rr]
    data.drive_angular_speed_rr = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [motion_mode]
    data.motion_mode = _deserializer.int32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 52;
  }

  static datatype() {
    // Returns string type for a message object
    return 'signal_chassis/Drivetrain';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '46db51bd1f2094081def30cd2e74f33b';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float32 steer_angle_fl
    float32 steer_angle_fr
    float32 steer_angle_rl
    float32 steer_angle_rr
    float32 drive_speed_fl
    float32 drive_speed_fr
    float32 drive_speed_rl
    float32 drive_speed_rr
    float32 drive_angular_speed_fl
    float32 drive_angular_speed_fr
    float32 drive_angular_speed_rl
    float32 drive_angular_speed_rr
    int32 motion_mode
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Drivetrain(null);
    if (msg.steer_angle_fl !== undefined) {
      resolved.steer_angle_fl = msg.steer_angle_fl;
    }
    else {
      resolved.steer_angle_fl = 0.0
    }

    if (msg.steer_angle_fr !== undefined) {
      resolved.steer_angle_fr = msg.steer_angle_fr;
    }
    else {
      resolved.steer_angle_fr = 0.0
    }

    if (msg.steer_angle_rl !== undefined) {
      resolved.steer_angle_rl = msg.steer_angle_rl;
    }
    else {
      resolved.steer_angle_rl = 0.0
    }

    if (msg.steer_angle_rr !== undefined) {
      resolved.steer_angle_rr = msg.steer_angle_rr;
    }
    else {
      resolved.steer_angle_rr = 0.0
    }

    if (msg.drive_speed_fl !== undefined) {
      resolved.drive_speed_fl = msg.drive_speed_fl;
    }
    else {
      resolved.drive_speed_fl = 0.0
    }

    if (msg.drive_speed_fr !== undefined) {
      resolved.drive_speed_fr = msg.drive_speed_fr;
    }
    else {
      resolved.drive_speed_fr = 0.0
    }

    if (msg.drive_speed_rl !== undefined) {
      resolved.drive_speed_rl = msg.drive_speed_rl;
    }
    else {
      resolved.drive_speed_rl = 0.0
    }

    if (msg.drive_speed_rr !== undefined) {
      resolved.drive_speed_rr = msg.drive_speed_rr;
    }
    else {
      resolved.drive_speed_rr = 0.0
    }

    if (msg.drive_angular_speed_fl !== undefined) {
      resolved.drive_angular_speed_fl = msg.drive_angular_speed_fl;
    }
    else {
      resolved.drive_angular_speed_fl = 0.0
    }

    if (msg.drive_angular_speed_fr !== undefined) {
      resolved.drive_angular_speed_fr = msg.drive_angular_speed_fr;
    }
    else {
      resolved.drive_angular_speed_fr = 0.0
    }

    if (msg.drive_angular_speed_rl !== undefined) {
      resolved.drive_angular_speed_rl = msg.drive_angular_speed_rl;
    }
    else {
      resolved.drive_angular_speed_rl = 0.0
    }

    if (msg.drive_angular_speed_rr !== undefined) {
      resolved.drive_angular_speed_rr = msg.drive_angular_speed_rr;
    }
    else {
      resolved.drive_angular_speed_rr = 0.0
    }

    if (msg.motion_mode !== undefined) {
      resolved.motion_mode = msg.motion_mode;
    }
    else {
      resolved.motion_mode = 0
    }

    return resolved;
    }
};

module.exports = Drivetrain;
