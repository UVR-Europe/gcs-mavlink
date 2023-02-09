#pragma once
// MESSAGE UH_EASA_PILOT_RESPONSE PACKING

#define MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE 16002


typedef struct __mavlink_uh_easa_pilot_response_t {
 uint32_t request_id; /*<  Request ID*/
 uint8_t status; /*<  Request Processing Status byte*/
 int8_t current_pilot_index; /*<  Currently Authenticated Pilot Index*/
 char pilot1[19]; /*<  Pilot1 data*/
 char pilot2[19]; /*<  Pilot2 data*/
 char pilot3[19]; /*<  Pilot3 data*/
 char pilot4[19]; /*<  Pilot4 data*/
 char pilot5[19]; /*<  Pilot5 data*/
} mavlink_uh_easa_pilot_response_t;

#define MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE_LEN 101
#define MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE_MIN_LEN 101
#define MAVLINK_MSG_ID_16002_LEN 101
#define MAVLINK_MSG_ID_16002_MIN_LEN 101

#define MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE_CRC 74
#define MAVLINK_MSG_ID_16002_CRC 74

#define MAVLINK_MSG_UH_EASA_PILOT_RESPONSE_FIELD_PILOT1_LEN 19
#define MAVLINK_MSG_UH_EASA_PILOT_RESPONSE_FIELD_PILOT2_LEN 19
#define MAVLINK_MSG_UH_EASA_PILOT_RESPONSE_FIELD_PILOT3_LEN 19
#define MAVLINK_MSG_UH_EASA_PILOT_RESPONSE_FIELD_PILOT4_LEN 19
#define MAVLINK_MSG_UH_EASA_PILOT_RESPONSE_FIELD_PILOT5_LEN 19

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_UH_EASA_PILOT_RESPONSE { \
    16002, \
    "UH_EASA_PILOT_RESPONSE", \
    8, \
    {  { "request_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_uh_easa_pilot_response_t, request_id) }, \
         { "status", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_uh_easa_pilot_response_t, status) }, \
         { "current_pilot_index", NULL, MAVLINK_TYPE_INT8_T, 0, 5, offsetof(mavlink_uh_easa_pilot_response_t, current_pilot_index) }, \
         { "pilot1", NULL, MAVLINK_TYPE_CHAR, 19, 6, offsetof(mavlink_uh_easa_pilot_response_t, pilot1) }, \
         { "pilot2", NULL, MAVLINK_TYPE_CHAR, 19, 25, offsetof(mavlink_uh_easa_pilot_response_t, pilot2) }, \
         { "pilot3", NULL, MAVLINK_TYPE_CHAR, 19, 44, offsetof(mavlink_uh_easa_pilot_response_t, pilot3) }, \
         { "pilot4", NULL, MAVLINK_TYPE_CHAR, 19, 63, offsetof(mavlink_uh_easa_pilot_response_t, pilot4) }, \
         { "pilot5", NULL, MAVLINK_TYPE_CHAR, 19, 82, offsetof(mavlink_uh_easa_pilot_response_t, pilot5) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_UH_EASA_PILOT_RESPONSE { \
    "UH_EASA_PILOT_RESPONSE", \
    8, \
    {  { "request_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_uh_easa_pilot_response_t, request_id) }, \
         { "status", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_uh_easa_pilot_response_t, status) }, \
         { "current_pilot_index", NULL, MAVLINK_TYPE_INT8_T, 0, 5, offsetof(mavlink_uh_easa_pilot_response_t, current_pilot_index) }, \
         { "pilot1", NULL, MAVLINK_TYPE_CHAR, 19, 6, offsetof(mavlink_uh_easa_pilot_response_t, pilot1) }, \
         { "pilot2", NULL, MAVLINK_TYPE_CHAR, 19, 25, offsetof(mavlink_uh_easa_pilot_response_t, pilot2) }, \
         { "pilot3", NULL, MAVLINK_TYPE_CHAR, 19, 44, offsetof(mavlink_uh_easa_pilot_response_t, pilot3) }, \
         { "pilot4", NULL, MAVLINK_TYPE_CHAR, 19, 63, offsetof(mavlink_uh_easa_pilot_response_t, pilot4) }, \
         { "pilot5", NULL, MAVLINK_TYPE_CHAR, 19, 82, offsetof(mavlink_uh_easa_pilot_response_t, pilot5) }, \
         } \
}
#endif

/**
 * @brief Pack a uh_easa_pilot_response message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param request_id  Request ID
 * @param status  Request Processing Status byte
 * @param current_pilot_index  Currently Authenticated Pilot Index
 * @param pilot1  Pilot1 data
 * @param pilot2  Pilot2 data
 * @param pilot3  Pilot3 data
 * @param pilot4  Pilot4 data
 * @param pilot5  Pilot5 data
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uh_easa_pilot_response_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t request_id, uint8_t status, int8_t current_pilot_index, const char *pilot1, const char *pilot2, const char *pilot3, const char *pilot4, const char *pilot5)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE_LEN];
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_uint8_t(buf, 4, status);
    _mav_put_int8_t(buf, 5, current_pilot_index);
    _mav_put_char_array(buf, 6, pilot1, 19);
    _mav_put_char_array(buf, 25, pilot2, 19);
    _mav_put_char_array(buf, 44, pilot3, 19);
    _mav_put_char_array(buf, 63, pilot4, 19);
    _mav_put_char_array(buf, 82, pilot5, 19);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE_LEN);
#else
    mavlink_uh_easa_pilot_response_t packet;
    packet.request_id = request_id;
    packet.status = status;
    packet.current_pilot_index = current_pilot_index;
    mav_array_memcpy(packet.pilot1, pilot1, sizeof(char)*19);
    mav_array_memcpy(packet.pilot2, pilot2, sizeof(char)*19);
    mav_array_memcpy(packet.pilot3, pilot3, sizeof(char)*19);
    mav_array_memcpy(packet.pilot4, pilot4, sizeof(char)*19);
    mav_array_memcpy(packet.pilot5, pilot5, sizeof(char)*19);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE_LEN, MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE_CRC);
}

/**
 * @brief Pack a uh_easa_pilot_response message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param request_id  Request ID
 * @param status  Request Processing Status byte
 * @param current_pilot_index  Currently Authenticated Pilot Index
 * @param pilot1  Pilot1 data
 * @param pilot2  Pilot2 data
 * @param pilot3  Pilot3 data
 * @param pilot4  Pilot4 data
 * @param pilot5  Pilot5 data
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uh_easa_pilot_response_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t request_id,uint8_t status,int8_t current_pilot_index,const char *pilot1,const char *pilot2,const char *pilot3,const char *pilot4,const char *pilot5)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE_LEN];
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_uint8_t(buf, 4, status);
    _mav_put_int8_t(buf, 5, current_pilot_index);
    _mav_put_char_array(buf, 6, pilot1, 19);
    _mav_put_char_array(buf, 25, pilot2, 19);
    _mav_put_char_array(buf, 44, pilot3, 19);
    _mav_put_char_array(buf, 63, pilot4, 19);
    _mav_put_char_array(buf, 82, pilot5, 19);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE_LEN);
#else
    mavlink_uh_easa_pilot_response_t packet;
    packet.request_id = request_id;
    packet.status = status;
    packet.current_pilot_index = current_pilot_index;
    mav_array_memcpy(packet.pilot1, pilot1, sizeof(char)*19);
    mav_array_memcpy(packet.pilot2, pilot2, sizeof(char)*19);
    mav_array_memcpy(packet.pilot3, pilot3, sizeof(char)*19);
    mav_array_memcpy(packet.pilot4, pilot4, sizeof(char)*19);
    mav_array_memcpy(packet.pilot5, pilot5, sizeof(char)*19);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE_LEN, MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE_CRC);
}

/**
 * @brief Encode a uh_easa_pilot_response struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param uh_easa_pilot_response C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uh_easa_pilot_response_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_uh_easa_pilot_response_t* uh_easa_pilot_response)
{
    return mavlink_msg_uh_easa_pilot_response_pack(system_id, component_id, msg, uh_easa_pilot_response->request_id, uh_easa_pilot_response->status, uh_easa_pilot_response->current_pilot_index, uh_easa_pilot_response->pilot1, uh_easa_pilot_response->pilot2, uh_easa_pilot_response->pilot3, uh_easa_pilot_response->pilot4, uh_easa_pilot_response->pilot5);
}

/**
 * @brief Encode a uh_easa_pilot_response struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param uh_easa_pilot_response C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uh_easa_pilot_response_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_uh_easa_pilot_response_t* uh_easa_pilot_response)
{
    return mavlink_msg_uh_easa_pilot_response_pack_chan(system_id, component_id, chan, msg, uh_easa_pilot_response->request_id, uh_easa_pilot_response->status, uh_easa_pilot_response->current_pilot_index, uh_easa_pilot_response->pilot1, uh_easa_pilot_response->pilot2, uh_easa_pilot_response->pilot3, uh_easa_pilot_response->pilot4, uh_easa_pilot_response->pilot5);
}

/**
 * @brief Send a uh_easa_pilot_response message
 * @param chan MAVLink channel to send the message
 *
 * @param request_id  Request ID
 * @param status  Request Processing Status byte
 * @param current_pilot_index  Currently Authenticated Pilot Index
 * @param pilot1  Pilot1 data
 * @param pilot2  Pilot2 data
 * @param pilot3  Pilot3 data
 * @param pilot4  Pilot4 data
 * @param pilot5  Pilot5 data
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_uh_easa_pilot_response_send(mavlink_channel_t chan, uint32_t request_id, uint8_t status, int8_t current_pilot_index, const char *pilot1, const char *pilot2, const char *pilot3, const char *pilot4, const char *pilot5)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE_LEN];
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_uint8_t(buf, 4, status);
    _mav_put_int8_t(buf, 5, current_pilot_index);
    _mav_put_char_array(buf, 6, pilot1, 19);
    _mav_put_char_array(buf, 25, pilot2, 19);
    _mav_put_char_array(buf, 44, pilot3, 19);
    _mav_put_char_array(buf, 63, pilot4, 19);
    _mav_put_char_array(buf, 82, pilot5, 19);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE, buf, MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE_LEN, MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE_CRC);
#else
    mavlink_uh_easa_pilot_response_t packet;
    packet.request_id = request_id;
    packet.status = status;
    packet.current_pilot_index = current_pilot_index;
    mav_array_memcpy(packet.pilot1, pilot1, sizeof(char)*19);
    mav_array_memcpy(packet.pilot2, pilot2, sizeof(char)*19);
    mav_array_memcpy(packet.pilot3, pilot3, sizeof(char)*19);
    mav_array_memcpy(packet.pilot4, pilot4, sizeof(char)*19);
    mav_array_memcpy(packet.pilot5, pilot5, sizeof(char)*19);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE, (const char *)&packet, MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE_LEN, MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE_CRC);
#endif
}

/**
 * @brief Send a uh_easa_pilot_response message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_uh_easa_pilot_response_send_struct(mavlink_channel_t chan, const mavlink_uh_easa_pilot_response_t* uh_easa_pilot_response)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_uh_easa_pilot_response_send(chan, uh_easa_pilot_response->request_id, uh_easa_pilot_response->status, uh_easa_pilot_response->current_pilot_index, uh_easa_pilot_response->pilot1, uh_easa_pilot_response->pilot2, uh_easa_pilot_response->pilot3, uh_easa_pilot_response->pilot4, uh_easa_pilot_response->pilot5);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE, (const char *)uh_easa_pilot_response, MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE_LEN, MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE_CRC);
#endif
}

#if MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_uh_easa_pilot_response_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t request_id, uint8_t status, int8_t current_pilot_index, const char *pilot1, const char *pilot2, const char *pilot3, const char *pilot4, const char *pilot5)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_uint8_t(buf, 4, status);
    _mav_put_int8_t(buf, 5, current_pilot_index);
    _mav_put_char_array(buf, 6, pilot1, 19);
    _mav_put_char_array(buf, 25, pilot2, 19);
    _mav_put_char_array(buf, 44, pilot3, 19);
    _mav_put_char_array(buf, 63, pilot4, 19);
    _mav_put_char_array(buf, 82, pilot5, 19);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE, buf, MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE_LEN, MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE_CRC);
#else
    mavlink_uh_easa_pilot_response_t *packet = (mavlink_uh_easa_pilot_response_t *)msgbuf;
    packet->request_id = request_id;
    packet->status = status;
    packet->current_pilot_index = current_pilot_index;
    mav_array_memcpy(packet->pilot1, pilot1, sizeof(char)*19);
    mav_array_memcpy(packet->pilot2, pilot2, sizeof(char)*19);
    mav_array_memcpy(packet->pilot3, pilot3, sizeof(char)*19);
    mav_array_memcpy(packet->pilot4, pilot4, sizeof(char)*19);
    mav_array_memcpy(packet->pilot5, pilot5, sizeof(char)*19);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE, (const char *)packet, MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE_LEN, MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE_CRC);
#endif
}
#endif

#endif

// MESSAGE UH_EASA_PILOT_RESPONSE UNPACKING


/**
 * @brief Get field request_id from uh_easa_pilot_response message
 *
 * @return  Request ID
 */
static inline uint32_t mavlink_msg_uh_easa_pilot_response_get_request_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field status from uh_easa_pilot_response message
 *
 * @return  Request Processing Status byte
 */
static inline uint8_t mavlink_msg_uh_easa_pilot_response_get_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field current_pilot_index from uh_easa_pilot_response message
 *
 * @return  Currently Authenticated Pilot Index
 */
static inline int8_t mavlink_msg_uh_easa_pilot_response_get_current_pilot_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  5);
}

/**
 * @brief Get field pilot1 from uh_easa_pilot_response message
 *
 * @return  Pilot1 data
 */
static inline uint16_t mavlink_msg_uh_easa_pilot_response_get_pilot1(const mavlink_message_t* msg, char *pilot1)
{
    return _MAV_RETURN_char_array(msg, pilot1, 19,  6);
}

/**
 * @brief Get field pilot2 from uh_easa_pilot_response message
 *
 * @return  Pilot2 data
 */
static inline uint16_t mavlink_msg_uh_easa_pilot_response_get_pilot2(const mavlink_message_t* msg, char *pilot2)
{
    return _MAV_RETURN_char_array(msg, pilot2, 19,  25);
}

/**
 * @brief Get field pilot3 from uh_easa_pilot_response message
 *
 * @return  Pilot3 data
 */
static inline uint16_t mavlink_msg_uh_easa_pilot_response_get_pilot3(const mavlink_message_t* msg, char *pilot3)
{
    return _MAV_RETURN_char_array(msg, pilot3, 19,  44);
}

/**
 * @brief Get field pilot4 from uh_easa_pilot_response message
 *
 * @return  Pilot4 data
 */
static inline uint16_t mavlink_msg_uh_easa_pilot_response_get_pilot4(const mavlink_message_t* msg, char *pilot4)
{
    return _MAV_RETURN_char_array(msg, pilot4, 19,  63);
}

/**
 * @brief Get field pilot5 from uh_easa_pilot_response message
 *
 * @return  Pilot5 data
 */
static inline uint16_t mavlink_msg_uh_easa_pilot_response_get_pilot5(const mavlink_message_t* msg, char *pilot5)
{
    return _MAV_RETURN_char_array(msg, pilot5, 19,  82);
}

/**
 * @brief Decode a uh_easa_pilot_response message into a struct
 *
 * @param msg The message to decode
 * @param uh_easa_pilot_response C-struct to decode the message contents into
 */
static inline void mavlink_msg_uh_easa_pilot_response_decode(const mavlink_message_t* msg, mavlink_uh_easa_pilot_response_t* uh_easa_pilot_response)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    uh_easa_pilot_response->request_id = mavlink_msg_uh_easa_pilot_response_get_request_id(msg);
    uh_easa_pilot_response->status = mavlink_msg_uh_easa_pilot_response_get_status(msg);
    uh_easa_pilot_response->current_pilot_index = mavlink_msg_uh_easa_pilot_response_get_current_pilot_index(msg);
    mavlink_msg_uh_easa_pilot_response_get_pilot1(msg, uh_easa_pilot_response->pilot1);
    mavlink_msg_uh_easa_pilot_response_get_pilot2(msg, uh_easa_pilot_response->pilot2);
    mavlink_msg_uh_easa_pilot_response_get_pilot3(msg, uh_easa_pilot_response->pilot3);
    mavlink_msg_uh_easa_pilot_response_get_pilot4(msg, uh_easa_pilot_response->pilot4);
    mavlink_msg_uh_easa_pilot_response_get_pilot5(msg, uh_easa_pilot_response->pilot5);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE_LEN? msg->len : MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE_LEN;
        memset(uh_easa_pilot_response, 0, MAVLINK_MSG_ID_UH_EASA_PILOT_RESPONSE_LEN);
    memcpy(uh_easa_pilot_response, _MAV_PAYLOAD(msg), len);
#endif
}
