#pragma once
// MESSAGE UVR_ESC_STATUS PACKING

#define MAVLINK_MSG_ID_UVR_ESC_STATUS 15005


typedef struct __mavlink_uvr_esc_status_t {
 uint32_t error_count; /*<  Error count*/
 float voltage; /*<  Voltage*/
 float current; /*<  Current*/
 float temperature; /*<  Temperature*/
 int32_t rpm; /*<  RPM*/
 uint8_t power_rating_pct; /*<  Instant demand factor in percent (percent of maximum power)*/
 uint8_t esc_index; /*<  Index*/
} mavlink_uvr_esc_status_t;

#define MAVLINK_MSG_ID_UVR_ESC_STATUS_LEN 22
#define MAVLINK_MSG_ID_UVR_ESC_STATUS_MIN_LEN 22
#define MAVLINK_MSG_ID_15005_LEN 22
#define MAVLINK_MSG_ID_15005_MIN_LEN 22

#define MAVLINK_MSG_ID_UVR_ESC_STATUS_CRC 145
#define MAVLINK_MSG_ID_15005_CRC 145



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_UVR_ESC_STATUS { \
    15005, \
    "UVR_ESC_STATUS", \
    7, \
    {  { "error_count", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_uvr_esc_status_t, error_count) }, \
         { "voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_uvr_esc_status_t, voltage) }, \
         { "current", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_uvr_esc_status_t, current) }, \
         { "temperature", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_uvr_esc_status_t, temperature) }, \
         { "rpm", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_uvr_esc_status_t, rpm) }, \
         { "power_rating_pct", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_uvr_esc_status_t, power_rating_pct) }, \
         { "esc_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_uvr_esc_status_t, esc_index) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_UVR_ESC_STATUS { \
    "UVR_ESC_STATUS", \
    7, \
    {  { "error_count", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_uvr_esc_status_t, error_count) }, \
         { "voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_uvr_esc_status_t, voltage) }, \
         { "current", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_uvr_esc_status_t, current) }, \
         { "temperature", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_uvr_esc_status_t, temperature) }, \
         { "rpm", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_uvr_esc_status_t, rpm) }, \
         { "power_rating_pct", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_uvr_esc_status_t, power_rating_pct) }, \
         { "esc_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_uvr_esc_status_t, esc_index) }, \
         } \
}
#endif

/**
 * @brief Pack a uvr_esc_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param error_count  Error count
 * @param voltage  Voltage
 * @param current  Current
 * @param temperature  Temperature
 * @param rpm  RPM
 * @param power_rating_pct  Instant demand factor in percent (percent of maximum power)
 * @param esc_index  Index
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uvr_esc_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t error_count, float voltage, float current, float temperature, int32_t rpm, uint8_t power_rating_pct, uint8_t esc_index)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UVR_ESC_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, error_count);
    _mav_put_float(buf, 4, voltage);
    _mav_put_float(buf, 8, current);
    _mav_put_float(buf, 12, temperature);
    _mav_put_int32_t(buf, 16, rpm);
    _mav_put_uint8_t(buf, 20, power_rating_pct);
    _mav_put_uint8_t(buf, 21, esc_index);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UVR_ESC_STATUS_LEN);
#else
    mavlink_uvr_esc_status_t packet;
    packet.error_count = error_count;
    packet.voltage = voltage;
    packet.current = current;
    packet.temperature = temperature;
    packet.rpm = rpm;
    packet.power_rating_pct = power_rating_pct;
    packet.esc_index = esc_index;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UVR_ESC_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UVR_ESC_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_UVR_ESC_STATUS_MIN_LEN, MAVLINK_MSG_ID_UVR_ESC_STATUS_LEN, MAVLINK_MSG_ID_UVR_ESC_STATUS_CRC);
}

/**
 * @brief Pack a uvr_esc_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param error_count  Error count
 * @param voltage  Voltage
 * @param current  Current
 * @param temperature  Temperature
 * @param rpm  RPM
 * @param power_rating_pct  Instant demand factor in percent (percent of maximum power)
 * @param esc_index  Index
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uvr_esc_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t error_count,float voltage,float current,float temperature,int32_t rpm,uint8_t power_rating_pct,uint8_t esc_index)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UVR_ESC_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, error_count);
    _mav_put_float(buf, 4, voltage);
    _mav_put_float(buf, 8, current);
    _mav_put_float(buf, 12, temperature);
    _mav_put_int32_t(buf, 16, rpm);
    _mav_put_uint8_t(buf, 20, power_rating_pct);
    _mav_put_uint8_t(buf, 21, esc_index);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UVR_ESC_STATUS_LEN);
#else
    mavlink_uvr_esc_status_t packet;
    packet.error_count = error_count;
    packet.voltage = voltage;
    packet.current = current;
    packet.temperature = temperature;
    packet.rpm = rpm;
    packet.power_rating_pct = power_rating_pct;
    packet.esc_index = esc_index;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UVR_ESC_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UVR_ESC_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_UVR_ESC_STATUS_MIN_LEN, MAVLINK_MSG_ID_UVR_ESC_STATUS_LEN, MAVLINK_MSG_ID_UVR_ESC_STATUS_CRC);
}

/**
 * @brief Encode a uvr_esc_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param uvr_esc_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uvr_esc_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_uvr_esc_status_t* uvr_esc_status)
{
    return mavlink_msg_uvr_esc_status_pack(system_id, component_id, msg, uvr_esc_status->error_count, uvr_esc_status->voltage, uvr_esc_status->current, uvr_esc_status->temperature, uvr_esc_status->rpm, uvr_esc_status->power_rating_pct, uvr_esc_status->esc_index);
}

/**
 * @brief Encode a uvr_esc_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param uvr_esc_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uvr_esc_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_uvr_esc_status_t* uvr_esc_status)
{
    return mavlink_msg_uvr_esc_status_pack_chan(system_id, component_id, chan, msg, uvr_esc_status->error_count, uvr_esc_status->voltage, uvr_esc_status->current, uvr_esc_status->temperature, uvr_esc_status->rpm, uvr_esc_status->power_rating_pct, uvr_esc_status->esc_index);
}

/**
 * @brief Send a uvr_esc_status message
 * @param chan MAVLink channel to send the message
 *
 * @param error_count  Error count
 * @param voltage  Voltage
 * @param current  Current
 * @param temperature  Temperature
 * @param rpm  RPM
 * @param power_rating_pct  Instant demand factor in percent (percent of maximum power)
 * @param esc_index  Index
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_uvr_esc_status_send(mavlink_channel_t chan, uint32_t error_count, float voltage, float current, float temperature, int32_t rpm, uint8_t power_rating_pct, uint8_t esc_index)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UVR_ESC_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, error_count);
    _mav_put_float(buf, 4, voltage);
    _mav_put_float(buf, 8, current);
    _mav_put_float(buf, 12, temperature);
    _mav_put_int32_t(buf, 16, rpm);
    _mav_put_uint8_t(buf, 20, power_rating_pct);
    _mav_put_uint8_t(buf, 21, esc_index);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_ESC_STATUS, buf, MAVLINK_MSG_ID_UVR_ESC_STATUS_MIN_LEN, MAVLINK_MSG_ID_UVR_ESC_STATUS_LEN, MAVLINK_MSG_ID_UVR_ESC_STATUS_CRC);
#else
    mavlink_uvr_esc_status_t packet;
    packet.error_count = error_count;
    packet.voltage = voltage;
    packet.current = current;
    packet.temperature = temperature;
    packet.rpm = rpm;
    packet.power_rating_pct = power_rating_pct;
    packet.esc_index = esc_index;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_ESC_STATUS, (const char *)&packet, MAVLINK_MSG_ID_UVR_ESC_STATUS_MIN_LEN, MAVLINK_MSG_ID_UVR_ESC_STATUS_LEN, MAVLINK_MSG_ID_UVR_ESC_STATUS_CRC);
#endif
}

/**
 * @brief Send a uvr_esc_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_uvr_esc_status_send_struct(mavlink_channel_t chan, const mavlink_uvr_esc_status_t* uvr_esc_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_uvr_esc_status_send(chan, uvr_esc_status->error_count, uvr_esc_status->voltage, uvr_esc_status->current, uvr_esc_status->temperature, uvr_esc_status->rpm, uvr_esc_status->power_rating_pct, uvr_esc_status->esc_index);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_ESC_STATUS, (const char *)uvr_esc_status, MAVLINK_MSG_ID_UVR_ESC_STATUS_MIN_LEN, MAVLINK_MSG_ID_UVR_ESC_STATUS_LEN, MAVLINK_MSG_ID_UVR_ESC_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_UVR_ESC_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_uvr_esc_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t error_count, float voltage, float current, float temperature, int32_t rpm, uint8_t power_rating_pct, uint8_t esc_index)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, error_count);
    _mav_put_float(buf, 4, voltage);
    _mav_put_float(buf, 8, current);
    _mav_put_float(buf, 12, temperature);
    _mav_put_int32_t(buf, 16, rpm);
    _mav_put_uint8_t(buf, 20, power_rating_pct);
    _mav_put_uint8_t(buf, 21, esc_index);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_ESC_STATUS, buf, MAVLINK_MSG_ID_UVR_ESC_STATUS_MIN_LEN, MAVLINK_MSG_ID_UVR_ESC_STATUS_LEN, MAVLINK_MSG_ID_UVR_ESC_STATUS_CRC);
#else
    mavlink_uvr_esc_status_t *packet = (mavlink_uvr_esc_status_t *)msgbuf;
    packet->error_count = error_count;
    packet->voltage = voltage;
    packet->current = current;
    packet->temperature = temperature;
    packet->rpm = rpm;
    packet->power_rating_pct = power_rating_pct;
    packet->esc_index = esc_index;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_ESC_STATUS, (const char *)packet, MAVLINK_MSG_ID_UVR_ESC_STATUS_MIN_LEN, MAVLINK_MSG_ID_UVR_ESC_STATUS_LEN, MAVLINK_MSG_ID_UVR_ESC_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE UVR_ESC_STATUS UNPACKING


/**
 * @brief Get field error_count from uvr_esc_status message
 *
 * @return  Error count
 */
static inline uint32_t mavlink_msg_uvr_esc_status_get_error_count(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field voltage from uvr_esc_status message
 *
 * @return  Voltage
 */
static inline float mavlink_msg_uvr_esc_status_get_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field current from uvr_esc_status message
 *
 * @return  Current
 */
static inline float mavlink_msg_uvr_esc_status_get_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field temperature from uvr_esc_status message
 *
 * @return  Temperature
 */
static inline float mavlink_msg_uvr_esc_status_get_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field rpm from uvr_esc_status message
 *
 * @return  RPM
 */
static inline int32_t mavlink_msg_uvr_esc_status_get_rpm(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  16);
}

/**
 * @brief Get field power_rating_pct from uvr_esc_status message
 *
 * @return  Instant demand factor in percent (percent of maximum power)
 */
static inline uint8_t mavlink_msg_uvr_esc_status_get_power_rating_pct(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  20);
}

/**
 * @brief Get field esc_index from uvr_esc_status message
 *
 * @return  Index
 */
static inline uint8_t mavlink_msg_uvr_esc_status_get_esc_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  21);
}

/**
 * @brief Decode a uvr_esc_status message into a struct
 *
 * @param msg The message to decode
 * @param uvr_esc_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_uvr_esc_status_decode(const mavlink_message_t* msg, mavlink_uvr_esc_status_t* uvr_esc_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    uvr_esc_status->error_count = mavlink_msg_uvr_esc_status_get_error_count(msg);
    uvr_esc_status->voltage = mavlink_msg_uvr_esc_status_get_voltage(msg);
    uvr_esc_status->current = mavlink_msg_uvr_esc_status_get_current(msg);
    uvr_esc_status->temperature = mavlink_msg_uvr_esc_status_get_temperature(msg);
    uvr_esc_status->rpm = mavlink_msg_uvr_esc_status_get_rpm(msg);
    uvr_esc_status->power_rating_pct = mavlink_msg_uvr_esc_status_get_power_rating_pct(msg);
    uvr_esc_status->esc_index = mavlink_msg_uvr_esc_status_get_esc_index(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_UVR_ESC_STATUS_LEN? msg->len : MAVLINK_MSG_ID_UVR_ESC_STATUS_LEN;
        memset(uvr_esc_status, 0, MAVLINK_MSG_ID_UVR_ESC_STATUS_LEN);
    memcpy(uvr_esc_status, _MAV_PAYLOAD(msg), len);
#endif
}
