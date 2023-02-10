#pragma once
// MESSAGE UVR_ERS_BOARD PACKING

#define MAVLINK_MSG_ID_UVR_ERS_BOARD 15004


typedef struct __mavlink_uvr_ers_board_t {
 float pressure_barometric; /*<  Barometric pressure sensor*/
} mavlink_uvr_ers_board_t;

#define MAVLINK_MSG_ID_UVR_ERS_BOARD_LEN 4
#define MAVLINK_MSG_ID_UVR_ERS_BOARD_MIN_LEN 4
#define MAVLINK_MSG_ID_15004_LEN 4
#define MAVLINK_MSG_ID_15004_MIN_LEN 4

#define MAVLINK_MSG_ID_UVR_ERS_BOARD_CRC 243
#define MAVLINK_MSG_ID_15004_CRC 243



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_UVR_ERS_BOARD { \
    15004, \
    "UVR_ERS_BOARD", \
    1, \
    {  { "pressure_barometric", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_uvr_ers_board_t, pressure_barometric) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_UVR_ERS_BOARD { \
    "UVR_ERS_BOARD", \
    1, \
    {  { "pressure_barometric", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_uvr_ers_board_t, pressure_barometric) }, \
         } \
}
#endif

/**
 * @brief Pack a uvr_ers_board message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param pressure_barometric  Barometric pressure sensor
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uvr_ers_board_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float pressure_barometric)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UVR_ERS_BOARD_LEN];
    _mav_put_float(buf, 0, pressure_barometric);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UVR_ERS_BOARD_LEN);
#else
    mavlink_uvr_ers_board_t packet;
    packet.pressure_barometric = pressure_barometric;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UVR_ERS_BOARD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UVR_ERS_BOARD;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_UVR_ERS_BOARD_MIN_LEN, MAVLINK_MSG_ID_UVR_ERS_BOARD_LEN, MAVLINK_MSG_ID_UVR_ERS_BOARD_CRC);
}

/**
 * @brief Pack a uvr_ers_board message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pressure_barometric  Barometric pressure sensor
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uvr_ers_board_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float pressure_barometric)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UVR_ERS_BOARD_LEN];
    _mav_put_float(buf, 0, pressure_barometric);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UVR_ERS_BOARD_LEN);
#else
    mavlink_uvr_ers_board_t packet;
    packet.pressure_barometric = pressure_barometric;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UVR_ERS_BOARD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UVR_ERS_BOARD;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_UVR_ERS_BOARD_MIN_LEN, MAVLINK_MSG_ID_UVR_ERS_BOARD_LEN, MAVLINK_MSG_ID_UVR_ERS_BOARD_CRC);
}

/**
 * @brief Encode a uvr_ers_board struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param uvr_ers_board C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uvr_ers_board_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_uvr_ers_board_t* uvr_ers_board)
{
    return mavlink_msg_uvr_ers_board_pack(system_id, component_id, msg, uvr_ers_board->pressure_barometric);
}

/**
 * @brief Encode a uvr_ers_board struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param uvr_ers_board C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uvr_ers_board_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_uvr_ers_board_t* uvr_ers_board)
{
    return mavlink_msg_uvr_ers_board_pack_chan(system_id, component_id, chan, msg, uvr_ers_board->pressure_barometric);
}

/**
 * @brief Send a uvr_ers_board message
 * @param chan MAVLink channel to send the message
 *
 * @param pressure_barometric  Barometric pressure sensor
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_uvr_ers_board_send(mavlink_channel_t chan, float pressure_barometric)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UVR_ERS_BOARD_LEN];
    _mav_put_float(buf, 0, pressure_barometric);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_ERS_BOARD, buf, MAVLINK_MSG_ID_UVR_ERS_BOARD_MIN_LEN, MAVLINK_MSG_ID_UVR_ERS_BOARD_LEN, MAVLINK_MSG_ID_UVR_ERS_BOARD_CRC);
#else
    mavlink_uvr_ers_board_t packet;
    packet.pressure_barometric = pressure_barometric;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_ERS_BOARD, (const char *)&packet, MAVLINK_MSG_ID_UVR_ERS_BOARD_MIN_LEN, MAVLINK_MSG_ID_UVR_ERS_BOARD_LEN, MAVLINK_MSG_ID_UVR_ERS_BOARD_CRC);
#endif
}

/**
 * @brief Send a uvr_ers_board message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_uvr_ers_board_send_struct(mavlink_channel_t chan, const mavlink_uvr_ers_board_t* uvr_ers_board)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_uvr_ers_board_send(chan, uvr_ers_board->pressure_barometric);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_ERS_BOARD, (const char *)uvr_ers_board, MAVLINK_MSG_ID_UVR_ERS_BOARD_MIN_LEN, MAVLINK_MSG_ID_UVR_ERS_BOARD_LEN, MAVLINK_MSG_ID_UVR_ERS_BOARD_CRC);
#endif
}

#if MAVLINK_MSG_ID_UVR_ERS_BOARD_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_uvr_ers_board_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float pressure_barometric)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, pressure_barometric);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_ERS_BOARD, buf, MAVLINK_MSG_ID_UVR_ERS_BOARD_MIN_LEN, MAVLINK_MSG_ID_UVR_ERS_BOARD_LEN, MAVLINK_MSG_ID_UVR_ERS_BOARD_CRC);
#else
    mavlink_uvr_ers_board_t *packet = (mavlink_uvr_ers_board_t *)msgbuf;
    packet->pressure_barometric = pressure_barometric;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_ERS_BOARD, (const char *)packet, MAVLINK_MSG_ID_UVR_ERS_BOARD_MIN_LEN, MAVLINK_MSG_ID_UVR_ERS_BOARD_LEN, MAVLINK_MSG_ID_UVR_ERS_BOARD_CRC);
#endif
}
#endif

#endif

// MESSAGE UVR_ERS_BOARD UNPACKING


/**
 * @brief Get field pressure_barometric from uvr_ers_board message
 *
 * @return  Barometric pressure sensor
 */
static inline float mavlink_msg_uvr_ers_board_get_pressure_barometric(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Decode a uvr_ers_board message into a struct
 *
 * @param msg The message to decode
 * @param uvr_ers_board C-struct to decode the message contents into
 */
static inline void mavlink_msg_uvr_ers_board_decode(const mavlink_message_t* msg, mavlink_uvr_ers_board_t* uvr_ers_board)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    uvr_ers_board->pressure_barometric = mavlink_msg_uvr_ers_board_get_pressure_barometric(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_UVR_ERS_BOARD_LEN? msg->len : MAVLINK_MSG_ID_UVR_ERS_BOARD_LEN;
        memset(uvr_ers_board, 0, MAVLINK_MSG_ID_UVR_ERS_BOARD_LEN);
    memcpy(uvr_ers_board, _MAV_PAYLOAD(msg), len);
#endif
}
