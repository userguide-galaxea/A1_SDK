// Auto-generated. Do not edit!

// (in-package mobiman_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class ChassisCommand {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.steer_angles = null;
      this.wheel_speed = null;
    }
    else {
      if (initObj.hasOwnProperty('steer_angles')) {
        this.steer_angles = initObj.steer_angles
      }
      else {
        this.steer_angles = [];
      }
      if (initObj.hasOwnProperty('wheel_speed')) {
        this.wheel_speed = initObj.wheel_speed
      }
      else {
        this.wheel_speed = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ChassisCommand
    // Serialize message field [steer_angles]
    bufferOffset = _arraySerializer.float32(obj.steer_angles, buffer, bufferOffset, null);
    // Serialize message field [wheel_speed]
    bufferOffset = _arraySerializer.float32(obj.wheel_speed, buffer, bufferOffset, null);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ChassisCommand
    let len;
    let data = new ChassisCommand(null);
    // Deserialize message field [steer_angles]
    data.steer_angles = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [wheel_speed]
    data.wheel_speed = _arrayDeserializer.float32(buffer, bufferOffset, null)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += 4 * object.steer_angles.length;
    length += 4 * object.wheel_speed.length;
    return length + 8;
  }

  static datatype() {
    // Returns string type for a message object
    return 'mobiman_msgs/ChassisCommand';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '913eccfc8322dbc90f30c89655e26445';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # for 4w4s vehicles, the order is [fl, fr, rl ,rr]
    float32[] steer_angles
    float32[] wheel_speed
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ChassisCommand(null);
    if (msg.steer_angles !== undefined) {
      resolved.steer_angles = msg.steer_angles;
    }
    else {
      resolved.steer_angles = []
    }

    if (msg.wheel_speed !== undefined) {
      resolved.wheel_speed = msg.wheel_speed;
    }
    else {
      resolved.wheel_speed = []
    }

    return resolved;
    }
};

module.exports = ChassisCommand;
