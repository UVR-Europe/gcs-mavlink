#pragma once
// MESSAGE UH_EASA_UAS_SN_RESPONSE PACKING

#define MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE 16004


typedef struct __mavlink_uh_easa_uas_sn_response_t {
 uint32_t request_id; /*<  Request ID*/
 uint8_t status; /*<  Request Processing Status byte*/
 char current_serial_number[20]; /*<  Current UAS Serial Number*/
} mavlink_uh_easa_uas_sn_response_t;

#define MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE_LEN 25
#define MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE_MIN_LEN 25
#define MAVLINK_MSG_ID_16004_LEN 25
#define MAVLINK_MSG_ID_16004_MIN_LEN 25

#define MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE_CRC 98
#define MAVLINK_MSG_ID_16004_CRC 98

#define MAVLINK_MSG_UH_EASA_UAS_SN_RESPONSE_FIELD_CURRENT_SERIAL_NUMBER_LEN 20

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_UH_EASA_UAS_SN_RESPONSE { \
    16004, \
    "UH_EASA_UAS_SN_RESPONSE", \
    3, \
    {  { "request_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_uh_easa_uas_sn_response_t, request_id) }, \
         { "status", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_uh_easa_uas_sn_response_t, status) }, \
         { "current_serial_number", NULL, MAVLINK_TYPE_CHAR, 20, 5, offsetof(mavlink_uh_easa_uas_sn_response_t, current_serial_number) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_UH_EASA_UAS_SN_RESPONSE { \
    "UH_EASA_UAS_SN_RESPONSE", \
    3, \
    {  { "request_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_uh_easa_uas_sn_response_t, request_id) }, \
         { "status", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_uh_easa_uas_sn_response_t, status) }, \
         { "current_serial_number", NULL, MAVLINK_TYPE_CHAR, 20, 5, offsetof(mavlink_uh_easa_uas_sn_response_t, current_serial_number) }, \
         } \
}
#endif

/**
 * @brief Pack a uh_easa_uas_sn_response message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param request_id  Request ID
 * @param status  Request Processing Status byte
 * @param current_serial_number  Current UAS Serial Number
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uh_easa_uas_sn_response_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t request_id, uint8_t status, const char *current_serial_number)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE_LEN];
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_uint8_t(buf, 4, status);
    _mav_put_char_array(buf, 5, current_serial_number, 20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE_LEN);
#else
    mavlink_uh_easa_uas_sn_response_t packet;
    packet.request_id = request_id;
    packet.status = status;
    mav_array_memcpy(packet.current_serial_number, current_serial_number, sizeof(char)*20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE_LEN, MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE_CRC);
}

/**
 * @brief Pack a uh_easa_uas_sn_response message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param request_id  Request ID
 * @param status  Request Processing Status byte
 * @param current_serial_number  Current UAS Serial Number
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uh_easa_uas_sn_response_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t request_id,uint8_t status,const char *current_serial_number)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE_LEN];
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_uint8_t(buf, 4, status);
    _mav_put_char_array(buf, 5, current_serial_number, 20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE_LEN);
#else
    mavlink_uh_easa_uas_sn_response_t packet;
    packet.request_id = request_id;
    packet.status = status;
    mav_array_memcpy(packet.current_serial_number, current_serial_number, sizeof(char)*20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE_LEN, MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE_CRC);
}

/**
 * @brief Encode a uh_easa_uas_sn_response struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param uh_easa_uas_sn_response C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uh_easa_uas_sn_response_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_uh_easa_uas_sn_response_t* uh_easa_uas_sn_response)
{
    return mavlink_msg_uh_easa_uas_sn_response_pack(system_id, component_id, msg, uh_easa_uas_sn_response->request_id, uh_easa_uas_sn_response->status, uh_easa_uas_sn_response->current_serial_number);
}

/**
 * @brief Encode a uh_easa_uas_sn_response struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param uh_easa_uas_sn_response C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uh_easa_uas_sn_response_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_uh_easa_uas_sn_response_t* uh_easa_uas_sn_response)
{
    return mavlink_msg_uh_easa_uas_sn_response_pack_chan(system_id, component_id, chan, msg, uh_easa_uas_sn_response->request_id, uh_easa_uas_sn_response->status, uh_easa_uas_sn_response->current_serial_number);
}

/**
 * @brief Send a uh_easa_uas_sn_response message
 * @param chan MAVLink channel to send the message
 *
 * @param request_id  Request ID
 * @param status  Request Processing Status byte
 * @param current_serial_number  Current UAS Serial Number
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_uh_easa_uas_sn_response_send(mavlink_channel_t chan, uint32_t request_id, uint8_t status, const char *current_serial_number)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE_LEN];
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_uint8_t(buf, 4, status);
    _mav_put_char_array(buf, 5, current_serial_number, 20);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE, buf, MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE_LEN, MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE_CRC);
#else
    mavlink_uh_easa_uas_sn_response_t packet;
    packet.request_id = request_id;
    packet.status = status;
    mav_array_memcpy(packet.current_serial_number, current_serial_number, sizeof(char)*20);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE, (const char *)&packet, MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE_LEN, MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE_CRC);
#endif
}

/**
 * @brief Send a uh_easa_uas_sn_response message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_uh_easa_uas_sn_response_send_struct(mavlink_channel_t chan, const mavlink_uh_easa_uas_sn_response_t* uh_easa_uas_sn_response)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_uh_easa_uas_sn_response_send(chan, uh_easa_uas_sn_response->request_id, uh_easa_uas_sn_response->status, uh_easa_uas_sn_response->current_serial_number);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE, (const char *)uh_easa_uas_sn_response, MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE_LEN, MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE_CRC);
#endif
}

#if MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_uh_easa_uas_sn_response_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t request_id, uint8_t status, const char *current_serial_number)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_uint8_t(buf, 4, status);
    _mav_put_char_array(buf, 5, current_serial_number, 20);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE, buf, MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE_LEN, MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE_CRC);
#else
    mavlink_uh_easa_uas_sn_response_t *packet = (mavlink_uh_easa_uas_sn_response_t *)msgbuf;
    packet->request_id = request_id;
    packet->status = status;
    mav_array_memcpy(packet->current_serial_number, current_serial_number, sizeof(char)*20);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE, (const char *)packet, MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE_LEN, MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE_CRC);
#endif
}
#endif

#endif

// MESSAGE UH_EASA_UAS_SN_RESPONSE UNPACKING


/**
 * @brief Get field request_id from uh_easa_uas_sn_response message
 *
 * @return  Request ID
 */
static inline uint32_t mavlink_msg_uh_easa_uas_sn_response_get_request_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field status from uh_easa_uas_sn_response message
 *
 * @return  Request Processing Status byte
 */
static inline uint8_t mavlink_msg_uh_easa_uas_sn_response_get_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field current_serial_number from uh_easa_uas_sn_response message
 *
 * @return  Current UAS Serial Number
 */
static inline uint16_t mavlink_msg_uh_easa_uas_sn_response_get_current_serial_number(const mavlink_message_t* msg, char *current_serial_number)
{
    return _MAV_RETURN_char_array(msg, current_serial_number, 20,  5);
}

/**
 * @brief Decode a uh_easa_uas_sn_response message into a struct
 *
 * @param msg The message to decode
 * @param uh_easa_uas_sn_response C-struct to decode the message contents into
 */
static inline void mavlink_msg_uh_easa_uas_sn_response_decode(const mavlink_message_t* msg, mavlink_uh_easa_uas_sn_response_t* uh_easa_uas_sn_response)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    uh_easa_uas_sn_response->request_id = mavlink_msg_uh_easa_uas_sn_response_get_request_id(msg);
    uh_easa_uas_sn_response->status = mavlink_msg_uh_easa_uas_sn_response_get_status(msg);
    mavlink_msg_uh_easa_uas_sn_response_get_current_serial_number(msg, uh_easa_uas_sn_response->current_serial_number);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE_LEN? msg->len : MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE_LEN;
        memset(uh_easa_uas_sn_response, 0, MAVLINK_MSG_ID_UH_EASA_UAS_SN_RESPONSE_LEN);
    memcpy(uh_easa_uas_sn_response, _MAV_PAYLOAD(msg), len);
#endif
}
