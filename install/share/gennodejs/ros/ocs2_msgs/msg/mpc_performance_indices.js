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

class mpc_performance_indices {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.initTime = null;
      this.merit = null;
      this.cost = null;
      this.dynamicsViolationSSE = null;
      this.equalityConstraintsSSE = null;
      this.equalityLagrangian = null;
      this.inequalityLagrangian = null;
    }
    else {
      if (initObj.hasOwnProperty('initTime')) {
        this.initTime = initObj.initTime
      }
      else {
        this.initTime = 0.0;
      }
      if (initObj.hasOwnProperty('merit')) {
        this.merit = initObj.merit
      }
      else {
        this.merit = 0.0;
      }
      if (initObj.hasOwnProperty('cost')) {
        this.cost = initObj.cost
      }
      else {
        this.cost = 0.0;
      }
      if (initObj.hasOwnProperty('dynamicsViolationSSE')) {
        this.dynamicsViolationSSE = initObj.dynamicsViolationSSE
      }
      else {
        this.dynamicsViolationSSE = 0.0;
      }
      if (initObj.hasOwnProperty('equalityConstraintsSSE')) {
        this.equalityConstraintsSSE = initObj.equalityConstraintsSSE
      }
      else {
        this.equalityConstraintsSSE = 0.0;
      }
      if (initObj.hasOwnProperty('equalityLagrangian')) {
        this.equalityLagrangian = initObj.equalityLagrangian
      }
      else {
        this.equalityLagrangian = 0.0;
      }
      if (initObj.hasOwnProperty('inequalityLagrangian')) {
        this.inequalityLagrangian = initObj.inequalityLagrangian
      }
      else {
        this.inequalityLagrangian = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type mpc_performance_indices
    // Serialize message field [initTime]
    bufferOffset = _serializer.float32(obj.initTime, buffer, bufferOffset);
    // Serialize message field [merit]
    bufferOffset = _serializer.float32(obj.merit, buffer, bufferOffset);
    // Serialize message field [cost]
    bufferOffset = _serializer.float32(obj.cost, buffer, bufferOffset);
    // Serialize message field [dynamicsViolationSSE]
    bufferOffset = _serializer.float32(obj.dynamicsViolationSSE, buffer, bufferOffset);
    // Serialize message field [equalityConstraintsSSE]
    bufferOffset = _serializer.float32(obj.equalityConstraintsSSE, buffer, bufferOffset);
    // Serialize message field [equalityLagrangian]
    bufferOffset = _serializer.float32(obj.equalityLagrangian, buffer, bufferOffset);
    // Serialize message field [inequalityLagrangian]
    bufferOffset = _serializer.float32(obj.inequalityLagrangian, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type mpc_performance_indices
    let len;
    let data = new mpc_performance_indices(null);
    // Deserialize message field [initTime]
    data.initTime = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [merit]
    data.merit = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [cost]
    data.cost = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [dynamicsViolationSSE]
    data.dynamicsViolationSSE = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [equalityConstraintsSSE]
    data.equalityConstraintsSSE = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [equalityLagrangian]
    data.equalityLagrangian = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [inequalityLagrangian]
    data.inequalityLagrangian = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 28;
  }

  static datatype() {
    // Returns string type for a message object
    return 'ocs2_msgs/mpc_performance_indices';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'd3efdce4c946e170e65e642157f48398';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # MPC performance indices
    float32     initTime
    float32     merit
    float32     cost
    float32     dynamicsViolationSSE
    float32     equalityConstraintsSSE
    float32     equalityLagrangian
    float32     inequalityLagrangian
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new mpc_performance_indices(null);
    if (msg.initTime !== undefined) {
      resolved.initTime = msg.initTime;
    }
    else {
      resolved.initTime = 0.0
    }

    if (msg.merit !== undefined) {
      resolved.merit = msg.merit;
    }
    else {
      resolved.merit = 0.0
    }

    if (msg.cost !== undefined) {
      resolved.cost = msg.cost;
    }
    else {
      resolved.cost = 0.0
    }

    if (msg.dynamicsViolationSSE !== undefined) {
      resolved.dynamicsViolationSSE = msg.dynamicsViolationSSE;
    }
    else {
      resolved.dynamicsViolationSSE = 0.0
    }

    if (msg.equalityConstraintsSSE !== undefined) {
      resolved.equalityConstraintsSSE = msg.equalityConstraintsSSE;
    }
    else {
      resolved.equalityConstraintsSSE = 0.0
    }

    if (msg.equalityLagrangian !== undefined) {
      resolved.equalityLagrangian = msg.equalityLagrangian;
    }
    else {
      resolved.equalityLagrangian = 0.0
    }

    if (msg.inequalityLagrangian !== undefined) {
      resolved.inequalityLagrangian = msg.inequalityLagrangian;
    }
    else {
      resolved.inequalityLagrangian = 0.0
    }

    return resolved;
    }
};

module.exports = mpc_performance_indices;
