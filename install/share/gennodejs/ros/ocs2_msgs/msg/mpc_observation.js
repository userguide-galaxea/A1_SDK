// Auto-generated. Do not edit!

// (in-package ocs2_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let mpc_state = require('./mpc_state.js');
let mpc_input = require('./mpc_input.js');

//-----------------------------------------------------------

class mpc_observation {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.time = null;
      this.state = null;
      this.input = null;
      this.mode = null;
    }
    else {
      if (initObj.hasOwnProperty('time')) {
        this.time = initObj.time
      }
      else {
        this.time = 0.0;
      }
      if (initObj.hasOwnProperty('state')) {
        this.state = initObj.state
      }
      else {
        this.state = new mpc_state();
      }
      if (initObj.hasOwnProperty('input')) {
        this.input = initObj.input
      }
      else {
        this.input = new mpc_input();
      }
      if (initObj.hasOwnProperty('mode')) {
        this.mode = initObj.mode
      }
      else {
        this.mode = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type mpc_observation
    // Serialize message field [time]
    bufferOffset = _serializer.float64(obj.time, buffer, bufferOffset);
    // Serialize message field [state]
    bufferOffset = mpc_state.serialize(obj.state, buffer, bufferOffset);
    // Serialize message field [input]
    bufferOffset = mpc_input.serialize(obj.input, buffer, bufferOffset);
    // Serialize message field [mode]
    bufferOffset = _serializer.int8(obj.mode, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type mpc_observation
    let len;
    let data = new mpc_observation(null);
    // Deserialize message field [time]
    data.time = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [state]
    data.state = mpc_state.deserialize(buffer, bufferOffset);
    // Deserialize message field [input]
    data.input = mpc_input.deserialize(buffer, bufferOffset);
    // Deserialize message field [mode]
    data.mode = _deserializer.int8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += mpc_state.getMessageSize(object.state);
    length += mpc_input.getMessageSize(object.input);
    return length + 9;
  }

  static datatype() {
    // Returns string type for a message object
    return 'ocs2_msgs/mpc_observation';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'c4075a25799f2a89c6d62b26e93cb66f';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # MPC observation
    float64        time        # Current time
    mpc_state      state       # Current state
    mpc_input      input       # Current input
    int8           mode        # Current mode
    
    ================================================================================
    MSG: ocs2_msgs/mpc_state
    # MPC internal model state vector
    float32[] value
    
    ================================================================================
    MSG: ocs2_msgs/mpc_input
    # MPC internal model input vector 
    
    float32[] value
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new mpc_observation(null);
    if (msg.time !== undefined) {
      resolved.time = msg.time;
    }
    else {
      resolved.time = 0.0
    }

    if (msg.state !== undefined) {
      resolved.state = mpc_state.Resolve(msg.state)
    }
    else {
      resolved.state = new mpc_state()
    }

    if (msg.input !== undefined) {
      resolved.input = mpc_input.Resolve(msg.input)
    }
    else {
      resolved.input = new mpc_input()
    }

    if (msg.mode !== undefined) {
      resolved.mode = msg.mode;
    }
    else {
      resolved.mode = 0
    }

    return resolved;
    }
};

module.exports = mpc_observation;
