#pragma once
// MESSAGE POWER_BOARD_INFO PACKING

#define MAVLINK_MSG_ID_POWER_BOARD_INFO 20504


typedef struct __mavlink_power_board_info_t {
 float wattage; /*<  wattage*/
 float cons_wh_payload; /*<  cons_wh_payload*/
 int16_t temp_mosfet; /*<  temp_mosfet*/
 uint16_t res_voltage; /*<  res_voltage*/
 uint16_t current8v; /*<  current8v*/
 int16_t temp8v; /*<  temp8v*/
 uint16_t cons_wh8v; /*<  cons_wh8v*/
 int16_t temp2; /*<  temp2*/
 uint8_t dc_status; /*<  dc_status*/
} mavlink_power_board_info_t;

#define MAVLINK_MSG_ID_POWER_BOARD_INFO_LEN 21
#define MAVLINK_MSG_ID_POWER_BOARD_INFO_MIN_LEN 21
#define MAVLINK_MSG_ID_20504_LEN 21
#define MAVLINK_MSG_ID_20504_MIN_LEN 21

#define MAVLINK_MSG_ID_POWER_BOARD_INFO_CRC 24
#define MAVLINK_MSG_ID_20504_CRC 24



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_POWER_BOARD_INFO { \
    20504, \
    "POWER_BOARD_INFO", \
    9, \
    {  { "dc_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_power_board_info_t, dc_status) }, \
         { "temp_mosfet", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_power_board_info_t, temp_mosfet) }, \
         { "res_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_power_board_info_t, res_voltage) }, \
         { "current8v", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_power_board_info_t, current8v) }, \
         { "temp8v", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_power_board_info_t, temp8v) }, \
         { "cons_wh8v", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_power_board_info_t, cons_wh8v) }, \
         { "temp2", NULL, MAVLINK_TYPE_INT16_T, 0, 18, offsetof(mavlink_power_board_info_t, temp2) }, \
         { "wattage", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_power_board_info_t, wattage) }, \
         { "cons_wh_payload", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_power_board_info_t, cons_wh_payload) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_POWER_BOARD_INFO { \
    "POWER_BOARD_INFO", \
    9, \
    {  { "dc_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_power_board_info_t, dc_status) }, \
         { "temp_mosfet", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_power_board_info_t, temp_mosfet) }, \
         { "res_voltage", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_power_board_info_t, res_voltage) }, \
         { "current8v", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_power_board_info_t, current8v) }, \
         { "temp8v", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_power_board_info_t, temp8v) }, \
         { "cons_wh8v", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_power_board_info_t, cons_wh8v) }, \
         { "temp2", NULL, MAVLINK_TYPE_INT16_T, 0, 18, offsetof(mavlink_power_board_info_t, temp2) }, \
         { "wattage", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_power_board_info_t, wattage) }, \
         { "cons_wh_payload", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_power_board_info_t, cons_wh_payload) }, \
         } \
}
#endif

/**
 * @brief Pack a power_board_info message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param dc_status  dc_status
 * @param temp_mosfet  temp_mosfet
 * @param res_voltage  res_voltage
 * @param current8v  current8v
 * @param temp8v  temp8v
 * @param cons_wh8v  cons_wh8v
 * @param temp2  temp2
 * @param wattage  wattage
 * @param cons_wh_payload  cons_wh_payload
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_power_board_info_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t dc_status, int16_t temp_mosfet, uint16_t res_voltage, uint16_t current8v, int16_t temp8v, uint16_t cons_wh8v, int16_t temp2, float wattage, float cons_wh_payload)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_POWER_BOARD_INFO_LEN];
    _mav_put_float(buf, 0, wattage);
    _mav_put_float(buf, 4, cons_wh_payload);
    _mav_put_int16_t(buf, 8, temp_mosfet);
    _mav_put_uint16_t(buf, 10, res_voltage);
    _mav_put_uint16_t(buf, 12, current8v);
    _mav_put_int16_t(buf, 14, temp8v);
    _mav_put_uint16_t(buf, 16, cons_wh8v);
    _mav_put_int16_t(buf, 18, temp2);
    _mav_put_uint8_t(buf, 20, dc_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_POWER_BOARD_INFO_LEN);
#else
    mavlink_power_board_info_t packet;
    packet.wattage = wattage;
    packet.cons_wh_payload = cons_wh_payload;
    packet.temp_mosfet = temp_mosfet;
    packet.res_voltage = res_voltage;
    packet.current8v = current8v;
    packet.temp8v = temp8v;
    packet.cons_wh8v = cons_wh8v;
    packet.temp2 = temp2;
    packet.dc_status = dc_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_POWER_BOARD_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_POWER_BOARD_INFO;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_POWER_BOARD_INFO_MIN_LEN, MAVLINK_MSG_ID_POWER_BOARD_INFO_LEN, MAVLINK_MSG_ID_POWER_BOARD_INFO_CRC);
}

/**
 * @brief Pack a power_board_info message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param dc_status  dc_status
 * @param temp_mosfet  temp_mosfet
 * @param res_voltage  res_voltage
 * @param current8v  current8v
 * @param temp8v  temp8v
 * @param cons_wh8v  cons_wh8v
 * @param temp2  temp2
 * @param wattage  wattage
 * @param cons_wh_payload  cons_wh_payload
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_power_board_info_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t dc_status,int16_t temp_mosfet,uint16_t res_voltage,uint16_t current8v,int16_t temp8v,uint16_t cons_wh8v,int16_t temp2,float wattage,float cons_wh_payload)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_POWER_BOARD_INFO_LEN];
    _mav_put_float(buf, 0, wattage);
    _mav_put_float(buf, 4, cons_wh_payload);
    _mav_put_int16_t(buf, 8, temp_mosfet);
    _mav_put_uint16_t(buf, 10, res_voltage);
    _mav_put_uint16_t(buf, 12, current8v);
    _mav_put_int16_t(buf, 14, temp8v);
    _mav_put_uint16_t(buf, 16, cons_wh8v);
    _mav_put_int16_t(buf, 18, temp2);
    _mav_put_uint8_t(buf, 20, dc_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_POWER_BOARD_INFO_LEN);
#else
    mavlink_power_board_info_t packet;
    packet.wattage = wattage;
    packet.cons_wh_payload = cons_wh_payload;
    packet.temp_mosfet = temp_mosfet;
    packet.res_voltage = res_voltage;
    packet.current8v = current8v;
    packet.temp8v = temp8v;
    packet.cons_wh8v = cons_wh8v;
    packet.temp2 = temp2;
    packet.dc_status = dc_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_POWER_BOARD_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_POWER_BOARD_INFO;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_POWER_BOARD_INFO_MIN_LEN, MAVLINK_MSG_ID_POWER_BOARD_INFO_LEN, MAVLINK_MSG_ID_POWER_BOARD_INFO_CRC);
}

/**
 * @brief Encode a power_board_info struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param power_board_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_power_board_info_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_power_board_info_t* power_board_info)
{
    return mavlink_msg_power_board_info_pack(system_id, component_id, msg, power_board_info->dc_status, power_board_info->temp_mosfet, power_board_info->res_voltage, power_board_info->current8v, power_board_info->temp8v, power_board_info->cons_wh8v, power_board_info->temp2, power_board_info->wattage, power_board_info->cons_wh_payload);
}

/**
 * @brief Encode a power_board_info struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param power_board_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_power_board_info_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_power_board_info_t* power_board_info)
{
    return mavlink_msg_power_board_info_pack_chan(system_id, component_id, chan, msg, power_board_info->dc_status, power_board_info->temp_mosfet, power_board_info->res_voltage, power_board_info->current8v, power_board_info->temp8v, power_board_info->cons_wh8v, power_board_info->temp2, power_board_info->wattage, power_board_info->cons_wh_payload);
}

/**
 * @brief Send a power_board_info message
 * @param chan MAVLink channel to send the message
 *
 * @param dc_status  dc_status
 * @param temp_mosfet  temp_mosfet
 * @param res_voltage  res_voltage
 * @param current8v  current8v
 * @param temp8v  temp8v
 * @param cons_wh8v  cons_wh8v
 * @param temp2  temp2
 * @param wattage  wattage
 * @param cons_wh_payload  cons_wh_payload
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_power_board_info_send(mavlink_channel_t chan, uint8_t dc_status, int16_t temp_mosfet, uint16_t res_voltage, uint16_t current8v, int16_t temp8v, uint16_t cons_wh8v, int16_t temp2, float wattage, float cons_wh_payload)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_POWER_BOARD_INFO_LEN];
    _mav_put_float(buf, 0, wattage);
    _mav_put_float(buf, 4, cons_wh_payload);
    _mav_put_int16_t(buf, 8, temp_mosfet);
    _mav_put_uint16_t(buf, 10, res_voltage);
    _mav_put_uint16_t(buf, 12, current8v);
    _mav_put_int16_t(buf, 14, temp8v);
    _mav_put_uint16_t(buf, 16, cons_wh8v);
    _mav_put_int16_t(buf, 18, temp2);
    _mav_put_uint8_t(buf, 20, dc_status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POWER_BOARD_INFO, buf, MAVLINK_MSG_ID_POWER_BOARD_INFO_MIN_LEN, MAVLINK_MSG_ID_POWER_BOARD_INFO_LEN, MAVLINK_MSG_ID_POWER_BOARD_INFO_CRC);
#else
    mavlink_power_board_info_t packet;
    packet.wattage = wattage;
    packet.cons_wh_payload = cons_wh_payload;
    packet.temp_mosfet = temp_mosfet;
    packet.res_voltage = res_voltage;
    packet.current8v = current8v;
    packet.temp8v = temp8v;
    packet.cons_wh8v = cons_wh8v;
    packet.temp2 = temp2;
    packet.dc_status = dc_status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POWER_BOARD_INFO, (const char *)&packet, MAVLINK_MSG_ID_POWER_BOARD_INFO_MIN_LEN, MAVLINK_MSG_ID_POWER_BOARD_INFO_LEN, MAVLINK_MSG_ID_POWER_BOARD_INFO_CRC);
#endif
}

/**
 * @brief Send a power_board_info message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_power_board_info_send_struct(mavlink_channel_t chan, const mavlink_power_board_info_t* power_board_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_power_board_info_send(chan, power_board_info->dc_status, power_board_info->temp_mosfet, power_board_info->res_voltage, power_board_info->current8v, power_board_info->temp8v, power_board_info->cons_wh8v, power_board_info->temp2, power_board_info->wattage, power_board_info->cons_wh_payload);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POWER_BOARD_INFO, (const char *)power_board_info, MAVLINK_MSG_ID_POWER_BOARD_INFO_MIN_LEN, MAVLINK_MSG_ID_POWER_BOARD_INFO_LEN, MAVLINK_MSG_ID_POWER_BOARD_INFO_CRC);
#endif
}

#if MAVLINK_MSG_ID_POWER_BOARD_INFO_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_power_board_info_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t dc_status, int16_t temp_mosfet, uint16_t res_voltage, uint16_t current8v, int16_t temp8v, uint16_t cons_wh8v, int16_t temp2, float wattage, float cons_wh_payload)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, wattage);
    _mav_put_float(buf, 4, cons_wh_payload);
    _mav_put_int16_t(buf, 8, temp_mosfet);
    _mav_put_uint16_t(buf, 10, res_voltage);
    _mav_put_uint16_t(buf, 12, current8v);
    _mav_put_int16_t(buf, 14, temp8v);
    _mav_put_uint16_t(buf, 16, cons_wh8v);
    _mav_put_int16_t(buf, 18, temp2);
    _mav_put_uint8_t(buf, 20, dc_status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POWER_BOARD_INFO, buf, MAVLINK_MSG_ID_POWER_BOARD_INFO_MIN_LEN, MAVLINK_MSG_ID_POWER_BOARD_INFO_LEN, MAVLINK_MSG_ID_POWER_BOARD_INFO_CRC);
#else
    mavlink_power_board_info_t *packet = (mavlink_power_board_info_t *)msgbuf;
    packet->wattage = wattage;
    packet->cons_wh_payload = cons_wh_payload;
    packet->temp_mosfet = temp_mosfet;
    packet->res_voltage = res_voltage;
    packet->current8v = current8v;
    packet->temp8v = temp8v;
    packet->cons_wh8v = cons_wh8v;
    packet->temp2 = temp2;
    packet->dc_status = dc_status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POWER_BOARD_INFO, (const char *)packet, MAVLINK_MSG_ID_POWER_BOARD_INFO_MIN_LEN, MAVLINK_MSG_ID_POWER_BOARD_INFO_LEN, MAVLINK_MSG_ID_POWER_BOARD_INFO_CRC);
#endif
}
#endif

#endif

// MESSAGE POWER_BOARD_INFO UNPACKING


/**
 * @brief Get field dc_status from power_board_info message
 *
 * @return  dc_status
 */
static inline uint8_t mavlink_msg_power_board_info_get_dc_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  20);
}

/**
 * @brief Get field temp_mosfet from power_board_info message
 *
 * @return  temp_mosfet
 */
static inline int16_t mavlink_msg_power_board_info_get_temp_mosfet(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  8);
}

/**
 * @brief Get field res_voltage from power_board_info message
 *
 * @return  res_voltage
 */
static inline uint16_t mavlink_msg_power_board_info_get_res_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field current8v from power_board_info message
 *
 * @return  current8v
 */
static inline uint16_t mavlink_msg_power_board_info_get_current8v(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field temp8v from power_board_info message
 *
 * @return  temp8v
 */
static inline int16_t mavlink_msg_power_board_info_get_temp8v(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  14);
}

/**
 * @brief Get field cons_wh8v from power_board_info message
 *
 * @return  cons_wh8v
 */
static inline uint16_t mavlink_msg_power_board_info_get_cons_wh8v(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  16);
}

/**
 * @brief Get field temp2 from power_board_info message
 *
 * @return  temp2
 */
static inline int16_t mavlink_msg_power_board_info_get_temp2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  18);
}

/**
 * @brief Get field wattage from power_board_info message
 *
 * @return  wattage
 */
static inline float mavlink_msg_power_board_info_get_wattage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field cons_wh_payload from power_board_info message
 *
 * @return  cons_wh_payload
 */
static inline float mavlink_msg_power_board_info_get_cons_wh_payload(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Decode a power_board_info message into a struct
 *
 * @param msg The message to decode
 * @param power_board_info C-struct to decode the message contents into
 */
static inline void mavlink_msg_power_board_info_decode(const mavlink_message_t* msg, mavlink_power_board_info_t* power_board_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    power_board_info->wattage = mavlink_msg_power_board_info_get_wattage(msg);
    power_board_info->cons_wh_payload = mavlink_msg_power_board_info_get_cons_wh_payload(msg);
    power_board_info->temp_mosfet = mavlink_msg_power_board_info_get_temp_mosfet(msg);
    power_board_info->res_voltage = mavlink_msg_power_board_info_get_res_voltage(msg);
    power_board_info->current8v = mavlink_msg_power_board_info_get_current8v(msg);
    power_board_info->temp8v = mavlink_msg_power_board_info_get_temp8v(msg);
    power_board_info->cons_wh8v = mavlink_msg_power_board_info_get_cons_wh8v(msg);
    power_board_info->temp2 = mavlink_msg_power_board_info_get_temp2(msg);
    power_board_info->dc_status = mavlink_msg_power_board_info_get_dc_status(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_POWER_BOARD_INFO_LEN? msg->len : MAVLINK_MSG_ID_POWER_BOARD_INFO_LEN;
        memset(power_board_info, 0, MAVLINK_MSG_ID_POWER_BOARD_INFO_LEN);
    memcpy(power_board_info, _MAV_PAYLOAD(msg), len);
#endif
}
