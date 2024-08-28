// Auto-generated. Do not edit!

// (in-package mobiman_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let ButtonSemantics = require('./ButtonSemantics.js');
let geometry_msgs = _finder('geometry_msgs');

//-----------------------------------------------------------

class Button3d {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.pose = null;
      this.button_semantics = null;
    }
    else {
      if (initObj.hasOwnProperty('pose')) {
        this.pose = initObj.pose
      }
      else {
        this.pose = new geometry_msgs.msg.Pose();
      }
      if (initObj.hasOwnProperty('button_semantics')) {
        this.button_semantics = initObj.button_semantics
      }
      else {
        this.button_semantics = new ButtonSemantics();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Button3d
    // Serialize message field [pose]
    bufferOffset = geometry_msgs.msg.Pose.serialize(obj.pose, buffer, bufferOffset);
    // Serialize message field [button_semantics]
    bufferOffset = ButtonSemantics.serialize(obj.button_semantics, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Button3d
    let len;
    let data = new Button3d(null);
    // Deserialize message field [pose]
    data.pose = geometry_msgs.msg.Pose.deserialize(buffer, bufferOffset);
    // Deserialize message field [button_semantics]
    data.button_semantics = ButtonSemantics.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += ButtonSemantics.getMessageSize(object.button_semantics);
    return length + 56;
  }

  static datatype() {
    // Returns string type for a message object
    return 'mobiman_msgs/Button3d';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '4cebf7d3838aade9d4cfafbd7ef66592';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    geometry_msgs/Pose pose
    ButtonSemantics button_semantics
    ================================================================================
    MSG: geometry_msgs/Pose
    # A representation of pose in free space, composed of position and orientation. 
    Point position
    Quaternion orientation
    
    ================================================================================
    MSG: geometry_msgs/Point
    # This contains the position of a point in free space
    float64 x
    float64 y
    float64 z
    
    ================================================================================
    MSG: geometry_msgs/Quaternion
    # This represents an orientation in free space in quaternion form.
    
    float64 x
    float64 y
    float64 z
    float64 w
    
    ================================================================================
    MSG: mobiman_msgs/ButtonSemantics
    string name
    uint8 button_status
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Button3d(null);
    if (msg.pose !== undefined) {
      resolved.pose = geometry_msgs.msg.Pose.Resolve(msg.pose)
    }
    else {
      resolved.pose = new geometry_msgs.msg.Pose()
    }

    if (msg.button_semantics !== undefined) {
      resolved.button_semantics = ButtonSemantics.Resolve(msg.button_semantics)
    }
    else {
      resolved.button_semantics = new ButtonSemantics()
    }

    return resolved;
    }
};

module.exports = Button3d;
