// Auto-generated. Do not edit!

// (in-package signal_torso.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let torso_control = require('./torso_control.js');
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class torso_control_stamped {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.data = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('data')) {
        this.data = initObj.data
      }
      else {
        this.data = new torso_control();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type torso_control_stamped
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [data]
    bufferOffset = torso_control.serialize(obj.data, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type torso_control_stamped
    let len;
    let data = new torso_control_stamped(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [data]
    data.data = torso_control.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    length += torso_control.getMessageSize(object.data);
    return length;
  }

  static datatype() {
    // Returns string type for a message object
    return 'signal_torso/torso_control_stamped';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'd7f7dd6efa50e7092f967cdd0f0a15ee';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
    torso_control data
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    string frame_id
    
    ================================================================================
    MSG: signal_torso/torso_control
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
    const resolved = new torso_control_stamped(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.data !== undefined) {
      resolved.data = torso_control.Resolve(msg.data)
    }
    else {
      resolved.data = new torso_control()
    }

    return resolved;
    }
};

module.exports = torso_control_stamped;
