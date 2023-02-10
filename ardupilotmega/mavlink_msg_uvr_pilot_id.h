#pragma once
// MESSAGE UVR_PILOT_ID PACKING

#define MAVLINK_MSG_ID_UVR_PILOT_ID 15008


typedef struct __mavlink_uvr_pilot_id_t {
 uint8_t pilot_id; /*<  Name of pilot who armed.*/
} mavlink_uvr_pilot_id_t;

#define MAVLINK_MSG_ID_UVR_PILOT_ID_LEN 1
#define MAVLINK_MSG_ID_UVR_PILOT_ID_MIN_LEN 1
#define MAVLINK_MSG_ID_15008_LEN 1
#define MAVLINK_MSG_ID_15008_MIN_LEN 1

#define MAVLINK_MSG_ID_UVR_PILOT_ID_CRC 102
#define MAVLINK_MSG_ID_15008_CRC 102



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_UVR_PILOT_ID { \
    15008, \
    "UVR_PILOT_ID", \
    1, \
    {  { "pilot_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_uvr_pilot_id_t, pilot_id) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_UVR_PILOT_ID { \
    "UVR_PILOT_ID", \
    1, \
    {  { "pilot_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_uvr_pilot_id_t, pilot_id) }, \
         } \
}
#endif

/**
 * @brief Pack a uvr_pilot_id message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param pilot_id  Name of pilot who armed.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uvr_pilot_id_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t pilot_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UVR_PILOT_ID_LEN];
    _mav_put_uint8_t(buf, 0, pilot_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UVR_PILOT_ID_LEN);
#else
    mavlink_uvr_pilot_id_t packet;
    packet.pilot_id = pilot_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UVR_PILOT_ID_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UVR_PILOT_ID;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_UVR_PILOT_ID_MIN_LEN, MAVLINK_MSG_ID_UVR_PILOT_ID_LEN, MAVLINK_MSG_ID_UVR_PILOT_ID_CRC);
}

/**
 * @brief Pack a uvr_pilot_id message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pilot_id  Name of pilot who armed.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uvr_pilot_id_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t pilot_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UVR_PILOT_ID_LEN];
    _mav_put_uint8_t(buf, 0, pilot_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UVR_PILOT_ID_LEN);
#else
    mavlink_uvr_pilot_id_t packet;
    packet.pilot_id = pilot_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UVR_PILOT_ID_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UVR_PILOT_ID;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_UVR_PILOT_ID_MIN_LEN, MAVLINK_MSG_ID_UVR_PILOT_ID_LEN, MAVLINK_MSG_ID_UVR_PILOT_ID_CRC);
}

/**
 * @brief Encode a uvr_pilot_id struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param uvr_pilot_id C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uvr_pilot_id_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_uvr_pilot_id_t* uvr_pilot_id)
{
    return mavlink_msg_uvr_pilot_id_pack(system_id, component_id, msg, uvr_pilot_id->pilot_id);
}

/**
 * @brief Encode a uvr_pilot_id struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param uvr_pilot_id C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uvr_pilot_id_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_uvr_pilot_id_t* uvr_pilot_id)
{
    return mavlink_msg_uvr_pilot_id_pack_chan(system_id, component_id, chan, msg, uvr_pilot_id->pilot_id);
}

/**
 * @brief Send a uvr_pilot_id message
 * @param chan MAVLink channel to send the message
 *
 * @param pilot_id  Name of pilot who armed.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_uvr_pilot_id_send(mavlink_channel_t chan, uint8_t pilot_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UVR_PILOT_ID_LEN];
    _mav_put_uint8_t(buf, 0, pilot_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_PILOT_ID, buf, MAVLINK_MSG_ID_UVR_PILOT_ID_MIN_LEN, MAVLINK_MSG_ID_UVR_PILOT_ID_LEN, MAVLINK_MSG_ID_UVR_PILOT_ID_CRC);
#else
    mavlink_uvr_pilot_id_t packet;
    packet.pilot_id = pilot_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_PILOT_ID, (const char *)&packet, MAVLINK_MSG_ID_UVR_PILOT_ID_MIN_LEN, MAVLINK_MSG_ID_UVR_PILOT_ID_LEN, MAVLINK_MSG_ID_UVR_PILOT_ID_CRC);
#endif
}

/**
 * @brief Send a uvr_pilot_id message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_uvr_pilot_id_send_struct(mavlink_channel_t chan, const mavlink_uvr_pilot_id_t* uvr_pilot_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_uvr_pilot_id_send(chan, uvr_pilot_id->pilot_id);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_PILOT_ID, (const char *)uvr_pilot_id, MAVLINK_MSG_ID_UVR_PILOT_ID_MIN_LEN, MAVLINK_MSG_ID_UVR_PILOT_ID_LEN, MAVLINK_MSG_ID_UVR_PILOT_ID_CRC);
#endif
}

#if MAVLINK_MSG_ID_UVR_PILOT_ID_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_uvr_pilot_id_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t pilot_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, pilot_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_PILOT_ID, buf, MAVLINK_MSG_ID_UVR_PILOT_ID_MIN_LEN, MAVLINK_MSG_ID_UVR_PILOT_ID_LEN, MAVLINK_MSG_ID_UVR_PILOT_ID_CRC);
#else
    mavlink_uvr_pilot_id_t *packet = (mavlink_uvr_pilot_id_t *)msgbuf;
    packet->pilot_id = pilot_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_PILOT_ID, (const char *)packet, MAVLINK_MSG_ID_UVR_PILOT_ID_MIN_LEN, MAVLINK_MSG_ID_UVR_PILOT_ID_LEN, MAVLINK_MSG_ID_UVR_PILOT_ID_CRC);
#endif
}
#endif

#endif

// MESSAGE UVR_PILOT_ID UNPACKING


/**
 * @brief Get field pilot_id from uvr_pilot_id message
 *
 * @return  Name of pilot who armed.
 */
static inline uint8_t mavlink_msg_uvr_pilot_id_get_pilot_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a uvr_pilot_id message into a struct
 *
 * @param msg The message to decode
 * @param uvr_pilot_id C-struct to decode the message contents into
 */
static inline void mavlink_msg_uvr_pilot_id_decode(const mavlink_message_t* msg, mavlink_uvr_pilot_id_t* uvr_pilot_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    uvr_pilot_id->pilot_id = mavlink_msg_uvr_pilot_id_get_pilot_id(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_UVR_PILOT_ID_LEN? msg->len : MAVLINK_MSG_ID_UVR_PILOT_ID_LEN;
        memset(uvr_pilot_id, 0, MAVLINK_MSG_ID_UVR_PILOT_ID_LEN);
    memcpy(uvr_pilot_id, _MAV_PAYLOAD(msg), len);
#endif
}
