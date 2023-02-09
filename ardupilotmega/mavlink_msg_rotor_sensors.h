#pragma once
// MESSAGE ROTOR_SENSORS PACKING

#define MAVLINK_MSG_ID_ROTOR_SENSORS 20502


typedef struct __mavlink_rotor_sensors_t {
 uint16_t pressure_oil; /*<  pressure_oil*/
 uint16_t rpm; /*<  rpm*/
 uint16_t flags; /*<  flags*/
 uint8_t id; /*<  id*/
 int8_t temp_oil; /*<  temp_oil*/
 uint8_t pressure_hydro; /*<  pressure_hydro*/
 uint8_t shavings_oil; /*<  shavings_oil*/
} mavlink_rotor_sensors_t;

#define MAVLINK_MSG_ID_ROTOR_SENSORS_LEN 10
#define MAVLINK_MSG_ID_ROTOR_SENSORS_MIN_LEN 10
#define MAVLINK_MSG_ID_20502_LEN 10
#define MAVLINK_MSG_ID_20502_MIN_LEN 10

#define MAVLINK_MSG_ID_ROTOR_SENSORS_CRC 191
#define MAVLINK_MSG_ID_20502_CRC 191



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ROTOR_SENSORS { \
    20502, \
    "ROTOR_SENSORS", \
    7, \
    {  { "id", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_rotor_sensors_t, id) }, \
         { "temp_oil", NULL, MAVLINK_TYPE_INT8_T, 0, 7, offsetof(mavlink_rotor_sensors_t, temp_oil) }, \
         { "pressure_oil", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_rotor_sensors_t, pressure_oil) }, \
         { "pressure_hydro", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_rotor_sensors_t, pressure_hydro) }, \
         { "shavings_oil", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_rotor_sensors_t, shavings_oil) }, \
         { "rpm", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_rotor_sensors_t, rpm) }, \
         { "flags", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_rotor_sensors_t, flags) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ROTOR_SENSORS { \
    "ROTOR_SENSORS", \
    7, \
    {  { "id", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_rotor_sensors_t, id) }, \
         { "temp_oil", NULL, MAVLINK_TYPE_INT8_T, 0, 7, offsetof(mavlink_rotor_sensors_t, temp_oil) }, \
         { "pressure_oil", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_rotor_sensors_t, pressure_oil) }, \
         { "pressure_hydro", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_rotor_sensors_t, pressure_hydro) }, \
         { "shavings_oil", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_rotor_sensors_t, shavings_oil) }, \
         { "rpm", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_rotor_sensors_t, rpm) }, \
         { "flags", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_rotor_sensors_t, flags) }, \
         } \
}
#endif

/**
 * @brief Pack a rotor_sensors message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param id  id
 * @param temp_oil  temp_oil
 * @param pressure_oil  pressure_oil
 * @param pressure_hydro  pressure_hydro
 * @param shavings_oil  shavings_oil
 * @param rpm  rpm
 * @param flags  flags
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rotor_sensors_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t id, int8_t temp_oil, uint16_t pressure_oil, uint8_t pressure_hydro, uint8_t shavings_oil, uint16_t rpm, uint16_t flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ROTOR_SENSORS_LEN];
    _mav_put_uint16_t(buf, 0, pressure_oil);
    _mav_put_uint16_t(buf, 2, rpm);
    _mav_put_uint16_t(buf, 4, flags);
    _mav_put_uint8_t(buf, 6, id);
    _mav_put_int8_t(buf, 7, temp_oil);
    _mav_put_uint8_t(buf, 8, pressure_hydro);
    _mav_put_uint8_t(buf, 9, shavings_oil);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROTOR_SENSORS_LEN);
#else
    mavlink_rotor_sensors_t packet;
    packet.pressure_oil = pressure_oil;
    packet.rpm = rpm;
    packet.flags = flags;
    packet.id = id;
    packet.temp_oil = temp_oil;
    packet.pressure_hydro = pressure_hydro;
    packet.shavings_oil = shavings_oil;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROTOR_SENSORS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ROTOR_SENSORS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ROTOR_SENSORS_MIN_LEN, MAVLINK_MSG_ID_ROTOR_SENSORS_LEN, MAVLINK_MSG_ID_ROTOR_SENSORS_CRC);
}

/**
 * @brief Pack a rotor_sensors message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param id  id
 * @param temp_oil  temp_oil
 * @param pressure_oil  pressure_oil
 * @param pressure_hydro  pressure_hydro
 * @param shavings_oil  shavings_oil
 * @param rpm  rpm
 * @param flags  flags
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rotor_sensors_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t id,int8_t temp_oil,uint16_t pressure_oil,uint8_t pressure_hydro,uint8_t shavings_oil,uint16_t rpm,uint16_t flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ROTOR_SENSORS_LEN];
    _mav_put_uint16_t(buf, 0, pressure_oil);
    _mav_put_uint16_t(buf, 2, rpm);
    _mav_put_uint16_t(buf, 4, flags);
    _mav_put_uint8_t(buf, 6, id);
    _mav_put_int8_t(buf, 7, temp_oil);
    _mav_put_uint8_t(buf, 8, pressure_hydro);
    _mav_put_uint8_t(buf, 9, shavings_oil);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROTOR_SENSORS_LEN);
#else
    mavlink_rotor_sensors_t packet;
    packet.pressure_oil = pressure_oil;
    packet.rpm = rpm;
    packet.flags = flags;
    packet.id = id;
    packet.temp_oil = temp_oil;
    packet.pressure_hydro = pressure_hydro;
    packet.shavings_oil = shavings_oil;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROTOR_SENSORS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ROTOR_SENSORS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ROTOR_SENSORS_MIN_LEN, MAVLINK_MSG_ID_ROTOR_SENSORS_LEN, MAVLINK_MSG_ID_ROTOR_SENSORS_CRC);
}

/**
 * @brief Encode a rotor_sensors struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param rotor_sensors C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rotor_sensors_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_rotor_sensors_t* rotor_sensors)
{
    return mavlink_msg_rotor_sensors_pack(system_id, component_id, msg, rotor_sensors->id, rotor_sensors->temp_oil, rotor_sensors->pressure_oil, rotor_sensors->pressure_hydro, rotor_sensors->shavings_oil, rotor_sensors->rpm, rotor_sensors->flags);
}

/**
 * @brief Encode a rotor_sensors struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rotor_sensors C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rotor_sensors_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_rotor_sensors_t* rotor_sensors)
{
    return mavlink_msg_rotor_sensors_pack_chan(system_id, component_id, chan, msg, rotor_sensors->id, rotor_sensors->temp_oil, rotor_sensors->pressure_oil, rotor_sensors->pressure_hydro, rotor_sensors->shavings_oil, rotor_sensors->rpm, rotor_sensors->flags);
}

/**
 * @brief Send a rotor_sensors message
 * @param chan MAVLink channel to send the message
 *
 * @param id  id
 * @param temp_oil  temp_oil
 * @param pressure_oil  pressure_oil
 * @param pressure_hydro  pressure_hydro
 * @param shavings_oil  shavings_oil
 * @param rpm  rpm
 * @param flags  flags
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_rotor_sensors_send(mavlink_channel_t chan, uint8_t id, int8_t temp_oil, uint16_t pressure_oil, uint8_t pressure_hydro, uint8_t shavings_oil, uint16_t rpm, uint16_t flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ROTOR_SENSORS_LEN];
    _mav_put_uint16_t(buf, 0, pressure_oil);
    _mav_put_uint16_t(buf, 2, rpm);
    _mav_put_uint16_t(buf, 4, flags);
    _mav_put_uint8_t(buf, 6, id);
    _mav_put_int8_t(buf, 7, temp_oil);
    _mav_put_uint8_t(buf, 8, pressure_hydro);
    _mav_put_uint8_t(buf, 9, shavings_oil);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROTOR_SENSORS, buf, MAVLINK_MSG_ID_ROTOR_SENSORS_MIN_LEN, MAVLINK_MSG_ID_ROTOR_SENSORS_LEN, MAVLINK_MSG_ID_ROTOR_SENSORS_CRC);
#else
    mavlink_rotor_sensors_t packet;
    packet.pressure_oil = pressure_oil;
    packet.rpm = rpm;
    packet.flags = flags;
    packet.id = id;
    packet.temp_oil = temp_oil;
    packet.pressure_hydro = pressure_hydro;
    packet.shavings_oil = shavings_oil;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROTOR_SENSORS, (const char *)&packet, MAVLINK_MSG_ID_ROTOR_SENSORS_MIN_LEN, MAVLINK_MSG_ID_ROTOR_SENSORS_LEN, MAVLINK_MSG_ID_ROTOR_SENSORS_CRC);
#endif
}

/**
 * @brief Send a rotor_sensors message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_rotor_sensors_send_struct(mavlink_channel_t chan, const mavlink_rotor_sensors_t* rotor_sensors)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_rotor_sensors_send(chan, rotor_sensors->id, rotor_sensors->temp_oil, rotor_sensors->pressure_oil, rotor_sensors->pressure_hydro, rotor_sensors->shavings_oil, rotor_sensors->rpm, rotor_sensors->flags);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROTOR_SENSORS, (const char *)rotor_sensors, MAVLINK_MSG_ID_ROTOR_SENSORS_MIN_LEN, MAVLINK_MSG_ID_ROTOR_SENSORS_LEN, MAVLINK_MSG_ID_ROTOR_SENSORS_CRC);
#endif
}

#if MAVLINK_MSG_ID_ROTOR_SENSORS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_rotor_sensors_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t id, int8_t temp_oil, uint16_t pressure_oil, uint8_t pressure_hydro, uint8_t shavings_oil, uint16_t rpm, uint16_t flags)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, pressure_oil);
    _mav_put_uint16_t(buf, 2, rpm);
    _mav_put_uint16_t(buf, 4, flags);
    _mav_put_uint8_t(buf, 6, id);
    _mav_put_int8_t(buf, 7, temp_oil);
    _mav_put_uint8_t(buf, 8, pressure_hydro);
    _mav_put_uint8_t(buf, 9, shavings_oil);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROTOR_SENSORS, buf, MAVLINK_MSG_ID_ROTOR_SENSORS_MIN_LEN, MAVLINK_MSG_ID_ROTOR_SENSORS_LEN, MAVLINK_MSG_ID_ROTOR_SENSORS_CRC);
#else
    mavlink_rotor_sensors_t *packet = (mavlink_rotor_sensors_t *)msgbuf;
    packet->pressure_oil = pressure_oil;
    packet->rpm = rpm;
    packet->flags = flags;
    packet->id = id;
    packet->temp_oil = temp_oil;
    packet->pressure_hydro = pressure_hydro;
    packet->shavings_oil = shavings_oil;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROTOR_SENSORS, (const char *)packet, MAVLINK_MSG_ID_ROTOR_SENSORS_MIN_LEN, MAVLINK_MSG_ID_ROTOR_SENSORS_LEN, MAVLINK_MSG_ID_ROTOR_SENSORS_CRC);
#endif
}
#endif

#endif

// MESSAGE ROTOR_SENSORS UNPACKING


/**
 * @brief Get field id from rotor_sensors message
 *
 * @return  id
 */
static inline uint8_t mavlink_msg_rotor_sensors_get_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field temp_oil from rotor_sensors message
 *
 * @return  temp_oil
 */
static inline int8_t mavlink_msg_rotor_sensors_get_temp_oil(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  7);
}

/**
 * @brief Get field pressure_oil from rotor_sensors message
 *
 * @return  pressure_oil
 */
static inline uint16_t mavlink_msg_rotor_sensors_get_pressure_oil(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field pressure_hydro from rotor_sensors message
 *
 * @return  pressure_hydro
 */
static inline uint8_t mavlink_msg_rotor_sensors_get_pressure_hydro(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field shavings_oil from rotor_sensors message
 *
 * @return  shavings_oil
 */
static inline uint8_t mavlink_msg_rotor_sensors_get_shavings_oil(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field rpm from rotor_sensors message
 *
 * @return  rpm
 */
static inline uint16_t mavlink_msg_rotor_sensors_get_rpm(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field flags from rotor_sensors message
 *
 * @return  flags
 */
static inline uint16_t mavlink_msg_rotor_sensors_get_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Decode a rotor_sensors message into a struct
 *
 * @param msg The message to decode
 * @param rotor_sensors C-struct to decode the message contents into
 */
static inline void mavlink_msg_rotor_sensors_decode(const mavlink_message_t* msg, mavlink_rotor_sensors_t* rotor_sensors)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    rotor_sensors->pressure_oil = mavlink_msg_rotor_sensors_get_pressure_oil(msg);
    rotor_sensors->rpm = mavlink_msg_rotor_sensors_get_rpm(msg);
    rotor_sensors->flags = mavlink_msg_rotor_sensors_get_flags(msg);
    rotor_sensors->id = mavlink_msg_rotor_sensors_get_id(msg);
    rotor_sensors->temp_oil = mavlink_msg_rotor_sensors_get_temp_oil(msg);
    rotor_sensors->pressure_hydro = mavlink_msg_rotor_sensors_get_pressure_hydro(msg);
    rotor_sensors->shavings_oil = mavlink_msg_rotor_sensors_get_shavings_oil(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ROTOR_SENSORS_LEN? msg->len : MAVLINK_MSG_ID_ROTOR_SENSORS_LEN;
        memset(rotor_sensors, 0, MAVLINK_MSG_ID_ROTOR_SENSORS_LEN);
    memcpy(rotor_sensors, _MAV_PAYLOAD(msg), len);
#endif
}
