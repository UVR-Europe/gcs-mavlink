#pragma once
// MESSAGE UH_EASA_PILOT_REQUEST PACKING

#define MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST 16001


typedef struct __mavlink_uh_easa_pilot_request_t {
 uint32_t request_id; /*<  Request ID*/
 uint8_t cmd; /*<  Command Id*/
 uint8_t pilot_index; /*<  Pilot index (0-4) optional*/
 char pilot_data[19]; /*<  3 chars country code, 12 chars number + 1 control sum, 3 chars secret*/
} mavlink_uh_easa_pilot_request_t;

#define MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST_LEN 25
#define MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST_MIN_LEN 25
#define MAVLINK_MSG_ID_16001_LEN 25
#define MAVLINK_MSG_ID_16001_MIN_LEN 25

#define MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST_CRC 146
#define MAVLINK_MSG_ID_16001_CRC 146

#define MAVLINK_MSG_UH_EASA_PILOT_REQUEST_FIELD_PILOT_DATA_LEN 19

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_UH_EASA_PILOT_REQUEST { \
    16001, \
    "UH_EASA_PILOT_REQUEST", \
    4, \
    {  { "request_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_uh_easa_pilot_request_t, request_id) }, \
         { "cmd", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_uh_easa_pilot_request_t, cmd) }, \
         { "pilot_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_uh_easa_pilot_request_t, pilot_index) }, \
         { "pilot_data", NULL, MAVLINK_TYPE_CHAR, 19, 6, offsetof(mavlink_uh_easa_pilot_request_t, pilot_data) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_UH_EASA_PILOT_REQUEST { \
    "UH_EASA_PILOT_REQUEST", \
    4, \
    {  { "request_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_uh_easa_pilot_request_t, request_id) }, \
         { "cmd", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_uh_easa_pilot_request_t, cmd) }, \
         { "pilot_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_uh_easa_pilot_request_t, pilot_index) }, \
         { "pilot_data", NULL, MAVLINK_TYPE_CHAR, 19, 6, offsetof(mavlink_uh_easa_pilot_request_t, pilot_data) }, \
         } \
}
#endif

/**
 * @brief Pack a uh_easa_pilot_request message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param request_id  Request ID
 * @param cmd  Command Id
 * @param pilot_index  Pilot index (0-4) optional
 * @param pilot_data  3 chars country code, 12 chars number + 1 control sum, 3 chars secret
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uh_easa_pilot_request_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t request_id, uint8_t cmd, uint8_t pilot_index, const char *pilot_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST_LEN];
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_uint8_t(buf, 4, cmd);
    _mav_put_uint8_t(buf, 5, pilot_index);
    _mav_put_char_array(buf, 6, pilot_data, 19);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST_LEN);
#else
    mavlink_uh_easa_pilot_request_t packet;
    packet.request_id = request_id;
    packet.cmd = cmd;
    packet.pilot_index = pilot_index;
    mav_array_memcpy(packet.pilot_data, pilot_data, sizeof(char)*19);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST_MIN_LEN, MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST_LEN, MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST_CRC);
}

/**
 * @brief Pack a uh_easa_pilot_request message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param request_id  Request ID
 * @param cmd  Command Id
 * @param pilot_index  Pilot index (0-4) optional
 * @param pilot_data  3 chars country code, 12 chars number + 1 control sum, 3 chars secret
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uh_easa_pilot_request_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t request_id,uint8_t cmd,uint8_t pilot_index,const char *pilot_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST_LEN];
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_uint8_t(buf, 4, cmd);
    _mav_put_uint8_t(buf, 5, pilot_index);
    _mav_put_char_array(buf, 6, pilot_data, 19);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST_LEN);
#else
    mavlink_uh_easa_pilot_request_t packet;
    packet.request_id = request_id;
    packet.cmd = cmd;
    packet.pilot_index = pilot_index;
    mav_array_memcpy(packet.pilot_data, pilot_data, sizeof(char)*19);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST_MIN_LEN, MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST_LEN, MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST_CRC);
}

/**
 * @brief Encode a uh_easa_pilot_request struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param uh_easa_pilot_request C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uh_easa_pilot_request_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_uh_easa_pilot_request_t* uh_easa_pilot_request)
{
    return mavlink_msg_uh_easa_pilot_request_pack(system_id, component_id, msg, uh_easa_pilot_request->request_id, uh_easa_pilot_request->cmd, uh_easa_pilot_request->pilot_index, uh_easa_pilot_request->pilot_data);
}

/**
 * @brief Encode a uh_easa_pilot_request struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param uh_easa_pilot_request C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uh_easa_pilot_request_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_uh_easa_pilot_request_t* uh_easa_pilot_request)
{
    return mavlink_msg_uh_easa_pilot_request_pack_chan(system_id, component_id, chan, msg, uh_easa_pilot_request->request_id, uh_easa_pilot_request->cmd, uh_easa_pilot_request->pilot_index, uh_easa_pilot_request->pilot_data);
}

/**
 * @brief Send a uh_easa_pilot_request message
 * @param chan MAVLink channel to send the message
 *
 * @param request_id  Request ID
 * @param cmd  Command Id
 * @param pilot_index  Pilot index (0-4) optional
 * @param pilot_data  3 chars country code, 12 chars number + 1 control sum, 3 chars secret
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_uh_easa_pilot_request_send(mavlink_channel_t chan, uint32_t request_id, uint8_t cmd, uint8_t pilot_index, const char *pilot_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST_LEN];
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_uint8_t(buf, 4, cmd);
    _mav_put_uint8_t(buf, 5, pilot_index);
    _mav_put_char_array(buf, 6, pilot_data, 19);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST, buf, MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST_MIN_LEN, MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST_LEN, MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST_CRC);
#else
    mavlink_uh_easa_pilot_request_t packet;
    packet.request_id = request_id;
    packet.cmd = cmd;
    packet.pilot_index = pilot_index;
    mav_array_memcpy(packet.pilot_data, pilot_data, sizeof(char)*19);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST, (const char *)&packet, MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST_MIN_LEN, MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST_LEN, MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST_CRC);
#endif
}

/**
 * @brief Send a uh_easa_pilot_request message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_uh_easa_pilot_request_send_struct(mavlink_channel_t chan, const mavlink_uh_easa_pilot_request_t* uh_easa_pilot_request)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_uh_easa_pilot_request_send(chan, uh_easa_pilot_request->request_id, uh_easa_pilot_request->cmd, uh_easa_pilot_request->pilot_index, uh_easa_pilot_request->pilot_data);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST, (const char *)uh_easa_pilot_request, MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST_MIN_LEN, MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST_LEN, MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST_CRC);
#endif
}

#if MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_uh_easa_pilot_request_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t request_id, uint8_t cmd, uint8_t pilot_index, const char *pilot_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_uint8_t(buf, 4, cmd);
    _mav_put_uint8_t(buf, 5, pilot_index);
    _mav_put_char_array(buf, 6, pilot_data, 19);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST, buf, MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST_MIN_LEN, MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST_LEN, MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST_CRC);
#else
    mavlink_uh_easa_pilot_request_t *packet = (mavlink_uh_easa_pilot_request_t *)msgbuf;
    packet->request_id = request_id;
    packet->cmd = cmd;
    packet->pilot_index = pilot_index;
    mav_array_memcpy(packet->pilot_data, pilot_data, sizeof(char)*19);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST, (const char *)packet, MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST_MIN_LEN, MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST_LEN, MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST_CRC);
#endif
}
#endif

#endif

// MESSAGE UH_EASA_PILOT_REQUEST UNPACKING


/**
 * @brief Get field request_id from uh_easa_pilot_request message
 *
 * @return  Request ID
 */
static inline uint32_t mavlink_msg_uh_easa_pilot_request_get_request_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field cmd from uh_easa_pilot_request message
 *
 * @return  Command Id
 */
static inline uint8_t mavlink_msg_uh_easa_pilot_request_get_cmd(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field pilot_index from uh_easa_pilot_request message
 *
 * @return  Pilot index (0-4) optional
 */
static inline uint8_t mavlink_msg_uh_easa_pilot_request_get_pilot_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field pilot_data from uh_easa_pilot_request message
 *
 * @return  3 chars country code, 12 chars number + 1 control sum, 3 chars secret
 */
static inline uint16_t mavlink_msg_uh_easa_pilot_request_get_pilot_data(const mavlink_message_t* msg, char *pilot_data)
{
    return _MAV_RETURN_char_array(msg, pilot_data, 19,  6);
}

/**
 * @brief Decode a uh_easa_pilot_request message into a struct
 *
 * @param msg The message to decode
 * @param uh_easa_pilot_request C-struct to decode the message contents into
 */
static inline void mavlink_msg_uh_easa_pilot_request_decode(const mavlink_message_t* msg, mavlink_uh_easa_pilot_request_t* uh_easa_pilot_request)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    uh_easa_pilot_request->request_id = mavlink_msg_uh_easa_pilot_request_get_request_id(msg);
    uh_easa_pilot_request->cmd = mavlink_msg_uh_easa_pilot_request_get_cmd(msg);
    uh_easa_pilot_request->pilot_index = mavlink_msg_uh_easa_pilot_request_get_pilot_index(msg);
    mavlink_msg_uh_easa_pilot_request_get_pilot_data(msg, uh_easa_pilot_request->pilot_data);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST_LEN? msg->len : MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST_LEN;
        memset(uh_easa_pilot_request, 0, MAVLINK_MSG_ID_UH_EASA_PILOT_REQUEST_LEN);
    memcpy(uh_easa_pilot_request, _MAV_PAYLOAD(msg), len);
#endif
}
