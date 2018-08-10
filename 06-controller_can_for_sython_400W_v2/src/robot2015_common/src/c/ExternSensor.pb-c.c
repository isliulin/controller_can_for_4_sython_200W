/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C_NO_DEPRECATED
#define PROTOBUF_C_NO_DEPRECATED
#endif

#include "ExternSensor.pb-c.h"
void   extern_sensor__mode__temp_humi__init
                     (ExternSensor__ModeTempHumi         *message)
{
  static ExternSensor__ModeTempHumi init_value = EXTERN_SENSOR__MODE__TEMP_HUMI__INIT;
  *message = init_value;
}
void   extern_sensor__mode_fan__init
                     (ExternSensor__ModeFan         *message)
{
  static ExternSensor__ModeFan init_value = EXTERN_SENSOR__MODE_FAN__INIT;
  *message = init_value;
}
void   extern_sensor__mode__px24_es__init
                     (ExternSensor__ModePX24ES         *message)
{
  static ExternSensor__ModePX24ES init_value = EXTERN_SENSOR__MODE__PX24_ES__INIT;
  *message = init_value;
}
void   extern_sensor__init
                     (ExternSensor         *message)
{
  static ExternSensor init_value = EXTERN_SENSOR__INIT;
  *message = init_value;
}
size_t extern_sensor__get_packed_size
                     (const ExternSensor *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &extern_sensor__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t extern_sensor__pack
                     (const ExternSensor *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &extern_sensor__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t extern_sensor__pack_to_buffer
                     (const ExternSensor *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &extern_sensor__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
ExternSensor *
       extern_sensor__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (ExternSensor *)
     protobuf_c_message_unpack (&extern_sensor__descriptor,
                                allocator, len, data);
}
void   extern_sensor__free_unpacked
                     (ExternSensor *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &extern_sensor__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor extern_sensor__mode__temp_humi__field_descriptors[2] =
{
  {
    "interior_temp",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(ExternSensor__ModeTempHumi, has_interior_temp),
    PROTOBUF_C_OFFSETOF(ExternSensor__ModeTempHumi, interior_temp),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "interior_humi",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(ExternSensor__ModeTempHumi, has_interior_humi),
    PROTOBUF_C_OFFSETOF(ExternSensor__ModeTempHumi, interior_humi),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned extern_sensor__mode__temp_humi__field_indices_by_name[] = {
  1,   /* field[1] = interior_humi */
  0,   /* field[0] = interior_temp */
};
static const ProtobufCIntRange extern_sensor__mode__temp_humi__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor extern_sensor__mode__temp_humi__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "ExternSensor.Mode_Temp_humi",
  "ModeTempHumi",
  "ExternSensor__ModeTempHumi",
  "",
  sizeof(ExternSensor__ModeTempHumi),
  2,
  extern_sensor__mode__temp_humi__field_descriptors,
  extern_sensor__mode__temp_humi__field_indices_by_name,
  1,  extern_sensor__mode__temp_humi__number_ranges,
  (ProtobufCMessageInit) extern_sensor__mode__temp_humi__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor extern_sensor__mode_fan__field_descriptors[5] =
{
  {
    "fan_ID",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(ExternSensor__ModeFan, has_fan_id),
    PROTOBUF_C_OFFSETOF(ExternSensor__ModeFan, fan_id),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "fan_Mode",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(ExternSensor__ModeFan, has_fan_mode),
    PROTOBUF_C_OFFSETOF(ExternSensor__ModeFan, fan_mode),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "fan_status",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(ExternSensor__ModeFan, has_fan_status),
    PROTOBUF_C_OFFSETOF(ExternSensor__ModeFan, fan_status),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "vaule_open",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(ExternSensor__ModeFan, has_vaule_open),
    PROTOBUF_C_OFFSETOF(ExternSensor__ModeFan, vaule_open),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "vaule_close",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(ExternSensor__ModeFan, has_vaule_close),
    PROTOBUF_C_OFFSETOF(ExternSensor__ModeFan, vaule_close),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned extern_sensor__mode_fan__field_indices_by_name[] = {
  0,   /* field[0] = fan_ID */
  1,   /* field[1] = fan_Mode */
  2,   /* field[2] = fan_status */
  4,   /* field[4] = vaule_close */
  3,   /* field[3] = vaule_open */
};
static const ProtobufCIntRange extern_sensor__mode_fan__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 5 }
};
const ProtobufCMessageDescriptor extern_sensor__mode_fan__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "ExternSensor.Mode_fan",
  "ModeFan",
  "ExternSensor__ModeFan",
  "",
  sizeof(ExternSensor__ModeFan),
  5,
  extern_sensor__mode_fan__field_descriptors,
  extern_sensor__mode_fan__field_indices_by_name,
  1,  extern_sensor__mode_fan__number_ranges,
  (ProtobufCMessageInit) extern_sensor__mode_fan__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor extern_sensor__mode__px24_es__field_descriptors[3] =
{
  {
    "out1",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(ExternSensor__ModePX24ES, has_out1),
    PROTOBUF_C_OFFSETOF(ExternSensor__ModePX24ES, out1),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "out2",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(ExternSensor__ModePX24ES, has_out2),
    PROTOBUF_C_OFFSETOF(ExternSensor__ModePX24ES, out2),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "Extraneouslight_out",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(ExternSensor__ModePX24ES, has_extraneouslight_out),
    PROTOBUF_C_OFFSETOF(ExternSensor__ModePX24ES, extraneouslight_out),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned extern_sensor__mode__px24_es__field_indices_by_name[] = {
  2,   /* field[2] = Extraneouslight_out */
  0,   /* field[0] = out1 */
  1,   /* field[1] = out2 */
};
static const ProtobufCIntRange extern_sensor__mode__px24_es__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor extern_sensor__mode__px24_es__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "ExternSensor.Mode_PX24ES",
  "ModePX24ES",
  "ExternSensor__ModePX24ES",
  "",
  sizeof(ExternSensor__ModePX24ES),
  3,
  extern_sensor__mode__px24_es__field_descriptors,
  extern_sensor__mode__px24_es__field_indices_by_name,
  1,  extern_sensor__mode__px24_es__number_ranges,
  (ProtobufCMessageInit) extern_sensor__mode__px24_es__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor extern_sensor__field_descriptors[8] =
{
  {
    "Temp_Pt100",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(ExternSensor, n_temp_pt100),
    PROTOBUF_C_OFFSETOF(ExternSensor, temp_pt100),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "Temp_humi",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    PROTOBUF_C_OFFSETOF(ExternSensor, n_temp_humi),
    PROTOBUF_C_OFFSETOF(ExternSensor, temp_humi),
    &extern_sensor__mode__temp_humi__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "fan_msg",
    3,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    PROTOBUF_C_OFFSETOF(ExternSensor, n_fan_msg),
    PROTOBUF_C_OFFSETOF(ExternSensor, fan_msg),
    &extern_sensor__mode_fan__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "IO_Infrared",
    4,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(ExternSensor, n_io_infrared),
    PROTOBUF_C_OFFSETOF(ExternSensor, io_infrared),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "IO_collision",
    5,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(ExternSensor, n_io_collision),
    PROTOBUF_C_OFFSETOF(ExternSensor, io_collision),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "LED_status",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(ExternSensor, led_status),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "PX24ES",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(ExternSensor, px24es),
    &extern_sensor__mode__px24_es__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "online",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(ExternSensor, has_online),
    PROTOBUF_C_OFFSETOF(ExternSensor, online),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned extern_sensor__field_indices_by_name[] = {
  3,   /* field[3] = IO_Infrared */
  4,   /* field[4] = IO_collision */
  5,   /* field[5] = LED_status */
  6,   /* field[6] = PX24ES */
  0,   /* field[0] = Temp_Pt100 */
  1,   /* field[1] = Temp_humi */
  2,   /* field[2] = fan_msg */
  7,   /* field[7] = online */
};
static const ProtobufCIntRange extern_sensor__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 8 }
};
const ProtobufCMessageDescriptor extern_sensor__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "ExternSensor",
  "ExternSensor",
  "ExternSensor",
  "",
  sizeof(ExternSensor),
  8,
  extern_sensor__field_descriptors,
  extern_sensor__field_indices_by_name,
  1,  extern_sensor__number_ranges,
  (ProtobufCMessageInit) extern_sensor__init,
  NULL,NULL,NULL    /* reserved[123] */
};