#pragma once
// MESSAGE UVR_ENGINE_LOW_RATE PACKING

#define MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE 15001


typedef struct __mavlink_uvr_engine_low_rate_t {
 float oil_temperature_1; /*< [degC] Oil Temperature 1st Board.*/
 float oil_pressure_1; /*< [bar] Oil Pressure 1st Board.*/
 float oil_temperature_2; /*< [degC] Oil Temperature 2nd Board.*/
 float oil_pressure_2; /*< [bar] Oil Temperature 2nd Board.*/
 float head1_temperature; /*< [degC] 1st Cylinder Head Temperature.*/
 float head2_temperature; /*< [degC] 2nd Cylinder Head Temperature.*/
 float turbine_pressure; /*< [InHg] Turbine pressure.*/
 float fuel_pressure; /*< [bar] Fuel pressure.*/
} mavlink_uvr_engine_low_rate_t;

#define MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_LEN 32
#define MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_MIN_LEN 32
#define MAVLINK_MSG_ID_15001_LEN 32
#define MAVLINK_MSG_ID_15001_MIN_LEN 32

#define MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_CRC 16
#define MAVLINK_MSG_ID_15001_CRC 16



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_UVR_ENGINE_LOW_RATE { \
    15001, \
    "UVR_ENGINE_LOW_RATE", \
    8, \
    {  { "oil_temperature_1", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_uvr_engine_low_rate_t, oil_temperature_1) }, \
         { "oil_pressure_1", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_uvr_engine_low_rate_t, oil_pressure_1) }, \
         { "oil_temperature_2", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_uvr_engine_low_rate_t, oil_temperature_2) }, \
         { "oil_pressure_2", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_uvr_engine_low_rate_t, oil_pressure_2) }, \
         { "head1_temperature", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_uvr_engine_low_rate_t, head1_temperature) }, \
         { "head2_temperature", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_uvr_engine_low_rate_t, head2_temperature) }, \
         { "turbine_pressure", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_uvr_engine_low_rate_t, turbine_pressure) }, \
         { "fuel_pressure", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_uvr_engine_low_rate_t, fuel_pressure) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_UVR_ENGINE_LOW_RATE { \
    "UVR_ENGINE_LOW_RATE", \
    8, \
    {  { "oil_temperature_1", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_uvr_engine_low_rate_t, oil_temperature_1) }, \
         { "oil_pressure_1", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_uvr_engine_low_rate_t, oil_pressure_1) }, \
         { "oil_temperature_2", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_uvr_engine_low_rate_t, oil_temperature_2) }, \
         { "oil_pressure_2", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_uvr_engine_low_rate_t, oil_pressure_2) }, \
         { "head1_temperature", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_uvr_engine_low_rate_t, head1_temperature) }, \
         { "head2_temperature", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_uvr_engine_low_rate_t, head2_temperature) }, \
         { "turbine_pressure", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_uvr_engine_low_rate_t, turbine_pressure) }, \
         { "fuel_pressure", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_uvr_engine_low_rate_t, fuel_pressure) }, \
         } \
}
#endif

/**
 * @brief Pack a uvr_engine_low_rate message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param oil_temperature_1 [degC] Oil Temperature 1st Board.
 * @param oil_pressure_1 [bar] Oil Pressure 1st Board.
 * @param oil_temperature_2 [degC] Oil Temperature 2nd Board.
 * @param oil_pressure_2 [bar] Oil Temperature 2nd Board.
 * @param head1_temperature [degC] 1st Cylinder Head Temperature.
 * @param head2_temperature [degC] 2nd Cylinder Head Temperature.
 * @param turbine_pressure [InHg] Turbine pressure.
 * @param fuel_pressure [bar] Fuel pressure.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uvr_engine_low_rate_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float oil_temperature_1, float oil_pressure_1, float oil_temperature_2, float oil_pressure_2, float head1_temperature, float head2_temperature, float turbine_pressure, float fuel_pressure)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_LEN];
    _mav_put_float(buf, 0, oil_temperature_1);
    _mav_put_float(buf, 4, oil_pressure_1);
    _mav_put_float(buf, 8, oil_temperature_2);
    _mav_put_float(buf, 12, oil_pressure_2);
    _mav_put_float(buf, 16, head1_temperature);
    _mav_put_float(buf, 20, head2_temperature);
    _mav_put_float(buf, 24, turbine_pressure);
    _mav_put_float(buf, 28, fuel_pressure);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_LEN);
#else
    mavlink_uvr_engine_low_rate_t packet;
    packet.oil_temperature_1 = oil_temperature_1;
    packet.oil_pressure_1 = oil_pressure_1;
    packet.oil_temperature_2 = oil_temperature_2;
    packet.oil_pressure_2 = oil_pressure_2;
    packet.head1_temperature = head1_temperature;
    packet.head2_temperature = head2_temperature;
    packet.turbine_pressure = turbine_pressure;
    packet.fuel_pressure = fuel_pressure;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_MIN_LEN, MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_LEN, MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_CRC);
}

/**
 * @brief Pack a uvr_engine_low_rate message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param oil_temperature_1 [degC] Oil Temperature 1st Board.
 * @param oil_pressure_1 [bar] Oil Pressure 1st Board.
 * @param oil_temperature_2 [degC] Oil Temperature 2nd Board.
 * @param oil_pressure_2 [bar] Oil Temperature 2nd Board.
 * @param head1_temperature [degC] 1st Cylinder Head Temperature.
 * @param head2_temperature [degC] 2nd Cylinder Head Temperature.
 * @param turbine_pressure [InHg] Turbine pressure.
 * @param fuel_pressure [bar] Fuel pressure.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uvr_engine_low_rate_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float oil_temperature_1,float oil_pressure_1,float oil_temperature_2,float oil_pressure_2,float head1_temperature,float head2_temperature,float turbine_pressure,float fuel_pressure)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_LEN];
    _mav_put_float(buf, 0, oil_temperature_1);
    _mav_put_float(buf, 4, oil_pressure_1);
    _mav_put_float(buf, 8, oil_temperature_2);
    _mav_put_float(buf, 12, oil_pressure_2);
    _mav_put_float(buf, 16, head1_temperature);
    _mav_put_float(buf, 20, head2_temperature);
    _mav_put_float(buf, 24, turbine_pressure);
    _mav_put_float(buf, 28, fuel_pressure);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_LEN);
#else
    mavlink_uvr_engine_low_rate_t packet;
    packet.oil_temperature_1 = oil_temperature_1;
    packet.oil_pressure_1 = oil_pressure_1;
    packet.oil_temperature_2 = oil_temperature_2;
    packet.oil_pressure_2 = oil_pressure_2;
    packet.head1_temperature = head1_temperature;
    packet.head2_temperature = head2_temperature;
    packet.turbine_pressure = turbine_pressure;
    packet.fuel_pressure = fuel_pressure;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_MIN_LEN, MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_LEN, MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_CRC);
}

/**
 * @brief Encode a uvr_engine_low_rate struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param uvr_engine_low_rate C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uvr_engine_low_rate_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_uvr_engine_low_rate_t* uvr_engine_low_rate)
{
    return mavlink_msg_uvr_engine_low_rate_pack(system_id, component_id, msg, uvr_engine_low_rate->oil_temperature_1, uvr_engine_low_rate->oil_pressure_1, uvr_engine_low_rate->oil_temperature_2, uvr_engine_low_rate->oil_pressure_2, uvr_engine_low_rate->head1_temperature, uvr_engine_low_rate->head2_temperature, uvr_engine_low_rate->turbine_pressure, uvr_engine_low_rate->fuel_pressure);
}

/**
 * @brief Encode a uvr_engine_low_rate struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param uvr_engine_low_rate C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uvr_engine_low_rate_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_uvr_engine_low_rate_t* uvr_engine_low_rate)
{
    return mavlink_msg_uvr_engine_low_rate_pack_chan(system_id, component_id, chan, msg, uvr_engine_low_rate->oil_temperature_1, uvr_engine_low_rate->oil_pressure_1, uvr_engine_low_rate->oil_temperature_2, uvr_engine_low_rate->oil_pressure_2, uvr_engine_low_rate->head1_temperature, uvr_engine_low_rate->head2_temperature, uvr_engine_low_rate->turbine_pressure, uvr_engine_low_rate->fuel_pressure);
}

/**
 * @brief Send a uvr_engine_low_rate message
 * @param chan MAVLink channel to send the message
 *
 * @param oil_temperature_1 [degC] Oil Temperature 1st Board.
 * @param oil_pressure_1 [bar] Oil Pressure 1st Board.
 * @param oil_temperature_2 [degC] Oil Temperature 2nd Board.
 * @param oil_pressure_2 [bar] Oil Temperature 2nd Board.
 * @param head1_temperature [degC] 1st Cylinder Head Temperature.
 * @param head2_temperature [degC] 2nd Cylinder Head Temperature.
 * @param turbine_pressure [InHg] Turbine pressure.
 * @param fuel_pressure [bar] Fuel pressure.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_uvr_engine_low_rate_send(mavlink_channel_t chan, float oil_temperature_1, float oil_pressure_1, float oil_temperature_2, float oil_pressure_2, float head1_temperature, float head2_temperature, float turbine_pressure, float fuel_pressure)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_LEN];
    _mav_put_float(buf, 0, oil_temperature_1);
    _mav_put_float(buf, 4, oil_pressure_1);
    _mav_put_float(buf, 8, oil_temperature_2);
    _mav_put_float(buf, 12, oil_pressure_2);
    _mav_put_float(buf, 16, head1_temperature);
    _mav_put_float(buf, 20, head2_temperature);
    _mav_put_float(buf, 24, turbine_pressure);
    _mav_put_float(buf, 28, fuel_pressure);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE, buf, MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_MIN_LEN, MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_LEN, MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_CRC);
#else
    mavlink_uvr_engine_low_rate_t packet;
    packet.oil_temperature_1 = oil_temperature_1;
    packet.oil_pressure_1 = oil_pressure_1;
    packet.oil_temperature_2 = oil_temperature_2;
    packet.oil_pressure_2 = oil_pressure_2;
    packet.head1_temperature = head1_temperature;
    packet.head2_temperature = head2_temperature;
    packet.turbine_pressure = turbine_pressure;
    packet.fuel_pressure = fuel_pressure;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE, (const char *)&packet, MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_MIN_LEN, MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_LEN, MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_CRC);
#endif
}

/**
 * @brief Send a uvr_engine_low_rate message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_uvr_engine_low_rate_send_struct(mavlink_channel_t chan, const mavlink_uvr_engine_low_rate_t* uvr_engine_low_rate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_uvr_engine_low_rate_send(chan, uvr_engine_low_rate->oil_temperature_1, uvr_engine_low_rate->oil_pressure_1, uvr_engine_low_rate->oil_temperature_2, uvr_engine_low_rate->oil_pressure_2, uvr_engine_low_rate->head1_temperature, uvr_engine_low_rate->head2_temperature, uvr_engine_low_rate->turbine_pressure, uvr_engine_low_rate->fuel_pressure);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE, (const char *)uvr_engine_low_rate, MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_MIN_LEN, MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_LEN, MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_CRC);
#endif
}

#if MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_uvr_engine_low_rate_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float oil_temperature_1, float oil_pressure_1, float oil_temperature_2, float oil_pressure_2, float head1_temperature, float head2_temperature, float turbine_pressure, float fuel_pressure)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, oil_temperature_1);
    _mav_put_float(buf, 4, oil_pressure_1);
    _mav_put_float(buf, 8, oil_temperature_2);
    _mav_put_float(buf, 12, oil_pressure_2);
    _mav_put_float(buf, 16, head1_temperature);
    _mav_put_float(buf, 20, head2_temperature);
    _mav_put_float(buf, 24, turbine_pressure);
    _mav_put_float(buf, 28, fuel_pressure);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE, buf, MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_MIN_LEN, MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_LEN, MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_CRC);
#else
    mavlink_uvr_engine_low_rate_t *packet = (mavlink_uvr_engine_low_rate_t *)msgbuf;
    packet->oil_temperature_1 = oil_temperature_1;
    packet->oil_pressure_1 = oil_pressure_1;
    packet->oil_temperature_2 = oil_temperature_2;
    packet->oil_pressure_2 = oil_pressure_2;
    packet->head1_temperature = head1_temperature;
    packet->head2_temperature = head2_temperature;
    packet->turbine_pressure = turbine_pressure;
    packet->fuel_pressure = fuel_pressure;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE, (const char *)packet, MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_MIN_LEN, MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_LEN, MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_CRC);
#endif
}
#endif

#endif

// MESSAGE UVR_ENGINE_LOW_RATE UNPACKING


/**
 * @brief Get field oil_temperature_1 from uvr_engine_low_rate message
 *
 * @return [degC] Oil Temperature 1st Board.
 */
static inline float mavlink_msg_uvr_engine_low_rate_get_oil_temperature_1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field oil_pressure_1 from uvr_engine_low_rate message
 *
 * @return [bar] Oil Pressure 1st Board.
 */
static inline float mavlink_msg_uvr_engine_low_rate_get_oil_pressure_1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field oil_temperature_2 from uvr_engine_low_rate message
 *
 * @return [degC] Oil Temperature 2nd Board.
 */
static inline float mavlink_msg_uvr_engine_low_rate_get_oil_temperature_2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field oil_pressure_2 from uvr_engine_low_rate message
 *
 * @return [bar] Oil Temperature 2nd Board.
 */
static inline float mavlink_msg_uvr_engine_low_rate_get_oil_pressure_2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field head1_temperature from uvr_engine_low_rate message
 *
 * @return [degC] 1st Cylinder Head Temperature.
 */
static inline float mavlink_msg_uvr_engine_low_rate_get_head1_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field head2_temperature from uvr_engine_low_rate message
 *
 * @return [degC] 2nd Cylinder Head Temperature.
 */
static inline float mavlink_msg_uvr_engine_low_rate_get_head2_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field turbine_pressure from uvr_engine_low_rate message
 *
 * @return [InHg] Turbine pressure.
 */
static inline float mavlink_msg_uvr_engine_low_rate_get_turbine_pressure(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field fuel_pressure from uvr_engine_low_rate message
 *
 * @return [bar] Fuel pressure.
 */
static inline float mavlink_msg_uvr_engine_low_rate_get_fuel_pressure(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Decode a uvr_engine_low_rate message into a struct
 *
 * @param msg The message to decode
 * @param uvr_engine_low_rate C-struct to decode the message contents into
 */
static inline void mavlink_msg_uvr_engine_low_rate_decode(const mavlink_message_t* msg, mavlink_uvr_engine_low_rate_t* uvr_engine_low_rate)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    uvr_engine_low_rate->oil_temperature_1 = mavlink_msg_uvr_engine_low_rate_get_oil_temperature_1(msg);
    uvr_engine_low_rate->oil_pressure_1 = mavlink_msg_uvr_engine_low_rate_get_oil_pressure_1(msg);
    uvr_engine_low_rate->oil_temperature_2 = mavlink_msg_uvr_engine_low_rate_get_oil_temperature_2(msg);
    uvr_engine_low_rate->oil_pressure_2 = mavlink_msg_uvr_engine_low_rate_get_oil_pressure_2(msg);
    uvr_engine_low_rate->head1_temperature = mavlink_msg_uvr_engine_low_rate_get_head1_temperature(msg);
    uvr_engine_low_rate->head2_temperature = mavlink_msg_uvr_engine_low_rate_get_head2_temperature(msg);
    uvr_engine_low_rate->turbine_pressure = mavlink_msg_uvr_engine_low_rate_get_turbine_pressure(msg);
    uvr_engine_low_rate->fuel_pressure = mavlink_msg_uvr_engine_low_rate_get_fuel_pressure(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_LEN? msg->len : MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_LEN;
        memset(uvr_engine_low_rate, 0, MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_LEN);
    memcpy(uvr_engine_low_rate, _MAV_PAYLOAD(msg), len);
#endif
}
