// Auto-generated. Do not edit!

// (in-package signal_torso.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let torso_status = require('./torso_status.js');
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class torso_status_stamped {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.status = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('status')) {
        this.status = initObj.status
      }
      else {
        this.status = new torso_status();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type torso_status_stamped
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [status]
    bufferOffset = torso_status.serialize(obj.status, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type torso_status_stamped
    let len;
    let data = new torso_status_stamped(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [status]
    data.status = torso_status.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    length += torso_status.getMessageSize(object.status);
    return length;
  }

  static datatype() {
    // Returns string type for a message object
    return 'signal_torso/torso_status_stamped';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '0131c1b125296bd68a121c0755f75986';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
    torso_status status
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
    MSG: signal_torso/torso_status
    string[] name
    uint8[] motor_temperature
    uint8[] braking_state
    uint16[] motor_voltage
    uint16[] error_code
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new torso_status_stamped(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.status !== undefined) {
      resolved.status = torso_status.Resolve(msg.status)
    }
    else {
      resolved.status = new torso_status()
    }

    return resolved;
    }
};

module.exports = torso_status_stamped;
