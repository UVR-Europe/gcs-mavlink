#pragma once
// MESSAGE UVR_CAN_STATUS PACKING

#define MAVLINK_MSG_ID_UVR_CAN_STATUS 15007


typedef struct __mavlink_uvr_can_status_t {
 uint64_t uavcan_Iface0_errors; /*<  UAVCAN Interface 0 errors*/
 uint64_t uavcan_Iface1_errors; /*<  UAVCAN Interface 1 errors*/
} mavlink_uvr_can_status_t;

#define MAVLINK_MSG_ID_UVR_CAN_STATUS_LEN 16
#define MAVLINK_MSG_ID_UVR_CAN_STATUS_MIN_LEN 16
#define MAVLINK_MSG_ID_15007_LEN 16
#define MAVLINK_MSG_ID_15007_MIN_LEN 16

#define MAVLINK_MSG_ID_UVR_CAN_STATUS_CRC 139
#define MAVLINK_MSG_ID_15007_CRC 139



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_UVR_CAN_STATUS { \
    15007, \
    "UVR_CAN_STATUS", \
    2, \
    {  { "uavcan_Iface0_errors", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_uvr_can_status_t, uavcan_Iface0_errors) }, \
         { "uavcan_Iface1_errors", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_uvr_can_status_t, uavcan_Iface1_errors) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_UVR_CAN_STATUS { \
    "UVR_CAN_STATUS", \
    2, \
    {  { "uavcan_Iface0_errors", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_uvr_can_status_t, uavcan_Iface0_errors) }, \
         { "uavcan_Iface1_errors", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_uvr_can_status_t, uavcan_Iface1_errors) }, \
         } \
}
#endif

/**
 * @brief Pack a uvr_can_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param uavcan_Iface0_errors  UAVCAN Interface 0 errors
 * @param uavcan_Iface1_errors  UAVCAN Interface 1 errors
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uvr_can_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t uavcan_Iface0_errors, uint64_t uavcan_Iface1_errors)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UVR_CAN_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, uavcan_Iface0_errors);
    _mav_put_uint64_t(buf, 8, uavcan_Iface1_errors);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UVR_CAN_STATUS_LEN);
#else
    mavlink_uvr_can_status_t packet;
    packet.uavcan_Iface0_errors = uavcan_Iface0_errors;
    packet.uavcan_Iface1_errors = uavcan_Iface1_errors;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UVR_CAN_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UVR_CAN_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_UVR_CAN_STATUS_MIN_LEN, MAVLINK_MSG_ID_UVR_CAN_STATUS_LEN, MAVLINK_MSG_ID_UVR_CAN_STATUS_CRC);
}

/**
 * @brief Pack a uvr_can_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param uavcan_Iface0_errors  UAVCAN Interface 0 errors
 * @param uavcan_Iface1_errors  UAVCAN Interface 1 errors
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uvr_can_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t uavcan_Iface0_errors,uint64_t uavcan_Iface1_errors)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UVR_CAN_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, uavcan_Iface0_errors);
    _mav_put_uint64_t(buf, 8, uavcan_Iface1_errors);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UVR_CAN_STATUS_LEN);
#else
    mavlink_uvr_can_status_t packet;
    packet.uavcan_Iface0_errors = uavcan_Iface0_errors;
    packet.uavcan_Iface1_errors = uavcan_Iface1_errors;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UVR_CAN_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UVR_CAN_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_UVR_CAN_STATUS_MIN_LEN, MAVLINK_MSG_ID_UVR_CAN_STATUS_LEN, MAVLINK_MSG_ID_UVR_CAN_STATUS_CRC);
}

/**
 * @brief Encode a uvr_can_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param uvr_can_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uvr_can_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_uvr_can_status_t* uvr_can_status)
{
    return mavlink_msg_uvr_can_status_pack(system_id, component_id, msg, uvr_can_status->uavcan_Iface0_errors, uvr_can_status->uavcan_Iface1_errors);
}

/**
 * @brief Encode a uvr_can_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param uvr_can_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uvr_can_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_uvr_can_status_t* uvr_can_status)
{
    return mavlink_msg_uvr_can_status_pack_chan(system_id, component_id, chan, msg, uvr_can_status->uavcan_Iface0_errors, uvr_can_status->uavcan_Iface1_errors);
}

/**
 * @brief Send a uvr_can_status message
 * @param chan MAVLink channel to send the message
 *
 * @param uavcan_Iface0_errors  UAVCAN Interface 0 errors
 * @param uavcan_Iface1_errors  UAVCAN Interface 1 errors
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_uvr_can_status_send(mavlink_channel_t chan, uint64_t uavcan_Iface0_errors, uint64_t uavcan_Iface1_errors)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UVR_CAN_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, uavcan_Iface0_errors);
    _mav_put_uint64_t(buf, 8, uavcan_Iface1_errors);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_CAN_STATUS, buf, MAVLINK_MSG_ID_UVR_CAN_STATUS_MIN_LEN, MAVLINK_MSG_ID_UVR_CAN_STATUS_LEN, MAVLINK_MSG_ID_UVR_CAN_STATUS_CRC);
#else
    mavlink_uvr_can_status_t packet;
    packet.uavcan_Iface0_errors = uavcan_Iface0_errors;
    packet.uavcan_Iface1_errors = uavcan_Iface1_errors;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_CAN_STATUS, (const char *)&packet, MAVLINK_MSG_ID_UVR_CAN_STATUS_MIN_LEN, MAVLINK_MSG_ID_UVR_CAN_STATUS_LEN, MAVLINK_MSG_ID_UVR_CAN_STATUS_CRC);
#endif
}

/**
 * @brief Send a uvr_can_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_uvr_can_status_send_struct(mavlink_channel_t chan, const mavlink_uvr_can_status_t* uvr_can_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_uvr_can_status_send(chan, uvr_can_status->uavcan_Iface0_errors, uvr_can_status->uavcan_Iface1_errors);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_CAN_STATUS, (const char *)uvr_can_status, MAVLINK_MSG_ID_UVR_CAN_STATUS_MIN_LEN, MAVLINK_MSG_ID_UVR_CAN_STATUS_LEN, MAVLINK_MSG_ID_UVR_CAN_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_UVR_CAN_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_uvr_can_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t uavcan_Iface0_errors, uint64_t uavcan_Iface1_errors)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, uavcan_Iface0_errors);
    _mav_put_uint64_t(buf, 8, uavcan_Iface1_errors);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_CAN_STATUS, buf, MAVLINK_MSG_ID_UVR_CAN_STATUS_MIN_LEN, MAVLINK_MSG_ID_UVR_CAN_STATUS_LEN, MAVLINK_MSG_ID_UVR_CAN_STATUS_CRC);
#else
    mavlink_uvr_can_status_t *packet = (mavlink_uvr_can_status_t *)msgbuf;
    packet->uavcan_Iface0_errors = uavcan_Iface0_errors;
    packet->uavcan_Iface1_errors = uavcan_Iface1_errors;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_CAN_STATUS, (const char *)packet, MAVLINK_MSG_ID_UVR_CAN_STATUS_MIN_LEN, MAVLINK_MSG_ID_UVR_CAN_STATUS_LEN, MAVLINK_MSG_ID_UVR_CAN_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE UVR_CAN_STATUS UNPACKING


/**
 * @brief Get field uavcan_Iface0_errors from uvr_can_status message
 *
 * @return  UAVCAN Interface 0 errors
 */
static inline uint64_t mavlink_msg_uvr_can_status_get_uavcan_Iface0_errors(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field uavcan_Iface1_errors from uvr_can_status message
 *
 * @return  UAVCAN Interface 1 errors
 */
static inline uint64_t mavlink_msg_uvr_can_status_get_uavcan_Iface1_errors(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  8);
}

/**
 * @brief Decode a uvr_can_status message into a struct
 *
 * @param msg The message to decode
 * @param uvr_can_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_uvr_can_status_decode(const mavlink_message_t* msg, mavlink_uvr_can_status_t* uvr_can_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    uvr_can_status->uavcan_Iface0_errors = mavlink_msg_uvr_can_status_get_uavcan_Iface0_errors(msg);
    uvr_can_status->uavcan_Iface1_errors = mavlink_msg_uvr_can_status_get_uavcan_Iface1_errors(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_UVR_CAN_STATUS_LEN? msg->len : MAVLINK_MSG_ID_UVR_CAN_STATUS_LEN;
        memset(uvr_can_status, 0, MAVLINK_MSG_ID_UVR_CAN_STATUS_LEN);
    memcpy(uvr_can_status, _MAV_PAYLOAD(msg), len);
#endif
}
