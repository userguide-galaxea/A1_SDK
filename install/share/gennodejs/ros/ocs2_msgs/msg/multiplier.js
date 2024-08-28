// Auto-generated. Do not edit!

// (in-package ocs2_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class multiplier {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.time = null;
      this.penalty = null;
      this.lagrangian = null;
    }
    else {
      if (initObj.hasOwnProperty('time')) {
        this.time = initObj.time
      }
      else {
        this.time = 0.0;
      }
      if (initObj.hasOwnProperty('penalty')) {
        this.penalty = initObj.penalty
      }
      else {
        this.penalty = 0.0;
      }
      if (initObj.hasOwnProperty('lagrangian')) {
        this.lagrangian = initObj.lagrangian
      }
      else {
        this.lagrangian = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type multiplier
    // Serialize message field [time]
    bufferOffset = _serializer.float32(obj.time, buffer, bufferOffset);
    // Serialize message field [penalty]
    bufferOffset = _serializer.float32(obj.penalty, buffer, bufferOffset);
    // Serialize message field [lagrangian]
    bufferOffset = _arraySerializer.float32(obj.lagrangian, buffer, bufferOffset, null);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type multiplier
    let len;
    let data = new multiplier(null);
    // Deserialize message field [time]
    data.time = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [penalty]
    data.penalty = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [lagrangian]
    data.lagrangian = _arrayDeserializer.float32(buffer, bufferOffset, null)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += 4 * object.lagrangian.length;
    return length + 12;
  }

  static datatype() {
    // Returns string type for a message object
    return 'ocs2_msgs/multiplier';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '8284394e15f2038e54705abd91aee001';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # MPC multiplier
    
    float32   time
    float32   penalty
    float32[] lagrangian
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new multiplier(null);
    if (msg.time !== undefined) {
      resolved.time = msg.time;
    }
    else {
      resolved.time = 0.0
    }

    if (msg.penalty !== undefined) {
      resolved.penalty = msg.penalty;
    }
    else {
      resolved.penalty = 0.0
    }

    if (msg.lagrangian !== undefined) {
      resolved.lagrangian = msg.lagrangian;
    }
    else {
      resolved.lagrangian = []
    }

    return resolved;
    }
};

module.exports = multiplier;
