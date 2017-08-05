// MESSAGE GC_SB PACKING

#define MAVLINK_MSG_ID_GC_SB 224

MAVPACKED(
typedef struct __mavlink_gc_sb_t {
 uint32_t gc; /*< angle*/
 float gy; /*< laser x*/
 uint8_t gg; /*< minimum distance*/
}) mavlink_gc_sb_t;

#define MAVLINK_MSG_ID_GC_SB_LEN 9
#define MAVLINK_MSG_ID_GC_SB_MIN_LEN 9
#define MAVLINK_MSG_ID_224_LEN 9
#define MAVLINK_MSG_ID_224_MIN_LEN 9

#define MAVLINK_MSG_ID_GC_SB_CRC 39
#define MAVLINK_MSG_ID_224_CRC 39



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GC_SB { \
	224, \
	"GC_SB", \
	3, \
	{  { "gc", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_gc_sb_t, gc) }, \
         { "gy", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_gc_sb_t, gy) }, \
         { "gg", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_gc_sb_t, gg) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GC_SB { \
	"GC_SB", \
	3, \
	{  { "gc", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_gc_sb_t, gc) }, \
         { "gy", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_gc_sb_t, gy) }, \
         { "gg", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_gc_sb_t, gg) }, \
         } \
}
#endif

/**
 * @brief Pack a gc_sb message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param gg minimum distance
 * @param gc angle
 * @param gy laser x
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gc_sb_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t gg, uint32_t gc, float gy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_GC_SB_LEN];
	_mav_put_uint32_t(buf, 0, gc);
	_mav_put_float(buf, 4, gy);
	_mav_put_uint8_t(buf, 8, gg);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GC_SB_LEN);
#else
	mavlink_gc_sb_t packet;
	packet.gc = gc;
	packet.gy = gy;
	packet.gg = gg;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GC_SB_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_GC_SB;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GC_SB_MIN_LEN, MAVLINK_MSG_ID_GC_SB_LEN, MAVLINK_MSG_ID_GC_SB_CRC);
}

/**
 * @brief Pack a gc_sb message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gg minimum distance
 * @param gc angle
 * @param gy laser x
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gc_sb_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t gg,uint32_t gc,float gy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_GC_SB_LEN];
	_mav_put_uint32_t(buf, 0, gc);
	_mav_put_float(buf, 4, gy);
	_mav_put_uint8_t(buf, 8, gg);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GC_SB_LEN);
#else
	mavlink_gc_sb_t packet;
	packet.gc = gc;
	packet.gy = gy;
	packet.gg = gg;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GC_SB_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_GC_SB;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GC_SB_MIN_LEN, MAVLINK_MSG_ID_GC_SB_LEN, MAVLINK_MSG_ID_GC_SB_CRC);
}

/**
 * @brief Encode a gc_sb struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param gc_sb C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gc_sb_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_gc_sb_t* gc_sb)
{
	return mavlink_msg_gc_sb_pack(system_id, component_id, msg, gc_sb->gg, gc_sb->gc, gc_sb->gy);
}

/**
 * @brief Encode a gc_sb struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gc_sb C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gc_sb_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_gc_sb_t* gc_sb)
{
	return mavlink_msg_gc_sb_pack_chan(system_id, component_id, chan, msg, gc_sb->gg, gc_sb->gc, gc_sb->gy);
}

/**
 * @brief Send a gc_sb message
 * @param chan MAVLink channel to send the message
 *
 * @param gg minimum distance
 * @param gc angle
 * @param gy laser x
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_gc_sb_send(mavlink_channel_t chan, uint8_t gg, uint32_t gc, float gy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_GC_SB_LEN];
	_mav_put_uint32_t(buf, 0, gc);
	_mav_put_float(buf, 4, gy);
	_mav_put_uint8_t(buf, 8, gg);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GC_SB, buf, MAVLINK_MSG_ID_GC_SB_MIN_LEN, MAVLINK_MSG_ID_GC_SB_LEN, MAVLINK_MSG_ID_GC_SB_CRC);
#else
	mavlink_gc_sb_t packet;
	packet.gc = gc;
	packet.gy = gy;
	packet.gg = gg;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GC_SB, (const char *)&packet, MAVLINK_MSG_ID_GC_SB_MIN_LEN, MAVLINK_MSG_ID_GC_SB_LEN, MAVLINK_MSG_ID_GC_SB_CRC);
#endif
}

/**
 * @brief Send a gc_sb message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_gc_sb_send_struct(mavlink_channel_t chan, const mavlink_gc_sb_t* gc_sb)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_gc_sb_send(chan, gc_sb->gg, gc_sb->gc, gc_sb->gy);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GC_SB, (const char *)gc_sb, MAVLINK_MSG_ID_GC_SB_MIN_LEN, MAVLINK_MSG_ID_GC_SB_LEN, MAVLINK_MSG_ID_GC_SB_CRC);
#endif
}

#if MAVLINK_MSG_ID_GC_SB_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_gc_sb_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t gg, uint32_t gc, float gy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_uint32_t(buf, 0, gc);
	_mav_put_float(buf, 4, gy);
	_mav_put_uint8_t(buf, 8, gg);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GC_SB, buf, MAVLINK_MSG_ID_GC_SB_MIN_LEN, MAVLINK_MSG_ID_GC_SB_LEN, MAVLINK_MSG_ID_GC_SB_CRC);
#else
	mavlink_gc_sb_t *packet = (mavlink_gc_sb_t *)msgbuf;
	packet->gc = gc;
	packet->gy = gy;
	packet->gg = gg;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GC_SB, (const char *)packet, MAVLINK_MSG_ID_GC_SB_MIN_LEN, MAVLINK_MSG_ID_GC_SB_LEN, MAVLINK_MSG_ID_GC_SB_CRC);
#endif
}
#endif

#endif

// MESSAGE GC_SB UNPACKING


/**
 * @brief Get field gg from gc_sb message
 *
 * @return minimum distance
 */
static inline uint8_t mavlink_msg_gc_sb_get_gg(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field gc from gc_sb message
 *
 * @return angle
 */
static inline uint32_t mavlink_msg_gc_sb_get_gc(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field gy from gc_sb message
 *
 * @return laser x
 */
static inline float mavlink_msg_gc_sb_get_gy(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Decode a gc_sb message into a struct
 *
 * @param msg The message to decode
 * @param gc_sb C-struct to decode the message contents into
 */
static inline void mavlink_msg_gc_sb_decode(const mavlink_message_t* msg, mavlink_gc_sb_t* gc_sb)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	gc_sb->gc = mavlink_msg_gc_sb_get_gc(msg);
	gc_sb->gy = mavlink_msg_gc_sb_get_gy(msg);
	gc_sb->gg = mavlink_msg_gc_sb_get_gg(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GC_SB_LEN? msg->len : MAVLINK_MSG_ID_GC_SB_LEN;
        memset(gc_sb, 0, MAVLINK_MSG_ID_GC_SB_LEN);
	memcpy(gc_sb, _MAV_PAYLOAD(msg), len);
#endif
}
