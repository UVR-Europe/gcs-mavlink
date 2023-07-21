#pragma once
// MESSAGE UH_TURBINE_INSPECTION PACKING

#define MAVLINK_MSG_ID_UH_TURBINE_INSPECTION 16006


typedef struct __mavlink_uh_turbine_inspection_t {
 float param1; /*<  data*/
 float param2; /*<  data*/
 float param3; /*<  data*/
 float param4; /*<  data*/
 float param5; /*<  data*/
 float param6; /*<  data*/
 float param7; /*<  data*/
 float param8; /*<  data*/
 float param9; /*<  data*/
} mavlink_uh_turbine_inspection_t;

#define MAVLINK_MSG_ID_UH_TURBINE_INSPECTION_LEN 36
#define MAVLINK_MSG_ID_UH_TURBINE_INSPECTION_MIN_LEN 36
#define MAVLINK_MSG_ID_16006_LEN 36
#define MAVLINK_MSG_ID_16006_MIN_LEN 36

#define MAVLINK_MSG_ID_UH_TURBINE_INSPECTION_CRC 131
#define MAVLINK_MSG_ID_16006_CRC 131



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_UH_TURBINE_INSPECTION { \
    16006, \
    "UH_TURBINE_INSPECTION", \
    9, \
    {  { "param1", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_uh_turbine_inspection_t, param1) }, \
         { "param2", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_uh_turbine_inspection_t, param2) }, \
         { "param3", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_uh_turbine_inspection_t, param3) }, \
         { "param4", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_uh_turbine_inspection_t, param4) }, \
         { "param5", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_uh_turbine_inspection_t, param5) }, \
         { "param6", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_uh_turbine_inspection_t, param6) }, \
         { "param7", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_uh_turbine_inspection_t, param7) }, \
         { "param8", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_uh_turbine_inspection_t, param8) }, \
         { "param9", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_uh_turbine_inspection_t, param9) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_UH_TURBINE_INSPECTION { \
    "UH_TURBINE_INSPECTION", \
    9, \
    {  { "param1", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_uh_turbine_inspection_t, param1) }, \
         { "param2", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_uh_turbine_inspection_t, param2) }, \
         { "param3", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_uh_turbine_inspection_t, param3) }, \
         { "param4", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_uh_turbine_inspection_t, param4) }, \
         { "param5", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_uh_turbine_inspection_t, param5) }, \
         { "param6", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_uh_turbine_inspection_t, param6) }, \
         { "param7", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_uh_turbine_inspection_t, param7) }, \
         { "param8", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_uh_turbine_inspection_t, param8) }, \
         { "param9", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_uh_turbine_inspection_t, param9) }, \
         } \
}
#endif

/**
 * @brief Pack a uh_turbine_inspection message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param param1  data
 * @param param2  data
 * @param param3  data
 * @param param4  data
 * @param param5  data
 * @param param6  data
 * @param param7  data
 * @param param8  data
 * @param param9  data
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uh_turbine_inspection_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float param1, float param2, float param3, float param4, float param5, float param6, float param7, float param8, float param9)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UH_TURBINE_INSPECTION_LEN];
    _mav_put_float(buf, 0, param1);
    _mav_put_float(buf, 4, param2);
    _mav_put_float(buf, 8, param3);
    _mav_put_float(buf, 12, param4);
    _mav_put_float(buf, 16, param5);
    _mav_put_float(buf, 20, param6);
    _mav_put_float(buf, 24, param7);
    _mav_put_float(buf, 28, param8);
    _mav_put_float(buf, 32, param9);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UH_TURBINE_INSPECTION_LEN);
#else
    mavlink_uh_turbine_inspection_t packet;
    packet.param1 = param1;
    packet.param2 = param2;
    packet.param3 = param3;
    packet.param4 = param4;
    packet.param5 = param5;
    packet.param6 = param6;
    packet.param7 = param7;
    packet.param8 = param8;
    packet.param9 = param9;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UH_TURBINE_INSPECTION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UH_TURBINE_INSPECTION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_UH_TURBINE_INSPECTION_MIN_LEN, MAVLINK_MSG_ID_UH_TURBINE_INSPECTION_LEN, MAVLINK_MSG_ID_UH_TURBINE_INSPECTION_CRC);
}

/**
 * @brief Pack a uh_turbine_inspection message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param param1  data
 * @param param2  data
 * @param param3  data
 * @param param4  data
 * @param param5  data
 * @param param6  data
 * @param param7  data
 * @param param8  data
 * @param param9  data
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uh_turbine_inspection_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float param1,float param2,float param3,float param4,float param5,float param6,float param7,float param8,float param9)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UH_TURBINE_INSPECTION_LEN];
    _mav_put_float(buf, 0, param1);
    _mav_put_float(buf, 4, param2);
    _mav_put_float(buf, 8, param3);
    _mav_put_float(buf, 12, param4);
    _mav_put_float(buf, 16, param5);
    _mav_put_float(buf, 20, param6);
    _mav_put_float(buf, 24, param7);
    _mav_put_float(buf, 28, param8);
    _mav_put_float(buf, 32, param9);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UH_TURBINE_INSPECTION_LEN);
#else
    mavlink_uh_turbine_inspection_t packet;
    packet.param1 = param1;
    packet.param2 = param2;
    packet.param3 = param3;
    packet.param4 = param4;
    packet.param5 = param5;
    packet.param6 = param6;
    packet.param7 = param7;
    packet.param8 = param8;
    packet.param9 = param9;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UH_TURBINE_INSPECTION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UH_TURBINE_INSPECTION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_UH_TURBINE_INSPECTION_MIN_LEN, MAVLINK_MSG_ID_UH_TURBINE_INSPECTION_LEN, MAVLINK_MSG_ID_UH_TURBINE_INSPECTION_CRC);
}

/**
 * @brief Encode a uh_turbine_inspection struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param uh_turbine_inspection C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uh_turbine_inspection_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_uh_turbine_inspection_t* uh_turbine_inspection)
{
    return mavlink_msg_uh_turbine_inspection_pack(system_id, component_id, msg, uh_turbine_inspection->param1, uh_turbine_inspection->param2, uh_turbine_inspection->param3, uh_turbine_inspection->param4, uh_turbine_inspection->param5, uh_turbine_inspection->param6, uh_turbine_inspection->param7, uh_turbine_inspection->param8, uh_turbine_inspection->param9);
}

/**
 * @brief Encode a uh_turbine_inspection struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param uh_turbine_inspection C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uh_turbine_inspection_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_uh_turbine_inspection_t* uh_turbine_inspection)
{
    return mavlink_msg_uh_turbine_inspection_pack_chan(system_id, component_id, chan, msg, uh_turbine_inspection->param1, uh_turbine_inspection->param2, uh_turbine_inspection->param3, uh_turbine_inspection->param4, uh_turbine_inspection->param5, uh_turbine_inspection->param6, uh_turbine_inspection->param7, uh_turbine_inspection->param8, uh_turbine_inspection->param9);
}

/**
 * @brief Send a uh_turbine_inspection message
 * @param chan MAVLink channel to send the message
 *
 * @param param1  data
 * @param param2  data
 * @param param3  data
 * @param param4  data
 * @param param5  data
 * @param param6  data
 * @param param7  data
 * @param param8  data
 * @param param9  data
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_uh_turbine_inspection_send(mavlink_channel_t chan, float param1, float param2, float param3, float param4, float param5, float param6, float param7, float param8, float param9)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UH_TURBINE_INSPECTION_LEN];
    _mav_put_float(buf, 0, param1);
    _mav_put_float(buf, 4, param2);
    _mav_put_float(buf, 8, param3);
    _mav_put_float(buf, 12, param4);
    _mav_put_float(buf, 16, param5);
    _mav_put_float(buf, 20, param6);
    _mav_put_float(buf, 24, param7);
    _mav_put_float(buf, 28, param8);
    _mav_put_float(buf, 32, param9);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UH_TURBINE_INSPECTION, buf, MAVLINK_MSG_ID_UH_TURBINE_INSPECTION_MIN_LEN, MAVLINK_MSG_ID_UH_TURBINE_INSPECTION_LEN, MAVLINK_MSG_ID_UH_TURBINE_INSPECTION_CRC);
#else
    mavlink_uh_turbine_inspection_t packet;
    packet.param1 = param1;
    packet.param2 = param2;
    packet.param3 = param3;
    packet.param4 = param4;
    packet.param5 = param5;
    packet.param6 = param6;
    packet.param7 = param7;
    packet.param8 = param8;
    packet.param9 = param9;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UH_TURBINE_INSPECTION, (const char *)&packet, MAVLINK_MSG_ID_UH_TURBINE_INSPECTION_MIN_LEN, MAVLINK_MSG_ID_UH_TURBINE_INSPECTION_LEN, MAVLINK_MSG_ID_UH_TURBINE_INSPECTION_CRC);
#endif
}

/**
 * @brief Send a uh_turbine_inspection message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_uh_turbine_inspection_send_struct(mavlink_channel_t chan, const mavlink_uh_turbine_inspection_t* uh_turbine_inspection)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_uh_turbine_inspection_send(chan, uh_turbine_inspection->param1, uh_turbine_inspection->param2, uh_turbine_inspection->param3, uh_turbine_inspection->param4, uh_turbine_inspection->param5, uh_turbine_inspection->param6, uh_turbine_inspection->param7, uh_turbine_inspection->param8, uh_turbine_inspection->param9);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UH_TURBINE_INSPECTION, (const char *)uh_turbine_inspection, MAVLINK_MSG_ID_UH_TURBINE_INSPECTION_MIN_LEN, MAVLINK_MSG_ID_UH_TURBINE_INSPECTION_LEN, MAVLINK_MSG_ID_UH_TURBINE_INSPECTION_CRC);
#endif
}

#if MAVLINK_MSG_ID_UH_TURBINE_INSPECTION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_uh_turbine_inspection_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float param1, float param2, float param3, float param4, float param5, float param6, float param7, float param8, float param9)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, param1);
    _mav_put_float(buf, 4, param2);
    _mav_put_float(buf, 8, param3);
    _mav_put_float(buf, 12, param4);
    _mav_put_float(buf, 16, param5);
    _mav_put_float(buf, 20, param6);
    _mav_put_float(buf, 24, param7);
    _mav_put_float(buf, 28, param8);
    _mav_put_float(buf, 32, param9);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UH_TURBINE_INSPECTION, buf, MAVLINK_MSG_ID_UH_TURBINE_INSPECTION_MIN_LEN, MAVLINK_MSG_ID_UH_TURBINE_INSPECTION_LEN, MAVLINK_MSG_ID_UH_TURBINE_INSPECTION_CRC);
#else
    mavlink_uh_turbine_inspection_t *packet = (mavlink_uh_turbine_inspection_t *)msgbuf;
    packet->param1 = param1;
    packet->param2 = param2;
    packet->param3 = param3;
    packet->param4 = param4;
    packet->param5 = param5;
    packet->param6 = param6;
    packet->param7 = param7;
    packet->param8 = param8;
    packet->param9 = param9;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UH_TURBINE_INSPECTION, (const char *)packet, MAVLINK_MSG_ID_UH_TURBINE_INSPECTION_MIN_LEN, MAVLINK_MSG_ID_UH_TURBINE_INSPECTION_LEN, MAVLINK_MSG_ID_UH_TURBINE_INSPECTION_CRC);
#endif
}
#endif

#endif

// MESSAGE UH_TURBINE_INSPECTION UNPACKING


/**
 * @brief Get field param1 from uh_turbine_inspection message
 *
 * @return  data
 */
static inline float mavlink_msg_uh_turbine_inspection_get_param1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field param2 from uh_turbine_inspection message
 *
 * @return  data
 */
static inline float mavlink_msg_uh_turbine_inspection_get_param2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field param3 from uh_turbine_inspection message
 *
 * @return  data
 */
static inline float mavlink_msg_uh_turbine_inspection_get_param3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field param4 from uh_turbine_inspection message
 *
 * @return  data
 */
static inline float mavlink_msg_uh_turbine_inspection_get_param4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field param5 from uh_turbine_inspection message
 *
 * @return  data
 */
static inline float mavlink_msg_uh_turbine_inspection_get_param5(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field param6 from uh_turbine_inspection message
 *
 * @return  data
 */
static inline float mavlink_msg_uh_turbine_inspection_get_param6(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field param7 from uh_turbine_inspection message
 *
 * @return  data
 */
static inline float mavlink_msg_uh_turbine_inspection_get_param7(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field param8 from uh_turbine_inspection message
 *
 * @return  data
 */
static inline float mavlink_msg_uh_turbine_inspection_get_param8(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field param9 from uh_turbine_inspection message
 *
 * @return  data
 */
static inline float mavlink_msg_uh_turbine_inspection_get_param9(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Decode a uh_turbine_inspection message into a struct
 *
 * @param msg The message to decode
 * @param uh_turbine_inspection C-struct to decode the message contents into
 */
static inline void mavlink_msg_uh_turbine_inspection_decode(const mavlink_message_t* msg, mavlink_uh_turbine_inspection_t* uh_turbine_inspection)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    uh_turbine_inspection->param1 = mavlink_msg_uh_turbine_inspection_get_param1(msg);
    uh_turbine_inspection->param2 = mavlink_msg_uh_turbine_inspection_get_param2(msg);
    uh_turbine_inspection->param3 = mavlink_msg_uh_turbine_inspection_get_param3(msg);
    uh_turbine_inspection->param4 = mavlink_msg_uh_turbine_inspection_get_param4(msg);
    uh_turbine_inspection->param5 = mavlink_msg_uh_turbine_inspection_get_param5(msg);
    uh_turbine_inspection->param6 = mavlink_msg_uh_turbine_inspection_get_param6(msg);
    uh_turbine_inspection->param7 = mavlink_msg_uh_turbine_inspection_get_param7(msg);
    uh_turbine_inspection->param8 = mavlink_msg_uh_turbine_inspection_get_param8(msg);
    uh_turbine_inspection->param9 = mavlink_msg_uh_turbine_inspection_get_param9(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_UH_TURBINE_INSPECTION_LEN? msg->len : MAVLINK_MSG_ID_UH_TURBINE_INSPECTION_LEN;
        memset(uh_turbine_inspection, 0, MAVLINK_MSG_ID_UH_TURBINE_INSPECTION_LEN);
    memcpy(uh_turbine_inspection, _MAV_PAYLOAD(msg), len);
#endif
}
