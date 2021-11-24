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
 float exhaust_temperature_1; /*< [degC] Exhaust 1 Temperature.*/
 float exhaust_temperature_2; /*< [degC] Exhaust 2 Temperature.*/
 float exhaust_temperature_3; /*< [degC] Exhaust 3 Temperature.*/
 float exhaust_temperature_4; /*< [degC] Exhaust 4 Temperature.*/
 float coolant_temperature; /*< [degC] Coolant Temperature.*/
 float frame_pressure; /*< [bar] Frame pressure.*/
 uint32_t equipment_state_flags; /*<  Equipment state flags */
 uint8_t turbine_state_flags; /*<  Boost state flags: b0:CAUTION_ALARM; b1:WARNING_BOOST_ALARM*/
 uint8_t clutch_state_flags; /*<  Clutch state flags: b0:BOTTOM; b1:TOP*/
} mavlink_uvr_engine_low_rate_t;

#define MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_LEN 62
#define MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_MIN_LEN 62
#define MAVLINK_MSG_ID_15001_LEN 62
#define MAVLINK_MSG_ID_15001_MIN_LEN 62

#define MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_CRC 49
#define MAVLINK_MSG_ID_15001_CRC 49



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_UVR_ENGINE_LOW_RATE { \
    15001, \
    "UVR_ENGINE_LOW_RATE", \
    17, \
    {  { "oil_temperature_1", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_uvr_engine_low_rate_t, oil_temperature_1) }, \
         { "oil_pressure_1", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_uvr_engine_low_rate_t, oil_pressure_1) }, \
         { "oil_temperature_2", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_uvr_engine_low_rate_t, oil_temperature_2) }, \
         { "oil_pressure_2", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_uvr_engine_low_rate_t, oil_pressure_2) }, \
         { "head1_temperature", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_uvr_engine_low_rate_t, head1_temperature) }, \
         { "head2_temperature", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_uvr_engine_low_rate_t, head2_temperature) }, \
         { "turbine_pressure", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_uvr_engine_low_rate_t, turbine_pressure) }, \
         { "fuel_pressure", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_uvr_engine_low_rate_t, fuel_pressure) }, \
         { "exhaust_temperature_1", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_uvr_engine_low_rate_t, exhaust_temperature_1) }, \
         { "exhaust_temperature_2", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_uvr_engine_low_rate_t, exhaust_temperature_2) }, \
         { "exhaust_temperature_3", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_uvr_engine_low_rate_t, exhaust_temperature_3) }, \
         { "exhaust_temperature_4", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_uvr_engine_low_rate_t, exhaust_temperature_4) }, \
         { "coolant_temperature", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_uvr_engine_low_rate_t, coolant_temperature) }, \
         { "turbine_state_flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 60, offsetof(mavlink_uvr_engine_low_rate_t, turbine_state_flags) }, \
         { "clutch_state_flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 61, offsetof(mavlink_uvr_engine_low_rate_t, clutch_state_flags) }, \
         { "frame_pressure", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_uvr_engine_low_rate_t, frame_pressure) }, \
         { "equipment_state_flags", NULL, MAVLINK_TYPE_UINT32_T, 0, 56, offsetof(mavlink_uvr_engine_low_rate_t, equipment_state_flags) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_UVR_ENGINE_LOW_RATE { \
    "UVR_ENGINE_LOW_RATE", \
    17, \
    {  { "oil_temperature_1", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_uvr_engine_low_rate_t, oil_temperature_1) }, \
         { "oil_pressure_1", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_uvr_engine_low_rate_t, oil_pressure_1) }, \
         { "oil_temperature_2", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_uvr_engine_low_rate_t, oil_temperature_2) }, \
         { "oil_pressure_2", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_uvr_engine_low_rate_t, oil_pressure_2) }, \
         { "head1_temperature", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_uvr_engine_low_rate_t, head1_temperature) }, \
         { "head2_temperature", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_uvr_engine_low_rate_t, head2_temperature) }, \
         { "turbine_pressure", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_uvr_engine_low_rate_t, turbine_pressure) }, \
         { "fuel_pressure", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_uvr_engine_low_rate_t, fuel_pressure) }, \
         { "exhaust_temperature_1", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_uvr_engine_low_rate_t, exhaust_temperature_1) }, \
         { "exhaust_temperature_2", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_uvr_engine_low_rate_t, exhaust_temperature_2) }, \
         { "exhaust_temperature_3", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_uvr_engine_low_rate_t, exhaust_temperature_3) }, \
         { "exhaust_temperature_4", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_uvr_engine_low_rate_t, exhaust_temperature_4) }, \
         { "coolant_temperature", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_uvr_engine_low_rate_t, coolant_temperature) }, \
         { "turbine_state_flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 60, offsetof(mavlink_uvr_engine_low_rate_t, turbine_state_flags) }, \
         { "clutch_state_flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 61, offsetof(mavlink_uvr_engine_low_rate_t, clutch_state_flags) }, \
         { "frame_pressure", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_uvr_engine_low_rate_t, frame_pressure) }, \
         { "equipment_state_flags", NULL, MAVLINK_TYPE_UINT32_T, 0, 56, offsetof(mavlink_uvr_engine_low_rate_t, equipment_state_flags) }, \
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
 * @param exhaust_temperature_1 [degC] Exhaust 1 Temperature.
 * @param exhaust_temperature_2 [degC] Exhaust 2 Temperature.
 * @param exhaust_temperature_3 [degC] Exhaust 3 Temperature.
 * @param exhaust_temperature_4 [degC] Exhaust 4 Temperature.
 * @param coolant_temperature [degC] Coolant Temperature.
 * @param turbine_state_flags  Boost state flags: b0:CAUTION_ALARM; b1:WARNING_BOOST_ALARM
 * @param clutch_state_flags  Clutch state flags: b0:BOTTOM; b1:TOP
 * @param frame_pressure [bar] Frame pressure.
 * @param equipment_state_flags  Equipment state flags 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uvr_engine_low_rate_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float oil_temperature_1, float oil_pressure_1, float oil_temperature_2, float oil_pressure_2, float head1_temperature, float head2_temperature, float turbine_pressure, float fuel_pressure, float exhaust_temperature_1, float exhaust_temperature_2, float exhaust_temperature_3, float exhaust_temperature_4, float coolant_temperature, uint8_t turbine_state_flags, uint8_t clutch_state_flags, float frame_pressure, uint32_t equipment_state_flags)
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
    _mav_put_float(buf, 32, exhaust_temperature_1);
    _mav_put_float(buf, 36, exhaust_temperature_2);
    _mav_put_float(buf, 40, exhaust_temperature_3);
    _mav_put_float(buf, 44, exhaust_temperature_4);
    _mav_put_float(buf, 48, coolant_temperature);
    _mav_put_float(buf, 52, frame_pressure);
    _mav_put_uint32_t(buf, 56, equipment_state_flags);
    _mav_put_uint8_t(buf, 60, turbine_state_flags);
    _mav_put_uint8_t(buf, 61, clutch_state_flags);

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
    packet.exhaust_temperature_1 = exhaust_temperature_1;
    packet.exhaust_temperature_2 = exhaust_temperature_2;
    packet.exhaust_temperature_3 = exhaust_temperature_3;
    packet.exhaust_temperature_4 = exhaust_temperature_4;
    packet.coolant_temperature = coolant_temperature;
    packet.frame_pressure = frame_pressure;
    packet.equipment_state_flags = equipment_state_flags;
    packet.turbine_state_flags = turbine_state_flags;
    packet.clutch_state_flags = clutch_state_flags;

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
 * @param exhaust_temperature_1 [degC] Exhaust 1 Temperature.
 * @param exhaust_temperature_2 [degC] Exhaust 2 Temperature.
 * @param exhaust_temperature_3 [degC] Exhaust 3 Temperature.
 * @param exhaust_temperature_4 [degC] Exhaust 4 Temperature.
 * @param coolant_temperature [degC] Coolant Temperature.
 * @param turbine_state_flags  Boost state flags: b0:CAUTION_ALARM; b1:WARNING_BOOST_ALARM
 * @param clutch_state_flags  Clutch state flags: b0:BOTTOM; b1:TOP
 * @param frame_pressure [bar] Frame pressure.
 * @param equipment_state_flags  Equipment state flags 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uvr_engine_low_rate_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float oil_temperature_1,float oil_pressure_1,float oil_temperature_2,float oil_pressure_2,float head1_temperature,float head2_temperature,float turbine_pressure,float fuel_pressure,float exhaust_temperature_1,float exhaust_temperature_2,float exhaust_temperature_3,float exhaust_temperature_4,float coolant_temperature,uint8_t turbine_state_flags,uint8_t clutch_state_flags,float frame_pressure,uint32_t equipment_state_flags)
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
    _mav_put_float(buf, 32, exhaust_temperature_1);
    _mav_put_float(buf, 36, exhaust_temperature_2);
    _mav_put_float(buf, 40, exhaust_temperature_3);
    _mav_put_float(buf, 44, exhaust_temperature_4);
    _mav_put_float(buf, 48, coolant_temperature);
    _mav_put_float(buf, 52, frame_pressure);
    _mav_put_uint32_t(buf, 56, equipment_state_flags);
    _mav_put_uint8_t(buf, 60, turbine_state_flags);
    _mav_put_uint8_t(buf, 61, clutch_state_flags);

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
    packet.exhaust_temperature_1 = exhaust_temperature_1;
    packet.exhaust_temperature_2 = exhaust_temperature_2;
    packet.exhaust_temperature_3 = exhaust_temperature_3;
    packet.exhaust_temperature_4 = exhaust_temperature_4;
    packet.coolant_temperature = coolant_temperature;
    packet.frame_pressure = frame_pressure;
    packet.equipment_state_flags = equipment_state_flags;
    packet.turbine_state_flags = turbine_state_flags;
    packet.clutch_state_flags = clutch_state_flags;

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
    return mavlink_msg_uvr_engine_low_rate_pack(system_id, component_id, msg, uvr_engine_low_rate->oil_temperature_1, uvr_engine_low_rate->oil_pressure_1, uvr_engine_low_rate->oil_temperature_2, uvr_engine_low_rate->oil_pressure_2, uvr_engine_low_rate->head1_temperature, uvr_engine_low_rate->head2_temperature, uvr_engine_low_rate->turbine_pressure, uvr_engine_low_rate->fuel_pressure, uvr_engine_low_rate->exhaust_temperature_1, uvr_engine_low_rate->exhaust_temperature_2, uvr_engine_low_rate->exhaust_temperature_3, uvr_engine_low_rate->exhaust_temperature_4, uvr_engine_low_rate->coolant_temperature, uvr_engine_low_rate->turbine_state_flags, uvr_engine_low_rate->clutch_state_flags, uvr_engine_low_rate->frame_pressure, uvr_engine_low_rate->equipment_state_flags);
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
    return mavlink_msg_uvr_engine_low_rate_pack_chan(system_id, component_id, chan, msg, uvr_engine_low_rate->oil_temperature_1, uvr_engine_low_rate->oil_pressure_1, uvr_engine_low_rate->oil_temperature_2, uvr_engine_low_rate->oil_pressure_2, uvr_engine_low_rate->head1_temperature, uvr_engine_low_rate->head2_temperature, uvr_engine_low_rate->turbine_pressure, uvr_engine_low_rate->fuel_pressure, uvr_engine_low_rate->exhaust_temperature_1, uvr_engine_low_rate->exhaust_temperature_2, uvr_engine_low_rate->exhaust_temperature_3, uvr_engine_low_rate->exhaust_temperature_4, uvr_engine_low_rate->coolant_temperature, uvr_engine_low_rate->turbine_state_flags, uvr_engine_low_rate->clutch_state_flags, uvr_engine_low_rate->frame_pressure, uvr_engine_low_rate->equipment_state_flags);
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
 * @param exhaust_temperature_1 [degC] Exhaust 1 Temperature.
 * @param exhaust_temperature_2 [degC] Exhaust 2 Temperature.
 * @param exhaust_temperature_3 [degC] Exhaust 3 Temperature.
 * @param exhaust_temperature_4 [degC] Exhaust 4 Temperature.
 * @param coolant_temperature [degC] Coolant Temperature.
 * @param turbine_state_flags  Boost state flags: b0:CAUTION_ALARM; b1:WARNING_BOOST_ALARM
 * @param clutch_state_flags  Clutch state flags: b0:BOTTOM; b1:TOP
 * @param frame_pressure [bar] Frame pressure.
 * @param equipment_state_flags  Equipment state flags 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_uvr_engine_low_rate_send(mavlink_channel_t chan, float oil_temperature_1, float oil_pressure_1, float oil_temperature_2, float oil_pressure_2, float head1_temperature, float head2_temperature, float turbine_pressure, float fuel_pressure, float exhaust_temperature_1, float exhaust_temperature_2, float exhaust_temperature_3, float exhaust_temperature_4, float coolant_temperature, uint8_t turbine_state_flags, uint8_t clutch_state_flags, float frame_pressure, uint32_t equipment_state_flags)
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
    _mav_put_float(buf, 32, exhaust_temperature_1);
    _mav_put_float(buf, 36, exhaust_temperature_2);
    _mav_put_float(buf, 40, exhaust_temperature_3);
    _mav_put_float(buf, 44, exhaust_temperature_4);
    _mav_put_float(buf, 48, coolant_temperature);
    _mav_put_float(buf, 52, frame_pressure);
    _mav_put_uint32_t(buf, 56, equipment_state_flags);
    _mav_put_uint8_t(buf, 60, turbine_state_flags);
    _mav_put_uint8_t(buf, 61, clutch_state_flags);

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
    packet.exhaust_temperature_1 = exhaust_temperature_1;
    packet.exhaust_temperature_2 = exhaust_temperature_2;
    packet.exhaust_temperature_3 = exhaust_temperature_3;
    packet.exhaust_temperature_4 = exhaust_temperature_4;
    packet.coolant_temperature = coolant_temperature;
    packet.frame_pressure = frame_pressure;
    packet.equipment_state_flags = equipment_state_flags;
    packet.turbine_state_flags = turbine_state_flags;
    packet.clutch_state_flags = clutch_state_flags;

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
    mavlink_msg_uvr_engine_low_rate_send(chan, uvr_engine_low_rate->oil_temperature_1, uvr_engine_low_rate->oil_pressure_1, uvr_engine_low_rate->oil_temperature_2, uvr_engine_low_rate->oil_pressure_2, uvr_engine_low_rate->head1_temperature, uvr_engine_low_rate->head2_temperature, uvr_engine_low_rate->turbine_pressure, uvr_engine_low_rate->fuel_pressure, uvr_engine_low_rate->exhaust_temperature_1, uvr_engine_low_rate->exhaust_temperature_2, uvr_engine_low_rate->exhaust_temperature_3, uvr_engine_low_rate->exhaust_temperature_4, uvr_engine_low_rate->coolant_temperature, uvr_engine_low_rate->turbine_state_flags, uvr_engine_low_rate->clutch_state_flags, uvr_engine_low_rate->frame_pressure, uvr_engine_low_rate->equipment_state_flags);
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
static inline void mavlink_msg_uvr_engine_low_rate_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float oil_temperature_1, float oil_pressure_1, float oil_temperature_2, float oil_pressure_2, float head1_temperature, float head2_temperature, float turbine_pressure, float fuel_pressure, float exhaust_temperature_1, float exhaust_temperature_2, float exhaust_temperature_3, float exhaust_temperature_4, float coolant_temperature, uint8_t turbine_state_flags, uint8_t clutch_state_flags, float frame_pressure, uint32_t equipment_state_flags)
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
    _mav_put_float(buf, 32, exhaust_temperature_1);
    _mav_put_float(buf, 36, exhaust_temperature_2);
    _mav_put_float(buf, 40, exhaust_temperature_3);
    _mav_put_float(buf, 44, exhaust_temperature_4);
    _mav_put_float(buf, 48, coolant_temperature);
    _mav_put_float(buf, 52, frame_pressure);
    _mav_put_uint32_t(buf, 56, equipment_state_flags);
    _mav_put_uint8_t(buf, 60, turbine_state_flags);
    _mav_put_uint8_t(buf, 61, clutch_state_flags);

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
    packet->exhaust_temperature_1 = exhaust_temperature_1;
    packet->exhaust_temperature_2 = exhaust_temperature_2;
    packet->exhaust_temperature_3 = exhaust_temperature_3;
    packet->exhaust_temperature_4 = exhaust_temperature_4;
    packet->coolant_temperature = coolant_temperature;
    packet->frame_pressure = frame_pressure;
    packet->equipment_state_flags = equipment_state_flags;
    packet->turbine_state_flags = turbine_state_flags;
    packet->clutch_state_flags = clutch_state_flags;

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
 * @brief Get field exhaust_temperature_1 from uvr_engine_low_rate message
 *
 * @return [degC] Exhaust 1 Temperature.
 */
static inline float mavlink_msg_uvr_engine_low_rate_get_exhaust_temperature_1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field exhaust_temperature_2 from uvr_engine_low_rate message
 *
 * @return [degC] Exhaust 2 Temperature.
 */
static inline float mavlink_msg_uvr_engine_low_rate_get_exhaust_temperature_2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field exhaust_temperature_3 from uvr_engine_low_rate message
 *
 * @return [degC] Exhaust 3 Temperature.
 */
static inline float mavlink_msg_uvr_engine_low_rate_get_exhaust_temperature_3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field exhaust_temperature_4 from uvr_engine_low_rate message
 *
 * @return [degC] Exhaust 4 Temperature.
 */
static inline float mavlink_msg_uvr_engine_low_rate_get_exhaust_temperature_4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Get field coolant_temperature from uvr_engine_low_rate message
 *
 * @return [degC] Coolant Temperature.
 */
static inline float mavlink_msg_uvr_engine_low_rate_get_coolant_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  48);
}

/**
 * @brief Get field turbine_state_flags from uvr_engine_low_rate message
 *
 * @return  Boost state flags: b0:CAUTION_ALARM; b1:WARNING_BOOST_ALARM
 */
static inline uint8_t mavlink_msg_uvr_engine_low_rate_get_turbine_state_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  60);
}

/**
 * @brief Get field clutch_state_flags from uvr_engine_low_rate message
 *
 * @return  Clutch state flags: b0:BOTTOM; b1:TOP
 */
static inline uint8_t mavlink_msg_uvr_engine_low_rate_get_clutch_state_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  61);
}

/**
 * @brief Get field frame_pressure from uvr_engine_low_rate message
 *
 * @return [bar] Frame pressure.
 */
static inline float mavlink_msg_uvr_engine_low_rate_get_frame_pressure(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  52);
}

/**
 * @brief Get field equipment_state_flags from uvr_engine_low_rate message
 *
 * @return  Equipment state flags 
 */
static inline uint32_t mavlink_msg_uvr_engine_low_rate_get_equipment_state_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  56);
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
    uvr_engine_low_rate->exhaust_temperature_1 = mavlink_msg_uvr_engine_low_rate_get_exhaust_temperature_1(msg);
    uvr_engine_low_rate->exhaust_temperature_2 = mavlink_msg_uvr_engine_low_rate_get_exhaust_temperature_2(msg);
    uvr_engine_low_rate->exhaust_temperature_3 = mavlink_msg_uvr_engine_low_rate_get_exhaust_temperature_3(msg);
    uvr_engine_low_rate->exhaust_temperature_4 = mavlink_msg_uvr_engine_low_rate_get_exhaust_temperature_4(msg);
    uvr_engine_low_rate->coolant_temperature = mavlink_msg_uvr_engine_low_rate_get_coolant_temperature(msg);
    uvr_engine_low_rate->frame_pressure = mavlink_msg_uvr_engine_low_rate_get_frame_pressure(msg);
    uvr_engine_low_rate->equipment_state_flags = mavlink_msg_uvr_engine_low_rate_get_equipment_state_flags(msg);
    uvr_engine_low_rate->turbine_state_flags = mavlink_msg_uvr_engine_low_rate_get_turbine_state_flags(msg);
    uvr_engine_low_rate->clutch_state_flags = mavlink_msg_uvr_engine_low_rate_get_clutch_state_flags(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_LEN? msg->len : MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_LEN;
        memset(uvr_engine_low_rate, 0, MAVLINK_MSG_ID_UVR_ENGINE_LOW_RATE_LEN);
    memcpy(uvr_engine_low_rate, _MAV_PAYLOAD(msg), len);
#endif
}
