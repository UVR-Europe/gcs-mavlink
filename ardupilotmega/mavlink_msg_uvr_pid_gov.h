#pragma once
// MESSAGE UVR_PID_GOV PACKING

#define MAVLINK_MSG_ID_UVR_PID_GOV 15006


typedef struct __mavlink_uvr_pid_gov_t {
 float gov_pid_out; /*<  Governor Pid Output*/
 float gov_pid_P_out; /*<  Governor Pid P Out*/
 float gov_pid_I_out; /*<  Governor Pid I Out*/
 float gov_pid_D_out; /*<  Governor Pid D Out*/
} mavlink_uvr_pid_gov_t;

#define MAVLINK_MSG_ID_UVR_PID_GOV_LEN 16
#define MAVLINK_MSG_ID_UVR_PID_GOV_MIN_LEN 16
#define MAVLINK_MSG_ID_15006_LEN 16
#define MAVLINK_MSG_ID_15006_MIN_LEN 16

#define MAVLINK_MSG_ID_UVR_PID_GOV_CRC 62
#define MAVLINK_MSG_ID_15006_CRC 62



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_UVR_PID_GOV { \
    15006, \
    "UVR_PID_GOV", \
    4, \
    {  { "gov_pid_out", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_uvr_pid_gov_t, gov_pid_out) }, \
         { "gov_pid_P_out", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_uvr_pid_gov_t, gov_pid_P_out) }, \
         { "gov_pid_I_out", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_uvr_pid_gov_t, gov_pid_I_out) }, \
         { "gov_pid_D_out", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_uvr_pid_gov_t, gov_pid_D_out) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_UVR_PID_GOV { \
    "UVR_PID_GOV", \
    4, \
    {  { "gov_pid_out", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_uvr_pid_gov_t, gov_pid_out) }, \
         { "gov_pid_P_out", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_uvr_pid_gov_t, gov_pid_P_out) }, \
         { "gov_pid_I_out", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_uvr_pid_gov_t, gov_pid_I_out) }, \
         { "gov_pid_D_out", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_uvr_pid_gov_t, gov_pid_D_out) }, \
         } \
}
#endif

/**
 * @brief Pack a uvr_pid_gov message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param gov_pid_out  Governor Pid Output
 * @param gov_pid_P_out  Governor Pid P Out
 * @param gov_pid_I_out  Governor Pid I Out
 * @param gov_pid_D_out  Governor Pid D Out
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uvr_pid_gov_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float gov_pid_out, float gov_pid_P_out, float gov_pid_I_out, float gov_pid_D_out)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UVR_PID_GOV_LEN];
    _mav_put_float(buf, 0, gov_pid_out);
    _mav_put_float(buf, 4, gov_pid_P_out);
    _mav_put_float(buf, 8, gov_pid_I_out);
    _mav_put_float(buf, 12, gov_pid_D_out);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UVR_PID_GOV_LEN);
#else
    mavlink_uvr_pid_gov_t packet;
    packet.gov_pid_out = gov_pid_out;
    packet.gov_pid_P_out = gov_pid_P_out;
    packet.gov_pid_I_out = gov_pid_I_out;
    packet.gov_pid_D_out = gov_pid_D_out;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UVR_PID_GOV_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UVR_PID_GOV;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_UVR_PID_GOV_MIN_LEN, MAVLINK_MSG_ID_UVR_PID_GOV_LEN, MAVLINK_MSG_ID_UVR_PID_GOV_CRC);
}

/**
 * @brief Pack a uvr_pid_gov message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gov_pid_out  Governor Pid Output
 * @param gov_pid_P_out  Governor Pid P Out
 * @param gov_pid_I_out  Governor Pid I Out
 * @param gov_pid_D_out  Governor Pid D Out
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uvr_pid_gov_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float gov_pid_out,float gov_pid_P_out,float gov_pid_I_out,float gov_pid_D_out)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UVR_PID_GOV_LEN];
    _mav_put_float(buf, 0, gov_pid_out);
    _mav_put_float(buf, 4, gov_pid_P_out);
    _mav_put_float(buf, 8, gov_pid_I_out);
    _mav_put_float(buf, 12, gov_pid_D_out);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UVR_PID_GOV_LEN);
#else
    mavlink_uvr_pid_gov_t packet;
    packet.gov_pid_out = gov_pid_out;
    packet.gov_pid_P_out = gov_pid_P_out;
    packet.gov_pid_I_out = gov_pid_I_out;
    packet.gov_pid_D_out = gov_pid_D_out;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UVR_PID_GOV_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UVR_PID_GOV;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_UVR_PID_GOV_MIN_LEN, MAVLINK_MSG_ID_UVR_PID_GOV_LEN, MAVLINK_MSG_ID_UVR_PID_GOV_CRC);
}

/**
 * @brief Encode a uvr_pid_gov struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param uvr_pid_gov C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uvr_pid_gov_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_uvr_pid_gov_t* uvr_pid_gov)
{
    return mavlink_msg_uvr_pid_gov_pack(system_id, component_id, msg, uvr_pid_gov->gov_pid_out, uvr_pid_gov->gov_pid_P_out, uvr_pid_gov->gov_pid_I_out, uvr_pid_gov->gov_pid_D_out);
}

/**
 * @brief Encode a uvr_pid_gov struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param uvr_pid_gov C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uvr_pid_gov_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_uvr_pid_gov_t* uvr_pid_gov)
{
    return mavlink_msg_uvr_pid_gov_pack_chan(system_id, component_id, chan, msg, uvr_pid_gov->gov_pid_out, uvr_pid_gov->gov_pid_P_out, uvr_pid_gov->gov_pid_I_out, uvr_pid_gov->gov_pid_D_out);
}

/**
 * @brief Send a uvr_pid_gov message
 * @param chan MAVLink channel to send the message
 *
 * @param gov_pid_out  Governor Pid Output
 * @param gov_pid_P_out  Governor Pid P Out
 * @param gov_pid_I_out  Governor Pid I Out
 * @param gov_pid_D_out  Governor Pid D Out
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_uvr_pid_gov_send(mavlink_channel_t chan, float gov_pid_out, float gov_pid_P_out, float gov_pid_I_out, float gov_pid_D_out)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UVR_PID_GOV_LEN];
    _mav_put_float(buf, 0, gov_pid_out);
    _mav_put_float(buf, 4, gov_pid_P_out);
    _mav_put_float(buf, 8, gov_pid_I_out);
    _mav_put_float(buf, 12, gov_pid_D_out);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_PID_GOV, buf, MAVLINK_MSG_ID_UVR_PID_GOV_MIN_LEN, MAVLINK_MSG_ID_UVR_PID_GOV_LEN, MAVLINK_MSG_ID_UVR_PID_GOV_CRC);
#else
    mavlink_uvr_pid_gov_t packet;
    packet.gov_pid_out = gov_pid_out;
    packet.gov_pid_P_out = gov_pid_P_out;
    packet.gov_pid_I_out = gov_pid_I_out;
    packet.gov_pid_D_out = gov_pid_D_out;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_PID_GOV, (const char *)&packet, MAVLINK_MSG_ID_UVR_PID_GOV_MIN_LEN, MAVLINK_MSG_ID_UVR_PID_GOV_LEN, MAVLINK_MSG_ID_UVR_PID_GOV_CRC);
#endif
}

/**
 * @brief Send a uvr_pid_gov message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_uvr_pid_gov_send_struct(mavlink_channel_t chan, const mavlink_uvr_pid_gov_t* uvr_pid_gov)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_uvr_pid_gov_send(chan, uvr_pid_gov->gov_pid_out, uvr_pid_gov->gov_pid_P_out, uvr_pid_gov->gov_pid_I_out, uvr_pid_gov->gov_pid_D_out);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_PID_GOV, (const char *)uvr_pid_gov, MAVLINK_MSG_ID_UVR_PID_GOV_MIN_LEN, MAVLINK_MSG_ID_UVR_PID_GOV_LEN, MAVLINK_MSG_ID_UVR_PID_GOV_CRC);
#endif
}

#if MAVLINK_MSG_ID_UVR_PID_GOV_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_uvr_pid_gov_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float gov_pid_out, float gov_pid_P_out, float gov_pid_I_out, float gov_pid_D_out)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, gov_pid_out);
    _mav_put_float(buf, 4, gov_pid_P_out);
    _mav_put_float(buf, 8, gov_pid_I_out);
    _mav_put_float(buf, 12, gov_pid_D_out);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_PID_GOV, buf, MAVLINK_MSG_ID_UVR_PID_GOV_MIN_LEN, MAVLINK_MSG_ID_UVR_PID_GOV_LEN, MAVLINK_MSG_ID_UVR_PID_GOV_CRC);
#else
    mavlink_uvr_pid_gov_t *packet = (mavlink_uvr_pid_gov_t *)msgbuf;
    packet->gov_pid_out = gov_pid_out;
    packet->gov_pid_P_out = gov_pid_P_out;
    packet->gov_pid_I_out = gov_pid_I_out;
    packet->gov_pid_D_out = gov_pid_D_out;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_PID_GOV, (const char *)packet, MAVLINK_MSG_ID_UVR_PID_GOV_MIN_LEN, MAVLINK_MSG_ID_UVR_PID_GOV_LEN, MAVLINK_MSG_ID_UVR_PID_GOV_CRC);
#endif
}
#endif

#endif

// MESSAGE UVR_PID_GOV UNPACKING


/**
 * @brief Get field gov_pid_out from uvr_pid_gov message
 *
 * @return  Governor Pid Output
 */
static inline float mavlink_msg_uvr_pid_gov_get_gov_pid_out(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field gov_pid_P_out from uvr_pid_gov message
 *
 * @return  Governor Pid P Out
 */
static inline float mavlink_msg_uvr_pid_gov_get_gov_pid_P_out(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field gov_pid_I_out from uvr_pid_gov message
 *
 * @return  Governor Pid I Out
 */
static inline float mavlink_msg_uvr_pid_gov_get_gov_pid_I_out(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field gov_pid_D_out from uvr_pid_gov message
 *
 * @return  Governor Pid D Out
 */
static inline float mavlink_msg_uvr_pid_gov_get_gov_pid_D_out(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Decode a uvr_pid_gov message into a struct
 *
 * @param msg The message to decode
 * @param uvr_pid_gov C-struct to decode the message contents into
 */
static inline void mavlink_msg_uvr_pid_gov_decode(const mavlink_message_t* msg, mavlink_uvr_pid_gov_t* uvr_pid_gov)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    uvr_pid_gov->gov_pid_out = mavlink_msg_uvr_pid_gov_get_gov_pid_out(msg);
    uvr_pid_gov->gov_pid_P_out = mavlink_msg_uvr_pid_gov_get_gov_pid_P_out(msg);
    uvr_pid_gov->gov_pid_I_out = mavlink_msg_uvr_pid_gov_get_gov_pid_I_out(msg);
    uvr_pid_gov->gov_pid_D_out = mavlink_msg_uvr_pid_gov_get_gov_pid_D_out(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_UVR_PID_GOV_LEN? msg->len : MAVLINK_MSG_ID_UVR_PID_GOV_LEN;
        memset(uvr_pid_gov, 0, MAVLINK_MSG_ID_UVR_PID_GOV_LEN);
    memcpy(uvr_pid_gov, _MAV_PAYLOAD(msg), len);
#endif
}
