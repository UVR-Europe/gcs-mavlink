#pragma once
// MESSAGE BATTERY_UVR PACKING

#define MAVLINK_MSG_ID_BATTERY_UVR 15002


typedef struct __mavlink_battery_uvr_t {
 uint16_t voltage; /*< [mV] Voltage*/
 int8_t battery_id; /*<  Battery ID*/
} mavlink_battery_uvr_t;

#define MAVLINK_MSG_ID_BATTERY_UVR_LEN 3
#define MAVLINK_MSG_ID_BATTERY_UVR_MIN_LEN 3
#define MAVLINK_MSG_ID_15002_LEN 3
#define MAVLINK_MSG_ID_15002_MIN_LEN 3

#define MAVLINK_MSG_ID_BATTERY_UVR_CRC 10
#define MAVLINK_MSG_ID_15002_CRC 10



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_BATTERY_UVR { \
    15002, \
    "BATTERY_UVR", \
    2, \
    {  { "battery_id", NULL, MAVLINK_TYPE_INT8_T, 0, 2, offsetof(mavlink_battery_uvr_t, battery_id) }, \
         { "voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_battery_uvr_t, voltage) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_BATTERY_UVR { \
    "BATTERY_UVR", \
    2, \
    {  { "battery_id", NULL, MAVLINK_TYPE_INT8_T, 0, 2, offsetof(mavlink_battery_uvr_t, battery_id) }, \
         { "voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_battery_uvr_t, voltage) }, \
         } \
}
#endif

/**
 * @brief Pack a battery_uvr message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param battery_id  Battery ID
 * @param voltage [mV] Voltage
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_battery_uvr_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int8_t battery_id, uint16_t voltage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BATTERY_UVR_LEN];
    _mav_put_uint16_t(buf, 0, voltage);
    _mav_put_int8_t(buf, 2, battery_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BATTERY_UVR_LEN);
#else
    mavlink_battery_uvr_t packet;
    packet.voltage = voltage;
    packet.battery_id = battery_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BATTERY_UVR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BATTERY_UVR;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_BATTERY_UVR_MIN_LEN, MAVLINK_MSG_ID_BATTERY_UVR_LEN, MAVLINK_MSG_ID_BATTERY_UVR_CRC);
}

/**
 * @brief Pack a battery_uvr message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param battery_id  Battery ID
 * @param voltage [mV] Voltage
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_battery_uvr_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int8_t battery_id,uint16_t voltage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BATTERY_UVR_LEN];
    _mav_put_uint16_t(buf, 0, voltage);
    _mav_put_int8_t(buf, 2, battery_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BATTERY_UVR_LEN);
#else
    mavlink_battery_uvr_t packet;
    packet.voltage = voltage;
    packet.battery_id = battery_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BATTERY_UVR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BATTERY_UVR;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_BATTERY_UVR_MIN_LEN, MAVLINK_MSG_ID_BATTERY_UVR_LEN, MAVLINK_MSG_ID_BATTERY_UVR_CRC);
}

/**
 * @brief Encode a battery_uvr struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param battery_uvr C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_battery_uvr_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_battery_uvr_t* battery_uvr)
{
    return mavlink_msg_battery_uvr_pack(system_id, component_id, msg, battery_uvr->battery_id, battery_uvr->voltage);
}

/**
 * @brief Encode a battery_uvr struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param battery_uvr C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_battery_uvr_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_battery_uvr_t* battery_uvr)
{
    return mavlink_msg_battery_uvr_pack_chan(system_id, component_id, chan, msg, battery_uvr->battery_id, battery_uvr->voltage);
}

/**
 * @brief Send a battery_uvr message
 * @param chan MAVLink channel to send the message
 *
 * @param battery_id  Battery ID
 * @param voltage [mV] Voltage
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_battery_uvr_send(mavlink_channel_t chan, int8_t battery_id, uint16_t voltage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BATTERY_UVR_LEN];
    _mav_put_uint16_t(buf, 0, voltage);
    _mav_put_int8_t(buf, 2, battery_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY_UVR, buf, MAVLINK_MSG_ID_BATTERY_UVR_MIN_LEN, MAVLINK_MSG_ID_BATTERY_UVR_LEN, MAVLINK_MSG_ID_BATTERY_UVR_CRC);
#else
    mavlink_battery_uvr_t packet;
    packet.voltage = voltage;
    packet.battery_id = battery_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY_UVR, (const char *)&packet, MAVLINK_MSG_ID_BATTERY_UVR_MIN_LEN, MAVLINK_MSG_ID_BATTERY_UVR_LEN, MAVLINK_MSG_ID_BATTERY_UVR_CRC);
#endif
}

/**
 * @brief Send a battery_uvr message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_battery_uvr_send_struct(mavlink_channel_t chan, const mavlink_battery_uvr_t* battery_uvr)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_battery_uvr_send(chan, battery_uvr->battery_id, battery_uvr->voltage);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY_UVR, (const char *)battery_uvr, MAVLINK_MSG_ID_BATTERY_UVR_MIN_LEN, MAVLINK_MSG_ID_BATTERY_UVR_LEN, MAVLINK_MSG_ID_BATTERY_UVR_CRC);
#endif
}

#if MAVLINK_MSG_ID_BATTERY_UVR_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_battery_uvr_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int8_t battery_id, uint16_t voltage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, voltage);
    _mav_put_int8_t(buf, 2, battery_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY_UVR, buf, MAVLINK_MSG_ID_BATTERY_UVR_MIN_LEN, MAVLINK_MSG_ID_BATTERY_UVR_LEN, MAVLINK_MSG_ID_BATTERY_UVR_CRC);
#else
    mavlink_battery_uvr_t *packet = (mavlink_battery_uvr_t *)msgbuf;
    packet->voltage = voltage;
    packet->battery_id = battery_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BATTERY_UVR, (const char *)packet, MAVLINK_MSG_ID_BATTERY_UVR_MIN_LEN, MAVLINK_MSG_ID_BATTERY_UVR_LEN, MAVLINK_MSG_ID_BATTERY_UVR_CRC);
#endif
}
#endif

#endif

// MESSAGE BATTERY_UVR UNPACKING


/**
 * @brief Get field battery_id from battery_uvr message
 *
 * @return  Battery ID
 */
static inline int8_t mavlink_msg_battery_uvr_get_battery_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  2);
}

/**
 * @brief Get field voltage from battery_uvr message
 *
 * @return [mV] Voltage
 */
static inline uint16_t mavlink_msg_battery_uvr_get_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Decode a battery_uvr message into a struct
 *
 * @param msg The message to decode
 * @param battery_uvr C-struct to decode the message contents into
 */
static inline void mavlink_msg_battery_uvr_decode(const mavlink_message_t* msg, mavlink_battery_uvr_t* battery_uvr)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    battery_uvr->voltage = mavlink_msg_battery_uvr_get_voltage(msg);
    battery_uvr->battery_id = mavlink_msg_battery_uvr_get_battery_id(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_BATTERY_UVR_LEN? msg->len : MAVLINK_MSG_ID_BATTERY_UVR_LEN;
        memset(battery_uvr, 0, MAVLINK_MSG_ID_BATTERY_UVR_LEN);
    memcpy(battery_uvr, _MAV_PAYLOAD(msg), len);
#endif
}
