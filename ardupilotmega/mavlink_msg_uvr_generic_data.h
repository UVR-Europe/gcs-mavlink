#pragma once
// MESSAGE UVR_GENERIC_DATA PACKING

#define MAVLINK_MSG_ID_UVR_GENERIC_DATA 16000


typedef struct __mavlink_uvr_generic_data_t {
 char id[4]; /*<  id of data*/
 uint8_t length; /*<  length of data*/
 uint8_t data[4]; /*<   data itself*/
} mavlink_uvr_generic_data_t;

#define MAVLINK_MSG_ID_UVR_GENERIC_DATA_LEN 9
#define MAVLINK_MSG_ID_UVR_GENERIC_DATA_MIN_LEN 9
#define MAVLINK_MSG_ID_16000_LEN 9
#define MAVLINK_MSG_ID_16000_MIN_LEN 9

#define MAVLINK_MSG_ID_UVR_GENERIC_DATA_CRC 161
#define MAVLINK_MSG_ID_16000_CRC 161

#define MAVLINK_MSG_UVR_GENERIC_DATA_FIELD_ID_LEN 4
#define MAVLINK_MSG_UVR_GENERIC_DATA_FIELD_DATA_LEN 4

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_UVR_GENERIC_DATA { \
    16000, \
    "UVR_GENERIC_DATA", \
    3, \
    {  { "id", NULL, MAVLINK_TYPE_CHAR, 4, 0, offsetof(mavlink_uvr_generic_data_t, id) }, \
         { "length", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_uvr_generic_data_t, length) }, \
         { "data", NULL, MAVLINK_TYPE_UINT8_T, 4, 5, offsetof(mavlink_uvr_generic_data_t, data) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_UVR_GENERIC_DATA { \
    "UVR_GENERIC_DATA", \
    3, \
    {  { "id", NULL, MAVLINK_TYPE_CHAR, 4, 0, offsetof(mavlink_uvr_generic_data_t, id) }, \
         { "length", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_uvr_generic_data_t, length) }, \
         { "data", NULL, MAVLINK_TYPE_UINT8_T, 4, 5, offsetof(mavlink_uvr_generic_data_t, data) }, \
         } \
}
#endif

/**
 * @brief Pack a uvr_generic_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param id  id of data
 * @param length  length of data
 * @param data   data itself
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uvr_generic_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const char *id, uint8_t length, const uint8_t *data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UVR_GENERIC_DATA_LEN];
    _mav_put_uint8_t(buf, 4, length);
    _mav_put_char_array(buf, 0, id, 4);
    _mav_put_uint8_t_array(buf, 5, data, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UVR_GENERIC_DATA_LEN);
#else
    mavlink_uvr_generic_data_t packet;
    packet.length = length;
    mav_array_memcpy(packet.id, id, sizeof(char)*4);
    mav_array_memcpy(packet.data, data, sizeof(uint8_t)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UVR_GENERIC_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UVR_GENERIC_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_UVR_GENERIC_DATA_MIN_LEN, MAVLINK_MSG_ID_UVR_GENERIC_DATA_LEN, MAVLINK_MSG_ID_UVR_GENERIC_DATA_CRC);
}

/**
 * @brief Pack a uvr_generic_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param id  id of data
 * @param length  length of data
 * @param data   data itself
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uvr_generic_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const char *id,uint8_t length,const uint8_t *data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UVR_GENERIC_DATA_LEN];
    _mav_put_uint8_t(buf, 4, length);
    _mav_put_char_array(buf, 0, id, 4);
    _mav_put_uint8_t_array(buf, 5, data, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UVR_GENERIC_DATA_LEN);
#else
    mavlink_uvr_generic_data_t packet;
    packet.length = length;
    mav_array_memcpy(packet.id, id, sizeof(char)*4);
    mav_array_memcpy(packet.data, data, sizeof(uint8_t)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UVR_GENERIC_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UVR_GENERIC_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_UVR_GENERIC_DATA_MIN_LEN, MAVLINK_MSG_ID_UVR_GENERIC_DATA_LEN, MAVLINK_MSG_ID_UVR_GENERIC_DATA_CRC);
}

/**
 * @brief Encode a uvr_generic_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param uvr_generic_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uvr_generic_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_uvr_generic_data_t* uvr_generic_data)
{
    return mavlink_msg_uvr_generic_data_pack(system_id, component_id, msg, uvr_generic_data->id, uvr_generic_data->length, uvr_generic_data->data);
}

/**
 * @brief Encode a uvr_generic_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param uvr_generic_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uvr_generic_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_uvr_generic_data_t* uvr_generic_data)
{
    return mavlink_msg_uvr_generic_data_pack_chan(system_id, component_id, chan, msg, uvr_generic_data->id, uvr_generic_data->length, uvr_generic_data->data);
}

/**
 * @brief Send a uvr_generic_data message
 * @param chan MAVLink channel to send the message
 *
 * @param id  id of data
 * @param length  length of data
 * @param data   data itself
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_uvr_generic_data_send(mavlink_channel_t chan, const char *id, uint8_t length, const uint8_t *data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UVR_GENERIC_DATA_LEN];
    _mav_put_uint8_t(buf, 4, length);
    _mav_put_char_array(buf, 0, id, 4);
    _mav_put_uint8_t_array(buf, 5, data, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_GENERIC_DATA, buf, MAVLINK_MSG_ID_UVR_GENERIC_DATA_MIN_LEN, MAVLINK_MSG_ID_UVR_GENERIC_DATA_LEN, MAVLINK_MSG_ID_UVR_GENERIC_DATA_CRC);
#else
    mavlink_uvr_generic_data_t packet;
    packet.length = length;
    mav_array_memcpy(packet.id, id, sizeof(char)*4);
    mav_array_memcpy(packet.data, data, sizeof(uint8_t)*4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_GENERIC_DATA, (const char *)&packet, MAVLINK_MSG_ID_UVR_GENERIC_DATA_MIN_LEN, MAVLINK_MSG_ID_UVR_GENERIC_DATA_LEN, MAVLINK_MSG_ID_UVR_GENERIC_DATA_CRC);
#endif
}

/**
 * @brief Send a uvr_generic_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_uvr_generic_data_send_struct(mavlink_channel_t chan, const mavlink_uvr_generic_data_t* uvr_generic_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_uvr_generic_data_send(chan, uvr_generic_data->id, uvr_generic_data->length, uvr_generic_data->data);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_GENERIC_DATA, (const char *)uvr_generic_data, MAVLINK_MSG_ID_UVR_GENERIC_DATA_MIN_LEN, MAVLINK_MSG_ID_UVR_GENERIC_DATA_LEN, MAVLINK_MSG_ID_UVR_GENERIC_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_UVR_GENERIC_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_uvr_generic_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const char *id, uint8_t length, const uint8_t *data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 4, length);
    _mav_put_char_array(buf, 0, id, 4);
    _mav_put_uint8_t_array(buf, 5, data, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_GENERIC_DATA, buf, MAVLINK_MSG_ID_UVR_GENERIC_DATA_MIN_LEN, MAVLINK_MSG_ID_UVR_GENERIC_DATA_LEN, MAVLINK_MSG_ID_UVR_GENERIC_DATA_CRC);
#else
    mavlink_uvr_generic_data_t *packet = (mavlink_uvr_generic_data_t *)msgbuf;
    packet->length = length;
    mav_array_memcpy(packet->id, id, sizeof(char)*4);
    mav_array_memcpy(packet->data, data, sizeof(uint8_t)*4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_GENERIC_DATA, (const char *)packet, MAVLINK_MSG_ID_UVR_GENERIC_DATA_MIN_LEN, MAVLINK_MSG_ID_UVR_GENERIC_DATA_LEN, MAVLINK_MSG_ID_UVR_GENERIC_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE UVR_GENERIC_DATA UNPACKING


/**
 * @brief Get field id from uvr_generic_data message
 *
 * @return  id of data
 */
static inline uint16_t mavlink_msg_uvr_generic_data_get_id(const mavlink_message_t* msg, char *id)
{
    return _MAV_RETURN_char_array(msg, id, 4,  0);
}

/**
 * @brief Get field length from uvr_generic_data message
 *
 * @return  length of data
 */
static inline uint8_t mavlink_msg_uvr_generic_data_get_length(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field data from uvr_generic_data message
 *
 * @return   data itself
 */
static inline uint16_t mavlink_msg_uvr_generic_data_get_data(const mavlink_message_t* msg, uint8_t *data)
{
    return _MAV_RETURN_uint8_t_array(msg, data, 4,  5);
}

/**
 * @brief Decode a uvr_generic_data message into a struct
 *
 * @param msg The message to decode
 * @param uvr_generic_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_uvr_generic_data_decode(const mavlink_message_t* msg, mavlink_uvr_generic_data_t* uvr_generic_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_uvr_generic_data_get_id(msg, uvr_generic_data->id);
    uvr_generic_data->length = mavlink_msg_uvr_generic_data_get_length(msg);
    mavlink_msg_uvr_generic_data_get_data(msg, uvr_generic_data->data);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_UVR_GENERIC_DATA_LEN? msg->len : MAVLINK_MSG_ID_UVR_GENERIC_DATA_LEN;
        memset(uvr_generic_data, 0, MAVLINK_MSG_ID_UVR_GENERIC_DATA_LEN);
    memcpy(uvr_generic_data, _MAV_PAYLOAD(msg), len);
#endif
}
