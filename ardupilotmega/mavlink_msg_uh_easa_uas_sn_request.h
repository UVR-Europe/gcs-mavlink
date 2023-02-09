#pragma once
// MESSAGE UH_EASA_UAS_SN_REQUEST PACKING

#define MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST 16003


typedef struct __mavlink_uh_easa_uas_sn_request_t {
 uint32_t request_id; /*<  Request ID*/
 uint8_t cmd; /*<  Command Id (look enum UH_EASA_CMD UH_EASA_SN_*)*/
 char pincode[4]; /*<  Used only with serial_number during set*/
 char serial_number[20]; /*<  4 chars mfrr code, 1 char hex length code, 1-15 chars mfrr number*/
} mavlink_uh_easa_uas_sn_request_t;

#define MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST_LEN 29
#define MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST_MIN_LEN 29
#define MAVLINK_MSG_ID_16003_LEN 29
#define MAVLINK_MSG_ID_16003_MIN_LEN 29

#define MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST_CRC 85
#define MAVLINK_MSG_ID_16003_CRC 85

#define MAVLINK_MSG_UH_EASA_UAS_SN_REQUEST_FIELD_PINCODE_LEN 4
#define MAVLINK_MSG_UH_EASA_UAS_SN_REQUEST_FIELD_SERIAL_NUMBER_LEN 20

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_UH_EASA_UAS_SN_REQUEST { \
    16003, \
    "UH_EASA_UAS_SN_REQUEST", \
    4, \
    {  { "request_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_uh_easa_uas_sn_request_t, request_id) }, \
         { "cmd", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_uh_easa_uas_sn_request_t, cmd) }, \
         { "pincode", NULL, MAVLINK_TYPE_CHAR, 4, 5, offsetof(mavlink_uh_easa_uas_sn_request_t, pincode) }, \
         { "serial_number", NULL, MAVLINK_TYPE_CHAR, 20, 9, offsetof(mavlink_uh_easa_uas_sn_request_t, serial_number) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_UH_EASA_UAS_SN_REQUEST { \
    "UH_EASA_UAS_SN_REQUEST", \
    4, \
    {  { "request_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_uh_easa_uas_sn_request_t, request_id) }, \
         { "cmd", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_uh_easa_uas_sn_request_t, cmd) }, \
         { "pincode", NULL, MAVLINK_TYPE_CHAR, 4, 5, offsetof(mavlink_uh_easa_uas_sn_request_t, pincode) }, \
         { "serial_number", NULL, MAVLINK_TYPE_CHAR, 20, 9, offsetof(mavlink_uh_easa_uas_sn_request_t, serial_number) }, \
         } \
}
#endif

/**
 * @brief Pack a uh_easa_uas_sn_request message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param request_id  Request ID
 * @param cmd  Command Id (look enum UH_EASA_CMD UH_EASA_SN_*)
 * @param pincode  Used only with serial_number during set
 * @param serial_number  4 chars mfrr code, 1 char hex length code, 1-15 chars mfrr number
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uh_easa_uas_sn_request_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t request_id, uint8_t cmd, const char *pincode, const char *serial_number)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST_LEN];
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_uint8_t(buf, 4, cmd);
    _mav_put_char_array(buf, 5, pincode, 4);
    _mav_put_char_array(buf, 9, serial_number, 20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST_LEN);
#else
    mavlink_uh_easa_uas_sn_request_t packet;
    packet.request_id = request_id;
    packet.cmd = cmd;
    mav_array_memcpy(packet.pincode, pincode, sizeof(char)*4);
    mav_array_memcpy(packet.serial_number, serial_number, sizeof(char)*20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST_MIN_LEN, MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST_LEN, MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST_CRC);
}

/**
 * @brief Pack a uh_easa_uas_sn_request message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param request_id  Request ID
 * @param cmd  Command Id (look enum UH_EASA_CMD UH_EASA_SN_*)
 * @param pincode  Used only with serial_number during set
 * @param serial_number  4 chars mfrr code, 1 char hex length code, 1-15 chars mfrr number
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uh_easa_uas_sn_request_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t request_id,uint8_t cmd,const char *pincode,const char *serial_number)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST_LEN];
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_uint8_t(buf, 4, cmd);
    _mav_put_char_array(buf, 5, pincode, 4);
    _mav_put_char_array(buf, 9, serial_number, 20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST_LEN);
#else
    mavlink_uh_easa_uas_sn_request_t packet;
    packet.request_id = request_id;
    packet.cmd = cmd;
    mav_array_memcpy(packet.pincode, pincode, sizeof(char)*4);
    mav_array_memcpy(packet.serial_number, serial_number, sizeof(char)*20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST_MIN_LEN, MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST_LEN, MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST_CRC);
}

/**
 * @brief Encode a uh_easa_uas_sn_request struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param uh_easa_uas_sn_request C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uh_easa_uas_sn_request_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_uh_easa_uas_sn_request_t* uh_easa_uas_sn_request)
{
    return mavlink_msg_uh_easa_uas_sn_request_pack(system_id, component_id, msg, uh_easa_uas_sn_request->request_id, uh_easa_uas_sn_request->cmd, uh_easa_uas_sn_request->pincode, uh_easa_uas_sn_request->serial_number);
}

/**
 * @brief Encode a uh_easa_uas_sn_request struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param uh_easa_uas_sn_request C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uh_easa_uas_sn_request_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_uh_easa_uas_sn_request_t* uh_easa_uas_sn_request)
{
    return mavlink_msg_uh_easa_uas_sn_request_pack_chan(system_id, component_id, chan, msg, uh_easa_uas_sn_request->request_id, uh_easa_uas_sn_request->cmd, uh_easa_uas_sn_request->pincode, uh_easa_uas_sn_request->serial_number);
}

/**
 * @brief Send a uh_easa_uas_sn_request message
 * @param chan MAVLink channel to send the message
 *
 * @param request_id  Request ID
 * @param cmd  Command Id (look enum UH_EASA_CMD UH_EASA_SN_*)
 * @param pincode  Used only with serial_number during set
 * @param serial_number  4 chars mfrr code, 1 char hex length code, 1-15 chars mfrr number
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_uh_easa_uas_sn_request_send(mavlink_channel_t chan, uint32_t request_id, uint8_t cmd, const char *pincode, const char *serial_number)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST_LEN];
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_uint8_t(buf, 4, cmd);
    _mav_put_char_array(buf, 5, pincode, 4);
    _mav_put_char_array(buf, 9, serial_number, 20);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST, buf, MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST_MIN_LEN, MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST_LEN, MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST_CRC);
#else
    mavlink_uh_easa_uas_sn_request_t packet;
    packet.request_id = request_id;
    packet.cmd = cmd;
    mav_array_memcpy(packet.pincode, pincode, sizeof(char)*4);
    mav_array_memcpy(packet.serial_number, serial_number, sizeof(char)*20);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST, (const char *)&packet, MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST_MIN_LEN, MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST_LEN, MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST_CRC);
#endif
}

/**
 * @brief Send a uh_easa_uas_sn_request message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_uh_easa_uas_sn_request_send_struct(mavlink_channel_t chan, const mavlink_uh_easa_uas_sn_request_t* uh_easa_uas_sn_request)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_uh_easa_uas_sn_request_send(chan, uh_easa_uas_sn_request->request_id, uh_easa_uas_sn_request->cmd, uh_easa_uas_sn_request->pincode, uh_easa_uas_sn_request->serial_number);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST, (const char *)uh_easa_uas_sn_request, MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST_MIN_LEN, MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST_LEN, MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST_CRC);
#endif
}

#if MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_uh_easa_uas_sn_request_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t request_id, uint8_t cmd, const char *pincode, const char *serial_number)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_uint8_t(buf, 4, cmd);
    _mav_put_char_array(buf, 5, pincode, 4);
    _mav_put_char_array(buf, 9, serial_number, 20);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST, buf, MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST_MIN_LEN, MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST_LEN, MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST_CRC);
#else
    mavlink_uh_easa_uas_sn_request_t *packet = (mavlink_uh_easa_uas_sn_request_t *)msgbuf;
    packet->request_id = request_id;
    packet->cmd = cmd;
    mav_array_memcpy(packet->pincode, pincode, sizeof(char)*4);
    mav_array_memcpy(packet->serial_number, serial_number, sizeof(char)*20);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST, (const char *)packet, MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST_MIN_LEN, MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST_LEN, MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST_CRC);
#endif
}
#endif

#endif

// MESSAGE UH_EASA_UAS_SN_REQUEST UNPACKING


/**
 * @brief Get field request_id from uh_easa_uas_sn_request message
 *
 * @return  Request ID
 */
static inline uint32_t mavlink_msg_uh_easa_uas_sn_request_get_request_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field cmd from uh_easa_uas_sn_request message
 *
 * @return  Command Id (look enum UH_EASA_CMD UH_EASA_SN_*)
 */
static inline uint8_t mavlink_msg_uh_easa_uas_sn_request_get_cmd(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field pincode from uh_easa_uas_sn_request message
 *
 * @return  Used only with serial_number during set
 */
static inline uint16_t mavlink_msg_uh_easa_uas_sn_request_get_pincode(const mavlink_message_t* msg, char *pincode)
{
    return _MAV_RETURN_char_array(msg, pincode, 4,  5);
}

/**
 * @brief Get field serial_number from uh_easa_uas_sn_request message
 *
 * @return  4 chars mfrr code, 1 char hex length code, 1-15 chars mfrr number
 */
static inline uint16_t mavlink_msg_uh_easa_uas_sn_request_get_serial_number(const mavlink_message_t* msg, char *serial_number)
{
    return _MAV_RETURN_char_array(msg, serial_number, 20,  9);
}

/**
 * @brief Decode a uh_easa_uas_sn_request message into a struct
 *
 * @param msg The message to decode
 * @param uh_easa_uas_sn_request C-struct to decode the message contents into
 */
static inline void mavlink_msg_uh_easa_uas_sn_request_decode(const mavlink_message_t* msg, mavlink_uh_easa_uas_sn_request_t* uh_easa_uas_sn_request)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    uh_easa_uas_sn_request->request_id = mavlink_msg_uh_easa_uas_sn_request_get_request_id(msg);
    uh_easa_uas_sn_request->cmd = mavlink_msg_uh_easa_uas_sn_request_get_cmd(msg);
    mavlink_msg_uh_easa_uas_sn_request_get_pincode(msg, uh_easa_uas_sn_request->pincode);
    mavlink_msg_uh_easa_uas_sn_request_get_serial_number(msg, uh_easa_uas_sn_request->serial_number);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST_LEN? msg->len : MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST_LEN;
        memset(uh_easa_uas_sn_request, 0, MAVLINK_MSG_ID_UH_EASA_UAS_SN_REQUEST_LEN);
    memcpy(uh_easa_uas_sn_request, _MAV_PAYLOAD(msg), len);
#endif
}
