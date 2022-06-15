#pragma once
// MESSAGE UVR_BATTERY PACKING

#define MAVLINK_MSG_ID_UVR_BATTERY 15002


typedef struct __mavlink_uvr_battery_t {
 uint16_t voltage; /*< [mV] Voltage*/
 int8_t battery_id; /*<  Battery ID*/
} mavlink_uvr_battery_t;

#define MAVLINK_MSG_ID_UVR_BATTERY_LEN 3
#define MAVLINK_MSG_ID_UVR_BATTERY_MIN_LEN 3
#define MAVLINK_MSG_ID_15002_LEN 3
#define MAVLINK_MSG_ID_15002_MIN_LEN 3

#define MAVLINK_MSG_ID_UVR_BATTERY_CRC 95
#define MAVLINK_MSG_ID_15002_CRC 95



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_UVR_BATTERY { \
    15002, \
    "UVR_BATTERY", \
    2, \
    {  { "battery_id", NULL, MAVLINK_TYPE_INT8_T, 0, 2, offsetof(mavlink_uvr_battery_t, battery_id) }, \
         { "voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_uvr_battery_t, voltage) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_UVR_BATTERY { \
    "UVR_BATTERY", \
    2, \
    {  { "battery_id", NULL, MAVLINK_TYPE_INT8_T, 0, 2, offsetof(mavlink_uvr_battery_t, battery_id) }, \
         { "voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_uvr_battery_t, voltage) }, \
         } \
}
#endif

/**
 * @brief Pack a uvr_battery message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param battery_id  Battery ID
 * @param voltage [mV] Voltage
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uvr_battery_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int8_t battery_id, uint16_t voltage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UVR_BATTERY_LEN];
    _mav_put_uint16_t(buf, 0, voltage);
    _mav_put_int8_t(buf, 2, battery_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UVR_BATTERY_LEN);
#else
    mavlink_uvr_battery_t packet;
    packet.voltage = voltage;
    packet.battery_id = battery_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UVR_BATTERY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UVR_BATTERY;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_UVR_BATTERY_MIN_LEN, MAVLINK_MSG_ID_UVR_BATTERY_LEN, MAVLINK_MSG_ID_UVR_BATTERY_CRC);
}

/**
 * @brief Pack a uvr_battery message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param battery_id  Battery ID
 * @param voltage [mV] Voltage
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uvr_battery_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int8_t battery_id,uint16_t voltage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UVR_BATTERY_LEN];
    _mav_put_uint16_t(buf, 0, voltage);
    _mav_put_int8_t(buf, 2, battery_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UVR_BATTERY_LEN);
#else
    mavlink_uvr_battery_t packet;
    packet.voltage = voltage;
    packet.battery_id = battery_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UVR_BATTERY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UVR_BATTERY;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_UVR_BATTERY_MIN_LEN, MAVLINK_MSG_ID_UVR_BATTERY_LEN, MAVLINK_MSG_ID_UVR_BATTERY_CRC);
}

/**
 * @brief Encode a uvr_battery struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param uvr_battery C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uvr_battery_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_uvr_battery_t* uvr_battery)
{
    return mavlink_msg_uvr_battery_pack(system_id, component_id, msg, uvr_battery->battery_id, uvr_battery->voltage);
}

/**
 * @brief Encode a uvr_battery struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param uvr_battery C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uvr_battery_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_uvr_battery_t* uvr_battery)
{
    return mavlink_msg_uvr_battery_pack_chan(system_id, component_id, chan, msg, uvr_battery->battery_id, uvr_battery->voltage);
}

/**
 * @brief Send a uvr_battery message
 * @param chan MAVLink channel to send the message
 *
 * @param battery_id  Battery ID
 * @param voltage [mV] Voltage
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_uvr_battery_send(mavlink_channel_t chan, int8_t battery_id, uint16_t voltage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UVR_BATTERY_LEN];
    _mav_put_uint16_t(buf, 0, voltage);
    _mav_put_int8_t(buf, 2, battery_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_BATTERY, buf, MAVLINK_MSG_ID_UVR_BATTERY_MIN_LEN, MAVLINK_MSG_ID_UVR_BATTERY_LEN, MAVLINK_MSG_ID_UVR_BATTERY_CRC);
#else
    mavlink_uvr_battery_t packet;
    packet.voltage = voltage;
    packet.battery_id = battery_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_BATTERY, (const char *)&packet, MAVLINK_MSG_ID_UVR_BATTERY_MIN_LEN, MAVLINK_MSG_ID_UVR_BATTERY_LEN, MAVLINK_MSG_ID_UVR_BATTERY_CRC);
#endif
}

/**
 * @brief Send a uvr_battery message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_uvr_battery_send_struct(mavlink_channel_t chan, const mavlink_uvr_battery_t* uvr_battery)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_uvr_battery_send(chan, uvr_battery->battery_id, uvr_battery->voltage);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_BATTERY, (const char *)uvr_battery, MAVLINK_MSG_ID_UVR_BATTERY_MIN_LEN, MAVLINK_MSG_ID_UVR_BATTERY_LEN, MAVLINK_MSG_ID_UVR_BATTERY_CRC);
#endif
}

#if MAVLINK_MSG_ID_UVR_BATTERY_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_uvr_battery_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int8_t battery_id, uint16_t voltage)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, voltage);
    _mav_put_int8_t(buf, 2, battery_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_BATTERY, buf, MAVLINK_MSG_ID_UVR_BATTERY_MIN_LEN, MAVLINK_MSG_ID_UVR_BATTERY_LEN, MAVLINK_MSG_ID_UVR_BATTERY_CRC);
#else
    mavlink_uvr_battery_t *packet = (mavlink_uvr_battery_t *)msgbuf;
    packet->voltage = voltage;
    packet->battery_id = battery_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_BATTERY, (const char *)packet, MAVLINK_MSG_ID_UVR_BATTERY_MIN_LEN, MAVLINK_MSG_ID_UVR_BATTERY_LEN, MAVLINK_MSG_ID_UVR_BATTERY_CRC);
#endif
}
#endif

#endif

// MESSAGE UVR_BATTERY UNPACKING


/**
 * @brief Get field battery_id from uvr_battery message
 *
 * @return  Battery ID
 */
static inline int8_t mavlink_msg_uvr_battery_get_battery_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  2);
}

/**
 * @brief Get field voltage from uvr_battery message
 *
 * @return [mV] Voltage
 */
static inline uint16_t mavlink_msg_uvr_battery_get_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Decode a uvr_battery message into a struct
 *
 * @param msg The message to decode
 * @param uvr_battery C-struct to decode the message contents into
 */
static inline void mavlink_msg_uvr_battery_decode(const mavlink_message_t* msg, mavlink_uvr_battery_t* uvr_battery)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    uvr_battery->voltage = mavlink_msg_uvr_battery_get_voltage(msg);
    uvr_battery->battery_id = mavlink_msg_uvr_battery_get_battery_id(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_UVR_BATTERY_LEN? msg->len : MAVLINK_MSG_ID_UVR_BATTERY_LEN;
        memset(uvr_battery, 0, MAVLINK_MSG_ID_UVR_BATTERY_LEN);
    memcpy(uvr_battery, _MAV_PAYLOAD(msg), len);
#endif
}
