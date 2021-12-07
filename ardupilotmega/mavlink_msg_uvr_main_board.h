#pragma once
// MESSAGE UVR_MAIN_BOARD PACKING

#define MAVLINK_MSG_ID_UVR_MAIN_BOARD 15003


typedef struct __mavlink_uvr_main_board_t {
 float temperature_main_engine; /*<  Main engine temperature*/
 float temperature_8v; /*<  8v power converter temperature*/
 float temperature_power_switch; /*<  MOSFET power switch temperature*/
 float voltage_main_battery; /*<  Main battery voltage*/
 float voltage_reserv_battery; /*<  Reserve battery voltage*/
 float current_8v; /*<  Current sensor (8v power converter)*/
 float current_payload; /*<  Current sensor (payload power converter)*/
 float distance_sensor; /*<  LIDAR distance sensor*/
 uint32_t telemetry_engine; /*<  telemetry from Engineelectric 1 controller*/
 int8_t error_3v; /*<  3v power convertor error*/
 int8_t error_5v; /*<  5v power convertor error*/
 int8_t error_8v; /*<  8v power convertor error*/
} mavlink_uvr_main_board_t;

#define MAVLINK_MSG_ID_UVR_MAIN_BOARD_LEN 39
#define MAVLINK_MSG_ID_UVR_MAIN_BOARD_MIN_LEN 39
#define MAVLINK_MSG_ID_15003_LEN 39
#define MAVLINK_MSG_ID_15003_MIN_LEN 39

#define MAVLINK_MSG_ID_UVR_MAIN_BOARD_CRC 186
#define MAVLINK_MSG_ID_15003_CRC 186



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_UVR_MAIN_BOARD { \
    15003, \
    "UVR_MAIN_BOARD", \
    12, \
    {  { "temperature_main_engine", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_uvr_main_board_t, temperature_main_engine) }, \
         { "temperature_8v", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_uvr_main_board_t, temperature_8v) }, \
         { "temperature_power_switch", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_uvr_main_board_t, temperature_power_switch) }, \
         { "voltage_main_battery", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_uvr_main_board_t, voltage_main_battery) }, \
         { "voltage_reserv_battery", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_uvr_main_board_t, voltage_reserv_battery) }, \
         { "current_8v", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_uvr_main_board_t, current_8v) }, \
         { "current_payload", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_uvr_main_board_t, current_payload) }, \
         { "distance_sensor", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_uvr_main_board_t, distance_sensor) }, \
         { "telemetry_engine", NULL, MAVLINK_TYPE_UINT32_T, 0, 32, offsetof(mavlink_uvr_main_board_t, telemetry_engine) }, \
         { "error_3v", NULL, MAVLINK_TYPE_INT8_T, 0, 36, offsetof(mavlink_uvr_main_board_t, error_3v) }, \
         { "error_5v", NULL, MAVLINK_TYPE_INT8_T, 0, 37, offsetof(mavlink_uvr_main_board_t, error_5v) }, \
         { "error_8v", NULL, MAVLINK_TYPE_INT8_T, 0, 38, offsetof(mavlink_uvr_main_board_t, error_8v) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_UVR_MAIN_BOARD { \
    "UVR_MAIN_BOARD", \
    12, \
    {  { "temperature_main_engine", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_uvr_main_board_t, temperature_main_engine) }, \
         { "temperature_8v", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_uvr_main_board_t, temperature_8v) }, \
         { "temperature_power_switch", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_uvr_main_board_t, temperature_power_switch) }, \
         { "voltage_main_battery", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_uvr_main_board_t, voltage_main_battery) }, \
         { "voltage_reserv_battery", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_uvr_main_board_t, voltage_reserv_battery) }, \
         { "current_8v", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_uvr_main_board_t, current_8v) }, \
         { "current_payload", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_uvr_main_board_t, current_payload) }, \
         { "distance_sensor", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_uvr_main_board_t, distance_sensor) }, \
         { "telemetry_engine", NULL, MAVLINK_TYPE_UINT32_T, 0, 32, offsetof(mavlink_uvr_main_board_t, telemetry_engine) }, \
         { "error_3v", NULL, MAVLINK_TYPE_INT8_T, 0, 36, offsetof(mavlink_uvr_main_board_t, error_3v) }, \
         { "error_5v", NULL, MAVLINK_TYPE_INT8_T, 0, 37, offsetof(mavlink_uvr_main_board_t, error_5v) }, \
         { "error_8v", NULL, MAVLINK_TYPE_INT8_T, 0, 38, offsetof(mavlink_uvr_main_board_t, error_8v) }, \
         } \
}
#endif

/**
 * @brief Pack a uvr_main_board message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param temperature_main_engine  Main engine temperature
 * @param temperature_8v  8v power converter temperature
 * @param temperature_power_switch  MOSFET power switch temperature
 * @param voltage_main_battery  Main battery voltage
 * @param voltage_reserv_battery  Reserve battery voltage
 * @param current_8v  Current sensor (8v power converter)
 * @param current_payload  Current sensor (payload power converter)
 * @param distance_sensor  LIDAR distance sensor
 * @param telemetry_engine  telemetry from Engineelectric 1 controller
 * @param error_3v  3v power convertor error
 * @param error_5v  5v power convertor error
 * @param error_8v  8v power convertor error
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uvr_main_board_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float temperature_main_engine, float temperature_8v, float temperature_power_switch, float voltage_main_battery, float voltage_reserv_battery, float current_8v, float current_payload, float distance_sensor, uint32_t telemetry_engine, int8_t error_3v, int8_t error_5v, int8_t error_8v)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UVR_MAIN_BOARD_LEN];
    _mav_put_float(buf, 0, temperature_main_engine);
    _mav_put_float(buf, 4, temperature_8v);
    _mav_put_float(buf, 8, temperature_power_switch);
    _mav_put_float(buf, 12, voltage_main_battery);
    _mav_put_float(buf, 16, voltage_reserv_battery);
    _mav_put_float(buf, 20, current_8v);
    _mav_put_float(buf, 24, current_payload);
    _mav_put_float(buf, 28, distance_sensor);
    _mav_put_uint32_t(buf, 32, telemetry_engine);
    _mav_put_int8_t(buf, 36, error_3v);
    _mav_put_int8_t(buf, 37, error_5v);
    _mav_put_int8_t(buf, 38, error_8v);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UVR_MAIN_BOARD_LEN);
#else
    mavlink_uvr_main_board_t packet;
    packet.temperature_main_engine = temperature_main_engine;
    packet.temperature_8v = temperature_8v;
    packet.temperature_power_switch = temperature_power_switch;
    packet.voltage_main_battery = voltage_main_battery;
    packet.voltage_reserv_battery = voltage_reserv_battery;
    packet.current_8v = current_8v;
    packet.current_payload = current_payload;
    packet.distance_sensor = distance_sensor;
    packet.telemetry_engine = telemetry_engine;
    packet.error_3v = error_3v;
    packet.error_5v = error_5v;
    packet.error_8v = error_8v;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UVR_MAIN_BOARD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UVR_MAIN_BOARD;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_UVR_MAIN_BOARD_MIN_LEN, MAVLINK_MSG_ID_UVR_MAIN_BOARD_LEN, MAVLINK_MSG_ID_UVR_MAIN_BOARD_CRC);
}

/**
 * @brief Pack a uvr_main_board message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param temperature_main_engine  Main engine temperature
 * @param temperature_8v  8v power converter temperature
 * @param temperature_power_switch  MOSFET power switch temperature
 * @param voltage_main_battery  Main battery voltage
 * @param voltage_reserv_battery  Reserve battery voltage
 * @param current_8v  Current sensor (8v power converter)
 * @param current_payload  Current sensor (payload power converter)
 * @param distance_sensor  LIDAR distance sensor
 * @param telemetry_engine  telemetry from Engineelectric 1 controller
 * @param error_3v  3v power convertor error
 * @param error_5v  5v power convertor error
 * @param error_8v  8v power convertor error
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uvr_main_board_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float temperature_main_engine,float temperature_8v,float temperature_power_switch,float voltage_main_battery,float voltage_reserv_battery,float current_8v,float current_payload,float distance_sensor,uint32_t telemetry_engine,int8_t error_3v,int8_t error_5v,int8_t error_8v)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UVR_MAIN_BOARD_LEN];
    _mav_put_float(buf, 0, temperature_main_engine);
    _mav_put_float(buf, 4, temperature_8v);
    _mav_put_float(buf, 8, temperature_power_switch);
    _mav_put_float(buf, 12, voltage_main_battery);
    _mav_put_float(buf, 16, voltage_reserv_battery);
    _mav_put_float(buf, 20, current_8v);
    _mav_put_float(buf, 24, current_payload);
    _mav_put_float(buf, 28, distance_sensor);
    _mav_put_uint32_t(buf, 32, telemetry_engine);
    _mav_put_int8_t(buf, 36, error_3v);
    _mav_put_int8_t(buf, 37, error_5v);
    _mav_put_int8_t(buf, 38, error_8v);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UVR_MAIN_BOARD_LEN);
#else
    mavlink_uvr_main_board_t packet;
    packet.temperature_main_engine = temperature_main_engine;
    packet.temperature_8v = temperature_8v;
    packet.temperature_power_switch = temperature_power_switch;
    packet.voltage_main_battery = voltage_main_battery;
    packet.voltage_reserv_battery = voltage_reserv_battery;
    packet.current_8v = current_8v;
    packet.current_payload = current_payload;
    packet.distance_sensor = distance_sensor;
    packet.telemetry_engine = telemetry_engine;
    packet.error_3v = error_3v;
    packet.error_5v = error_5v;
    packet.error_8v = error_8v;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UVR_MAIN_BOARD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UVR_MAIN_BOARD;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_UVR_MAIN_BOARD_MIN_LEN, MAVLINK_MSG_ID_UVR_MAIN_BOARD_LEN, MAVLINK_MSG_ID_UVR_MAIN_BOARD_CRC);
}

/**
 * @brief Encode a uvr_main_board struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param uvr_main_board C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uvr_main_board_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_uvr_main_board_t* uvr_main_board)
{
    return mavlink_msg_uvr_main_board_pack(system_id, component_id, msg, uvr_main_board->temperature_main_engine, uvr_main_board->temperature_8v, uvr_main_board->temperature_power_switch, uvr_main_board->voltage_main_battery, uvr_main_board->voltage_reserv_battery, uvr_main_board->current_8v, uvr_main_board->current_payload, uvr_main_board->distance_sensor, uvr_main_board->telemetry_engine, uvr_main_board->error_3v, uvr_main_board->error_5v, uvr_main_board->error_8v);
}

/**
 * @brief Encode a uvr_main_board struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param uvr_main_board C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uvr_main_board_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_uvr_main_board_t* uvr_main_board)
{
    return mavlink_msg_uvr_main_board_pack_chan(system_id, component_id, chan, msg, uvr_main_board->temperature_main_engine, uvr_main_board->temperature_8v, uvr_main_board->temperature_power_switch, uvr_main_board->voltage_main_battery, uvr_main_board->voltage_reserv_battery, uvr_main_board->current_8v, uvr_main_board->current_payload, uvr_main_board->distance_sensor, uvr_main_board->telemetry_engine, uvr_main_board->error_3v, uvr_main_board->error_5v, uvr_main_board->error_8v);
}

/**
 * @brief Send a uvr_main_board message
 * @param chan MAVLink channel to send the message
 *
 * @param temperature_main_engine  Main engine temperature
 * @param temperature_8v  8v power converter temperature
 * @param temperature_power_switch  MOSFET power switch temperature
 * @param voltage_main_battery  Main battery voltage
 * @param voltage_reserv_battery  Reserve battery voltage
 * @param current_8v  Current sensor (8v power converter)
 * @param current_payload  Current sensor (payload power converter)
 * @param distance_sensor  LIDAR distance sensor
 * @param telemetry_engine  telemetry from Engineelectric 1 controller
 * @param error_3v  3v power convertor error
 * @param error_5v  5v power convertor error
 * @param error_8v  8v power convertor error
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_uvr_main_board_send(mavlink_channel_t chan, float temperature_main_engine, float temperature_8v, float temperature_power_switch, float voltage_main_battery, float voltage_reserv_battery, float current_8v, float current_payload, float distance_sensor, uint32_t telemetry_engine, int8_t error_3v, int8_t error_5v, int8_t error_8v)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UVR_MAIN_BOARD_LEN];
    _mav_put_float(buf, 0, temperature_main_engine);
    _mav_put_float(buf, 4, temperature_8v);
    _mav_put_float(buf, 8, temperature_power_switch);
    _mav_put_float(buf, 12, voltage_main_battery);
    _mav_put_float(buf, 16, voltage_reserv_battery);
    _mav_put_float(buf, 20, current_8v);
    _mav_put_float(buf, 24, current_payload);
    _mav_put_float(buf, 28, distance_sensor);
    _mav_put_uint32_t(buf, 32, telemetry_engine);
    _mav_put_int8_t(buf, 36, error_3v);
    _mav_put_int8_t(buf, 37, error_5v);
    _mav_put_int8_t(buf, 38, error_8v);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_MAIN_BOARD, buf, MAVLINK_MSG_ID_UVR_MAIN_BOARD_MIN_LEN, MAVLINK_MSG_ID_UVR_MAIN_BOARD_LEN, MAVLINK_MSG_ID_UVR_MAIN_BOARD_CRC);
#else
    mavlink_uvr_main_board_t packet;
    packet.temperature_main_engine = temperature_main_engine;
    packet.temperature_8v = temperature_8v;
    packet.temperature_power_switch = temperature_power_switch;
    packet.voltage_main_battery = voltage_main_battery;
    packet.voltage_reserv_battery = voltage_reserv_battery;
    packet.current_8v = current_8v;
    packet.current_payload = current_payload;
    packet.distance_sensor = distance_sensor;
    packet.telemetry_engine = telemetry_engine;
    packet.error_3v = error_3v;
    packet.error_5v = error_5v;
    packet.error_8v = error_8v;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_MAIN_BOARD, (const char *)&packet, MAVLINK_MSG_ID_UVR_MAIN_BOARD_MIN_LEN, MAVLINK_MSG_ID_UVR_MAIN_BOARD_LEN, MAVLINK_MSG_ID_UVR_MAIN_BOARD_CRC);
#endif
}

/**
 * @brief Send a uvr_main_board message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_uvr_main_board_send_struct(mavlink_channel_t chan, const mavlink_uvr_main_board_t* uvr_main_board)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_uvr_main_board_send(chan, uvr_main_board->temperature_main_engine, uvr_main_board->temperature_8v, uvr_main_board->temperature_power_switch, uvr_main_board->voltage_main_battery, uvr_main_board->voltage_reserv_battery, uvr_main_board->current_8v, uvr_main_board->current_payload, uvr_main_board->distance_sensor, uvr_main_board->telemetry_engine, uvr_main_board->error_3v, uvr_main_board->error_5v, uvr_main_board->error_8v);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_MAIN_BOARD, (const char *)uvr_main_board, MAVLINK_MSG_ID_UVR_MAIN_BOARD_MIN_LEN, MAVLINK_MSG_ID_UVR_MAIN_BOARD_LEN, MAVLINK_MSG_ID_UVR_MAIN_BOARD_CRC);
#endif
}

#if MAVLINK_MSG_ID_UVR_MAIN_BOARD_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_uvr_main_board_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float temperature_main_engine, float temperature_8v, float temperature_power_switch, float voltage_main_battery, float voltage_reserv_battery, float current_8v, float current_payload, float distance_sensor, uint32_t telemetry_engine, int8_t error_3v, int8_t error_5v, int8_t error_8v)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, temperature_main_engine);
    _mav_put_float(buf, 4, temperature_8v);
    _mav_put_float(buf, 8, temperature_power_switch);
    _mav_put_float(buf, 12, voltage_main_battery);
    _mav_put_float(buf, 16, voltage_reserv_battery);
    _mav_put_float(buf, 20, current_8v);
    _mav_put_float(buf, 24, current_payload);
    _mav_put_float(buf, 28, distance_sensor);
    _mav_put_uint32_t(buf, 32, telemetry_engine);
    _mav_put_int8_t(buf, 36, error_3v);
    _mav_put_int8_t(buf, 37, error_5v);
    _mav_put_int8_t(buf, 38, error_8v);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_MAIN_BOARD, buf, MAVLINK_MSG_ID_UVR_MAIN_BOARD_MIN_LEN, MAVLINK_MSG_ID_UVR_MAIN_BOARD_LEN, MAVLINK_MSG_ID_UVR_MAIN_BOARD_CRC);
#else
    mavlink_uvr_main_board_t *packet = (mavlink_uvr_main_board_t *)msgbuf;
    packet->temperature_main_engine = temperature_main_engine;
    packet->temperature_8v = temperature_8v;
    packet->temperature_power_switch = temperature_power_switch;
    packet->voltage_main_battery = voltage_main_battery;
    packet->voltage_reserv_battery = voltage_reserv_battery;
    packet->current_8v = current_8v;
    packet->current_payload = current_payload;
    packet->distance_sensor = distance_sensor;
    packet->telemetry_engine = telemetry_engine;
    packet->error_3v = error_3v;
    packet->error_5v = error_5v;
    packet->error_8v = error_8v;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_MAIN_BOARD, (const char *)packet, MAVLINK_MSG_ID_UVR_MAIN_BOARD_MIN_LEN, MAVLINK_MSG_ID_UVR_MAIN_BOARD_LEN, MAVLINK_MSG_ID_UVR_MAIN_BOARD_CRC);
#endif
}
#endif

#endif

// MESSAGE UVR_MAIN_BOARD UNPACKING


/**
 * @brief Get field temperature_main_engine from uvr_main_board message
 *
 * @return  Main engine temperature
 */
static inline float mavlink_msg_uvr_main_board_get_temperature_main_engine(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field temperature_8v from uvr_main_board message
 *
 * @return  8v power converter temperature
 */
static inline float mavlink_msg_uvr_main_board_get_temperature_8v(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field temperature_power_switch from uvr_main_board message
 *
 * @return  MOSFET power switch temperature
 */
static inline float mavlink_msg_uvr_main_board_get_temperature_power_switch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field voltage_main_battery from uvr_main_board message
 *
 * @return  Main battery voltage
 */
static inline float mavlink_msg_uvr_main_board_get_voltage_main_battery(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field voltage_reserv_battery from uvr_main_board message
 *
 * @return  Reserve battery voltage
 */
static inline float mavlink_msg_uvr_main_board_get_voltage_reserv_battery(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field current_8v from uvr_main_board message
 *
 * @return  Current sensor (8v power converter)
 */
static inline float mavlink_msg_uvr_main_board_get_current_8v(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field current_payload from uvr_main_board message
 *
 * @return  Current sensor (payload power converter)
 */
static inline float mavlink_msg_uvr_main_board_get_current_payload(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field distance_sensor from uvr_main_board message
 *
 * @return  LIDAR distance sensor
 */
static inline float mavlink_msg_uvr_main_board_get_distance_sensor(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field telemetry_engine from uvr_main_board message
 *
 * @return  telemetry from Engineelectric 1 controller
 */
static inline uint32_t mavlink_msg_uvr_main_board_get_telemetry_engine(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  32);
}

/**
 * @brief Get field error_3v from uvr_main_board message
 *
 * @return  3v power convertor error
 */
static inline int8_t mavlink_msg_uvr_main_board_get_error_3v(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  36);
}

/**
 * @brief Get field error_5v from uvr_main_board message
 *
 * @return  5v power convertor error
 */
static inline int8_t mavlink_msg_uvr_main_board_get_error_5v(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  37);
}

/**
 * @brief Get field error_8v from uvr_main_board message
 *
 * @return  8v power convertor error
 */
static inline int8_t mavlink_msg_uvr_main_board_get_error_8v(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  38);
}

/**
 * @brief Decode a uvr_main_board message into a struct
 *
 * @param msg The message to decode
 * @param uvr_main_board C-struct to decode the message contents into
 */
static inline void mavlink_msg_uvr_main_board_decode(const mavlink_message_t* msg, mavlink_uvr_main_board_t* uvr_main_board)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    uvr_main_board->temperature_main_engine = mavlink_msg_uvr_main_board_get_temperature_main_engine(msg);
    uvr_main_board->temperature_8v = mavlink_msg_uvr_main_board_get_temperature_8v(msg);
    uvr_main_board->temperature_power_switch = mavlink_msg_uvr_main_board_get_temperature_power_switch(msg);
    uvr_main_board->voltage_main_battery = mavlink_msg_uvr_main_board_get_voltage_main_battery(msg);
    uvr_main_board->voltage_reserv_battery = mavlink_msg_uvr_main_board_get_voltage_reserv_battery(msg);
    uvr_main_board->current_8v = mavlink_msg_uvr_main_board_get_current_8v(msg);
    uvr_main_board->current_payload = mavlink_msg_uvr_main_board_get_current_payload(msg);
    uvr_main_board->distance_sensor = mavlink_msg_uvr_main_board_get_distance_sensor(msg);
    uvr_main_board->telemetry_engine = mavlink_msg_uvr_main_board_get_telemetry_engine(msg);
    uvr_main_board->error_3v = mavlink_msg_uvr_main_board_get_error_3v(msg);
    uvr_main_board->error_5v = mavlink_msg_uvr_main_board_get_error_5v(msg);
    uvr_main_board->error_8v = mavlink_msg_uvr_main_board_get_error_8v(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_UVR_MAIN_BOARD_LEN? msg->len : MAVLINK_MSG_ID_UVR_MAIN_BOARD_LEN;
        memset(uvr_main_board, 0, MAVLINK_MSG_ID_UVR_MAIN_BOARD_LEN);
    memcpy(uvr_main_board, _MAV_PAYLOAD(msg), len);
#endif
}
