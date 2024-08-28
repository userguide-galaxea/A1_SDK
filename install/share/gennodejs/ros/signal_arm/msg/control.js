// Auto-generated. Do not edit!

// (in-package signal_arm.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class control {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.p_des = null;
      this.v_des = null;
      this.kp = null;
      this.kd = null;
      this.t_ff = null;
    }
    else {
      if (initObj.hasOwnProperty('p_des')) {
        this.p_des = initObj.p_des
      }
      else {
        this.p_des = [];
      }
      if (initObj.hasOwnProperty('v_des')) {
        this.v_des = initObj.v_des
      }
      else {
        this.v_des = [];
      }
      if (initObj.hasOwnProperty('kp')) {
        this.kp = initObj.kp
      }
      else {
        this.kp = [];
      }
      if (initObj.hasOwnProperty('kd')) {
        this.kd = initObj.kd
      }
      else {
        this.kd = [];
      }
      if (initObj.hasOwnProperty('t_ff')) {
        this.t_ff = initObj.t_ff
      }
      else {
        this.t_ff = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type control
    // Serialize message field [p_des]
    bufferOffset = _arraySerializer.float32(obj.p_des, buffer, bufferOffset, null);
    // Serialize message field [v_des]
    bufferOffset = _arraySerializer.float32(obj.v_des, buffer, bufferOffset, null);
    // Serialize message field [kp]
    bufferOffset = _arraySerializer.float32(obj.kp, buffer, bufferOffset, null);
    // Serialize message field [kd]
    bufferOffset = _arraySerializer.float32(obj.kd, buffer, bufferOffset, null);
    // Serialize message field [t_ff]
    bufferOffset = _arraySerializer.float32(obj.t_ff, buffer, bufferOffset, null);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type control
    let len;
    let data = new control(null);
    // Deserialize message field [p_des]
    data.p_des = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [v_des]
    data.v_des = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [kp]
    data.kp = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [kd]
    data.kd = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [t_ff]
    data.t_ff = _arrayDeserializer.float32(buffer, bufferOffset, null)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += 4 * object.p_des.length;
    length += 4 * object.v_des.length;
    length += 4 * object.kp.length;
    length += 4 * object.kd.length;
    length += 4 * object.t_ff.length;
    return length + 20;
  }

  static datatype() {
    // Returns string type for a message object
    return 'signal_arm/control';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '92db34ecb249af9c33832065efc76c23';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float32[] p_des
    float32[] v_des
    float32[] kp
    float32[] kd
    float32[] t_ff
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new control(null);
    if (msg.p_des !== undefined) {
      resolved.p_des = msg.p_des;
    }
    else {
      resolved.p_des = []
    }

    if (msg.v_des !== undefined) {
      resolved.v_des = msg.v_des;
    }
    else {
      resolved.v_des = []
    }

    if (msg.kp !== undefined) {
      resolved.kp = msg.kp;
    }
    else {
      resolved.kp = []
    }

    if (msg.kd !== undefined) {
      resolved.kd = msg.kd;
    }
    else {
      resolved.kd = []
    }

    if (msg.t_ff !== undefined) {
      resolved.t_ff = msg.t_ff;
    }
    else {
      resolved.t_ff = []
    }

    return resolved;
    }
};

module.exports = control;
