// Auto-generated. Do not edit!

// (in-package mobiman_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let JointPosition = require('./JointPosition.js');
let JointSpeed = require('./JointSpeed.js');
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class ArmBasicCommand {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.jpos = null;
      this.jspeed = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('jpos')) {
        this.jpos = initObj.jpos
      }
      else {
        this.jpos = new JointPosition();
      }
      if (initObj.hasOwnProperty('jspeed')) {
        this.jspeed = initObj.jspeed
      }
      else {
        this.jspeed = new JointSpeed();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ArmBasicCommand
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [jpos]
    bufferOffset = JointPosition.serialize(obj.jpos, buffer, bufferOffset);
    // Serialize message field [jspeed]
    bufferOffset = JointSpeed.serialize(obj.jspeed, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ArmBasicCommand
    let len;
    let data = new ArmBasicCommand(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [jpos]
    data.jpos = JointPosition.deserialize(buffer, bufferOffset);
    // Deserialize message field [jspeed]
    data.jspeed = JointSpeed.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    length += JointPosition.getMessageSize(object.jpos);
    length += JointSpeed.getMessageSize(object.jspeed);
    return length;
  }

  static datatype() {
    // Returns string type for a message object
    return 'mobiman_msgs/ArmBasicCommand';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'fcfbc58fb13093c333eea9319796c877';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    Header header
    
    JointPosition jpos
    JointSpeed jspeed
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
    MSG: mobiman_msgs/JointPosition
    float32[] pos
    ================================================================================
    MSG: mobiman_msgs/JointSpeed
    float32[] speed
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ArmBasicCommand(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.jpos !== undefined) {
      resolved.jpos = JointPosition.Resolve(msg.jpos)
    }
    else {
      resolved.jpos = new JointPosition()
    }

    if (msg.jspeed !== undefined) {
      resolved.jspeed = JointSpeed.Resolve(msg.jspeed)
    }
    else {
      resolved.jspeed = new JointSpeed()
    }

    return resolved;
    }
};

module.exports = ArmBasicCommand;
