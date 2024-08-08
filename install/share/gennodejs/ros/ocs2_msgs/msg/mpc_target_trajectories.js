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

class mpc_target_trajectories {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.timeTrajectory = null;
      this.stateTrajectory = null;
      this.inputTrajectory = null;
    }
    else {
      if (initObj.hasOwnProperty('timeTrajectory')) {
        this.timeTrajectory = initObj.timeTrajectory
      }
      else {
        this.timeTrajectory = [];
      }
      if (initObj.hasOwnProperty('stateTrajectory')) {
        this.stateTrajectory = initObj.stateTrajectory
      }
      else {
        this.stateTrajectory = [];
      }
      if (initObj.hasOwnProperty('inputTrajectory')) {
        this.inputTrajectory = initObj.inputTrajectory
      }
      else {
        this.inputTrajectory = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type mpc_target_trajectories
    // Serialize message field [timeTrajectory]
    bufferOffset = _arraySerializer.float64(obj.timeTrajectory, buffer, bufferOffset, null);
    // Serialize message field [stateTrajectory]
    // Serialize the length for message field [stateTrajectory]
    bufferOffset = _serializer.uint32(obj.stateTrajectory.length, buffer, bufferOffset);
    obj.stateTrajectory.forEach((val) => {
      bufferOffset = mpc_state.serialize(val, buffer, bufferOffset);
    });
    // Serialize message field [inputTrajectory]
    // Serialize the length for message field [inputTrajectory]
    bufferOffset = _serializer.uint32(obj.inputTrajectory.length, buffer, bufferOffset);
    obj.inputTrajectory.forEach((val) => {
      bufferOffset = mpc_input.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type mpc_target_trajectories
    let len;
    let data = new mpc_target_trajectories(null);
    // Deserialize message field [timeTrajectory]
    data.timeTrajectory = _arrayDeserializer.float64(buffer, bufferOffset, null)
    // Deserialize message field [stateTrajectory]
    // Deserialize array length for message field [stateTrajectory]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.stateTrajectory = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.stateTrajectory[i] = mpc_state.deserialize(buffer, bufferOffset)
    }
    // Deserialize message field [inputTrajectory]
    // Deserialize array length for message field [inputTrajectory]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.inputTrajectory = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.inputTrajectory[i] = mpc_input.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += 8 * object.timeTrajectory.length;
    object.stateTrajectory.forEach((val) => {
      length += mpc_state.getMessageSize(val);
    });
    object.inputTrajectory.forEach((val) => {
      length += mpc_input.getMessageSize(val);
    });
    return length + 12;
  }

  static datatype() {
    // Returns string type for a message object
    return 'ocs2_msgs/mpc_target_trajectories';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '2d8da69ddfcd018a998edad053f8c7b6';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # MPC target trajectories
    
    float64[]    timeTrajectory        # MPC target time trajectory
    mpc_state[]  stateTrajectory       # MPC target state trajectory
    mpc_input[]  inputTrajectory       # MPC target input trajectory
    
    
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
    const resolved = new mpc_target_trajectories(null);
    if (msg.timeTrajectory !== undefined) {
      resolved.timeTrajectory = msg.timeTrajectory;
    }
    else {
      resolved.timeTrajectory = []
    }

    if (msg.stateTrajectory !== undefined) {
      resolved.stateTrajectory = new Array(msg.stateTrajectory.length);
      for (let i = 0; i < resolved.stateTrajectory.length; ++i) {
        resolved.stateTrajectory[i] = mpc_state.Resolve(msg.stateTrajectory[i]);
      }
    }
    else {
      resolved.stateTrajectory = []
    }

    if (msg.inputTrajectory !== undefined) {
      resolved.inputTrajectory = new Array(msg.inputTrajectory.length);
      for (let i = 0; i < resolved.inputTrajectory.length; ++i) {
        resolved.inputTrajectory[i] = mpc_input.Resolve(msg.inputTrajectory[i]);
      }
    }
    else {
      resolved.inputTrajectory = []
    }

    return resolved;
    }
};

module.exports = mpc_target_trajectories;
