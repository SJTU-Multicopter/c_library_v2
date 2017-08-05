// MESSAGE JJ_CONTROL PACKING

#define MAVLINK_MSG_ID_JJ_CONTROL 229

MAVPACKED(
typedef struct __mavlink_jj_control_t {
 float pitch; /*< cam_pitch*/
 float yaw; /*< cam_yaw*/
 float zoom; /*< cam_zoom*/
 uint8_t mode; /*< ctrl mode of camera*/
 uint8_t shoot; /*< take a pic*/
 uint8_t jj; /*< control jj, 0x0f down, 0xf0 up*/
}) mavlink_jj_control_t;

#define MAVLINK_MSG_ID_JJ_CONTROL_LEN 15
#define MAVLINK_MSG_ID_JJ_CONTROL_MIN_LEN 15
#define MAVLINK_MSG_ID_229_LEN 15
#define MAVLINK_MSG_ID_229_MIN_LEN 15

#define MAVLINK_MSG_ID_JJ_CONTROL_CRC 140
#define MAVLINK_MSG_ID_229_CRC 140



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_JJ_CONTROL { \
	229, \
	"JJ_CONTROL", \
	6, \
	{  { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_jj_control_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_jj_control_t, yaw) }, \
         { "zoom", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_jj_control_t, zoom) }, \
         { "mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_jj_control_t, mode) }, \
         { "shoot", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_jj_control_t, shoot) }, \
         { "jj", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_jj_control_t, jj) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_JJ_CONTROL { \
	"JJ_CONTROL", \
	6, \
	{  { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_jj_control_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_jj_control_t, yaw) }, \
         { "zoom", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_jj_control_t, zoom) }, \
         { "mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_jj_control_t, mode) }, \
         { "shoot", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_jj_control_t, shoot) }, \
         { "jj", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_jj_control_t, jj) }, \
         } \
}
#endif

/**
 * @brief Pack a jj_control message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param mode ctrl mode of camera
 * @param shoot take a pic
 * @param jj control jj, 0x0f down, 0xf0 up
 * @param pitch cam_pitch
 * @param yaw cam_yaw
 * @param zoom cam_zoom
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_jj_control_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t mode, uint8_t shoot, uint8_t jj, float pitch, float yaw, float zoom)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_JJ_CONTROL_LEN];
	_mav_put_float(buf, 0, pitch);
	_mav_put_float(buf, 4, yaw);
	_mav_put_float(buf, 8, zoom);
	_mav_put_uint8_t(buf, 12, mode);
	_mav_put_uint8_t(buf, 13, shoot);
	_mav_put_uint8_t(buf, 14, jj);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_JJ_CONTROL_LEN);
#else
	mavlink_jj_control_t packet;
	packet.pitch = pitch;
	packet.yaw = yaw;
	packet.zoom = zoom;
	packet.mode = mode;
	packet.shoot = shoot;
	packet.jj = jj;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_JJ_CONTROL_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_JJ_CONTROL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_JJ_CONTROL_MIN_LEN, MAVLINK_MSG_ID_JJ_CONTROL_LEN, MAVLINK_MSG_ID_JJ_CONTROL_CRC);
}

/**
 * @brief Pack a jj_control message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mode ctrl mode of camera
 * @param shoot take a pic
 * @param jj control jj, 0x0f down, 0xf0 up
 * @param pitch cam_pitch
 * @param yaw cam_yaw
 * @param zoom cam_zoom
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_jj_control_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t mode,uint8_t shoot,uint8_t jj,float pitch,float yaw,float zoom)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_JJ_CONTROL_LEN];
	_mav_put_float(buf, 0, pitch);
	_mav_put_float(buf, 4, yaw);
	_mav_put_float(buf, 8, zoom);
	_mav_put_uint8_t(buf, 12, mode);
	_mav_put_uint8_t(buf, 13, shoot);
	_mav_put_uint8_t(buf, 14, jj);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_JJ_CONTROL_LEN);
#else
	mavlink_jj_control_t packet;
	packet.pitch = pitch;
	packet.yaw = yaw;
	packet.zoom = zoom;
	packet.mode = mode;
	packet.shoot = shoot;
	packet.jj = jj;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_JJ_CONTROL_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_JJ_CONTROL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_JJ_CONTROL_MIN_LEN, MAVLINK_MSG_ID_JJ_CONTROL_LEN, MAVLINK_MSG_ID_JJ_CONTROL_CRC);
}

/**
 * @brief Encode a jj_control struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param jj_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_jj_control_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_jj_control_t* jj_control)
{
	return mavlink_msg_jj_control_pack(system_id, component_id, msg, jj_control->mode, jj_control->shoot, jj_control->jj, jj_control->pitch, jj_control->yaw, jj_control->zoom);
}

/**
 * @brief Encode a jj_control struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param jj_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_jj_control_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_jj_control_t* jj_control)
{
	return mavlink_msg_jj_control_pack_chan(system_id, component_id, chan, msg, jj_control->mode, jj_control->shoot, jj_control->jj, jj_control->pitch, jj_control->yaw, jj_control->zoom);
}

/**
 * @brief Send a jj_control message
 * @param chan MAVLink channel to send the message
 *
 * @param mode ctrl mode of camera
 * @param shoot take a pic
 * @param jj control jj, 0x0f down, 0xf0 up
 * @param pitch cam_pitch
 * @param yaw cam_yaw
 * @param zoom cam_zoom
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_jj_control_send(mavlink_channel_t chan, uint8_t mode, uint8_t shoot, uint8_t jj, float pitch, float yaw, float zoom)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_JJ_CONTROL_LEN];
	_mav_put_float(buf, 0, pitch);
	_mav_put_float(buf, 4, yaw);
	_mav_put_float(buf, 8, zoom);
	_mav_put_uint8_t(buf, 12, mode);
	_mav_put_uint8_t(buf, 13, shoot);
	_mav_put_uint8_t(buf, 14, jj);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_JJ_CONTROL, buf, MAVLINK_MSG_ID_JJ_CONTROL_MIN_LEN, MAVLINK_MSG_ID_JJ_CONTROL_LEN, MAVLINK_MSG_ID_JJ_CONTROL_CRC);
#else
	mavlink_jj_control_t packet;
	packet.pitch = pitch;
	packet.yaw = yaw;
	packet.zoom = zoom;
	packet.mode = mode;
	packet.shoot = shoot;
	packet.jj = jj;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_JJ_CONTROL, (const char *)&packet, MAVLINK_MSG_ID_JJ_CONTROL_MIN_LEN, MAVLINK_MSG_ID_JJ_CONTROL_LEN, MAVLINK_MSG_ID_JJ_CONTROL_CRC);
#endif
}

/**
 * @brief Send a jj_control message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_jj_control_send_struct(mavlink_channel_t chan, const mavlink_jj_control_t* jj_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_jj_control_send(chan, jj_control->mode, jj_control->shoot, jj_control->jj, jj_control->pitch, jj_control->yaw, jj_control->zoom);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_JJ_CONTROL, (const char *)jj_control, MAVLINK_MSG_ID_JJ_CONTROL_MIN_LEN, MAVLINK_MSG_ID_JJ_CONTROL_LEN, MAVLINK_MSG_ID_JJ_CONTROL_CRC);
#endif
}

#if MAVLINK_MSG_ID_JJ_CONTROL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_jj_control_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t mode, uint8_t shoot, uint8_t jj, float pitch, float yaw, float zoom)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, pitch);
	_mav_put_float(buf, 4, yaw);
	_mav_put_float(buf, 8, zoom);
	_mav_put_uint8_t(buf, 12, mode);
	_mav_put_uint8_t(buf, 13, shoot);
	_mav_put_uint8_t(buf, 14, jj);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_JJ_CONTROL, buf, MAVLINK_MSG_ID_JJ_CONTROL_MIN_LEN, MAVLINK_MSG_ID_JJ_CONTROL_LEN, MAVLINK_MSG_ID_JJ_CONTROL_CRC);
#else
	mavlink_jj_control_t *packet = (mavlink_jj_control_t *)msgbuf;
	packet->pitch = pitch;
	packet->yaw = yaw;
	packet->zoom = zoom;
	packet->mode = mode;
	packet->shoot = shoot;
	packet->jj = jj;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_JJ_CONTROL, (const char *)packet, MAVLINK_MSG_ID_JJ_CONTROL_MIN_LEN, MAVLINK_MSG_ID_JJ_CONTROL_LEN, MAVLINK_MSG_ID_JJ_CONTROL_CRC);
#endif
}
#endif

#endif

// MESSAGE JJ_CONTROL UNPACKING


/**
 * @brief Get field mode from jj_control message
 *
 * @return ctrl mode of camera
 */
static inline uint8_t mavlink_msg_jj_control_get_mode(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field shoot from jj_control message
 *
 * @return take a pic
 */
static inline uint8_t mavlink_msg_jj_control_get_shoot(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  13);
}

/**
 * @brief Get field jj from jj_control message
 *
 * @return control jj, 0x0f down, 0xf0 up
 */
static inline uint8_t mavlink_msg_jj_control_get_jj(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  14);
}

/**
 * @brief Get field pitch from jj_control message
 *
 * @return cam_pitch
 */
static inline float mavlink_msg_jj_control_get_pitch(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field yaw from jj_control message
 *
 * @return cam_yaw
 */
static inline float mavlink_msg_jj_control_get_yaw(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field zoom from jj_control message
 *
 * @return cam_zoom
 */
static inline float mavlink_msg_jj_control_get_zoom(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Decode a jj_control message into a struct
 *
 * @param msg The message to decode
 * @param jj_control C-struct to decode the message contents into
 */
static inline void mavlink_msg_jj_control_decode(const mavlink_message_t* msg, mavlink_jj_control_t* jj_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	jj_control->pitch = mavlink_msg_jj_control_get_pitch(msg);
	jj_control->yaw = mavlink_msg_jj_control_get_yaw(msg);
	jj_control->zoom = mavlink_msg_jj_control_get_zoom(msg);
	jj_control->mode = mavlink_msg_jj_control_get_mode(msg);
	jj_control->shoot = mavlink_msg_jj_control_get_shoot(msg);
	jj_control->jj = mavlink_msg_jj_control_get_jj(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_JJ_CONTROL_LEN? msg->len : MAVLINK_MSG_ID_JJ_CONTROL_LEN;
        memset(jj_control, 0, MAVLINK_MSG_ID_JJ_CONTROL_LEN);
	memcpy(jj_control, _MAV_PAYLOAD(msg), len);
#endif
}
