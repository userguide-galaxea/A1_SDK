// Auto-generated. Do not edit!

// (in-package signal_arm.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let motor_error = require('./motor_error.js');

//-----------------------------------------------------------

class status {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.name = null;
      this.motor_errors = null;
    }
    else {
      if (initObj.hasOwnProperty('name')) {
        this.name = initObj.name
      }
      else {
        this.name = [];
      }
      if (initObj.hasOwnProperty('motor_errors')) {
        this.motor_errors = initObj.motor_errors
      }
      else {
        this.motor_errors = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type status
    // Serialize message field [name]
    bufferOffset = _arraySerializer.string(obj.name, buffer, bufferOffset, null);
    // Serialize message field [motor_errors]
    // Serialize the length for message field [motor_errors]
    bufferOffset = _serializer.uint32(obj.motor_errors.length, buffer, bufferOffset);
    obj.motor_errors.forEach((val) => {
      bufferOffset = motor_error.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type status
    let len;
    let data = new status(null);
    // Deserialize message field [name]
    data.name = _arrayDeserializer.string(buffer, bufferOffset, null)
    // Deserialize message field [motor_errors]
    // Deserialize array length for message field [motor_errors]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.motor_errors = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.motor_errors[i] = motor_error.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    object.name.forEach((val) => {
      length += 4 + _getByteLength(val);
    });
    object.motor_errors.forEach((val) => {
      length += motor_error.getMessageSize(val);
    });
    return length + 8;
  }

  static datatype() {
    // Returns string type for a message object
    return 'signal_arm/status';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '39b832c9a7480392677ff5c66f1fabe0';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string[] name
    motor_error[] motor_errors
    ================================================================================
    MSG: signal_arm/motor_error
    uint32 error_code
    string[] error_description
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new status(null);
    if (msg.name !== undefined) {
      resolved.name = msg.name;
    }
    else {
      resolved.name = []
    }

    if (msg.motor_errors !== undefined) {
      resolved.motor_errors = new Array(msg.motor_errors.length);
      for (let i = 0; i < resolved.motor_errors.length; ++i) {
        resolved.motor_errors[i] = motor_error.Resolve(msg.motor_errors[i]);
      }
    }
    else {
      resolved.motor_errors = []
    }

    return resolved;
    }
};

module.exports = status;
