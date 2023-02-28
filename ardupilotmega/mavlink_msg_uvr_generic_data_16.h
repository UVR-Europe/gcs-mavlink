#pragma once
// MESSAGE UVR_GENERIC_DATA_16 PACKING

#define MAVLINK_MSG_ID_UVR_GENERIC_DATA_16 16005


typedef struct __mavlink_uvr_generic_data_16_t {
 int16_t data1; /*<  data 1*/
 int16_t data2; /*<  data 2*/
 int16_t data3; /*<  data 3*/
 int16_t data4; /*<  data 4*/
 int16_t data5; /*<  data 5*/
 int16_t data6; /*<  data 6*/
 int16_t data7; /*<  data 7*/
 int16_t data8; /*<  data 8*/
 int16_t data9; /*<  data 9*/
 int16_t data10; /*<  data 10*/
 int16_t data11; /*<  data 11*/
 int16_t data12; /*<  data 12*/
 int16_t data13; /*<  data 13*/
 int16_t data14; /*<  data 14*/
 int16_t data15; /*<  data 15*/
 int16_t data16; /*<  data 16*/
 int16_t data17; /*<  data 17*/
 int16_t data18; /*<  data 18*/
 int16_t data19; /*<  data 19*/
 int16_t data20; /*<  data 20*/
 int16_t data21; /*<  data 21*/
 int16_t data22; /*<  data 22*/
 int16_t data23; /*<  data 23*/
 int16_t data24; /*<  data 24*/
 int16_t data25; /*<  data 25*/
 int16_t data26; /*<  data 26*/
 int16_t data27; /*<  data 27*/
 int16_t data28; /*<  data 28*/
 int16_t data29; /*<  data 29*/
 int16_t data30; /*<  data 30*/
 int16_t data31; /*<  data 31*/
 int16_t data32; /*<  data 32*/
 char id[8]; /*<  id of data*/
} mavlink_uvr_generic_data_16_t;

#define MAVLINK_MSG_ID_UVR_GENERIC_DATA_16_LEN 72
#define MAVLINK_MSG_ID_UVR_GENERIC_DATA_16_MIN_LEN 72
#define MAVLINK_MSG_ID_16005_LEN 72
#define MAVLINK_MSG_ID_16005_MIN_LEN 72

#define MAVLINK_MSG_ID_UVR_GENERIC_DATA_16_CRC 45
#define MAVLINK_MSG_ID_16005_CRC 45

#define MAVLINK_MSG_UVR_GENERIC_DATA_16_FIELD_ID_LEN 8

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_UVR_GENERIC_DATA_16 { \
    16005, \
    "UVR_GENERIC_DATA_16", \
    33, \
    {  { "id", NULL, MAVLINK_TYPE_CHAR, 8, 64, offsetof(mavlink_uvr_generic_data_16_t, id) }, \
         { "data1", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_uvr_generic_data_16_t, data1) }, \
         { "data2", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_uvr_generic_data_16_t, data2) }, \
         { "data3", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_uvr_generic_data_16_t, data3) }, \
         { "data4", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_uvr_generic_data_16_t, data4) }, \
         { "data5", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_uvr_generic_data_16_t, data5) }, \
         { "data6", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_uvr_generic_data_16_t, data6) }, \
         { "data7", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_uvr_generic_data_16_t, data7) }, \
         { "data8", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_uvr_generic_data_16_t, data8) }, \
         { "data9", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_uvr_generic_data_16_t, data9) }, \
         { "data10", NULL, MAVLINK_TYPE_INT16_T, 0, 18, offsetof(mavlink_uvr_generic_data_16_t, data10) }, \
         { "data11", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_uvr_generic_data_16_t, data11) }, \
         { "data12", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_uvr_generic_data_16_t, data12) }, \
         { "data13", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_uvr_generic_data_16_t, data13) }, \
         { "data14", NULL, MAVLINK_TYPE_INT16_T, 0, 26, offsetof(mavlink_uvr_generic_data_16_t, data14) }, \
         { "data15", NULL, MAVLINK_TYPE_INT16_T, 0, 28, offsetof(mavlink_uvr_generic_data_16_t, data15) }, \
         { "data16", NULL, MAVLINK_TYPE_INT16_T, 0, 30, offsetof(mavlink_uvr_generic_data_16_t, data16) }, \
         { "data17", NULL, MAVLINK_TYPE_INT16_T, 0, 32, offsetof(mavlink_uvr_generic_data_16_t, data17) }, \
         { "data18", NULL, MAVLINK_TYPE_INT16_T, 0, 34, offsetof(mavlink_uvr_generic_data_16_t, data18) }, \
         { "data19", NULL, MAVLINK_TYPE_INT16_T, 0, 36, offsetof(mavlink_uvr_generic_data_16_t, data19) }, \
         { "data20", NULL, MAVLINK_TYPE_INT16_T, 0, 38, offsetof(mavlink_uvr_generic_data_16_t, data20) }, \
         { "data21", NULL, MAVLINK_TYPE_INT16_T, 0, 40, offsetof(mavlink_uvr_generic_data_16_t, data21) }, \
         { "data22", NULL, MAVLINK_TYPE_INT16_T, 0, 42, offsetof(mavlink_uvr_generic_data_16_t, data22) }, \
         { "data23", NULL, MAVLINK_TYPE_INT16_T, 0, 44, offsetof(mavlink_uvr_generic_data_16_t, data23) }, \
         { "data24", NULL, MAVLINK_TYPE_INT16_T, 0, 46, offsetof(mavlink_uvr_generic_data_16_t, data24) }, \
         { "data25", NULL, MAVLINK_TYPE_INT16_T, 0, 48, offsetof(mavlink_uvr_generic_data_16_t, data25) }, \
         { "data26", NULL, MAVLINK_TYPE_INT16_T, 0, 50, offsetof(mavlink_uvr_generic_data_16_t, data26) }, \
         { "data27", NULL, MAVLINK_TYPE_INT16_T, 0, 52, offsetof(mavlink_uvr_generic_data_16_t, data27) }, \
         { "data28", NULL, MAVLINK_TYPE_INT16_T, 0, 54, offsetof(mavlink_uvr_generic_data_16_t, data28) }, \
         { "data29", NULL, MAVLINK_TYPE_INT16_T, 0, 56, offsetof(mavlink_uvr_generic_data_16_t, data29) }, \
         { "data30", NULL, MAVLINK_TYPE_INT16_T, 0, 58, offsetof(mavlink_uvr_generic_data_16_t, data30) }, \
         { "data31", NULL, MAVLINK_TYPE_INT16_T, 0, 60, offsetof(mavlink_uvr_generic_data_16_t, data31) }, \
         { "data32", NULL, MAVLINK_TYPE_INT16_T, 0, 62, offsetof(mavlink_uvr_generic_data_16_t, data32) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_UVR_GENERIC_DATA_16 { \
    "UVR_GENERIC_DATA_16", \
    33, \
    {  { "id", NULL, MAVLINK_TYPE_CHAR, 8, 64, offsetof(mavlink_uvr_generic_data_16_t, id) }, \
         { "data1", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_uvr_generic_data_16_t, data1) }, \
         { "data2", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_uvr_generic_data_16_t, data2) }, \
         { "data3", NULL, MAVLINK_TYPE_INT16_T, 0, 4, offsetof(mavlink_uvr_generic_data_16_t, data3) }, \
         { "data4", NULL, MAVLINK_TYPE_INT16_T, 0, 6, offsetof(mavlink_uvr_generic_data_16_t, data4) }, \
         { "data5", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_uvr_generic_data_16_t, data5) }, \
         { "data6", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_uvr_generic_data_16_t, data6) }, \
         { "data7", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_uvr_generic_data_16_t, data7) }, \
         { "data8", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_uvr_generic_data_16_t, data8) }, \
         { "data9", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_uvr_generic_data_16_t, data9) }, \
         { "data10", NULL, MAVLINK_TYPE_INT16_T, 0, 18, offsetof(mavlink_uvr_generic_data_16_t, data10) }, \
         { "data11", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_uvr_generic_data_16_t, data11) }, \
         { "data12", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_uvr_generic_data_16_t, data12) }, \
         { "data13", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_uvr_generic_data_16_t, data13) }, \
         { "data14", NULL, MAVLINK_TYPE_INT16_T, 0, 26, offsetof(mavlink_uvr_generic_data_16_t, data14) }, \
         { "data15", NULL, MAVLINK_TYPE_INT16_T, 0, 28, offsetof(mavlink_uvr_generic_data_16_t, data15) }, \
         { "data16", NULL, MAVLINK_TYPE_INT16_T, 0, 30, offsetof(mavlink_uvr_generic_data_16_t, data16) }, \
         { "data17", NULL, MAVLINK_TYPE_INT16_T, 0, 32, offsetof(mavlink_uvr_generic_data_16_t, data17) }, \
         { "data18", NULL, MAVLINK_TYPE_INT16_T, 0, 34, offsetof(mavlink_uvr_generic_data_16_t, data18) }, \
         { "data19", NULL, MAVLINK_TYPE_INT16_T, 0, 36, offsetof(mavlink_uvr_generic_data_16_t, data19) }, \
         { "data20", NULL, MAVLINK_TYPE_INT16_T, 0, 38, offsetof(mavlink_uvr_generic_data_16_t, data20) }, \
         { "data21", NULL, MAVLINK_TYPE_INT16_T, 0, 40, offsetof(mavlink_uvr_generic_data_16_t, data21) }, \
         { "data22", NULL, MAVLINK_TYPE_INT16_T, 0, 42, offsetof(mavlink_uvr_generic_data_16_t, data22) }, \
         { "data23", NULL, MAVLINK_TYPE_INT16_T, 0, 44, offsetof(mavlink_uvr_generic_data_16_t, data23) }, \
         { "data24", NULL, MAVLINK_TYPE_INT16_T, 0, 46, offsetof(mavlink_uvr_generic_data_16_t, data24) }, \
         { "data25", NULL, MAVLINK_TYPE_INT16_T, 0, 48, offsetof(mavlink_uvr_generic_data_16_t, data25) }, \
         { "data26", NULL, MAVLINK_TYPE_INT16_T, 0, 50, offsetof(mavlink_uvr_generic_data_16_t, data26) }, \
         { "data27", NULL, MAVLINK_TYPE_INT16_T, 0, 52, offsetof(mavlink_uvr_generic_data_16_t, data27) }, \
         { "data28", NULL, MAVLINK_TYPE_INT16_T, 0, 54, offsetof(mavlink_uvr_generic_data_16_t, data28) }, \
         { "data29", NULL, MAVLINK_TYPE_INT16_T, 0, 56, offsetof(mavlink_uvr_generic_data_16_t, data29) }, \
         { "data30", NULL, MAVLINK_TYPE_INT16_T, 0, 58, offsetof(mavlink_uvr_generic_data_16_t, data30) }, \
         { "data31", NULL, MAVLINK_TYPE_INT16_T, 0, 60, offsetof(mavlink_uvr_generic_data_16_t, data31) }, \
         { "data32", NULL, MAVLINK_TYPE_INT16_T, 0, 62, offsetof(mavlink_uvr_generic_data_16_t, data32) }, \
         } \
}
#endif

/**
 * @brief Pack a uvr_generic_data_16 message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param id  id of data
 * @param data1  data 1
 * @param data2  data 2
 * @param data3  data 3
 * @param data4  data 4
 * @param data5  data 5
 * @param data6  data 6
 * @param data7  data 7
 * @param data8  data 8
 * @param data9  data 9
 * @param data10  data 10
 * @param data11  data 11
 * @param data12  data 12
 * @param data13  data 13
 * @param data14  data 14
 * @param data15  data 15
 * @param data16  data 16
 * @param data17  data 17
 * @param data18  data 18
 * @param data19  data 19
 * @param data20  data 20
 * @param data21  data 21
 * @param data22  data 22
 * @param data23  data 23
 * @param data24  data 24
 * @param data25  data 25
 * @param data26  data 26
 * @param data27  data 27
 * @param data28  data 28
 * @param data29  data 29
 * @param data30  data 30
 * @param data31  data 31
 * @param data32  data 32
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uvr_generic_data_16_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const char *id, int16_t data1, int16_t data2, int16_t data3, int16_t data4, int16_t data5, int16_t data6, int16_t data7, int16_t data8, int16_t data9, int16_t data10, int16_t data11, int16_t data12, int16_t data13, int16_t data14, int16_t data15, int16_t data16, int16_t data17, int16_t data18, int16_t data19, int16_t data20, int16_t data21, int16_t data22, int16_t data23, int16_t data24, int16_t data25, int16_t data26, int16_t data27, int16_t data28, int16_t data29, int16_t data30, int16_t data31, int16_t data32)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UVR_GENERIC_DATA_16_LEN];
    _mav_put_int16_t(buf, 0, data1);
    _mav_put_int16_t(buf, 2, data2);
    _mav_put_int16_t(buf, 4, data3);
    _mav_put_int16_t(buf, 6, data4);
    _mav_put_int16_t(buf, 8, data5);
    _mav_put_int16_t(buf, 10, data6);
    _mav_put_int16_t(buf, 12, data7);
    _mav_put_int16_t(buf, 14, data8);
    _mav_put_int16_t(buf, 16, data9);
    _mav_put_int16_t(buf, 18, data10);
    _mav_put_int16_t(buf, 20, data11);
    _mav_put_int16_t(buf, 22, data12);
    _mav_put_int16_t(buf, 24, data13);
    _mav_put_int16_t(buf, 26, data14);
    _mav_put_int16_t(buf, 28, data15);
    _mav_put_int16_t(buf, 30, data16);
    _mav_put_int16_t(buf, 32, data17);
    _mav_put_int16_t(buf, 34, data18);
    _mav_put_int16_t(buf, 36, data19);
    _mav_put_int16_t(buf, 38, data20);
    _mav_put_int16_t(buf, 40, data21);
    _mav_put_int16_t(buf, 42, data22);
    _mav_put_int16_t(buf, 44, data23);
    _mav_put_int16_t(buf, 46, data24);
    _mav_put_int16_t(buf, 48, data25);
    _mav_put_int16_t(buf, 50, data26);
    _mav_put_int16_t(buf, 52, data27);
    _mav_put_int16_t(buf, 54, data28);
    _mav_put_int16_t(buf, 56, data29);
    _mav_put_int16_t(buf, 58, data30);
    _mav_put_int16_t(buf, 60, data31);
    _mav_put_int16_t(buf, 62, data32);
    _mav_put_char_array(buf, 64, id, 8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UVR_GENERIC_DATA_16_LEN);
#else
    mavlink_uvr_generic_data_16_t packet;
    packet.data1 = data1;
    packet.data2 = data2;
    packet.data3 = data3;
    packet.data4 = data4;
    packet.data5 = data5;
    packet.data6 = data6;
    packet.data7 = data7;
    packet.data8 = data8;
    packet.data9 = data9;
    packet.data10 = data10;
    packet.data11 = data11;
    packet.data12 = data12;
    packet.data13 = data13;
    packet.data14 = data14;
    packet.data15 = data15;
    packet.data16 = data16;
    packet.data17 = data17;
    packet.data18 = data18;
    packet.data19 = data19;
    packet.data20 = data20;
    packet.data21 = data21;
    packet.data22 = data22;
    packet.data23 = data23;
    packet.data24 = data24;
    packet.data25 = data25;
    packet.data26 = data26;
    packet.data27 = data27;
    packet.data28 = data28;
    packet.data29 = data29;
    packet.data30 = data30;
    packet.data31 = data31;
    packet.data32 = data32;
    mav_array_memcpy(packet.id, id, sizeof(char)*8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UVR_GENERIC_DATA_16_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UVR_GENERIC_DATA_16;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_UVR_GENERIC_DATA_16_MIN_LEN, MAVLINK_MSG_ID_UVR_GENERIC_DATA_16_LEN, MAVLINK_MSG_ID_UVR_GENERIC_DATA_16_CRC);
}

/**
 * @brief Pack a uvr_generic_data_16 message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param id  id of data
 * @param data1  data 1
 * @param data2  data 2
 * @param data3  data 3
 * @param data4  data 4
 * @param data5  data 5
 * @param data6  data 6
 * @param data7  data 7
 * @param data8  data 8
 * @param data9  data 9
 * @param data10  data 10
 * @param data11  data 11
 * @param data12  data 12
 * @param data13  data 13
 * @param data14  data 14
 * @param data15  data 15
 * @param data16  data 16
 * @param data17  data 17
 * @param data18  data 18
 * @param data19  data 19
 * @param data20  data 20
 * @param data21  data 21
 * @param data22  data 22
 * @param data23  data 23
 * @param data24  data 24
 * @param data25  data 25
 * @param data26  data 26
 * @param data27  data 27
 * @param data28  data 28
 * @param data29  data 29
 * @param data30  data 30
 * @param data31  data 31
 * @param data32  data 32
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_uvr_generic_data_16_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const char *id,int16_t data1,int16_t data2,int16_t data3,int16_t data4,int16_t data5,int16_t data6,int16_t data7,int16_t data8,int16_t data9,int16_t data10,int16_t data11,int16_t data12,int16_t data13,int16_t data14,int16_t data15,int16_t data16,int16_t data17,int16_t data18,int16_t data19,int16_t data20,int16_t data21,int16_t data22,int16_t data23,int16_t data24,int16_t data25,int16_t data26,int16_t data27,int16_t data28,int16_t data29,int16_t data30,int16_t data31,int16_t data32)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UVR_GENERIC_DATA_16_LEN];
    _mav_put_int16_t(buf, 0, data1);
    _mav_put_int16_t(buf, 2, data2);
    _mav_put_int16_t(buf, 4, data3);
    _mav_put_int16_t(buf, 6, data4);
    _mav_put_int16_t(buf, 8, data5);
    _mav_put_int16_t(buf, 10, data6);
    _mav_put_int16_t(buf, 12, data7);
    _mav_put_int16_t(buf, 14, data8);
    _mav_put_int16_t(buf, 16, data9);
    _mav_put_int16_t(buf, 18, data10);
    _mav_put_int16_t(buf, 20, data11);
    _mav_put_int16_t(buf, 22, data12);
    _mav_put_int16_t(buf, 24, data13);
    _mav_put_int16_t(buf, 26, data14);
    _mav_put_int16_t(buf, 28, data15);
    _mav_put_int16_t(buf, 30, data16);
    _mav_put_int16_t(buf, 32, data17);
    _mav_put_int16_t(buf, 34, data18);
    _mav_put_int16_t(buf, 36, data19);
    _mav_put_int16_t(buf, 38, data20);
    _mav_put_int16_t(buf, 40, data21);
    _mav_put_int16_t(buf, 42, data22);
    _mav_put_int16_t(buf, 44, data23);
    _mav_put_int16_t(buf, 46, data24);
    _mav_put_int16_t(buf, 48, data25);
    _mav_put_int16_t(buf, 50, data26);
    _mav_put_int16_t(buf, 52, data27);
    _mav_put_int16_t(buf, 54, data28);
    _mav_put_int16_t(buf, 56, data29);
    _mav_put_int16_t(buf, 58, data30);
    _mav_put_int16_t(buf, 60, data31);
    _mav_put_int16_t(buf, 62, data32);
    _mav_put_char_array(buf, 64, id, 8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UVR_GENERIC_DATA_16_LEN);
#else
    mavlink_uvr_generic_data_16_t packet;
    packet.data1 = data1;
    packet.data2 = data2;
    packet.data3 = data3;
    packet.data4 = data4;
    packet.data5 = data5;
    packet.data6 = data6;
    packet.data7 = data7;
    packet.data8 = data8;
    packet.data9 = data9;
    packet.data10 = data10;
    packet.data11 = data11;
    packet.data12 = data12;
    packet.data13 = data13;
    packet.data14 = data14;
    packet.data15 = data15;
    packet.data16 = data16;
    packet.data17 = data17;
    packet.data18 = data18;
    packet.data19 = data19;
    packet.data20 = data20;
    packet.data21 = data21;
    packet.data22 = data22;
    packet.data23 = data23;
    packet.data24 = data24;
    packet.data25 = data25;
    packet.data26 = data26;
    packet.data27 = data27;
    packet.data28 = data28;
    packet.data29 = data29;
    packet.data30 = data30;
    packet.data31 = data31;
    packet.data32 = data32;
    mav_array_memcpy(packet.id, id, sizeof(char)*8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UVR_GENERIC_DATA_16_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UVR_GENERIC_DATA_16;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_UVR_GENERIC_DATA_16_MIN_LEN, MAVLINK_MSG_ID_UVR_GENERIC_DATA_16_LEN, MAVLINK_MSG_ID_UVR_GENERIC_DATA_16_CRC);
}

/**
 * @brief Encode a uvr_generic_data_16 struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param uvr_generic_data_16 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uvr_generic_data_16_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_uvr_generic_data_16_t* uvr_generic_data_16)
{
    return mavlink_msg_uvr_generic_data_16_pack(system_id, component_id, msg, uvr_generic_data_16->id, uvr_generic_data_16->data1, uvr_generic_data_16->data2, uvr_generic_data_16->data3, uvr_generic_data_16->data4, uvr_generic_data_16->data5, uvr_generic_data_16->data6, uvr_generic_data_16->data7, uvr_generic_data_16->data8, uvr_generic_data_16->data9, uvr_generic_data_16->data10, uvr_generic_data_16->data11, uvr_generic_data_16->data12, uvr_generic_data_16->data13, uvr_generic_data_16->data14, uvr_generic_data_16->data15, uvr_generic_data_16->data16, uvr_generic_data_16->data17, uvr_generic_data_16->data18, uvr_generic_data_16->data19, uvr_generic_data_16->data20, uvr_generic_data_16->data21, uvr_generic_data_16->data22, uvr_generic_data_16->data23, uvr_generic_data_16->data24, uvr_generic_data_16->data25, uvr_generic_data_16->data26, uvr_generic_data_16->data27, uvr_generic_data_16->data28, uvr_generic_data_16->data29, uvr_generic_data_16->data30, uvr_generic_data_16->data31, uvr_generic_data_16->data32);
}

/**
 * @brief Encode a uvr_generic_data_16 struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param uvr_generic_data_16 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_uvr_generic_data_16_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_uvr_generic_data_16_t* uvr_generic_data_16)
{
    return mavlink_msg_uvr_generic_data_16_pack_chan(system_id, component_id, chan, msg, uvr_generic_data_16->id, uvr_generic_data_16->data1, uvr_generic_data_16->data2, uvr_generic_data_16->data3, uvr_generic_data_16->data4, uvr_generic_data_16->data5, uvr_generic_data_16->data6, uvr_generic_data_16->data7, uvr_generic_data_16->data8, uvr_generic_data_16->data9, uvr_generic_data_16->data10, uvr_generic_data_16->data11, uvr_generic_data_16->data12, uvr_generic_data_16->data13, uvr_generic_data_16->data14, uvr_generic_data_16->data15, uvr_generic_data_16->data16, uvr_generic_data_16->data17, uvr_generic_data_16->data18, uvr_generic_data_16->data19, uvr_generic_data_16->data20, uvr_generic_data_16->data21, uvr_generic_data_16->data22, uvr_generic_data_16->data23, uvr_generic_data_16->data24, uvr_generic_data_16->data25, uvr_generic_data_16->data26, uvr_generic_data_16->data27, uvr_generic_data_16->data28, uvr_generic_data_16->data29, uvr_generic_data_16->data30, uvr_generic_data_16->data31, uvr_generic_data_16->data32);
}

/**
 * @brief Send a uvr_generic_data_16 message
 * @param chan MAVLink channel to send the message
 *
 * @param id  id of data
 * @param data1  data 1
 * @param data2  data 2
 * @param data3  data 3
 * @param data4  data 4
 * @param data5  data 5
 * @param data6  data 6
 * @param data7  data 7
 * @param data8  data 8
 * @param data9  data 9
 * @param data10  data 10
 * @param data11  data 11
 * @param data12  data 12
 * @param data13  data 13
 * @param data14  data 14
 * @param data15  data 15
 * @param data16  data 16
 * @param data17  data 17
 * @param data18  data 18
 * @param data19  data 19
 * @param data20  data 20
 * @param data21  data 21
 * @param data22  data 22
 * @param data23  data 23
 * @param data24  data 24
 * @param data25  data 25
 * @param data26  data 26
 * @param data27  data 27
 * @param data28  data 28
 * @param data29  data 29
 * @param data30  data 30
 * @param data31  data 31
 * @param data32  data 32
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_uvr_generic_data_16_send(mavlink_channel_t chan, const char *id, int16_t data1, int16_t data2, int16_t data3, int16_t data4, int16_t data5, int16_t data6, int16_t data7, int16_t data8, int16_t data9, int16_t data10, int16_t data11, int16_t data12, int16_t data13, int16_t data14, int16_t data15, int16_t data16, int16_t data17, int16_t data18, int16_t data19, int16_t data20, int16_t data21, int16_t data22, int16_t data23, int16_t data24, int16_t data25, int16_t data26, int16_t data27, int16_t data28, int16_t data29, int16_t data30, int16_t data31, int16_t data32)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UVR_GENERIC_DATA_16_LEN];
    _mav_put_int16_t(buf, 0, data1);
    _mav_put_int16_t(buf, 2, data2);
    _mav_put_int16_t(buf, 4, data3);
    _mav_put_int16_t(buf, 6, data4);
    _mav_put_int16_t(buf, 8, data5);
    _mav_put_int16_t(buf, 10, data6);
    _mav_put_int16_t(buf, 12, data7);
    _mav_put_int16_t(buf, 14, data8);
    _mav_put_int16_t(buf, 16, data9);
    _mav_put_int16_t(buf, 18, data10);
    _mav_put_int16_t(buf, 20, data11);
    _mav_put_int16_t(buf, 22, data12);
    _mav_put_int16_t(buf, 24, data13);
    _mav_put_int16_t(buf, 26, data14);
    _mav_put_int16_t(buf, 28, data15);
    _mav_put_int16_t(buf, 30, data16);
    _mav_put_int16_t(buf, 32, data17);
    _mav_put_int16_t(buf, 34, data18);
    _mav_put_int16_t(buf, 36, data19);
    _mav_put_int16_t(buf, 38, data20);
    _mav_put_int16_t(buf, 40, data21);
    _mav_put_int16_t(buf, 42, data22);
    _mav_put_int16_t(buf, 44, data23);
    _mav_put_int16_t(buf, 46, data24);
    _mav_put_int16_t(buf, 48, data25);
    _mav_put_int16_t(buf, 50, data26);
    _mav_put_int16_t(buf, 52, data27);
    _mav_put_int16_t(buf, 54, data28);
    _mav_put_int16_t(buf, 56, data29);
    _mav_put_int16_t(buf, 58, data30);
    _mav_put_int16_t(buf, 60, data31);
    _mav_put_int16_t(buf, 62, data32);
    _mav_put_char_array(buf, 64, id, 8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_GENERIC_DATA_16, buf, MAVLINK_MSG_ID_UVR_GENERIC_DATA_16_MIN_LEN, MAVLINK_MSG_ID_UVR_GENERIC_DATA_16_LEN, MAVLINK_MSG_ID_UVR_GENERIC_DATA_16_CRC);
#else
    mavlink_uvr_generic_data_16_t packet;
    packet.data1 = data1;
    packet.data2 = data2;
    packet.data3 = data3;
    packet.data4 = data4;
    packet.data5 = data5;
    packet.data6 = data6;
    packet.data7 = data7;
    packet.data8 = data8;
    packet.data9 = data9;
    packet.data10 = data10;
    packet.data11 = data11;
    packet.data12 = data12;
    packet.data13 = data13;
    packet.data14 = data14;
    packet.data15 = data15;
    packet.data16 = data16;
    packet.data17 = data17;
    packet.data18 = data18;
    packet.data19 = data19;
    packet.data20 = data20;
    packet.data21 = data21;
    packet.data22 = data22;
    packet.data23 = data23;
    packet.data24 = data24;
    packet.data25 = data25;
    packet.data26 = data26;
    packet.data27 = data27;
    packet.data28 = data28;
    packet.data29 = data29;
    packet.data30 = data30;
    packet.data31 = data31;
    packet.data32 = data32;
    mav_array_memcpy(packet.id, id, sizeof(char)*8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_GENERIC_DATA_16, (const char *)&packet, MAVLINK_MSG_ID_UVR_GENERIC_DATA_16_MIN_LEN, MAVLINK_MSG_ID_UVR_GENERIC_DATA_16_LEN, MAVLINK_MSG_ID_UVR_GENERIC_DATA_16_CRC);
#endif
}

/**
 * @brief Send a uvr_generic_data_16 message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_uvr_generic_data_16_send_struct(mavlink_channel_t chan, const mavlink_uvr_generic_data_16_t* uvr_generic_data_16)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_uvr_generic_data_16_send(chan, uvr_generic_data_16->id, uvr_generic_data_16->data1, uvr_generic_data_16->data2, uvr_generic_data_16->data3, uvr_generic_data_16->data4, uvr_generic_data_16->data5, uvr_generic_data_16->data6, uvr_generic_data_16->data7, uvr_generic_data_16->data8, uvr_generic_data_16->data9, uvr_generic_data_16->data10, uvr_generic_data_16->data11, uvr_generic_data_16->data12, uvr_generic_data_16->data13, uvr_generic_data_16->data14, uvr_generic_data_16->data15, uvr_generic_data_16->data16, uvr_generic_data_16->data17, uvr_generic_data_16->data18, uvr_generic_data_16->data19, uvr_generic_data_16->data20, uvr_generic_data_16->data21, uvr_generic_data_16->data22, uvr_generic_data_16->data23, uvr_generic_data_16->data24, uvr_generic_data_16->data25, uvr_generic_data_16->data26, uvr_generic_data_16->data27, uvr_generic_data_16->data28, uvr_generic_data_16->data29, uvr_generic_data_16->data30, uvr_generic_data_16->data31, uvr_generic_data_16->data32);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_GENERIC_DATA_16, (const char *)uvr_generic_data_16, MAVLINK_MSG_ID_UVR_GENERIC_DATA_16_MIN_LEN, MAVLINK_MSG_ID_UVR_GENERIC_DATA_16_LEN, MAVLINK_MSG_ID_UVR_GENERIC_DATA_16_CRC);
#endif
}

#if MAVLINK_MSG_ID_UVR_GENERIC_DATA_16_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_uvr_generic_data_16_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const char *id, int16_t data1, int16_t data2, int16_t data3, int16_t data4, int16_t data5, int16_t data6, int16_t data7, int16_t data8, int16_t data9, int16_t data10, int16_t data11, int16_t data12, int16_t data13, int16_t data14, int16_t data15, int16_t data16, int16_t data17, int16_t data18, int16_t data19, int16_t data20, int16_t data21, int16_t data22, int16_t data23, int16_t data24, int16_t data25, int16_t data26, int16_t data27, int16_t data28, int16_t data29, int16_t data30, int16_t data31, int16_t data32)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int16_t(buf, 0, data1);
    _mav_put_int16_t(buf, 2, data2);
    _mav_put_int16_t(buf, 4, data3);
    _mav_put_int16_t(buf, 6, data4);
    _mav_put_int16_t(buf, 8, data5);
    _mav_put_int16_t(buf, 10, data6);
    _mav_put_int16_t(buf, 12, data7);
    _mav_put_int16_t(buf, 14, data8);
    _mav_put_int16_t(buf, 16, data9);
    _mav_put_int16_t(buf, 18, data10);
    _mav_put_int16_t(buf, 20, data11);
    _mav_put_int16_t(buf, 22, data12);
    _mav_put_int16_t(buf, 24, data13);
    _mav_put_int16_t(buf, 26, data14);
    _mav_put_int16_t(buf, 28, data15);
    _mav_put_int16_t(buf, 30, data16);
    _mav_put_int16_t(buf, 32, data17);
    _mav_put_int16_t(buf, 34, data18);
    _mav_put_int16_t(buf, 36, data19);
    _mav_put_int16_t(buf, 38, data20);
    _mav_put_int16_t(buf, 40, data21);
    _mav_put_int16_t(buf, 42, data22);
    _mav_put_int16_t(buf, 44, data23);
    _mav_put_int16_t(buf, 46, data24);
    _mav_put_int16_t(buf, 48, data25);
    _mav_put_int16_t(buf, 50, data26);
    _mav_put_int16_t(buf, 52, data27);
    _mav_put_int16_t(buf, 54, data28);
    _mav_put_int16_t(buf, 56, data29);
    _mav_put_int16_t(buf, 58, data30);
    _mav_put_int16_t(buf, 60, data31);
    _mav_put_int16_t(buf, 62, data32);
    _mav_put_char_array(buf, 64, id, 8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_GENERIC_DATA_16, buf, MAVLINK_MSG_ID_UVR_GENERIC_DATA_16_MIN_LEN, MAVLINK_MSG_ID_UVR_GENERIC_DATA_16_LEN, MAVLINK_MSG_ID_UVR_GENERIC_DATA_16_CRC);
#else
    mavlink_uvr_generic_data_16_t *packet = (mavlink_uvr_generic_data_16_t *)msgbuf;
    packet->data1 = data1;
    packet->data2 = data2;
    packet->data3 = data3;
    packet->data4 = data4;
    packet->data5 = data5;
    packet->data6 = data6;
    packet->data7 = data7;
    packet->data8 = data8;
    packet->data9 = data9;
    packet->data10 = data10;
    packet->data11 = data11;
    packet->data12 = data12;
    packet->data13 = data13;
    packet->data14 = data14;
    packet->data15 = data15;
    packet->data16 = data16;
    packet->data17 = data17;
    packet->data18 = data18;
    packet->data19 = data19;
    packet->data20 = data20;
    packet->data21 = data21;
    packet->data22 = data22;
    packet->data23 = data23;
    packet->data24 = data24;
    packet->data25 = data25;
    packet->data26 = data26;
    packet->data27 = data27;
    packet->data28 = data28;
    packet->data29 = data29;
    packet->data30 = data30;
    packet->data31 = data31;
    packet->data32 = data32;
    mav_array_memcpy(packet->id, id, sizeof(char)*8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UVR_GENERIC_DATA_16, (const char *)packet, MAVLINK_MSG_ID_UVR_GENERIC_DATA_16_MIN_LEN, MAVLINK_MSG_ID_UVR_GENERIC_DATA_16_LEN, MAVLINK_MSG_ID_UVR_GENERIC_DATA_16_CRC);
#endif
}
#endif

#endif

// MESSAGE UVR_GENERIC_DATA_16 UNPACKING


/**
 * @brief Get field id from uvr_generic_data_16 message
 *
 * @return  id of data
 */
static inline uint16_t mavlink_msg_uvr_generic_data_16_get_id(const mavlink_message_t* msg, char *id)
{
    return _MAV_RETURN_char_array(msg, id, 8,  64);
}

/**
 * @brief Get field data1 from uvr_generic_data_16 message
 *
 * @return  data 1
 */
static inline int16_t mavlink_msg_uvr_generic_data_16_get_data1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Get field data2 from uvr_generic_data_16 message
 *
 * @return  data 2
 */
static inline int16_t mavlink_msg_uvr_generic_data_16_get_data2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  2);
}

/**
 * @brief Get field data3 from uvr_generic_data_16 message
 *
 * @return  data 3
 */
static inline int16_t mavlink_msg_uvr_generic_data_16_get_data3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  4);
}

/**
 * @brief Get field data4 from uvr_generic_data_16 message
 *
 * @return  data 4
 */
static inline int16_t mavlink_msg_uvr_generic_data_16_get_data4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  6);
}

/**
 * @brief Get field data5 from uvr_generic_data_16 message
 *
 * @return  data 5
 */
static inline int16_t mavlink_msg_uvr_generic_data_16_get_data5(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  8);
}

/**
 * @brief Get field data6 from uvr_generic_data_16 message
 *
 * @return  data 6
 */
static inline int16_t mavlink_msg_uvr_generic_data_16_get_data6(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  10);
}

/**
 * @brief Get field data7 from uvr_generic_data_16 message
 *
 * @return  data 7
 */
static inline int16_t mavlink_msg_uvr_generic_data_16_get_data7(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  12);
}

/**
 * @brief Get field data8 from uvr_generic_data_16 message
 *
 * @return  data 8
 */
static inline int16_t mavlink_msg_uvr_generic_data_16_get_data8(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  14);
}

/**
 * @brief Get field data9 from uvr_generic_data_16 message
 *
 * @return  data 9
 */
static inline int16_t mavlink_msg_uvr_generic_data_16_get_data9(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  16);
}

/**
 * @brief Get field data10 from uvr_generic_data_16 message
 *
 * @return  data 10
 */
static inline int16_t mavlink_msg_uvr_generic_data_16_get_data10(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  18);
}

/**
 * @brief Get field data11 from uvr_generic_data_16 message
 *
 * @return  data 11
 */
static inline int16_t mavlink_msg_uvr_generic_data_16_get_data11(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  20);
}

/**
 * @brief Get field data12 from uvr_generic_data_16 message
 *
 * @return  data 12
 */
static inline int16_t mavlink_msg_uvr_generic_data_16_get_data12(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  22);
}

/**
 * @brief Get field data13 from uvr_generic_data_16 message
 *
 * @return  data 13
 */
static inline int16_t mavlink_msg_uvr_generic_data_16_get_data13(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  24);
}

/**
 * @brief Get field data14 from uvr_generic_data_16 message
 *
 * @return  data 14
 */
static inline int16_t mavlink_msg_uvr_generic_data_16_get_data14(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  26);
}

/**
 * @brief Get field data15 from uvr_generic_data_16 message
 *
 * @return  data 15
 */
static inline int16_t mavlink_msg_uvr_generic_data_16_get_data15(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  28);
}

/**
 * @brief Get field data16 from uvr_generic_data_16 message
 *
 * @return  data 16
 */
static inline int16_t mavlink_msg_uvr_generic_data_16_get_data16(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  30);
}

/**
 * @brief Get field data17 from uvr_generic_data_16 message
 *
 * @return  data 17
 */
static inline int16_t mavlink_msg_uvr_generic_data_16_get_data17(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  32);
}

/**
 * @brief Get field data18 from uvr_generic_data_16 message
 *
 * @return  data 18
 */
static inline int16_t mavlink_msg_uvr_generic_data_16_get_data18(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  34);
}

/**
 * @brief Get field data19 from uvr_generic_data_16 message
 *
 * @return  data 19
 */
static inline int16_t mavlink_msg_uvr_generic_data_16_get_data19(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  36);
}

/**
 * @brief Get field data20 from uvr_generic_data_16 message
 *
 * @return  data 20
 */
static inline int16_t mavlink_msg_uvr_generic_data_16_get_data20(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  38);
}

/**
 * @brief Get field data21 from uvr_generic_data_16 message
 *
 * @return  data 21
 */
static inline int16_t mavlink_msg_uvr_generic_data_16_get_data21(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  40);
}

/**
 * @brief Get field data22 from uvr_generic_data_16 message
 *
 * @return  data 22
 */
static inline int16_t mavlink_msg_uvr_generic_data_16_get_data22(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  42);
}

/**
 * @brief Get field data23 from uvr_generic_data_16 message
 *
 * @return  data 23
 */
static inline int16_t mavlink_msg_uvr_generic_data_16_get_data23(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  44);
}

/**
 * @brief Get field data24 from uvr_generic_data_16 message
 *
 * @return  data 24
 */
static inline int16_t mavlink_msg_uvr_generic_data_16_get_data24(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  46);
}

/**
 * @brief Get field data25 from uvr_generic_data_16 message
 *
 * @return  data 25
 */
static inline int16_t mavlink_msg_uvr_generic_data_16_get_data25(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  48);
}

/**
 * @brief Get field data26 from uvr_generic_data_16 message
 *
 * @return  data 26
 */
static inline int16_t mavlink_msg_uvr_generic_data_16_get_data26(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  50);
}

/**
 * @brief Get field data27 from uvr_generic_data_16 message
 *
 * @return  data 27
 */
static inline int16_t mavlink_msg_uvr_generic_data_16_get_data27(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  52);
}

/**
 * @brief Get field data28 from uvr_generic_data_16 message
 *
 * @return  data 28
 */
static inline int16_t mavlink_msg_uvr_generic_data_16_get_data28(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  54);
}

/**
 * @brief Get field data29 from uvr_generic_data_16 message
 *
 * @return  data 29
 */
static inline int16_t mavlink_msg_uvr_generic_data_16_get_data29(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  56);
}

/**
 * @brief Get field data30 from uvr_generic_data_16 message
 *
 * @return  data 30
 */
static inline int16_t mavlink_msg_uvr_generic_data_16_get_data30(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  58);
}

/**
 * @brief Get field data31 from uvr_generic_data_16 message
 *
 * @return  data 31
 */
static inline int16_t mavlink_msg_uvr_generic_data_16_get_data31(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  60);
}

/**
 * @brief Get field data32 from uvr_generic_data_16 message
 *
 * @return  data 32
 */
static inline int16_t mavlink_msg_uvr_generic_data_16_get_data32(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  62);
}

/**
 * @brief Decode a uvr_generic_data_16 message into a struct
 *
 * @param msg The message to decode
 * @param uvr_generic_data_16 C-struct to decode the message contents into
 */
static inline void mavlink_msg_uvr_generic_data_16_decode(const mavlink_message_t* msg, mavlink_uvr_generic_data_16_t* uvr_generic_data_16)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    uvr_generic_data_16->data1 = mavlink_msg_uvr_generic_data_16_get_data1(msg);
    uvr_generic_data_16->data2 = mavlink_msg_uvr_generic_data_16_get_data2(msg);
    uvr_generic_data_16->data3 = mavlink_msg_uvr_generic_data_16_get_data3(msg);
    uvr_generic_data_16->data4 = mavlink_msg_uvr_generic_data_16_get_data4(msg);
    uvr_generic_data_16->data5 = mavlink_msg_uvr_generic_data_16_get_data5(msg);
    uvr_generic_data_16->data6 = mavlink_msg_uvr_generic_data_16_get_data6(msg);
    uvr_generic_data_16->data7 = mavlink_msg_uvr_generic_data_16_get_data7(msg);
    uvr_generic_data_16->data8 = mavlink_msg_uvr_generic_data_16_get_data8(msg);
    uvr_generic_data_16->data9 = mavlink_msg_uvr_generic_data_16_get_data9(msg);
    uvr_generic_data_16->data10 = mavlink_msg_uvr_generic_data_16_get_data10(msg);
    uvr_generic_data_16->data11 = mavlink_msg_uvr_generic_data_16_get_data11(msg);
    uvr_generic_data_16->data12 = mavlink_msg_uvr_generic_data_16_get_data12(msg);
    uvr_generic_data_16->data13 = mavlink_msg_uvr_generic_data_16_get_data13(msg);
    uvr_generic_data_16->data14 = mavlink_msg_uvr_generic_data_16_get_data14(msg);
    uvr_generic_data_16->data15 = mavlink_msg_uvr_generic_data_16_get_data15(msg);
    uvr_generic_data_16->data16 = mavlink_msg_uvr_generic_data_16_get_data16(msg);
    uvr_generic_data_16->data17 = mavlink_msg_uvr_generic_data_16_get_data17(msg);
    uvr_generic_data_16->data18 = mavlink_msg_uvr_generic_data_16_get_data18(msg);
    uvr_generic_data_16->data19 = mavlink_msg_uvr_generic_data_16_get_data19(msg);
    uvr_generic_data_16->data20 = mavlink_msg_uvr_generic_data_16_get_data20(msg);
    uvr_generic_data_16->data21 = mavlink_msg_uvr_generic_data_16_get_data21(msg);
    uvr_generic_data_16->data22 = mavlink_msg_uvr_generic_data_16_get_data22(msg);
    uvr_generic_data_16->data23 = mavlink_msg_uvr_generic_data_16_get_data23(msg);
    uvr_generic_data_16->data24 = mavlink_msg_uvr_generic_data_16_get_data24(msg);
    uvr_generic_data_16->data25 = mavlink_msg_uvr_generic_data_16_get_data25(msg);
    uvr_generic_data_16->data26 = mavlink_msg_uvr_generic_data_16_get_data26(msg);
    uvr_generic_data_16->data27 = mavlink_msg_uvr_generic_data_16_get_data27(msg);
    uvr_generic_data_16->data28 = mavlink_msg_uvr_generic_data_16_get_data28(msg);
    uvr_generic_data_16->data29 = mavlink_msg_uvr_generic_data_16_get_data29(msg);
    uvr_generic_data_16->data30 = mavlink_msg_uvr_generic_data_16_get_data30(msg);
    uvr_generic_data_16->data31 = mavlink_msg_uvr_generic_data_16_get_data31(msg);
    uvr_generic_data_16->data32 = mavlink_msg_uvr_generic_data_16_get_data32(msg);
    mavlink_msg_uvr_generic_data_16_get_id(msg, uvr_generic_data_16->id);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_UVR_GENERIC_DATA_16_LEN? msg->len : MAVLINK_MSG_ID_UVR_GENERIC_DATA_16_LEN;
        memset(uvr_generic_data_16, 0, MAVLINK_MSG_ID_UVR_GENERIC_DATA_16_LEN);
    memcpy(uvr_generic_data_16, _MAV_PAYLOAD(msg), len);
#endif
}
