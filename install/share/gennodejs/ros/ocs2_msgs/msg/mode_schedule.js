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

class mode_schedule {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.eventTimes = null;
      this.modeSequence = null;
    }
    else {
      if (initObj.hasOwnProperty('eventTimes')) {
        this.eventTimes = initObj.eventTimes
      }
      else {
        this.eventTimes = [];
      }
      if (initObj.hasOwnProperty('modeSequence')) {
        this.modeSequence = initObj.modeSequence
      }
      else {
        this.modeSequence = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type mode_schedule
    // Serialize message field [eventTimes]
    bufferOffset = _arraySerializer.float64(obj.eventTimes, buffer, bufferOffset, null);
    // Serialize message field [modeSequence]
    bufferOffset = _arraySerializer.int8(obj.modeSequence, buffer, bufferOffset, null);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type mode_schedule
    let len;
    let data = new mode_schedule(null);
    // Deserialize message field [eventTimes]
    data.eventTimes = _arrayDeserializer.float64(buffer, bufferOffset, null)
    // Deserialize message field [modeSequence]
    data.modeSequence = _arrayDeserializer.int8(buffer, bufferOffset, null)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += 8 * object.eventTimes.length;
    length += object.modeSequence.length;
    return length + 8;
  }

  static datatype() {
    // Returns string type for a message object
    return 'ocs2_msgs/mode_schedule';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '9aa75d28b36c292b797e36e87614038a';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # MPC mode sequence
    
    float64[] eventTimes           # event times: its size is equal to the size of phaseSequence minus one
    int8[]    modeSequence         # mode sequence: e.g., for a quadrupedal robot, it is in the set {0, 1,..., 15}
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new mode_schedule(null);
    if (msg.eventTimes !== undefined) {
      resolved.eventTimes = msg.eventTimes;
    }
    else {
      resolved.eventTimes = []
    }

    if (msg.modeSequence !== undefined) {
      resolved.modeSequence = msg.modeSequence;
    }
    else {
      resolved.modeSequence = []
    }

    return resolved;
    }
};

module.exports = mode_schedule;
