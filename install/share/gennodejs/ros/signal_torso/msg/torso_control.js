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

class torso_control {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.position_des = null;
      this.speed_des = null;
      this.current_kp = null;
      this.current_kd = null;
      this.speed_kp = null;
      this.speed_kd = null;
      this.position_kp = null;
      this.position_kd = null;
    }
    else {
      if (initObj.hasOwnProperty('position_des')) {
        this.position_des = initObj.position_des
      }
      else {
        this.position_des = [];
      }
      if (initObj.hasOwnProperty('speed_des')) {
        this.speed_des = initObj.speed_des
      }
      else {
        this.speed_des = [];
      }
      if (initObj.hasOwnProperty('current_kp')) {
        this.current_kp = initObj.current_kp
      }
      else {
        this.current_kp = [];
      }
      if (initObj.hasOwnProperty('current_kd')) {
        this.current_kd = initObj.current_kd
      }
      else {
        this.current_kd = [];
      }
      if (initObj.hasOwnProperty('speed_kp')) {
        this.speed_kp = initObj.speed_kp
      }
      else {
        this.speed_kp = [];
      }
      if (initObj.hasOwnProperty('speed_kd')) {
        this.speed_kd = initObj.speed_kd
      }
      else {
        this.speed_kd = [];
      }
      if (initObj.hasOwnProperty('position_kp')) {
        this.position_kp = initObj.position_kp
      }
      else {
        this.position_kp = [];
      }
      if (initObj.hasOwnProperty('position_kd')) {
        this.position_kd = initObj.position_kd
      }
      else {
        this.position_kd = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type torso_control
    // Serialize message field [position_des]
    bufferOffset = _arraySerializer.float32(obj.position_des, buffer, bufferOffset, null);
    // Serialize message field [speed_des]
    bufferOffset = _arraySerializer.float32(obj.speed_des, buffer, bufferOffset, null);
    // Serialize message field [current_kp]
    bufferOffset = _arraySerializer.uint8(obj.current_kp, buffer, bufferOffset, null);
    // Serialize message field [current_kd]
    bufferOffset = _arraySerializer.uint8(obj.current_kd, buffer, bufferOffset, null);
    // Serialize message field [speed_kp]
    bufferOffset = _arraySerializer.uint8(obj.speed_kp, buffer, bufferOffset, null);
    // Serialize message field [speed_kd]
    bufferOffset = _arraySerializer.uint8(obj.speed_kd, buffer, bufferOffset, null);
    // Serialize message field [position_kp]
    bufferOffset = _arraySerializer.uint8(obj.position_kp, buffer, bufferOffset, null);
    // Serialize message field [position_kd]
    bufferOffset = _arraySerializer.uint8(obj.position_kd, buffer, bufferOffset, null);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type torso_control
    let len;
    let data = new torso_control(null);
    // Deserialize message field [position_des]
    data.position_des = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [speed_des]
    data.speed_des = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [current_kp]
    data.current_kp = _arrayDeserializer.uint8(buffer, bufferOffset, null)
    // Deserialize message field [current_kd]
    data.current_kd = _arrayDeserializer.uint8(buffer, bufferOffset, null)
    // Deserialize message field [speed_kp]
    data.speed_kp = _arrayDeserializer.uint8(buffer, bufferOffset, null)
    // Deserialize message field [speed_kd]
    data.speed_kd = _arrayDeserializer.uint8(buffer, bufferOffset, null)
    // Deserialize message field [position_kp]
    data.position_kp = _arrayDeserializer.uint8(buffer, bufferOffset, null)
    // Deserialize message field [position_kd]
    data.position_kd = _arrayDeserializer.uint8(buffer, bufferOffset, null)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += 4 * object.position_des.length;
    length += 4 * object.speed_des.length;
    length += object.current_kp.length;
    length += object.current_kd.length;
    length += object.speed_kp.length;
    length += object.speed_kd.length;
    length += object.position_kp.length;
    length += object.position_kd.length;
    return length + 32;
  }

  static datatype() {
    // Returns string type for a message object
    return 'signal_torso/torso_control';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '1ef265c20ffbd4e92c2ffec96f296f0c';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float32[] position_des
    float32[] speed_des
    uint8[] current_kp
    uint8[] current_kd
    uint8[] speed_kp
    uint8[] speed_kd
    uint8[] position_kp
    uint8[] position_kd
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new torso_control(null);
    if (msg.position_des !== undefined) {
      resolved.position_des = msg.position_des;
    }
    else {
      resolved.position_des = []
    }

    if (msg.speed_des !== undefined) {
      resolved.speed_des = msg.speed_des;
    }
    else {
      resolved.speed_des = []
    }

    if (msg.current_kp !== undefined) {
      resolved.current_kp = msg.current_kp;
    }
    else {
      resolved.current_kp = []
    }

    if (msg.current_kd !== undefined) {
      resolved.current_kd = msg.current_kd;
    }
    else {
      resolved.current_kd = []
    }

    if (msg.speed_kp !== undefined) {
      resolved.speed_kp = msg.speed_kp;
    }
    else {
      resolved.speed_kp = []
    }

    if (msg.speed_kd !== undefined) {
      resolved.speed_kd = msg.speed_kd;
    }
    else {
      resolved.speed_kd = []
    }

    if (msg.position_kp !== undefined) {
      resolved.position_kp = msg.position_kp;
    }
    else {
      resolved.position_kp = []
    }

    if (msg.position_kd !== undefined) {
      resolved.position_kd = msg.position_kd;
    }
    else {
      resolved.position_kd = []
    }

    return resolved;
    }
};

module.exports = torso_control;
