// Auto-generated. Do not edit!

// (in-package ocs2_msgs.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let mpc_target_trajectories = require('../msg/mpc_target_trajectories.js');

//-----------------------------------------------------------


//-----------------------------------------------------------

class resetRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.reset = null;
      this.targetTrajectories = null;
    }
    else {
      if (initObj.hasOwnProperty('reset')) {
        this.reset = initObj.reset
      }
      else {
        this.reset = false;
      }
      if (initObj.hasOwnProperty('targetTrajectories')) {
        this.targetTrajectories = initObj.targetTrajectories
      }
      else {
        this.targetTrajectories = new mpc_target_trajectories();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type resetRequest
    // Serialize message field [reset]
    bufferOffset = _serializer.bool(obj.reset, buffer, bufferOffset);
    // Serialize message field [targetTrajectories]
    bufferOffset = mpc_target_trajectories.serialize(obj.targetTrajectories, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type resetRequest
    let len;
    let data = new resetRequest(null);
    // Deserialize message field [reset]
    data.reset = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [targetTrajectories]
    data.targetTrajectories = mpc_target_trajectories.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += mpc_target_trajectories.getMessageSize(object.targetTrajectories);
    return length + 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'ocs2_msgs/resetRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '7759e1cea687346062f2674a13fe14ee';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # Reset service 
    bool                      reset
    mpc_target_trajectories   targetTrajectories
    
    ================================================================================
    MSG: ocs2_msgs/mpc_target_trajectories
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
    const resolved = new resetRequest(null);
    if (msg.reset !== undefined) {
      resolved.reset = msg.reset;
    }
    else {
      resolved.reset = false
    }

    if (msg.targetTrajectories !== undefined) {
      resolved.targetTrajectories = mpc_target_trajectories.Resolve(msg.targetTrajectories)
    }
    else {
      resolved.targetTrajectories = new mpc_target_trajectories()
    }

    return resolved;
    }
};

class resetResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.done = null;
    }
    else {
      if (initObj.hasOwnProperty('done')) {
        this.done = initObj.done
      }
      else {
        this.done = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type resetResponse
    // Serialize message field [done]
    bufferOffset = _serializer.bool(obj.done, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type resetResponse
    let len;
    let data = new resetResponse(null);
    // Deserialize message field [done]
    data.done = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'ocs2_msgs/resetResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '89bb254424e4cffedbf494e7b0ddbfea';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool                      done
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new resetResponse(null);
    if (msg.done !== undefined) {
      resolved.done = msg.done;
    }
    else {
      resolved.done = false
    }

    return resolved;
    }
};

module.exports = {
  Request: resetRequest,
  Response: resetResponse,
  md5sum() { return '5d381de3cef01856decae8f3f4a35b69'; },
  datatype() { return 'ocs2_msgs/reset'; }
};
