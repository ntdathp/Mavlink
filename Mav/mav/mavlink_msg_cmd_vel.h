#pragma once
// MESSAGE CMD_VEL PACKING

#define MAVLINK_MSG_ID_CMD_VEL 0


typedef struct __mavlink_cmd_vel_t {
 float cmd_vel_x; /*<  X*/
 float cmd_vel_w; /*<  W*/
} mavlink_cmd_vel_t;

#define MAVLINK_MSG_ID_CMD_VEL_LEN 8
#define MAVLINK_MSG_ID_CMD_VEL_MIN_LEN 8
#define MAVLINK_MSG_ID_0_LEN 8
#define MAVLINK_MSG_ID_0_MIN_LEN 8

#define MAVLINK_MSG_ID_CMD_VEL_CRC 24
#define MAVLINK_MSG_ID_0_CRC 24



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CMD_VEL { \
    0, \
    "CMD_VEL", \
    2, \
    {  { "cmd_vel_x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_cmd_vel_t, cmd_vel_x) }, \
         { "cmd_vel_w", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_cmd_vel_t, cmd_vel_w) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CMD_VEL { \
    "CMD_VEL", \
    2, \
    {  { "cmd_vel_x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_cmd_vel_t, cmd_vel_x) }, \
         { "cmd_vel_w", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_cmd_vel_t, cmd_vel_w) }, \
         } \
}
#endif

/**
 * @brief Pack a cmd_vel message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param cmd_vel_x  X
 * @param cmd_vel_w  W
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_vel_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float cmd_vel_x, float cmd_vel_w)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_VEL_LEN];
    _mav_put_float(buf, 0, cmd_vel_x);
    _mav_put_float(buf, 4, cmd_vel_w);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_VEL_LEN);
#else
    mavlink_cmd_vel_t packet;
    packet.cmd_vel_x = cmd_vel_x;
    packet.cmd_vel_w = cmd_vel_w;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_VEL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_VEL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CMD_VEL_MIN_LEN, MAVLINK_MSG_ID_CMD_VEL_LEN, MAVLINK_MSG_ID_CMD_VEL_CRC);
}

/**
 * @brief Pack a cmd_vel message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param cmd_vel_x  X
 * @param cmd_vel_w  W
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_vel_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               float cmd_vel_x, float cmd_vel_w)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_VEL_LEN];
    _mav_put_float(buf, 0, cmd_vel_x);
    _mav_put_float(buf, 4, cmd_vel_w);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_VEL_LEN);
#else
    mavlink_cmd_vel_t packet;
    packet.cmd_vel_x = cmd_vel_x;
    packet.cmd_vel_w = cmd_vel_w;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_VEL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_VEL;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CMD_VEL_MIN_LEN, MAVLINK_MSG_ID_CMD_VEL_LEN, MAVLINK_MSG_ID_CMD_VEL_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CMD_VEL_MIN_LEN, MAVLINK_MSG_ID_CMD_VEL_LEN);
#endif
}

/**
 * @brief Pack a cmd_vel message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_vel_x  X
 * @param cmd_vel_w  W
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cmd_vel_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float cmd_vel_x,float cmd_vel_w)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_VEL_LEN];
    _mav_put_float(buf, 0, cmd_vel_x);
    _mav_put_float(buf, 4, cmd_vel_w);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CMD_VEL_LEN);
#else
    mavlink_cmd_vel_t packet;
    packet.cmd_vel_x = cmd_vel_x;
    packet.cmd_vel_w = cmd_vel_w;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CMD_VEL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CMD_VEL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CMD_VEL_MIN_LEN, MAVLINK_MSG_ID_CMD_VEL_LEN, MAVLINK_MSG_ID_CMD_VEL_CRC);
}

/**
 * @brief Encode a cmd_vel struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cmd_vel C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_vel_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cmd_vel_t* cmd_vel)
{
    return mavlink_msg_cmd_vel_pack(system_id, component_id, msg, cmd_vel->cmd_vel_x, cmd_vel->cmd_vel_w);
}

/**
 * @brief Encode a cmd_vel struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cmd_vel C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_vel_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cmd_vel_t* cmd_vel)
{
    return mavlink_msg_cmd_vel_pack_chan(system_id, component_id, chan, msg, cmd_vel->cmd_vel_x, cmd_vel->cmd_vel_w);
}

/**
 * @brief Encode a cmd_vel struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param cmd_vel C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cmd_vel_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_cmd_vel_t* cmd_vel)
{
    return mavlink_msg_cmd_vel_pack_status(system_id, component_id, _status, msg,  cmd_vel->cmd_vel_x, cmd_vel->cmd_vel_w);
}

/**
 * @brief Send a cmd_vel message
 * @param chan MAVLink channel to send the message
 *
 * @param cmd_vel_x  X
 * @param cmd_vel_w  W
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cmd_vel_send(mavlink_channel_t chan, float cmd_vel_x, float cmd_vel_w)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CMD_VEL_LEN];
    _mav_put_float(buf, 0, cmd_vel_x);
    _mav_put_float(buf, 4, cmd_vel_w);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_VEL, buf, MAVLINK_MSG_ID_CMD_VEL_MIN_LEN, MAVLINK_MSG_ID_CMD_VEL_LEN, MAVLINK_MSG_ID_CMD_VEL_CRC);
#else
    mavlink_cmd_vel_t packet;
    packet.cmd_vel_x = cmd_vel_x;
    packet.cmd_vel_w = cmd_vel_w;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_VEL, (const char *)&packet, MAVLINK_MSG_ID_CMD_VEL_MIN_LEN, MAVLINK_MSG_ID_CMD_VEL_LEN, MAVLINK_MSG_ID_CMD_VEL_CRC);
#endif
}

/**
 * @brief Send a cmd_vel message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cmd_vel_send_struct(mavlink_channel_t chan, const mavlink_cmd_vel_t* cmd_vel)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cmd_vel_send(chan, cmd_vel->cmd_vel_x, cmd_vel->cmd_vel_w);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_VEL, (const char *)cmd_vel, MAVLINK_MSG_ID_CMD_VEL_MIN_LEN, MAVLINK_MSG_ID_CMD_VEL_LEN, MAVLINK_MSG_ID_CMD_VEL_CRC);
#endif
}

#if MAVLINK_MSG_ID_CMD_VEL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cmd_vel_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float cmd_vel_x, float cmd_vel_w)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, cmd_vel_x);
    _mav_put_float(buf, 4, cmd_vel_w);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_VEL, buf, MAVLINK_MSG_ID_CMD_VEL_MIN_LEN, MAVLINK_MSG_ID_CMD_VEL_LEN, MAVLINK_MSG_ID_CMD_VEL_CRC);
#else
    mavlink_cmd_vel_t *packet = (mavlink_cmd_vel_t *)msgbuf;
    packet->cmd_vel_x = cmd_vel_x;
    packet->cmd_vel_w = cmd_vel_w;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CMD_VEL, (const char *)packet, MAVLINK_MSG_ID_CMD_VEL_MIN_LEN, MAVLINK_MSG_ID_CMD_VEL_LEN, MAVLINK_MSG_ID_CMD_VEL_CRC);
#endif
}
#endif

#endif

// MESSAGE CMD_VEL UNPACKING


/**
 * @brief Get field cmd_vel_x from cmd_vel message
 *
 * @return  X
 */
static inline float mavlink_msg_cmd_vel_get_cmd_vel_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field cmd_vel_w from cmd_vel message
 *
 * @return  W
 */
static inline float mavlink_msg_cmd_vel_get_cmd_vel_w(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Decode a cmd_vel message into a struct
 *
 * @param msg The message to decode
 * @param cmd_vel C-struct to decode the message contents into
 */
static inline void mavlink_msg_cmd_vel_decode(const mavlink_message_t* msg, mavlink_cmd_vel_t* cmd_vel)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cmd_vel->cmd_vel_x = mavlink_msg_cmd_vel_get_cmd_vel_x(msg);
    cmd_vel->cmd_vel_w = mavlink_msg_cmd_vel_get_cmd_vel_w(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CMD_VEL_LEN? msg->len : MAVLINK_MSG_ID_CMD_VEL_LEN;
        memset(cmd_vel, 0, MAVLINK_MSG_ID_CMD_VEL_LEN);
    memcpy(cmd_vel, _MAV_PAYLOAD(msg), len);
#endif
}
