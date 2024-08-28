// Auto-generated. Do not edit!

// (in-package ocs2_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let mpc_observation = require('./mpc_observation.js');
let mpc_target_trajectories = require('./mpc_target_trajectories.js');
let mpc_state = require('./mpc_state.js');
let mpc_input = require('./mpc_input.js');
let mode_schedule = require('./mode_schedule.js');
let controller_data = require('./controller_data.js');
let mpc_performance_indices = require('./mpc_performance_indices.js');

//-----------------------------------------------------------

class mpc_flattened_controller {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.controllerType = null;
      this.initObservation = null;
      this.planTargetTrajectories = null;
      this.stateTrajectory = null;
      this.inputTrajectory = null;
      this.timeTrajectory = null;
      this.postEventIndices = null;
      this.modeSchedule = null;
      this.data = null;
      this.performanceIndices = null;
    }
    else {
      if (initObj.hasOwnProperty('controllerType')) {
        this.controllerType = initObj.controllerType
      }
      else {
        this.controllerType = 0;
      }
      if (initObj.hasOwnProperty('initObservation')) {
        this.initObservation = initObj.initObservation
      }
      else {
        this.initObservation = new mpc_observation();
      }
      if (initObj.hasOwnProperty('planTargetTrajectories')) {
        this.planTargetTrajectories = initObj.planTargetTrajectories
      }
      else {
        this.planTargetTrajectories = new mpc_target_trajectories();
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
      if (initObj.hasOwnProperty('timeTrajectory')) {
        this.timeTrajectory = initObj.timeTrajectory
      }
      else {
        this.timeTrajectory = [];
      }
      if (initObj.hasOwnProperty('postEventIndices')) {
        this.postEventIndices = initObj.postEventIndices
      }
      else {
        this.postEventIndices = [];
      }
      if (initObj.hasOwnProperty('modeSchedule')) {
        this.modeSchedule = initObj.modeSchedule
      }
      else {
        this.modeSchedule = new mode_schedule();
      }
      if (initObj.hasOwnProperty('data')) {
        this.data = initObj.data
      }
      else {
        this.data = [];
      }
      if (initObj.hasOwnProperty('performanceIndices')) {
        this.performanceIndices = initObj.performanceIndices
      }
      else {
        this.performanceIndices = new mpc_performance_indices();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type mpc_flattened_controller
    // Serialize message field [controllerType]
    bufferOffset = _serializer.uint8(obj.controllerType, buffer, bufferOffset);
    // Serialize message field [initObservation]
    bufferOffset = mpc_observation.serialize(obj.initObservation, buffer, bufferOffset);
    // Serialize message field [planTargetTrajectories]
    bufferOffset = mpc_target_trajectories.serialize(obj.planTargetTrajectories, buffer, bufferOffset);
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
    // Serialize message field [timeTrajectory]
    bufferOffset = _arraySerializer.float64(obj.timeTrajectory, buffer, bufferOffset, null);
    // Serialize message field [postEventIndices]
    bufferOffset = _arraySerializer.uint16(obj.postEventIndices, buffer, bufferOffset, null);
    // Serialize message field [modeSchedule]
    bufferOffset = mode_schedule.serialize(obj.modeSchedule, buffer, bufferOffset);
    // Serialize message field [data]
    // Serialize the length for message field [data]
    bufferOffset = _serializer.uint32(obj.data.length, buffer, bufferOffset);
    obj.data.forEach((val) => {
      bufferOffset = controller_data.serialize(val, buffer, bufferOffset);
    });
    // Serialize message field [performanceIndices]
    bufferOffset = mpc_performance_indices.serialize(obj.performanceIndices, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type mpc_flattened_controller
    let len;
    let data = new mpc_flattened_controller(null);
    // Deserialize message field [controllerType]
    data.controllerType = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [initObservation]
    data.initObservation = mpc_observation.deserialize(buffer, bufferOffset);
    // Deserialize message field [planTargetTrajectories]
    data.planTargetTrajectories = mpc_target_trajectories.deserialize(buffer, bufferOffset);
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
    // Deserialize message field [timeTrajectory]
    data.timeTrajectory = _arrayDeserializer.float64(buffer, bufferOffset, null)
    // Deserialize message field [postEventIndices]
    data.postEventIndices = _arrayDeserializer.uint16(buffer, bufferOffset, null)
    // Deserialize message field [modeSchedule]
    data.modeSchedule = mode_schedule.deserialize(buffer, bufferOffset);
    // Deserialize message field [data]
    // Deserialize array length for message field [data]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.data = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.data[i] = controller_data.deserialize(buffer, bufferOffset)
    }
    // Deserialize message field [performanceIndices]
    data.performanceIndices = mpc_performance_indices.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += mpc_observation.getMessageSize(object.initObservation);
    length += mpc_target_trajectories.getMessageSize(object.planTargetTrajectories);
    object.stateTrajectory.forEach((val) => {
      length += mpc_state.getMessageSize(val);
    });
    object.inputTrajectory.forEach((val) => {
      length += mpc_input.getMessageSize(val);
    });
    length += 8 * object.timeTrajectory.length;
    length += 2 * object.postEventIndices.length;
    length += mode_schedule.getMessageSize(object.modeSchedule);
    object.data.forEach((val) => {
      length += controller_data.getMessageSize(val);
    });
    return length + 49;
  }

  static datatype() {
    // Returns string type for a message object
    return 'ocs2_msgs/mpc_flattened_controller';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '9355aadb2928f436a41799dd737c0f53';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # Flattened controller: A serialized controller
    
    # define controllerType Enum values
    uint8 CONTROLLER_UNKNOWN=0 # safety mechanism: message initalization to zero
    uint8 CONTROLLER_FEEDFORWARD=1
    uint8 CONTROLLER_LINEAR=2
    
    uint8                   controllerType         # what type of controller is this
    
    mpc_observation         initObservation        # plan initial observation
    
    mpc_target_trajectories planTargetTrajectories # target trajectory in cost function
    mpc_state[]             stateTrajectory        # optimized state trajectory from planner
    mpc_input[]             inputTrajectory        # optimized input trajectory from planner
    float64[]               timeTrajectory         # time trajectory for stateTrajectory and inputTrajectory
    uint16[]                postEventIndices       # array of indices indicating the index of post-event time in the trajectories
    mode_schedule           modeSchedule           # optimal/predefined MPC mode sequence and event times
    
    controller_data[]       data                   # the actual payload from flatten method: one vector of data per time step
    
    mpc_performance_indices performanceIndices     # solver performance indices
    
    ================================================================================
    MSG: ocs2_msgs/mpc_observation
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
    ================================================================================
    MSG: ocs2_msgs/mpc_target_trajectories
    # MPC target trajectories
    
    float64[]    timeTrajectory        # MPC target time trajectory
    mpc_state[]  stateTrajectory       # MPC target state trajectory
    mpc_input[]  inputTrajectory       # MPC target input trajectory
    
    
    ================================================================================
    MSG: ocs2_msgs/mode_schedule
    # MPC mode sequence
    
    float64[] eventTimes           # event times: its size is equal to the size of phaseSequence minus one
    int8[]    modeSequence         # mode sequence: e.g., for a quadrupedal robot, it is in the set {0, 1,..., 15}
    ================================================================================
    MSG: ocs2_msgs/controller_data
    float32[] data
    
    ================================================================================
    MSG: ocs2_msgs/mpc_performance_indices
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
    const resolved = new mpc_flattened_controller(null);
    if (msg.controllerType !== undefined) {
      resolved.controllerType = msg.controllerType;
    }
    else {
      resolved.controllerType = 0
    }

    if (msg.initObservation !== undefined) {
      resolved.initObservation = mpc_observation.Resolve(msg.initObservation)
    }
    else {
      resolved.initObservation = new mpc_observation()
    }

    if (msg.planTargetTrajectories !== undefined) {
      resolved.planTargetTrajectories = mpc_target_trajectories.Resolve(msg.planTargetTrajectories)
    }
    else {
      resolved.planTargetTrajectories = new mpc_target_trajectories()
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

    if (msg.timeTrajectory !== undefined) {
      resolved.timeTrajectory = msg.timeTrajectory;
    }
    else {
      resolved.timeTrajectory = []
    }

    if (msg.postEventIndices !== undefined) {
      resolved.postEventIndices = msg.postEventIndices;
    }
    else {
      resolved.postEventIndices = []
    }

    if (msg.modeSchedule !== undefined) {
      resolved.modeSchedule = mode_schedule.Resolve(msg.modeSchedule)
    }
    else {
      resolved.modeSchedule = new mode_schedule()
    }

    if (msg.data !== undefined) {
      resolved.data = new Array(msg.data.length);
      for (let i = 0; i < resolved.data.length; ++i) {
        resolved.data[i] = controller_data.Resolve(msg.data[i]);
      }
    }
    else {
      resolved.data = []
    }

    if (msg.performanceIndices !== undefined) {
      resolved.performanceIndices = mpc_performance_indices.Resolve(msg.performanceIndices)
    }
    else {
      resolved.performanceIndices = new mpc_performance_indices()
    }

    return resolved;
    }
};

// Constants for message
mpc_flattened_controller.Constants = {
  CONTROLLER_UNKNOWN: 0,
  CONTROLLER_FEEDFORWARD: 1,
  CONTROLLER_LINEAR: 2,
}

module.exports = mpc_flattened_controller;
