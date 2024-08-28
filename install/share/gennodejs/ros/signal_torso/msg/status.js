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

class status {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.name = null;
      this.error_code = null;
      this.t_mos = null;
      this.t_rotor = null;
    }
    else {
      if (initObj.hasOwnProperty('name')) {
        this.name = initObj.name
      }
      else {
        this.name = [];
      }
      if (initObj.hasOwnProperty('error_code')) {
        this.error_code = initObj.error_code
      }
      else {
        this.error_code = [];
      }
      if (initObj.hasOwnProperty('t_mos')) {
        this.t_mos = initObj.t_mos
      }
      else {
        this.t_mos = [];
      }
      if (initObj.hasOwnProperty('t_rotor')) {
        this.t_rotor = initObj.t_rotor
      }
      else {
        this.t_rotor = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type status
    // Serialize message field [name]
    bufferOffset = _arraySerializer.string(obj.name, buffer, bufferOffset, null);
    // Serialize message field [error_code]
    bufferOffset = _arraySerializer.float32(obj.error_code, buffer, bufferOffset, null);
    // Serialize message field [t_mos]
    bufferOffset = _arraySerializer.float32(obj.t_mos, buffer, bufferOffset, null);
    // Serialize message field [t_rotor]
    bufferOffset = _arraySerializer.float32(obj.t_rotor, buffer, bufferOffset, null);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type status
    let len;
    let data = new status(null);
    // Deserialize message field [name]
    data.name = _arrayDeserializer.string(buffer, bufferOffset, null)
    // Deserialize message field [error_code]
    data.error_code = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [t_mos]
    data.t_mos = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [t_rotor]
    data.t_rotor = _arrayDeserializer.float32(buffer, bufferOffset, null)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    object.name.forEach((val) => {
      length += 4 + _getByteLength(val);
    });
    length += 4 * object.error_code.length;
    length += 4 * object.t_mos.length;
    length += 4 * object.t_rotor.length;
    return length + 16;
  }

  static datatype() {
    // Returns string type for a message object
    return 'signal_torso/status';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'cdb5a2cf356c951d5ba2c2340b5e26f1';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string[] name
    float32[] error_code
    float32[] t_mos
    float32[] t_rotor
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

    if (msg.error_code !== undefined) {
      resolved.error_code = msg.error_code;
    }
    else {
      resolved.error_code = []
    }

    if (msg.t_mos !== undefined) {
      resolved.t_mos = msg.t_mos;
    }
    else {
      resolved.t_mos = []
    }

    if (msg.t_rotor !== undefined) {
      resolved.t_rotor = msg.t_rotor;
    }
    else {
      resolved.t_rotor = []
    }

    return resolved;
    }
};

module.exports = status;
