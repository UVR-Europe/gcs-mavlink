#pragma once
// MESSAGE ELECTRIC_MOTOR_SENSORS PACKING

#define MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS 20503


typedef struct __mavlink_electric_motor_sensors_t {
 uint32_t cons_wh; /*<  cons_wh*/
 uint16_t current; /*<  current*/
 int16_t temperature; /*<  temperature*/
 uint16_t rpm; /*<  rpm*/
 uint16_t flags; /*<  flags*/
 uint8_t id; /*<  id*/
 int8_t voltage; /*<  voltage*/
} mavlink_electric_motor_sensors_t;

#define MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS_LEN 14
#define MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS_MIN_LEN 14
#define MAVLINK_MSG_ID_20503_LEN 14
#define MAVLINK_MSG_ID_20503_MIN_LEN 14

#define MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS_CRC 107
#define MAVLINK_MSG_ID_20503_CRC 107



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ELECTRIC_MOTOR_SENSORS { \
    20503, \
    "ELECTRIC_MOTOR_SENSORS", \
    7, \
    {  { "id", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_electric_motor_sensors_t, id) }, \
         { "voltage", NULL, MAVLINK_TYPE_INT8_T, 0, 13, offsetof(mavlink_electric_motor_sensors_t, voltage) }, \
         { "current", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_electric_motor_sensors_t, current) }, \
         { "temperature", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_electric_motor_sensors_t, temperature) }, \
         { "cons_wh", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_electric_motor_sensors_t, cons_wh) }, \
         { "rpm", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_electric_motor_sensors_t, rpm) }, \
         { "flags", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_electric_motor_sensors_t, flags) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ELECTRIC_MOTOR_SENSORS { \
    "ELECTRIC_MOTOR_SENSORS", \
    7, \
    {  { "id", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_electric_motor_sensors_t, id) }, \
         { "voltage", NULL, MAVLINK_TYPE_INT8_T, 0, 13, offsetof(mavlink_electric_motor_sensors_t, voltage) }, \
         { "current", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_electric_motor_sensors_t, current) }, \
         { "temperature", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_electric_motor_sensors_t, temperature) }, \
         { "cons_wh", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_electric_motor_sensors_t, cons_wh) }, \
         { "rpm", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_electric_motor_sensors_t, rpm) }, \
         { "flags", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_electric_motor_sensors_t, flags) }, \
         } \
}
#endif

/**
 * @brief Pack a electric_motor_sensors message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param id  id
 * @param voltage  voltage
 * @param current  current
 * @param temperature  temperature
 * @param cons_wh  cons_wh
 * @param rpm  rpm
 * @param flags  flags
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_electric_motor_sensors_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t id, int8_t voltage, uint16_t current, int16_t temperature, uint32_t cons_wh, uint16_t rpm, uint16_t flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS_LEN];
    _mav_put_uint32_t(buf, 0, cons_wh);
    _mav_put_uint16_t(buf, 4, current);
    _mav_put_int16_t(buf, 6, temperature);
    _mav_put_uint16_t(buf, 8, rpm);
    _mav_put_uint16_t(buf, 10, flags);
    _mav_put_uint8_t(buf, 12, id);
    _mav_put_int8_t(buf, 13, voltage);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS_LEN);
#else
    mavlink_electric_motor_sensors_t packet;
    packet.cons_wh = cons_wh;
    packet.current = current;
    packet.temperature = temperature;
    packet.rpm = rpm;
    packet.flags = flags;
    packet.id = id;
    packet.voltage = voltage;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS_MIN_LEN, MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS_LEN, MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS_CRC);
}

/**
 * @brief Pack a electric_motor_sensors message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param id  id
 * @param voltage  voltage
 * @param current  current
 * @param temperature  temperature
 * @param cons_wh  cons_wh
 * @param rpm  rpm
 * @param flags  flags
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_electric_motor_sensors_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t id,int8_t voltage,uint16_t current,int16_t temperature,uint32_t cons_wh,uint16_t rpm,uint16_t flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS_LEN];
    _mav_put_uint32_t(buf, 0, cons_wh);
    _mav_put_uint16_t(buf, 4, current);
    _mav_put_int16_t(buf, 6, temperature);
    _mav_put_uint16_t(buf, 8, rpm);
    _mav_put_uint16_t(buf, 10, flags);
    _mav_put_uint8_t(buf, 12, id);
    _mav_put_int8_t(buf, 13, voltage);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS_LEN);
#else
    mavlink_electric_motor_sensors_t packet;
    packet.cons_wh = cons_wh;
    packet.current = current;
    packet.temperature = temperature;
    packet.rpm = rpm;
    packet.flags = flags;
    packet.id = id;
    packet.voltage = voltage;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS_MIN_LEN, MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS_LEN, MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS_CRC);
}

/**
 * @brief Encode a electric_motor_sensors struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param electric_motor_sensors C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_electric_motor_sensors_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_electric_motor_sensors_t* electric_motor_sensors)
{
    return mavlink_msg_electric_motor_sensors_pack(system_id, component_id, msg, electric_motor_sensors->id, electric_motor_sensors->voltage, electric_motor_sensors->current, electric_motor_sensors->temperature, electric_motor_sensors->cons_wh, electric_motor_sensors->rpm, electric_motor_sensors->flags);
}

/**
 * @brief Encode a electric_motor_sensors struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param electric_motor_sensors C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_electric_motor_sensors_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_electric_motor_sensors_t* electric_motor_sensors)
{
    return mavlink_msg_electric_motor_sensors_pack_chan(system_id, component_id, chan, msg, electric_motor_sensors->id, electric_motor_sensors->voltage, electric_motor_sensors->current, electric_motor_sensors->temperature, electric_motor_sensors->cons_wh, electric_motor_sensors->rpm, electric_motor_sensors->flags);
}

/**
 * @brief Send a electric_motor_sensors message
 * @param chan MAVLink channel to send the message
 *
 * @param id  id
 * @param voltage  voltage
 * @param current  current
 * @param temperature  temperature
 * @param cons_wh  cons_wh
 * @param rpm  rpm
 * @param flags  flags
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_electric_motor_sensors_send(mavlink_channel_t chan, uint8_t id, int8_t voltage, uint16_t current, int16_t temperature, uint32_t cons_wh, uint16_t rpm, uint16_t flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS_LEN];
    _mav_put_uint32_t(buf, 0, cons_wh);
    _mav_put_uint16_t(buf, 4, current);
    _mav_put_int16_t(buf, 6, temperature);
    _mav_put_uint16_t(buf, 8, rpm);
    _mav_put_uint16_t(buf, 10, flags);
    _mav_put_uint8_t(buf, 12, id);
    _mav_put_int8_t(buf, 13, voltage);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS, buf, MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS_MIN_LEN, MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS_LEN, MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS_CRC);
#else
    mavlink_electric_motor_sensors_t packet;
    packet.cons_wh = cons_wh;
    packet.current = current;
    packet.temperature = temperature;
    packet.rpm = rpm;
    packet.flags = flags;
    packet.id = id;
    packet.voltage = voltage;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS, (const char *)&packet, MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS_MIN_LEN, MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS_LEN, MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS_CRC);
#endif
}

/**
 * @brief Send a electric_motor_sensors message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_electric_motor_sensors_send_struct(mavlink_channel_t chan, const mavlink_electric_motor_sensors_t* electric_motor_sensors)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_electric_motor_sensors_send(chan, electric_motor_sensors->id, electric_motor_sensors->voltage, electric_motor_sensors->current, electric_motor_sensors->temperature, electric_motor_sensors->cons_wh, electric_motor_sensors->rpm, electric_motor_sensors->flags);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS, (const char *)electric_motor_sensors, MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS_MIN_LEN, MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS_LEN, MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS_CRC);
#endif
}

#if MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_electric_motor_sensors_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t id, int8_t voltage, uint16_t current, int16_t temperature, uint32_t cons_wh, uint16_t rpm, uint16_t flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, cons_wh);
    _mav_put_uint16_t(buf, 4, current);
    _mav_put_int16_t(buf, 6, temperature);
    _mav_put_uint16_t(buf, 8, rpm);
    _mav_put_uint16_t(buf, 10, flags);
    _mav_put_uint8_t(buf, 12, id);
    _mav_put_int8_t(buf, 13, voltage);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS, buf, MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS_MIN_LEN, MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS_LEN, MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS_CRC);
#else
    mavlink_electric_motor_sensors_t *packet = (mavlink_electric_motor_sensors_t *)msgbuf;
    packet->cons_wh = cons_wh;
    packet->current = current;
    packet->temperature = temperature;
    packet->rpm = rpm;
    packet->flags = flags;
    packet->id = id;
    packet->voltage = voltage;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS, (const char *)packet, MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS_MIN_LEN, MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS_LEN, MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS_CRC);
#endif
}
#endif

#endif

// MESSAGE ELECTRIC_MOTOR_SENSORS UNPACKING


/**
 * @brief Get field id from electric_motor_sensors message
 *
 * @return  id
 */
static inline uint8_t mavlink_msg_electric_motor_sensors_get_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field voltage from electric_motor_sensors message
 *
 * @return  voltage
 */
static inline int8_t mavlink_msg_electric_motor_sensors_get_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  13);
}

/**
 * @brief Get field current from electric_motor_sensors message
 *
 * @return  current
 */
static inline uint16_t mavlink_msg_electric_motor_sensors_get_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field temperature from electric_motor_sensors message
 *
 * @return  temperature
 */
static inline int16_t mavlink_msg_electric_motor_sensors_get_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  6);
}

/**
 * @brief Get field cons_wh from electric_motor_sensors message
 *
 * @return  cons_wh
 */
static inline uint32_t mavlink_msg_electric_motor_sensors_get_cons_wh(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field rpm from electric_motor_sensors message
 *
 * @return  rpm
 */
static inline uint16_t mavlink_msg_electric_motor_sensors_get_rpm(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field flags from electric_motor_sensors message
 *
 * @return  flags
 */
static inline uint16_t mavlink_msg_electric_motor_sensors_get_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Decode a electric_motor_sensors message into a struct
 *
 * @param msg The message to decode
 * @param electric_motor_sensors C-struct to decode the message contents into
 */
static inline void mavlink_msg_electric_motor_sensors_decode(const mavlink_message_t* msg, mavlink_electric_motor_sensors_t* electric_motor_sensors)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    electric_motor_sensors->cons_wh = mavlink_msg_electric_motor_sensors_get_cons_wh(msg);
    electric_motor_sensors->current = mavlink_msg_electric_motor_sensors_get_current(msg);
    electric_motor_sensors->temperature = mavlink_msg_electric_motor_sensors_get_temperature(msg);
    electric_motor_sensors->rpm = mavlink_msg_electric_motor_sensors_get_rpm(msg);
    electric_motor_sensors->flags = mavlink_msg_electric_motor_sensors_get_flags(msg);
    electric_motor_sensors->id = mavlink_msg_electric_motor_sensors_get_id(msg);
    electric_motor_sensors->voltage = mavlink_msg_electric_motor_sensors_get_voltage(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS_LEN? msg->len : MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS_LEN;
        memset(electric_motor_sensors, 0, MAVLINK_MSG_ID_ELECTRIC_MOTOR_SENSORS_LEN);
    memcpy(electric_motor_sensors, _MAV_PAYLOAD(msg), len);
#endif
}
