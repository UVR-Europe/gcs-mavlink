#pragma once
// MESSAGE UH_BEYOND_M_SENSORS PACKING

#define MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS 15007


typedef struct __mavlink_uh_beyond_m_sensors_t {
 float temperature_EG1; /*<  Exhaust gas temperature 1*/
 float temperature_EG2; /*<  Exhaust gas temperature 2*/
 float temperature_EG3; /*<  Exhaust gas temperature 3*/
 float temperature_EG4; /*<  Exhaust gas temperature 4*/
 float temperature_CHT1; /*<  Cylinder head temperature 1*/
 float temperature_CHT2; /*<  Cylinder head temperature 2*/
 float temperature_oil; /*<  Oil temperature*/
 float temperature_coolant; /*<  Coolant temperature*/
 float temperature_gearbox; /*<  Gearbox temperature*/
 float pressure_fuel; /*<  Fuel pressure*/
 float pressure_oil; /*<  Oil pressure*/
 float pressure_manifold; /*<  Manifold pressure*/
 float level_fuel; /*<  Fuel level*/
 float battery_12v; /*<  Battery voltage (12V)*/
 int16_t rotor_rpm; /*<  Rotor RPM*/
 int16_t engine_rpm; /*<  Engine RPM*/
 uint16_t status_bits; /*<  Equipment status bits. b0=fuel pressure*/
} mavlink_uh_beyond_m_sensors_t;

#define MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS_LEN 62
#define MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS_MIN_LEN 62
#define MAVLINK_MSG_ID_15007_LEN 62
#define MAVLINK_MSG_ID_15007_MIN_LEN 62

#define MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS_CRC 220
#define MAVLINK_MSG_ID_15007_CRC 220



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_UH_BEYOND_M_SENSORS { \
    15007, \
    "UH_BEYOND_M_SENSORS", \
    17, \
    {  { "temperature_EG1", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_uh_beyond_m_sensors_t, temperature_EG1) }, \
         { "temperature_EG2", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_uh_beyond_m_sensors_t, temperature_EG2) }, \
         { "temperature_EG3", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_uh_beyond_m_sensors_t, temperature_EG3) }, \
         { "temperature_EG4", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_uh_beyond_m_sensors_t, temperature_EG4) }, \
         { "temperature_CHT1", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_uh_beyond_m_sensors_t, temperature_CHT1) }, \
         { "temperature_CHT2", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_uh_beyond_m_sensors_t, temperature_CHT2) }, \
         { "temperature_oil", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_uh_beyond_m_sensors_t, temperature_oil) }, \
         { "temperature_coolant", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_uh_beyond_m_sensors_t, temperature_coolant) }, \
         { "temperature_gearbox", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_uh_beyond_m_sensors_t, temperature_gearbox) }, \
         { "pressure_fuel", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_uh_beyond_m_sensors_t, pressure_fuel) }, \
         { "pressure_oil", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_uh_beyond_m_sensors_t, pressure_oil) }, \
         { "pressure_manifold", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_uh_beyond_m_sensors_t, pressure_manifold) }, \
         { "level_fuel", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_uh_beyond_m_sensors_t, level_fuel) }, \
         { "rotor_rpm", NULL, MAVLINK_TYPE_INT16_T, 0, 56, offsetof(mavlink_uh_beyond_m_sensors_t, rotor_rpm) }, \
         { "engine_rpm", NULL, MAVLINK_TYPE_INT16_T, 0, 58, offsetof(mavlink_uh_beyond_m_sensors_t, engine_rpm) }, \
         { "battery_12v", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_uh_beyond_m_sensors_t, battery_12v) }, \
         { "status_bits", NULL, MAVLINK_TYPE_UINT16_T, 0, 60, offsetof(mavlink_uh_beyond_m_sensors_t, status_bits) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_UH_BEYOND_M_SENSORS { \
    "UH_BEYOND_M_SENSORS", \
    17, \
    {  { "temperature_EG1", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_uh_beyond_m_sensors_t, temperature_EG1) }, \
         { "temperature_EG2", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_uh_beyond_m_sensors_t, temperature_EG2) }, \
         { "temperature_EG3", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_uh_beyond_m_sensors_t, temperature_EG3) }, \
         { "temperature_EG4", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_uh_beyond_m_sensors_t, temperature_EG4) }, \
         { "temperature_CHT1", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_uh_beyond_m_sensors_t, temperature_CHT1) }, \
         { "temperature_CHT2", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_uh_beyond_m_sensors_t, temperature_CHT2) }, \
         { "temperature_oil", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_uh_beyond_m_sensors_t, temperature_oil) }, \
         { "temperature_coolant", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_uh_beyond_m_sensors_t, temperature_coolant) }, \
         { "temperature_gearbox", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_uh_beyond_m_sensors_t, temperature_gearbox) }, \
         { "pressure_fuel", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_uh_beyond_m_sensors_t, pressure_fuel) }, \
         { "pressure_oil", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_uh_beyond_m_sensors_t, pressure_oil) }, \
         { "pressure_manifold", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_uh_beyond_m_sensors_t, pressure_manifold) }, \
         { "level_fuel", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_uh_beyond_m_sensors_t, level_fuel) }, \
         { "rotor_rpm", NULL, MAVLINK_TYPE_INT16_T, 0, 56, offsetof(mavlink_uh_beyond_m_sensors_t, rotor_rpm) }, \
         { "engine_rpm", NULL, MAVLINK_TYPE_INT16_T, 0, 58, offsetof(mavlink_uh_beyond_m_sensors_t, engine_rpm) }, \
         { "battery_12v", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_uh_beyond_m_sensors_t, battery_12v) }, \
         { "status_bits", NULL, MAVLINK_TYPE_UINT16_T, 0, 60, offsetof(mavlink_uh_beyond_m_sensors_t, status_bits) }, \
         } \
}
#endif

/**
 * @brief Pack a uh_beyond_m_sensors message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param temperature_EG1  Exhaust gas temperature 1
 * @param temperature_EG2  Exhaust gas temperature 2
 * @param temperature_EG3  Exhaust gas temperature 3
 * @param temperature_EG4  Exhaust gas temperature 4
 * @param temperature_CHT1  Cylinder head temperature 1
 * @param temperature_CHT2  Cylinder head temperature 2
 * @param temperature_oil  Oil temperature
 * @param temperature_coolant  Coolant temperature
 * @param temperature_gearbox  Gearbox temperature
 * @param pressure_fuel  Fuel pressure
 * @param pressure_oil  Oil pressure
 * @param pressure_manifold  Manifold pressure
 * @param level_fuel  Fuel level
 * @param rotor_rpm  Rotor RPM
 * @param engine_rpm  Engine RPM
 * @param battery_12v  Battery voltage (12V)
 * @param status_bits  Equipment status bits. b0=fuel pressure
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uh_beyond_m_sensors_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float temperature_EG1, float temperature_EG2, float temperature_EG3, float temperature_EG4, float temperature_CHT1, float temperature_CHT2, float temperature_oil, float temperature_coolant, float temperature_gearbox, float pressure_fuel, float pressure_oil, float pressure_manifold, float level_fuel, int16_t rotor_rpm, int16_t engine_rpm, float battery_12v, uint16_t status_bits)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS_LEN];
    _mav_put_float(buf, 0, temperature_EG1);
    _mav_put_float(buf, 4, temperature_EG2);
    _mav_put_float(buf, 8, temperature_EG3);
    _mav_put_float(buf, 12, temperature_EG4);
    _mav_put_float(buf, 16, temperature_CHT1);
    _mav_put_float(buf, 20, temperature_CHT2);
    _mav_put_float(buf, 24, temperature_oil);
    _mav_put_float(buf, 28, temperature_coolant);
    _mav_put_float(buf, 32, temperature_gearbox);
    _mav_put_float(buf, 36, pressure_fuel);
    _mav_put_float(buf, 40, pressure_oil);
    _mav_put_float(buf, 44, pressure_manifold);
    _mav_put_float(buf, 48, level_fuel);
    _mav_put_float(buf, 52, battery_12v);
    _mav_put_int16_t(buf, 56, rotor_rpm);
    _mav_put_int16_t(buf, 58, engine_rpm);
    _mav_put_uint16_t(buf, 60, status_bits);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS_LEN);
#else
    mavlink_uh_beyond_m_sensors_t packet;
    packet.temperature_EG1 = temperature_EG1;
    packet.temperature_EG2 = temperature_EG2;
    packet.temperature_EG3 = temperature_EG3;
    packet.temperature_EG4 = temperature_EG4;
    packet.temperature_CHT1 = temperature_CHT1;
    packet.temperature_CHT2 = temperature_CHT2;
    packet.temperature_oil = temperature_oil;
    packet.temperature_coolant = temperature_coolant;
    packet.temperature_gearbox = temperature_gearbox;
    packet.pressure_fuel = pressure_fuel;
    packet.pressure_oil = pressure_oil;
    packet.pressure_manifold = pressure_manifold;
    packet.level_fuel = level_fuel;
    packet.battery_12v = battery_12v;
    packet.rotor_rpm = rotor_rpm;
    packet.engine_rpm = engine_rpm;
    packet.status_bits = status_bits;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS_MIN_LEN, MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS_LEN, MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS_CRC);
}

/**
 * @brief Pack a uh_beyond_m_sensors message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param temperature_EG1  Exhaust gas temperature 1
 * @param temperature_EG2  Exhaust gas temperature 2
 * @param temperature_EG3  Exhaust gas temperature 3
 * @param temperature_EG4  Exhaust gas temperature 4
 * @param temperature_CHT1  Cylinder head temperature 1
 * @param temperature_CHT2  Cylinder head temperature 2
 * @param temperature_oil  Oil temperature
 * @param temperature_coolant  Coolant temperature
 * @param temperature_gearbox  Gearbox temperature
 * @param pressure_fuel  Fuel pressure
 * @param pressure_oil  Oil pressure
 * @param pressure_manifold  Manifold pressure
 * @param level_fuel  Fuel level
 * @param rotor_rpm  Rotor RPM
 * @param engine_rpm  Engine RPM
 * @param battery_12v  Battery voltage (12V)
 * @param status_bits  Equipment status bits. b0=fuel pressure
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uh_beyond_m_sensors_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float temperature_EG1,float temperature_EG2,float temperature_EG3,float temperature_EG4,float temperature_CHT1,float temperature_CHT2,float temperature_oil,float temperature_coolant,float temperature_gearbox,float pressure_fuel,float pressure_oil,float pressure_manifold,float level_fuel,int16_t rotor_rpm,int16_t engine_rpm,float battery_12v,uint16_t status_bits)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS_LEN];
    _mav_put_float(buf, 0, temperature_EG1);
    _mav_put_float(buf, 4, temperature_EG2);
    _mav_put_float(buf, 8, temperature_EG3);
    _mav_put_float(buf, 12, temperature_EG4);
    _mav_put_float(buf, 16, temperature_CHT1);
    _mav_put_float(buf, 20, temperature_CHT2);
    _mav_put_float(buf, 24, temperature_oil);
    _mav_put_float(buf, 28, temperature_coolant);
    _mav_put_float(buf, 32, temperature_gearbox);
    _mav_put_float(buf, 36, pressure_fuel);
    _mav_put_float(buf, 40, pressure_oil);
    _mav_put_float(buf, 44, pressure_manifold);
    _mav_put_float(buf, 48, level_fuel);
    _mav_put_float(buf, 52, battery_12v);
    _mav_put_int16_t(buf, 56, rotor_rpm);
    _mav_put_int16_t(buf, 58, engine_rpm);
    _mav_put_uint16_t(buf, 60, status_bits);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS_LEN);
#else
    mavlink_uh_beyond_m_sensors_t packet;
    packet.temperature_EG1 = temperature_EG1;
    packet.temperature_EG2 = temperature_EG2;
    packet.temperature_EG3 = temperature_EG3;
    packet.temperature_EG4 = temperature_EG4;
    packet.temperature_CHT1 = temperature_CHT1;
    packet.temperature_CHT2 = temperature_CHT2;
    packet.temperature_oil = temperature_oil;
    packet.temperature_coolant = temperature_coolant;
    packet.temperature_gearbox = temperature_gearbox;
    packet.pressure_fuel = pressure_fuel;
    packet.pressure_oil = pressure_oil;
    packet.pressure_manifold = pressure_manifold;
    packet.level_fuel = level_fuel;
    packet.battery_12v = battery_12v;
    packet.rotor_rpm = rotor_rpm;
    packet.engine_rpm = engine_rpm;
    packet.status_bits = status_bits;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS_MIN_LEN, MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS_LEN, MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS_CRC);
}

/**
 * @brief Encode a uh_beyond_m_sensors struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param uh_beyond_m_sensors C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uh_beyond_m_sensors_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_uh_beyond_m_sensors_t* uh_beyond_m_sensors)
{
    return mavlink_msg_uh_beyond_m_sensors_pack(system_id, component_id, msg, uh_beyond_m_sensors->temperature_EG1, uh_beyond_m_sensors->temperature_EG2, uh_beyond_m_sensors->temperature_EG3, uh_beyond_m_sensors->temperature_EG4, uh_beyond_m_sensors->temperature_CHT1, uh_beyond_m_sensors->temperature_CHT2, uh_beyond_m_sensors->temperature_oil, uh_beyond_m_sensors->temperature_coolant, uh_beyond_m_sensors->temperature_gearbox, uh_beyond_m_sensors->pressure_fuel, uh_beyond_m_sensors->pressure_oil, uh_beyond_m_sensors->pressure_manifold, uh_beyond_m_sensors->level_fuel, uh_beyond_m_sensors->rotor_rpm, uh_beyond_m_sensors->engine_rpm, uh_beyond_m_sensors->battery_12v, uh_beyond_m_sensors->status_bits);
}

/**
 * @brief Encode a uh_beyond_m_sensors struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param uh_beyond_m_sensors C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uh_beyond_m_sensors_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_uh_beyond_m_sensors_t* uh_beyond_m_sensors)
{
    return mavlink_msg_uh_beyond_m_sensors_pack_chan(system_id, component_id, chan, msg, uh_beyond_m_sensors->temperature_EG1, uh_beyond_m_sensors->temperature_EG2, uh_beyond_m_sensors->temperature_EG3, uh_beyond_m_sensors->temperature_EG4, uh_beyond_m_sensors->temperature_CHT1, uh_beyond_m_sensors->temperature_CHT2, uh_beyond_m_sensors->temperature_oil, uh_beyond_m_sensors->temperature_coolant, uh_beyond_m_sensors->temperature_gearbox, uh_beyond_m_sensors->pressure_fuel, uh_beyond_m_sensors->pressure_oil, uh_beyond_m_sensors->pressure_manifold, uh_beyond_m_sensors->level_fuel, uh_beyond_m_sensors->rotor_rpm, uh_beyond_m_sensors->engine_rpm, uh_beyond_m_sensors->battery_12v, uh_beyond_m_sensors->status_bits);
}

/**
 * @brief Send a uh_beyond_m_sensors message
 * @param chan MAVLink channel to send the message
 *
 * @param temperature_EG1  Exhaust gas temperature 1
 * @param temperature_EG2  Exhaust gas temperature 2
 * @param temperature_EG3  Exhaust gas temperature 3
 * @param temperature_EG4  Exhaust gas temperature 4
 * @param temperature_CHT1  Cylinder head temperature 1
 * @param temperature_CHT2  Cylinder head temperature 2
 * @param temperature_oil  Oil temperature
 * @param temperature_coolant  Coolant temperature
 * @param temperature_gearbox  Gearbox temperature
 * @param pressure_fuel  Fuel pressure
 * @param pressure_oil  Oil pressure
 * @param pressure_manifold  Manifold pressure
 * @param level_fuel  Fuel level
 * @param rotor_rpm  Rotor RPM
 * @param engine_rpm  Engine RPM
 * @param battery_12v  Battery voltage (12V)
 * @param status_bits  Equipment status bits. b0=fuel pressure
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_uh_beyond_m_sensors_send(mavlink_channel_t chan, float temperature_EG1, float temperature_EG2, float temperature_EG3, float temperature_EG4, float temperature_CHT1, float temperature_CHT2, float temperature_oil, float temperature_coolant, float temperature_gearbox, float pressure_fuel, float pressure_oil, float pressure_manifold, float level_fuel, int16_t rotor_rpm, int16_t engine_rpm, float battery_12v, uint16_t status_bits)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS_LEN];
    _mav_put_float(buf, 0, temperature_EG1);
    _mav_put_float(buf, 4, temperature_EG2);
    _mav_put_float(buf, 8, temperature_EG3);
    _mav_put_float(buf, 12, temperature_EG4);
    _mav_put_float(buf, 16, temperature_CHT1);
    _mav_put_float(buf, 20, temperature_CHT2);
    _mav_put_float(buf, 24, temperature_oil);
    _mav_put_float(buf, 28, temperature_coolant);
    _mav_put_float(buf, 32, temperature_gearbox);
    _mav_put_float(buf, 36, pressure_fuel);
    _mav_put_float(buf, 40, pressure_oil);
    _mav_put_float(buf, 44, pressure_manifold);
    _mav_put_float(buf, 48, level_fuel);
    _mav_put_float(buf, 52, battery_12v);
    _mav_put_int16_t(buf, 56, rotor_rpm);
    _mav_put_int16_t(buf, 58, engine_rpm);
    _mav_put_uint16_t(buf, 60, status_bits);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS, buf, MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS_MIN_LEN, MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS_LEN, MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS_CRC);
#else
    mavlink_uh_beyond_m_sensors_t packet;
    packet.temperature_EG1 = temperature_EG1;
    packet.temperature_EG2 = temperature_EG2;
    packet.temperature_EG3 = temperature_EG3;
    packet.temperature_EG4 = temperature_EG4;
    packet.temperature_CHT1 = temperature_CHT1;
    packet.temperature_CHT2 = temperature_CHT2;
    packet.temperature_oil = temperature_oil;
    packet.temperature_coolant = temperature_coolant;
    packet.temperature_gearbox = temperature_gearbox;
    packet.pressure_fuel = pressure_fuel;
    packet.pressure_oil = pressure_oil;
    packet.pressure_manifold = pressure_manifold;
    packet.level_fuel = level_fuel;
    packet.battery_12v = battery_12v;
    packet.rotor_rpm = rotor_rpm;
    packet.engine_rpm = engine_rpm;
    packet.status_bits = status_bits;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS, (const char *)&packet, MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS_MIN_LEN, MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS_LEN, MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS_CRC);
#endif
}

/**
 * @brief Send a uh_beyond_m_sensors message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_uh_beyond_m_sensors_send_struct(mavlink_channel_t chan, const mavlink_uh_beyond_m_sensors_t* uh_beyond_m_sensors)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_uh_beyond_m_sensors_send(chan, uh_beyond_m_sensors->temperature_EG1, uh_beyond_m_sensors->temperature_EG2, uh_beyond_m_sensors->temperature_EG3, uh_beyond_m_sensors->temperature_EG4, uh_beyond_m_sensors->temperature_CHT1, uh_beyond_m_sensors->temperature_CHT2, uh_beyond_m_sensors->temperature_oil, uh_beyond_m_sensors->temperature_coolant, uh_beyond_m_sensors->temperature_gearbox, uh_beyond_m_sensors->pressure_fuel, uh_beyond_m_sensors->pressure_oil, uh_beyond_m_sensors->pressure_manifold, uh_beyond_m_sensors->level_fuel, uh_beyond_m_sensors->rotor_rpm, uh_beyond_m_sensors->engine_rpm, uh_beyond_m_sensors->battery_12v, uh_beyond_m_sensors->status_bits);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS, (const char *)uh_beyond_m_sensors, MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS_MIN_LEN, MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS_LEN, MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS_CRC);
#endif
}

#if MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_uh_beyond_m_sensors_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float temperature_EG1, float temperature_EG2, float temperature_EG3, float temperature_EG4, float temperature_CHT1, float temperature_CHT2, float temperature_oil, float temperature_coolant, float temperature_gearbox, float pressure_fuel, float pressure_oil, float pressure_manifold, float level_fuel, int16_t rotor_rpm, int16_t engine_rpm, float battery_12v, uint16_t status_bits)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, temperature_EG1);
    _mav_put_float(buf, 4, temperature_EG2);
    _mav_put_float(buf, 8, temperature_EG3);
    _mav_put_float(buf, 12, temperature_EG4);
    _mav_put_float(buf, 16, temperature_CHT1);
    _mav_put_float(buf, 20, temperature_CHT2);
    _mav_put_float(buf, 24, temperature_oil);
    _mav_put_float(buf, 28, temperature_coolant);
    _mav_put_float(buf, 32, temperature_gearbox);
    _mav_put_float(buf, 36, pressure_fuel);
    _mav_put_float(buf, 40, pressure_oil);
    _mav_put_float(buf, 44, pressure_manifold);
    _mav_put_float(buf, 48, level_fuel);
    _mav_put_float(buf, 52, battery_12v);
    _mav_put_int16_t(buf, 56, rotor_rpm);
    _mav_put_int16_t(buf, 58, engine_rpm);
    _mav_put_uint16_t(buf, 60, status_bits);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS, buf, MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS_MIN_LEN, MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS_LEN, MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS_CRC);
#else
    mavlink_uh_beyond_m_sensors_t *packet = (mavlink_uh_beyond_m_sensors_t *)msgbuf;
    packet->temperature_EG1 = temperature_EG1;
    packet->temperature_EG2 = temperature_EG2;
    packet->temperature_EG3 = temperature_EG3;
    packet->temperature_EG4 = temperature_EG4;
    packet->temperature_CHT1 = temperature_CHT1;
    packet->temperature_CHT2 = temperature_CHT2;
    packet->temperature_oil = temperature_oil;
    packet->temperature_coolant = temperature_coolant;
    packet->temperature_gearbox = temperature_gearbox;
    packet->pressure_fuel = pressure_fuel;
    packet->pressure_oil = pressure_oil;
    packet->pressure_manifold = pressure_manifold;
    packet->level_fuel = level_fuel;
    packet->battery_12v = battery_12v;
    packet->rotor_rpm = rotor_rpm;
    packet->engine_rpm = engine_rpm;
    packet->status_bits = status_bits;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS, (const char *)packet, MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS_MIN_LEN, MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS_LEN, MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS_CRC);
#endif
}
#endif

#endif

// MESSAGE UH_BEYOND_M_SENSORS UNPACKING


/**
 * @brief Get field temperature_EG1 from uh_beyond_m_sensors message
 *
 * @return  Exhaust gas temperature 1
 */
static inline float mavlink_msg_uh_beyond_m_sensors_get_temperature_EG1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field temperature_EG2 from uh_beyond_m_sensors message
 *
 * @return  Exhaust gas temperature 2
 */
static inline float mavlink_msg_uh_beyond_m_sensors_get_temperature_EG2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field temperature_EG3 from uh_beyond_m_sensors message
 *
 * @return  Exhaust gas temperature 3
 */
static inline float mavlink_msg_uh_beyond_m_sensors_get_temperature_EG3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field temperature_EG4 from uh_beyond_m_sensors message
 *
 * @return  Exhaust gas temperature 4
 */
static inline float mavlink_msg_uh_beyond_m_sensors_get_temperature_EG4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field temperature_CHT1 from uh_beyond_m_sensors message
 *
 * @return  Cylinder head temperature 1
 */
static inline float mavlink_msg_uh_beyond_m_sensors_get_temperature_CHT1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field temperature_CHT2 from uh_beyond_m_sensors message
 *
 * @return  Cylinder head temperature 2
 */
static inline float mavlink_msg_uh_beyond_m_sensors_get_temperature_CHT2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field temperature_oil from uh_beyond_m_sensors message
 *
 * @return  Oil temperature
 */
static inline float mavlink_msg_uh_beyond_m_sensors_get_temperature_oil(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field temperature_coolant from uh_beyond_m_sensors message
 *
 * @return  Coolant temperature
 */
static inline float mavlink_msg_uh_beyond_m_sensors_get_temperature_coolant(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field temperature_gearbox from uh_beyond_m_sensors message
 *
 * @return  Gearbox temperature
 */
static inline float mavlink_msg_uh_beyond_m_sensors_get_temperature_gearbox(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field pressure_fuel from uh_beyond_m_sensors message
 *
 * @return  Fuel pressure
 */
static inline float mavlink_msg_uh_beyond_m_sensors_get_pressure_fuel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field pressure_oil from uh_beyond_m_sensors message
 *
 * @return  Oil pressure
 */
static inline float mavlink_msg_uh_beyond_m_sensors_get_pressure_oil(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field pressure_manifold from uh_beyond_m_sensors message
 *
 * @return  Manifold pressure
 */
static inline float mavlink_msg_uh_beyond_m_sensors_get_pressure_manifold(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Get field level_fuel from uh_beyond_m_sensors message
 *
 * @return  Fuel level
 */
static inline float mavlink_msg_uh_beyond_m_sensors_get_level_fuel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  48);
}

/**
 * @brief Get field rotor_rpm from uh_beyond_m_sensors message
 *
 * @return  Rotor RPM
 */
static inline int16_t mavlink_msg_uh_beyond_m_sensors_get_rotor_rpm(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  56);
}

/**
 * @brief Get field engine_rpm from uh_beyond_m_sensors message
 *
 * @return  Engine RPM
 */
static inline int16_t mavlink_msg_uh_beyond_m_sensors_get_engine_rpm(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  58);
}

/**
 * @brief Get field battery_12v from uh_beyond_m_sensors message
 *
 * @return  Battery voltage (12V)
 */
static inline float mavlink_msg_uh_beyond_m_sensors_get_battery_12v(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  52);
}

/**
 * @brief Get field status_bits from uh_beyond_m_sensors message
 *
 * @return  Equipment status bits. b0=fuel pressure
 */
static inline uint16_t mavlink_msg_uh_beyond_m_sensors_get_status_bits(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  60);
}

/**
 * @brief Decode a uh_beyond_m_sensors message into a struct
 *
 * @param msg The message to decode
 * @param uh_beyond_m_sensors C-struct to decode the message contents into
 */
static inline void mavlink_msg_uh_beyond_m_sensors_decode(const mavlink_message_t* msg, mavlink_uh_beyond_m_sensors_t* uh_beyond_m_sensors)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    uh_beyond_m_sensors->temperature_EG1 = mavlink_msg_uh_beyond_m_sensors_get_temperature_EG1(msg);
    uh_beyond_m_sensors->temperature_EG2 = mavlink_msg_uh_beyond_m_sensors_get_temperature_EG2(msg);
    uh_beyond_m_sensors->temperature_EG3 = mavlink_msg_uh_beyond_m_sensors_get_temperature_EG3(msg);
    uh_beyond_m_sensors->temperature_EG4 = mavlink_msg_uh_beyond_m_sensors_get_temperature_EG4(msg);
    uh_beyond_m_sensors->temperature_CHT1 = mavlink_msg_uh_beyond_m_sensors_get_temperature_CHT1(msg);
    uh_beyond_m_sensors->temperature_CHT2 = mavlink_msg_uh_beyond_m_sensors_get_temperature_CHT2(msg);
    uh_beyond_m_sensors->temperature_oil = mavlink_msg_uh_beyond_m_sensors_get_temperature_oil(msg);
    uh_beyond_m_sensors->temperature_coolant = mavlink_msg_uh_beyond_m_sensors_get_temperature_coolant(msg);
    uh_beyond_m_sensors->temperature_gearbox = mavlink_msg_uh_beyond_m_sensors_get_temperature_gearbox(msg);
    uh_beyond_m_sensors->pressure_fuel = mavlink_msg_uh_beyond_m_sensors_get_pressure_fuel(msg);
    uh_beyond_m_sensors->pressure_oil = mavlink_msg_uh_beyond_m_sensors_get_pressure_oil(msg);
    uh_beyond_m_sensors->pressure_manifold = mavlink_msg_uh_beyond_m_sensors_get_pressure_manifold(msg);
    uh_beyond_m_sensors->level_fuel = mavlink_msg_uh_beyond_m_sensors_get_level_fuel(msg);
    uh_beyond_m_sensors->battery_12v = mavlink_msg_uh_beyond_m_sensors_get_battery_12v(msg);
    uh_beyond_m_sensors->rotor_rpm = mavlink_msg_uh_beyond_m_sensors_get_rotor_rpm(msg);
    uh_beyond_m_sensors->engine_rpm = mavlink_msg_uh_beyond_m_sensors_get_engine_rpm(msg);
    uh_beyond_m_sensors->status_bits = mavlink_msg_uh_beyond_m_sensors_get_status_bits(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS_LEN? msg->len : MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS_LEN;
        memset(uh_beyond_m_sensors, 0, MAVLINK_MSG_ID_UH_BEYOND_M_SENSORS_LEN);
    memcpy(uh_beyond_m_sensors, _MAV_PAYLOAD(msg), len);
#endif
}
