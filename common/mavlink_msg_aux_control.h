// MESSAGE AUX_CONTROL PACKING

#define MAVLINK_MSG_ID_AUX_CONTROL 228

MAVPACKED(
typedef struct __mavlink_aux_control_t {
 float content; /*<  -1 ~ 1*/
 uint8_t auxnum; /*< the sequence of aux 1 ~ 4 */
}) mavlink_aux_control_t;

#define MAVLINK_MSG_ID_AUX_CONTROL_LEN 5
#define MAVLINK_MSG_ID_AUX_CONTROL_MIN_LEN 5
#define MAVLINK_MSG_ID_228_LEN 5
#define MAVLINK_MSG_ID_228_MIN_LEN 5

#define MAVLINK_MSG_ID_AUX_CONTROL_CRC 84
#define MAVLINK_MSG_ID_228_CRC 84



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AUX_CONTROL { \
	228, \
	"AUX_CONTROL", \
	2, \
	{  { "content", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_aux_control_t, content) }, \
         { "auxnum", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_aux_control_t, auxnum) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AUX_CONTROL { \
	"AUX_CONTROL", \
	2, \
	{  { "content", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_aux_control_t, content) }, \
         { "auxnum", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_aux_control_t, auxnum) }, \
         } \
}
#endif

/**
 * @brief Pack a aux_control message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param content  -1 ~ 1
 * @param auxnum the sequence of aux 1 ~ 4 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aux_control_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       float content, uint8_t auxnum)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_AUX_CONTROL_LEN];
	_mav_put_float(buf, 0, content);
	_mav_put_uint8_t(buf, 4, auxnum);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AUX_CONTROL_LEN);
#else
	mavlink_aux_control_t packet;
	packet.content = content;
	packet.auxnum = auxnum;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AUX_CONTROL_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_AUX_CONTROL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AUX_CONTROL_MIN_LEN, MAVLINK_MSG_ID_AUX_CONTROL_LEN, MAVLINK_MSG_ID_AUX_CONTROL_CRC);
}

/**
 * @brief Pack a aux_control message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param content  -1 ~ 1
 * @param auxnum the sequence of aux 1 ~ 4 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aux_control_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           float content,uint8_t auxnum)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_AUX_CONTROL_LEN];
	_mav_put_float(buf, 0, content);
	_mav_put_uint8_t(buf, 4, auxnum);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AUX_CONTROL_LEN);
#else
	mavlink_aux_control_t packet;
	packet.content = content;
	packet.auxnum = auxnum;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AUX_CONTROL_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_AUX_CONTROL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AUX_CONTROL_MIN_LEN, MAVLINK_MSG_ID_AUX_CONTROL_LEN, MAVLINK_MSG_ID_AUX_CONTROL_CRC);
}

/**
 * @brief Encode a aux_control struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param aux_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aux_control_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_aux_control_t* aux_control)
{
	return mavlink_msg_aux_control_pack(system_id, component_id, msg, aux_control->content, aux_control->auxnum);
}

/**
 * @brief Encode a aux_control struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param aux_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aux_control_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_aux_control_t* aux_control)
{
	return mavlink_msg_aux_control_pack_chan(system_id, component_id, chan, msg, aux_control->content, aux_control->auxnum);
}

/**
 * @brief Send a aux_control message
 * @param chan MAVLink channel to send the message
 *
 * @param content  -1 ~ 1
 * @param auxnum the sequence of aux 1 ~ 4 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_aux_control_send(mavlink_channel_t chan, float content, uint8_t auxnum)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_AUX_CONTROL_LEN];
	_mav_put_float(buf, 0, content);
	_mav_put_uint8_t(buf, 4, auxnum);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUX_CONTROL, buf, MAVLINK_MSG_ID_AUX_CONTROL_MIN_LEN, MAVLINK_MSG_ID_AUX_CONTROL_LEN, MAVLINK_MSG_ID_AUX_CONTROL_CRC);
#else
	mavlink_aux_control_t packet;
	packet.content = content;
	packet.auxnum = auxnum;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUX_CONTROL, (const char *)&packet, MAVLINK_MSG_ID_AUX_CONTROL_MIN_LEN, MAVLINK_MSG_ID_AUX_CONTROL_LEN, MAVLINK_MSG_ID_AUX_CONTROL_CRC);
#endif
}

/**
 * @brief Send a aux_control message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_aux_control_send_struct(mavlink_channel_t chan, const mavlink_aux_control_t* aux_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_aux_control_send(chan, aux_control->content, aux_control->auxnum);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUX_CONTROL, (const char *)aux_control, MAVLINK_MSG_ID_AUX_CONTROL_MIN_LEN, MAVLINK_MSG_ID_AUX_CONTROL_LEN, MAVLINK_MSG_ID_AUX_CONTROL_CRC);
#endif
}

#if MAVLINK_MSG_ID_AUX_CONTROL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_aux_control_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float content, uint8_t auxnum)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, content);
	_mav_put_uint8_t(buf, 4, auxnum);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUX_CONTROL, buf, MAVLINK_MSG_ID_AUX_CONTROL_MIN_LEN, MAVLINK_MSG_ID_AUX_CONTROL_LEN, MAVLINK_MSG_ID_AUX_CONTROL_CRC);
#else
	mavlink_aux_control_t *packet = (mavlink_aux_control_t *)msgbuf;
	packet->content = content;
	packet->auxnum = auxnum;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUX_CONTROL, (const char *)packet, MAVLINK_MSG_ID_AUX_CONTROL_MIN_LEN, MAVLINK_MSG_ID_AUX_CONTROL_LEN, MAVLINK_MSG_ID_AUX_CONTROL_CRC);
#endif
}
#endif

#endif

// MESSAGE AUX_CONTROL UNPACKING


/**
 * @brief Get field content from aux_control message
 *
 * @return  -1 ~ 1
 */
static inline float mavlink_msg_aux_control_get_content(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field auxnum from aux_control message
 *
 * @return the sequence of aux 1 ~ 4 
 */
static inline uint8_t mavlink_msg_aux_control_get_auxnum(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Decode a aux_control message into a struct
 *
 * @param msg The message to decode
 * @param aux_control C-struct to decode the message contents into
 */
static inline void mavlink_msg_aux_control_decode(const mavlink_message_t* msg, mavlink_aux_control_t* aux_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	aux_control->content = mavlink_msg_aux_control_get_content(msg);
	aux_control->auxnum = mavlink_msg_aux_control_get_auxnum(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AUX_CONTROL_LEN? msg->len : MAVLINK_MSG_ID_AUX_CONTROL_LEN;
        memset(aux_control, 0, MAVLINK_MSG_ID_AUX_CONTROL_LEN);
	memcpy(aux_control, _MAV_PAYLOAD(msg), len);
#endif
}
