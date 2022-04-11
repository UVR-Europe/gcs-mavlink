#pragma once
// MESSAGE UVR_PID_GOV PACKING

#define MAVLINK_MSG_ID_UVR_PID_GOV 15006


typedef struct __mavlink_uvr_pid_gov_t {
 float target; /*<  Governor Pid Target*/
 float actual; /*<  Governor Pid Actual value*/
 float error; /*<  Governor Pid Error*/
 float P; /*<  Governor Pid P Out*/
 float I; /*<  Governor Pid I Out*/
 float D; /*<  Governor Pid D Out*/
 float FF; /*<  Governor Pid Fast Forward*/
 float out; /*<  Governor Pid Output*/
 float raw_error; /*<  Governor Pid Error without filtering*/
 int8_t governor_active; /*<  Governor Activity sign*/
} mavlink_uvr_pid_gov_t;

#define MAVLINK_MSG_ID_UVR_PID_GOV_LEN 37
#define MAVLINK_MSG_ID_UVR_PID_GOV_MIN_LEN 37
#define MAVLINK_MSG_ID_15006_LEN 37
#define MAVLINK_MSG_ID_15006_MIN_LEN 37

#define MAVLINK_MSG_ID_UVR_PID_GOV_CRC 130
#define MAVLINK_MSG_ID_15006_CRC 130



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_UVR_PID_GOV { \
    15006, \
    "UVR_PID_GOV", \
    10, \
    {  { "target", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_uvr_pid_gov_t, target) }, \
         { "actual", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_uvr_pid_gov_t, actual) }, \
         { "error", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_uvr_pid_gov_t, error) }, \
         { "P", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_uvr_pid_gov_t, P) }, \
         { "I", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_uvr_pid_gov_t, I) }, \
         { "D", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_uvr_pid_gov_t, D) }, \
         { "FF", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_uvr_pid_gov_t, FF) }, \
         { "out", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_uvr_pid_gov_t, out) }, \
         { "raw_error", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_uvr_pid_gov_t, raw_error) }, \
         { "governor_active", NULL, MAVLINK_TYPE_INT8_T, 0, 36, offsetof(mavlink_uvr_pid_gov_t, governor_active) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_UVR_PID_GOV { \
    "UVR_PID_GOV", \
    10, \
    {  { "target", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_uvr_pid_gov_t, target) }, \
         { "actual", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_uvr_pid_gov_t, actual) }, \
         { "error", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_uvr_pid_gov_t, error) }, \
         { "P", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_uvr_pid_gov_t, P) }, \
         { "I", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_uvr_pid_gov_t, I) }, \
         { "D", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_uvr_pid_gov_t, D) }, \
         { "FF", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_uvr_pid_gov_t, FF) }, \
         { "out", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_uvr_pid_gov_t, out) }, \
         { "raw_error", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_uvr_pid_gov_t, raw_error) }, \
         { "governor_active", NULL, MAVLINK_TYPE_INT8_T, 0, 36, offsetof(mavlink_uvr_pid_gov_t, governor_active) }, \
         } \
}
#endif

/**
 * @brief Pack a uvr_pid_gov message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target  Governor Pid Target
 * @param actual  Governor Pid Actual value
 * @param error  Governor Pid Error
 * @param P  Governor Pid P Out
 * @param I  Governor Pid I Out
 * @param D  Governor Pid D Out
 * @param FF  Governor Pid Fast Forward
 * @param out  Governor Pid Output
 * @param raw_error  Governor Pid Error without filtering
 * @param governor_active  Governor Activity sign
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uvr_pid_gov_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float target, float actual, float error, float P, float I, float D, float FF, float out, float raw_error, int8_t governor_active)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UVR_PID_GOV_LEN];
    _mav_put_float(buf, 0, target);
    _mav_put_float(buf, 4, actual);
    _mav_put_float(buf, 8, error);
    _mav_put_float(buf, 12, P);
    _mav_put_float(buf, 16, I);
    _mav_put_float(buf, 20, D);
    _mav_put_float(buf, 24, FF);
    _mav_put_float(buf, 28, out);
    _mav_put_float(buf, 32, raw_error);
    _mav_put_int8_t(buf, 36, governor_active);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UVR_PID_GOV_LEN);
#else
    mavlink_uvr_pid_gov_t packet;
    packet.target = target;
    packet.actual = actual;
    packet.error = error;
    packet.P = P;
    packet.I = I;
    packet.D = D;
    packet.FF = FF;
    packet.out = out;
    packet.raw_error = raw_error;
    packet.governor_active = governor_active;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UVR_PID_GOV_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UVR_PID_GOV;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_UVR_PID_GOV_MIN_LEN, MAVLINK_MSG_ID_UVR_PID_GOV_LEN, MAVLINK_MSG_ID_UVR_PID_GOV_CRC);
}

/**
 * @brief Pack a uvr_pid_gov message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target  Governor Pid Target
 * @param actual  Governor Pid Actual value
 * @param error  Governor Pid Error
 * @param P  Governor Pid P Out
 * @param I  Governor Pid I Out
 * @param D  Governor Pid D Out
 * @param FF  Governor Pid Fast Forward
 * @param out  Governor Pid Output
 * @param raw_error  Governor Pid Error without filtering
 * @param governor_active  Governor Activity sign
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uvr_pid_gov_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float target,float actual,float error,float P,float I,float D,float FF,float out,float raw_error,int8_t governor_active)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UVR_PID_GOV_LEN];
    _mav_put_float(buf, 0, target);
    _mav_put_float(buf, 4, actual);
    _mav_put_float(buf, 8, error);
    _mav_put_float(buf, 12, P);
    _mav_put_float(buf, 16, I);
    _mav_put_float(buf, 20, D);
    _mav_put_float(buf, 24, FF);
    _mav_put_float(buf, 28, out);
    _mav_put_float(buf, 32, raw_error);
    _mav_put_int8_t(buf, 36, governor_active);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UVR_PID_GOV_LEN);
#else
    mavlink_uvr_pid_gov_t packet;
    packet.target = target;
    packet.actual = actual;
    packet.error = error;
    packet.P = P;
    packet.I = I;
    packet.D = D;
    packet.FF = FF;
    packet.out = out;
    packet.raw_error = raw_error;
    packet.governor_active = governor_active;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UVR_PID_GOV_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UVR_PID_GOV;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_UVR_PID_GOV_MIN_LEN, MAVLINK_MSG_ID_UVR_PID_GOV_LEN, MAVLINK_MSG_ID_UVR_PID_GOV_CRC);
}

/**
 * @brief Encode a uvr_pid_gov struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param uvr_pid_gov C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uvr_pid_gov_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_uvr_pid_gov_t* uvr_pid_gov)
{
    return mavlink_msg_uvr_pid_gov_pack(system_id, component_id, msg, uvr_pid_gov->target, uvr_pid_gov->actual, uvr_pid_gov->error, uvr_pid_gov->P, uvr_pid_gov->I, uvr_pid_gov->D, uvr_pid_gov->FF, uvr_pid_gov->out, uvr_pid_gov->raw_error, uvr_pid_gov->governor_active);
}

/**
 * @brief Encode a uvr_pid_gov struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param uvr_pid_gov C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uvr_pid_gov_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_uvr_pid_gov_t* uvr_pid_gov)
{
    return mavlink_msg_uvr_pid_gov_pack_chan(system_id, component_id, chan, msg, uvr_pid_gov->target, uvr_pid_gov->actual, uvr_pid_gov->error, uvr_pid_gov->P, uvr_pid_gov->I, uvr_pid_gov->D, uvr_pid_gov->FF, uvr_pid_gov->out, uvr_pid_gov->raw_error, uvr_pid_gov->governor_active);
}

/**
 * @brief Send a uvr_pid_gov message
 * @param chan MAVLink channel to send the message
 *
 * @param target  Governor Pid Target
 * @param actual  Governor Pid Actual value
 * @param error  Governor Pid Error
 * @param P  Governor Pid P Out
 * @param I  Governor Pid I Out
 * @param D  Governor Pid D Out
 * @param FF  Governor Pid Fast Forward
 * @param out  Governor Pid Output
 * @param raw_error  Governor Pid Error without filtering
 * @param governor_active  Governor Activity sign
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_uvr_pid_gov_send(mavlink_channel_t chan, float target, float actual, float error, float P, float I, float D, float FF, float out, float raw_error, int8_t governor_active)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UVR_PID_GOV_LEN];
    _mav_put_float(buf, 0, target);
    _mav_put_float(buf, 4, actual);
    _mav_put_float(buf, 8, error);
    _mav_put_float(buf, 12, P);
    _mav_put_float(buf, 16, I);
    _mav_put_float(buf, 20, D);
    _mav_put_float(buf, 24, FF);
    _mav_put_float(buf, 28, out);
    _mav_put_float(buf, 32, raw_error);
    _mav_put_int8_t(buf, 36, governor_active);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_PID_GOV, buf, MAVLINK_MSG_ID_UVR_PID_GOV_MIN_LEN, MAVLINK_MSG_ID_UVR_PID_GOV_LEN, MAVLINK_MSG_ID_UVR_PID_GOV_CRC);
#else
    mavlink_uvr_pid_gov_t packet;
    packet.target = target;
    packet.actual = actual;
    packet.error = error;
    packet.P = P;
    packet.I = I;
    packet.D = D;
    packet.FF = FF;
    packet.out = out;
    packet.raw_error = raw_error;
    packet.governor_active = governor_active;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_PID_GOV, (const char *)&packet, MAVLINK_MSG_ID_UVR_PID_GOV_MIN_LEN, MAVLINK_MSG_ID_UVR_PID_GOV_LEN, MAVLINK_MSG_ID_UVR_PID_GOV_CRC);
#endif
}

/**
 * @brief Send a uvr_pid_gov message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_uvr_pid_gov_send_struct(mavlink_channel_t chan, const mavlink_uvr_pid_gov_t* uvr_pid_gov)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_uvr_pid_gov_send(chan, uvr_pid_gov->target, uvr_pid_gov->actual, uvr_pid_gov->error, uvr_pid_gov->P, uvr_pid_gov->I, uvr_pid_gov->D, uvr_pid_gov->FF, uvr_pid_gov->out, uvr_pid_gov->raw_error, uvr_pid_gov->governor_active);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_PID_GOV, (const char *)uvr_pid_gov, MAVLINK_MSG_ID_UVR_PID_GOV_MIN_LEN, MAVLINK_MSG_ID_UVR_PID_GOV_LEN, MAVLINK_MSG_ID_UVR_PID_GOV_CRC);
#endif
}

#if MAVLINK_MSG_ID_UVR_PID_GOV_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_uvr_pid_gov_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float target, float actual, float error, float P, float I, float D, float FF, float out, float raw_error, int8_t governor_active)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, target);
    _mav_put_float(buf, 4, actual);
    _mav_put_float(buf, 8, error);
    _mav_put_float(buf, 12, P);
    _mav_put_float(buf, 16, I);
    _mav_put_float(buf, 20, D);
    _mav_put_float(buf, 24, FF);
    _mav_put_float(buf, 28, out);
    _mav_put_float(buf, 32, raw_error);
    _mav_put_int8_t(buf, 36, governor_active);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_PID_GOV, buf, MAVLINK_MSG_ID_UVR_PID_GOV_MIN_LEN, MAVLINK_MSG_ID_UVR_PID_GOV_LEN, MAVLINK_MSG_ID_UVR_PID_GOV_CRC);
#else
    mavlink_uvr_pid_gov_t *packet = (mavlink_uvr_pid_gov_t *)msgbuf;
    packet->target = target;
    packet->actual = actual;
    packet->error = error;
    packet->P = P;
    packet->I = I;
    packet->D = D;
    packet->FF = FF;
    packet->out = out;
    packet->raw_error = raw_error;
    packet->governor_active = governor_active;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_PID_GOV, (const char *)packet, MAVLINK_MSG_ID_UVR_PID_GOV_MIN_LEN, MAVLINK_MSG_ID_UVR_PID_GOV_LEN, MAVLINK_MSG_ID_UVR_PID_GOV_CRC);
#endif
}
#endif

#endif

// MESSAGE UVR_PID_GOV UNPACKING


/**
 * @brief Get field target from uvr_pid_gov message
 *
 * @return  Governor Pid Target
 */
static inline float mavlink_msg_uvr_pid_gov_get_target(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field actual from uvr_pid_gov message
 *
 * @return  Governor Pid Actual value
 */
static inline float mavlink_msg_uvr_pid_gov_get_actual(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field error from uvr_pid_gov message
 *
 * @return  Governor Pid Error
 */
static inline float mavlink_msg_uvr_pid_gov_get_error(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field P from uvr_pid_gov message
 *
 * @return  Governor Pid P Out
 */
static inline float mavlink_msg_uvr_pid_gov_get_P(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field I from uvr_pid_gov message
 *
 * @return  Governor Pid I Out
 */
static inline float mavlink_msg_uvr_pid_gov_get_I(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field D from uvr_pid_gov message
 *
 * @return  Governor Pid D Out
 */
static inline float mavlink_msg_uvr_pid_gov_get_D(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field FF from uvr_pid_gov message
 *
 * @return  Governor Pid Fast Forward
 */
static inline float mavlink_msg_uvr_pid_gov_get_FF(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field out from uvr_pid_gov message
 *
 * @return  Governor Pid Output
 */
static inline float mavlink_msg_uvr_pid_gov_get_out(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field raw_error from uvr_pid_gov message
 *
 * @return  Governor Pid Error without filtering
 */
static inline float mavlink_msg_uvr_pid_gov_get_raw_error(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field governor_active from uvr_pid_gov message
 *
 * @return  Governor Activity sign
 */
static inline int8_t mavlink_msg_uvr_pid_gov_get_governor_active(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  36);
}

/**
 * @brief Decode a uvr_pid_gov message into a struct
 *
 * @param msg The message to decode
 * @param uvr_pid_gov C-struct to decode the message contents into
 */
static inline void mavlink_msg_uvr_pid_gov_decode(const mavlink_message_t* msg, mavlink_uvr_pid_gov_t* uvr_pid_gov)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    uvr_pid_gov->target = mavlink_msg_uvr_pid_gov_get_target(msg);
    uvr_pid_gov->actual = mavlink_msg_uvr_pid_gov_get_actual(msg);
    uvr_pid_gov->error = mavlink_msg_uvr_pid_gov_get_error(msg);
    uvr_pid_gov->P = mavlink_msg_uvr_pid_gov_get_P(msg);
    uvr_pid_gov->I = mavlink_msg_uvr_pid_gov_get_I(msg);
    uvr_pid_gov->D = mavlink_msg_uvr_pid_gov_get_D(msg);
    uvr_pid_gov->FF = mavlink_msg_uvr_pid_gov_get_FF(msg);
    uvr_pid_gov->out = mavlink_msg_uvr_pid_gov_get_out(msg);
    uvr_pid_gov->raw_error = mavlink_msg_uvr_pid_gov_get_raw_error(msg);
    uvr_pid_gov->governor_active = mavlink_msg_uvr_pid_gov_get_governor_active(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_UVR_PID_GOV_LEN? msg->len : MAVLINK_MSG_ID_UVR_PID_GOV_LEN;
        memset(uvr_pid_gov, 0, MAVLINK_MSG_ID_UVR_PID_GOV_LEN);
    memcpy(uvr_pid_gov, _MAV_PAYLOAD(msg), len);
#endif
}
