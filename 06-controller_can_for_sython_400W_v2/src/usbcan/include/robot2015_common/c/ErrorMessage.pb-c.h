/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

#ifndef PROTOBUF_C_ErrorMessage_2eproto__INCLUDED
#define PROTOBUF_C_ErrorMessage_2eproto__INCLUDED

#include <google/protobuf-c/protobuf-c.h>

PROTOBUF_C_BEGIN_DECLS


typedef struct _ErrorMessage ErrorMessage;


/* --- enums --- */


/* --- messages --- */

struct  _ErrorMessage
{
  ProtobufCMessage base;
  protobuf_c_boolean has_carleftfdrivererror;
  protobuf_c_boolean carleftfdrivererror;
  protobuf_c_boolean has_carrightfdrivererror;
  protobuf_c_boolean carrightfdrivererror;
  protobuf_c_boolean has_carleftbdrivererror;
  protobuf_c_boolean carleftbdrivererror;
  protobuf_c_boolean has_carrightbdrivererror;
  protobuf_c_boolean carrightbdrivererror;
  protobuf_c_boolean has_leftfdrivercomerror;
  protobuf_c_boolean leftfdrivercomerror;
  protobuf_c_boolean has_rightfdrivercomerror;
  protobuf_c_boolean rightfdrivercomerror;
  protobuf_c_boolean has_leftbdrivercomerror;
  protobuf_c_boolean leftbdrivercomerror;
  protobuf_c_boolean has_rightbdrivercomerror;
  protobuf_c_boolean rightbdrivercomerror;
  protobuf_c_boolean has_externcomdeverror;
  protobuf_c_boolean externcomdeverror;
  protobuf_c_boolean has_bmssyserror;
  protobuf_c_boolean bmssyserror;
  protobuf_c_boolean has_obstaclestoperror;
  protobuf_c_boolean obstaclestoperror;
  protobuf_c_boolean has_cashswitchstoperror;
  protobuf_c_boolean cashswitchstoperror;
  protobuf_c_boolean has_currentoverloaderror;
  protobuf_c_boolean currentoverloaderror;
  protobuf_c_boolean has_driverleftfnodeoff;
  protobuf_c_boolean driverleftfnodeoff;
  protobuf_c_boolean has_driverleftbnodeoff;
  protobuf_c_boolean driverleftbnodeoff;
  protobuf_c_boolean has_driverrightfnodeoff;
  protobuf_c_boolean driverrightfnodeoff;
  protobuf_c_boolean has_driverrightbnodeoff;
  protobuf_c_boolean driverrightbnodeoff;
  protobuf_c_boolean has_bobstaclestoperror;
  protobuf_c_boolean bobstaclestoperror;
  protobuf_c_boolean has_dropstoperror;
  protobuf_c_boolean dropstoperror;
};
#define ERROR_MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&error_message__descriptor) \
    , 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0 }


/* ErrorMessage methods */
void   error_message__init
                     (ErrorMessage         *message);
size_t error_message__get_packed_size
                     (const ErrorMessage   *message);
size_t error_message__pack
                     (const ErrorMessage   *message,
                      uint8_t             *out);
size_t error_message__pack_to_buffer
                     (const ErrorMessage   *message,
                      ProtobufCBuffer     *buffer);
ErrorMessage *
       error_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   error_message__free_unpacked
                     (ErrorMessage *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*ErrorMessage_Closure)
                 (const ErrorMessage *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor error_message__descriptor;

PROTOBUF_C_END_DECLS


#endif  /* PROTOBUF_ErrorMessage_2eproto__INCLUDED */
