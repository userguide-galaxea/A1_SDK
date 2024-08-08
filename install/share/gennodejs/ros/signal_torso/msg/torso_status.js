// Auto-generated. Do not edit!

// (in-package signal_torso.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class torso_status {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.name = null;
      this.motor_temperature = null;
      this.braking_state = null;
      this.motor_voltage = null;
      this.error_code = null;
    }
    else {
      if (initObj.hasOwnProperty('name')) {
        this.name = initObj.name
      }
      else {
        this.name = [];
      }
      if (initObj.hasOwnProperty('motor_temperature')) {
        this.motor_temperature = initObj.motor_temperature
      }
      else {
        this.motor_temperature = [];
      }
      if (initObj.hasOwnProperty('braking_state')) {
        this.braking_state = initObj.braking_state
      }
      else {
        this.braking_state = [];
      }
      if (initObj.hasOwnProperty('motor_voltage')) {
        this.motor_voltage = initObj.motor_voltage
      }
      else {
        this.motor_voltage = [];
      }
      if (initObj.hasOwnProperty('error_code')) {
        this.error_code = initObj.error_code
      }
      else {
        this.error_code = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type torso_status
    // Serialize message field [name]
    bufferOffset = _arraySerializer.string(obj.name, buffer, bufferOffset, null);
    // Serialize message field [motor_temperature]
    bufferOffset = _arraySerializer.uint8(obj.motor_temperature, buffer, bufferOffset, null);
    // Serialize message field [braking_state]
    bufferOffset = _arraySerializer.uint8(obj.braking_state, buffer, bufferOffset, null);
    // Serialize message field [motor_voltage]
    bufferOffset = _arraySerializer.uint16(obj.motor_voltage, buffer, bufferOffset, null);
    // Serialize message field [error_code]
    bufferOffset = _arraySerializer.uint16(obj.error_code, buffer, bufferOffset, null);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type torso_status
    let len;
    let data = new torso_status(null);
    // Deserialize message field [name]
    data.name = _arrayDeserializer.string(buffer, bufferOffset, null)
    // Deserialize message field [motor_temperature]
    data.motor_temperature = _arrayDeserializer.uint8(buffer, bufferOffset, null)
    // Deserialize message field [braking_state]
    data.braking_state = _arrayDeserializer.uint8(buffer, bufferOffset, null)
    // Deserialize message field [motor_voltage]
    data.motor_voltage = _arrayDeserializer.uint16(buffer, bufferOffset, null)
    // Deserialize message field [error_code]
    data.error_code = _arrayDeserializer.uint16(buffer, bufferOffset, null)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    object.name.forEach((val) => {
      length += 4 + _getByteLength(val);
    });
    length += object.motor_temperature.length;
    length += object.braking_state.length;
    length += 2 * object.motor_voltage.length;
    length += 2 * object.error_code.length;
    return length + 20;
  }

  static datatype() {
    // Returns string type for a message object
    return 'signal_torso/torso_status';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '3302cf44c7333c5f9df707eac2f97f07';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string[] name
    uint8[] motor_temperature
    uint8[] braking_state
    uint16[] motor_voltage
    uint16[] error_code
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new torso_status(null);
    if (msg.name !== undefined) {
      resolved.name = msg.name;
    }
    else {
      resolved.name = []
    }

    if (msg.motor_temperature !== undefined) {
      resolved.motor_temperature = msg.motor_temperature;
    }
    else {
      resolved.motor_temperature = []
    }

    if (msg.braking_state !== undefined) {
      resolved.braking_state = msg.braking_state;
    }
    else {
      resolved.braking_state = []
    }

    if (msg.motor_voltage !== undefined) {
      resolved.motor_voltage = msg.motor_voltage;
    }
    else {
      resolved.motor_voltage = []
    }

    if (msg.error_code !== undefined) {
      resolved.error_code = msg.error_code;
    }
    else {
      resolved.error_code = []
    }

    return resolved;
    }
};

module.exports = torso_status;
