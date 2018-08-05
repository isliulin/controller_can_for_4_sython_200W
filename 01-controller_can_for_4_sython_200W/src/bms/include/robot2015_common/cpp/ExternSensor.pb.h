// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ExternSensor.proto

#ifndef PROTOBUF_ExternSensor_2eproto__INCLUDED
#define PROTOBUF_ExternSensor_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_ExternSensor_2eproto();
void protobuf_AssignDesc_ExternSensor_2eproto();
void protobuf_ShutdownFile_ExternSensor_2eproto();

class ExternSensor;
class ExternSensor_Mode_Temp_humi;
class ExternSensor_Mode_fan;
class ExternSensor_Mode_PX24ES;

// ===================================================================

class ExternSensor_Mode_Temp_humi : public ::google::protobuf::Message {
 public:
  ExternSensor_Mode_Temp_humi();
  virtual ~ExternSensor_Mode_Temp_humi();

  ExternSensor_Mode_Temp_humi(const ExternSensor_Mode_Temp_humi& from);

  inline ExternSensor_Mode_Temp_humi& operator=(const ExternSensor_Mode_Temp_humi& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ExternSensor_Mode_Temp_humi& default_instance();

  void Swap(ExternSensor_Mode_Temp_humi* other);

  // implements Message ----------------------------------------------

  ExternSensor_Mode_Temp_humi* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ExternSensor_Mode_Temp_humi& from);
  void MergeFrom(const ExternSensor_Mode_Temp_humi& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 interior_temp = 1;
  inline bool has_interior_temp() const;
  inline void clear_interior_temp();
  static const int kInteriorTempFieldNumber = 1;
  inline ::google::protobuf::int32 interior_temp() const;
  inline void set_interior_temp(::google::protobuf::int32 value);

  // optional int32 interior_humi = 2;
  inline bool has_interior_humi() const;
  inline void clear_interior_humi();
  static const int kInteriorHumiFieldNumber = 2;
  inline ::google::protobuf::int32 interior_humi() const;
  inline void set_interior_humi(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:ExternSensor.Mode_Temp_humi)
 private:
  inline void set_has_interior_temp();
  inline void clear_has_interior_temp();
  inline void set_has_interior_humi();
  inline void clear_has_interior_humi();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 interior_temp_;
  ::google::protobuf::int32 interior_humi_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_ExternSensor_2eproto();
  friend void protobuf_AssignDesc_ExternSensor_2eproto();
  friend void protobuf_ShutdownFile_ExternSensor_2eproto();

  void InitAsDefaultInstance();
  static ExternSensor_Mode_Temp_humi* default_instance_;
};
// -------------------------------------------------------------------

class ExternSensor_Mode_fan : public ::google::protobuf::Message {
 public:
  ExternSensor_Mode_fan();
  virtual ~ExternSensor_Mode_fan();

  ExternSensor_Mode_fan(const ExternSensor_Mode_fan& from);

  inline ExternSensor_Mode_fan& operator=(const ExternSensor_Mode_fan& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ExternSensor_Mode_fan& default_instance();

  void Swap(ExternSensor_Mode_fan* other);

  // implements Message ----------------------------------------------

  ExternSensor_Mode_fan* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ExternSensor_Mode_fan& from);
  void MergeFrom(const ExternSensor_Mode_fan& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 fan_ID = 1;
  inline bool has_fan_id() const;
  inline void clear_fan_id();
  static const int kFanIDFieldNumber = 1;
  inline ::google::protobuf::int32 fan_id() const;
  inline void set_fan_id(::google::protobuf::int32 value);

  // optional int32 fan_Mode = 2;
  inline bool has_fan_mode() const;
  inline void clear_fan_mode();
  static const int kFanModeFieldNumber = 2;
  inline ::google::protobuf::int32 fan_mode() const;
  inline void set_fan_mode(::google::protobuf::int32 value);

  // optional int32 fan_status = 3;
  inline bool has_fan_status() const;
  inline void clear_fan_status();
  static const int kFanStatusFieldNumber = 3;
  inline ::google::protobuf::int32 fan_status() const;
  inline void set_fan_status(::google::protobuf::int32 value);

  // optional int32 vaule_open = 4;
  inline bool has_vaule_open() const;
  inline void clear_vaule_open();
  static const int kVauleOpenFieldNumber = 4;
  inline ::google::protobuf::int32 vaule_open() const;
  inline void set_vaule_open(::google::protobuf::int32 value);

  // optional int32 vaule_close = 5;
  inline bool has_vaule_close() const;
  inline void clear_vaule_close();
  static const int kVauleCloseFieldNumber = 5;
  inline ::google::protobuf::int32 vaule_close() const;
  inline void set_vaule_close(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:ExternSensor.Mode_fan)
 private:
  inline void set_has_fan_id();
  inline void clear_has_fan_id();
  inline void set_has_fan_mode();
  inline void clear_has_fan_mode();
  inline void set_has_fan_status();
  inline void clear_has_fan_status();
  inline void set_has_vaule_open();
  inline void clear_has_vaule_open();
  inline void set_has_vaule_close();
  inline void clear_has_vaule_close();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 fan_id_;
  ::google::protobuf::int32 fan_mode_;
  ::google::protobuf::int32 fan_status_;
  ::google::protobuf::int32 vaule_open_;
  ::google::protobuf::int32 vaule_close_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  friend void  protobuf_AddDesc_ExternSensor_2eproto();
  friend void protobuf_AssignDesc_ExternSensor_2eproto();
  friend void protobuf_ShutdownFile_ExternSensor_2eproto();

  void InitAsDefaultInstance();
  static ExternSensor_Mode_fan* default_instance_;
};
// -------------------------------------------------------------------

class ExternSensor_Mode_PX24ES : public ::google::protobuf::Message {
 public:
  ExternSensor_Mode_PX24ES();
  virtual ~ExternSensor_Mode_PX24ES();

  ExternSensor_Mode_PX24ES(const ExternSensor_Mode_PX24ES& from);

  inline ExternSensor_Mode_PX24ES& operator=(const ExternSensor_Mode_PX24ES& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ExternSensor_Mode_PX24ES& default_instance();

  void Swap(ExternSensor_Mode_PX24ES* other);

  // implements Message ----------------------------------------------

  ExternSensor_Mode_PX24ES* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ExternSensor_Mode_PX24ES& from);
  void MergeFrom(const ExternSensor_Mode_PX24ES& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 out1 = 1;
  inline bool has_out1() const;
  inline void clear_out1();
  static const int kOut1FieldNumber = 1;
  inline ::google::protobuf::int32 out1() const;
  inline void set_out1(::google::protobuf::int32 value);

  // optional int32 out2 = 2;
  inline bool has_out2() const;
  inline void clear_out2();
  static const int kOut2FieldNumber = 2;
  inline ::google::protobuf::int32 out2() const;
  inline void set_out2(::google::protobuf::int32 value);

  // optional int32 Extraneouslight_out = 3;
  inline bool has_extraneouslight_out() const;
  inline void clear_extraneouslight_out();
  static const int kExtraneouslightOutFieldNumber = 3;
  inline ::google::protobuf::int32 extraneouslight_out() const;
  inline void set_extraneouslight_out(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:ExternSensor.Mode_PX24ES)
 private:
  inline void set_has_out1();
  inline void clear_has_out1();
  inline void set_has_out2();
  inline void clear_has_out2();
  inline void set_has_extraneouslight_out();
  inline void clear_has_extraneouslight_out();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 out1_;
  ::google::protobuf::int32 out2_;
  ::google::protobuf::int32 extraneouslight_out_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_ExternSensor_2eproto();
  friend void protobuf_AssignDesc_ExternSensor_2eproto();
  friend void protobuf_ShutdownFile_ExternSensor_2eproto();

  void InitAsDefaultInstance();
  static ExternSensor_Mode_PX24ES* default_instance_;
};
// -------------------------------------------------------------------

class ExternSensor : public ::google::protobuf::Message {
 public:
  ExternSensor();
  virtual ~ExternSensor();

  ExternSensor(const ExternSensor& from);

  inline ExternSensor& operator=(const ExternSensor& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ExternSensor& default_instance();

  void Swap(ExternSensor* other);

  // implements Message ----------------------------------------------

  ExternSensor* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ExternSensor& from);
  void MergeFrom(const ExternSensor& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef ExternSensor_Mode_Temp_humi Mode_Temp_humi;
  typedef ExternSensor_Mode_fan Mode_fan;
  typedef ExternSensor_Mode_PX24ES Mode_PX24ES;

  // accessors -------------------------------------------------------

  // repeated int32 Temp_Pt100 = 1;
  inline int temp_pt100_size() const;
  inline void clear_temp_pt100();
  static const int kTempPt100FieldNumber = 1;
  inline ::google::protobuf::int32 temp_pt100(int index) const;
  inline void set_temp_pt100(int index, ::google::protobuf::int32 value);
  inline void add_temp_pt100(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      temp_pt100() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_temp_pt100();

  // repeated .ExternSensor.Mode_Temp_humi Temp_humi = 2;
  inline int temp_humi_size() const;
  inline void clear_temp_humi();
  static const int kTempHumiFieldNumber = 2;
  inline const ::ExternSensor_Mode_Temp_humi& temp_humi(int index) const;
  inline ::ExternSensor_Mode_Temp_humi* mutable_temp_humi(int index);
  inline ::ExternSensor_Mode_Temp_humi* add_temp_humi();
  inline const ::google::protobuf::RepeatedPtrField< ::ExternSensor_Mode_Temp_humi >&
      temp_humi() const;
  inline ::google::protobuf::RepeatedPtrField< ::ExternSensor_Mode_Temp_humi >*
      mutable_temp_humi();

  // repeated .ExternSensor.Mode_fan fan_msg = 3;
  inline int fan_msg_size() const;
  inline void clear_fan_msg();
  static const int kFanMsgFieldNumber = 3;
  inline const ::ExternSensor_Mode_fan& fan_msg(int index) const;
  inline ::ExternSensor_Mode_fan* mutable_fan_msg(int index);
  inline ::ExternSensor_Mode_fan* add_fan_msg();
  inline const ::google::protobuf::RepeatedPtrField< ::ExternSensor_Mode_fan >&
      fan_msg() const;
  inline ::google::protobuf::RepeatedPtrField< ::ExternSensor_Mode_fan >*
      mutable_fan_msg();

  // repeated int32 IO_Infrared = 4;
  inline int io_infrared_size() const;
  inline void clear_io_infrared();
  static const int kIOInfraredFieldNumber = 4;
  inline ::google::protobuf::int32 io_infrared(int index) const;
  inline void set_io_infrared(int index, ::google::protobuf::int32 value);
  inline void add_io_infrared(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      io_infrared() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_io_infrared();

  // repeated int32 IO_collision = 5;
  inline int io_collision_size() const;
  inline void clear_io_collision();
  static const int kIOCollisionFieldNumber = 5;
  inline ::google::protobuf::int32 io_collision(int index) const;
  inline void set_io_collision(int index, ::google::protobuf::int32 value);
  inline void add_io_collision(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      io_collision() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_io_collision();

  // optional string LED_status = 6;
  inline bool has_led_status() const;
  inline void clear_led_status();
  static const int kLEDStatusFieldNumber = 6;
  inline const ::std::string& led_status() const;
  inline void set_led_status(const ::std::string& value);
  inline void set_led_status(const char* value);
  inline void set_led_status(const char* value, size_t size);
  inline ::std::string* mutable_led_status();
  inline ::std::string* release_led_status();
  inline void set_allocated_led_status(::std::string* led_status);

  // optional .ExternSensor.Mode_PX24ES PX24ES = 7;
  inline bool has_px24es() const;
  inline void clear_px24es();
  static const int kPX24ESFieldNumber = 7;
  inline const ::ExternSensor_Mode_PX24ES& px24es() const;
  inline ::ExternSensor_Mode_PX24ES* mutable_px24es();
  inline ::ExternSensor_Mode_PX24ES* release_px24es();
  inline void set_allocated_px24es(::ExternSensor_Mode_PX24ES* px24es);

  // optional int32 online = 8;
  inline bool has_online() const;
  inline void clear_online();
  static const int kOnlineFieldNumber = 8;
  inline ::google::protobuf::int32 online() const;
  inline void set_online(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:ExternSensor)
 private:
  inline void set_has_led_status();
  inline void clear_has_led_status();
  inline void set_has_px24es();
  inline void clear_has_px24es();
  inline void set_has_online();
  inline void clear_has_online();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > temp_pt100_;
  ::google::protobuf::RepeatedPtrField< ::ExternSensor_Mode_Temp_humi > temp_humi_;
  ::google::protobuf::RepeatedPtrField< ::ExternSensor_Mode_fan > fan_msg_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > io_infrared_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > io_collision_;
  ::std::string* led_status_;
  ::ExternSensor_Mode_PX24ES* px24es_;
  ::google::protobuf::int32 online_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(8 + 31) / 32];

  friend void  protobuf_AddDesc_ExternSensor_2eproto();
  friend void protobuf_AssignDesc_ExternSensor_2eproto();
  friend void protobuf_ShutdownFile_ExternSensor_2eproto();

  void InitAsDefaultInstance();
  static ExternSensor* default_instance_;
};
// ===================================================================


// ===================================================================

// ExternSensor_Mode_Temp_humi

// optional int32 interior_temp = 1;
inline bool ExternSensor_Mode_Temp_humi::has_interior_temp() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ExternSensor_Mode_Temp_humi::set_has_interior_temp() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ExternSensor_Mode_Temp_humi::clear_has_interior_temp() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ExternSensor_Mode_Temp_humi::clear_interior_temp() {
  interior_temp_ = 0;
  clear_has_interior_temp();
}
inline ::google::protobuf::int32 ExternSensor_Mode_Temp_humi::interior_temp() const {
  return interior_temp_;
}
inline void ExternSensor_Mode_Temp_humi::set_interior_temp(::google::protobuf::int32 value) {
  set_has_interior_temp();
  interior_temp_ = value;
}

// optional int32 interior_humi = 2;
inline bool ExternSensor_Mode_Temp_humi::has_interior_humi() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ExternSensor_Mode_Temp_humi::set_has_interior_humi() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ExternSensor_Mode_Temp_humi::clear_has_interior_humi() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ExternSensor_Mode_Temp_humi::clear_interior_humi() {
  interior_humi_ = 0;
  clear_has_interior_humi();
}
inline ::google::protobuf::int32 ExternSensor_Mode_Temp_humi::interior_humi() const {
  return interior_humi_;
}
inline void ExternSensor_Mode_Temp_humi::set_interior_humi(::google::protobuf::int32 value) {
  set_has_interior_humi();
  interior_humi_ = value;
}

// -------------------------------------------------------------------

// ExternSensor_Mode_fan

// optional int32 fan_ID = 1;
inline bool ExternSensor_Mode_fan::has_fan_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ExternSensor_Mode_fan::set_has_fan_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ExternSensor_Mode_fan::clear_has_fan_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ExternSensor_Mode_fan::clear_fan_id() {
  fan_id_ = 0;
  clear_has_fan_id();
}
inline ::google::protobuf::int32 ExternSensor_Mode_fan::fan_id() const {
  return fan_id_;
}
inline void ExternSensor_Mode_fan::set_fan_id(::google::protobuf::int32 value) {
  set_has_fan_id();
  fan_id_ = value;
}

// optional int32 fan_Mode = 2;
inline bool ExternSensor_Mode_fan::has_fan_mode() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ExternSensor_Mode_fan::set_has_fan_mode() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ExternSensor_Mode_fan::clear_has_fan_mode() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ExternSensor_Mode_fan::clear_fan_mode() {
  fan_mode_ = 0;
  clear_has_fan_mode();
}
inline ::google::protobuf::int32 ExternSensor_Mode_fan::fan_mode() const {
  return fan_mode_;
}
inline void ExternSensor_Mode_fan::set_fan_mode(::google::protobuf::int32 value) {
  set_has_fan_mode();
  fan_mode_ = value;
}

// optional int32 fan_status = 3;
inline bool ExternSensor_Mode_fan::has_fan_status() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ExternSensor_Mode_fan::set_has_fan_status() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ExternSensor_Mode_fan::clear_has_fan_status() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ExternSensor_Mode_fan::clear_fan_status() {
  fan_status_ = 0;
  clear_has_fan_status();
}
inline ::google::protobuf::int32 ExternSensor_Mode_fan::fan_status() const {
  return fan_status_;
}
inline void ExternSensor_Mode_fan::set_fan_status(::google::protobuf::int32 value) {
  set_has_fan_status();
  fan_status_ = value;
}

// optional int32 vaule_open = 4;
inline bool ExternSensor_Mode_fan::has_vaule_open() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ExternSensor_Mode_fan::set_has_vaule_open() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ExternSensor_Mode_fan::clear_has_vaule_open() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ExternSensor_Mode_fan::clear_vaule_open() {
  vaule_open_ = 0;
  clear_has_vaule_open();
}
inline ::google::protobuf::int32 ExternSensor_Mode_fan::vaule_open() const {
  return vaule_open_;
}
inline void ExternSensor_Mode_fan::set_vaule_open(::google::protobuf::int32 value) {
  set_has_vaule_open();
  vaule_open_ = value;
}

// optional int32 vaule_close = 5;
inline bool ExternSensor_Mode_fan::has_vaule_close() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ExternSensor_Mode_fan::set_has_vaule_close() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ExternSensor_Mode_fan::clear_has_vaule_close() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ExternSensor_Mode_fan::clear_vaule_close() {
  vaule_close_ = 0;
  clear_has_vaule_close();
}
inline ::google::protobuf::int32 ExternSensor_Mode_fan::vaule_close() const {
  return vaule_close_;
}
inline void ExternSensor_Mode_fan::set_vaule_close(::google::protobuf::int32 value) {
  set_has_vaule_close();
  vaule_close_ = value;
}

// -------------------------------------------------------------------

// ExternSensor_Mode_PX24ES

// optional int32 out1 = 1;
inline bool ExternSensor_Mode_PX24ES::has_out1() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ExternSensor_Mode_PX24ES::set_has_out1() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ExternSensor_Mode_PX24ES::clear_has_out1() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ExternSensor_Mode_PX24ES::clear_out1() {
  out1_ = 0;
  clear_has_out1();
}
inline ::google::protobuf::int32 ExternSensor_Mode_PX24ES::out1() const {
  return out1_;
}
inline void ExternSensor_Mode_PX24ES::set_out1(::google::protobuf::int32 value) {
  set_has_out1();
  out1_ = value;
}

// optional int32 out2 = 2;
inline bool ExternSensor_Mode_PX24ES::has_out2() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ExternSensor_Mode_PX24ES::set_has_out2() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ExternSensor_Mode_PX24ES::clear_has_out2() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ExternSensor_Mode_PX24ES::clear_out2() {
  out2_ = 0;
  clear_has_out2();
}
inline ::google::protobuf::int32 ExternSensor_Mode_PX24ES::out2() const {
  return out2_;
}
inline void ExternSensor_Mode_PX24ES::set_out2(::google::protobuf::int32 value) {
  set_has_out2();
  out2_ = value;
}

// optional int32 Extraneouslight_out = 3;
inline bool ExternSensor_Mode_PX24ES::has_extraneouslight_out() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ExternSensor_Mode_PX24ES::set_has_extraneouslight_out() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ExternSensor_Mode_PX24ES::clear_has_extraneouslight_out() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ExternSensor_Mode_PX24ES::clear_extraneouslight_out() {
  extraneouslight_out_ = 0;
  clear_has_extraneouslight_out();
}
inline ::google::protobuf::int32 ExternSensor_Mode_PX24ES::extraneouslight_out() const {
  return extraneouslight_out_;
}
inline void ExternSensor_Mode_PX24ES::set_extraneouslight_out(::google::protobuf::int32 value) {
  set_has_extraneouslight_out();
  extraneouslight_out_ = value;
}

// -------------------------------------------------------------------

// ExternSensor

// repeated int32 Temp_Pt100 = 1;
inline int ExternSensor::temp_pt100_size() const {
  return temp_pt100_.size();
}
inline void ExternSensor::clear_temp_pt100() {
  temp_pt100_.Clear();
}
inline ::google::protobuf::int32 ExternSensor::temp_pt100(int index) const {
  return temp_pt100_.Get(index);
}
inline void ExternSensor::set_temp_pt100(int index, ::google::protobuf::int32 value) {
  temp_pt100_.Set(index, value);
}
inline void ExternSensor::add_temp_pt100(::google::protobuf::int32 value) {
  temp_pt100_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
ExternSensor::temp_pt100() const {
  return temp_pt100_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
ExternSensor::mutable_temp_pt100() {
  return &temp_pt100_;
}

// repeated .ExternSensor.Mode_Temp_humi Temp_humi = 2;
inline int ExternSensor::temp_humi_size() const {
  return temp_humi_.size();
}
inline void ExternSensor::clear_temp_humi() {
  temp_humi_.Clear();
}
inline const ::ExternSensor_Mode_Temp_humi& ExternSensor::temp_humi(int index) const {
  return temp_humi_.Get(index);
}
inline ::ExternSensor_Mode_Temp_humi* ExternSensor::mutable_temp_humi(int index) {
  return temp_humi_.Mutable(index);
}
inline ::ExternSensor_Mode_Temp_humi* ExternSensor::add_temp_humi() {
  return temp_humi_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ExternSensor_Mode_Temp_humi >&
ExternSensor::temp_humi() const {
  return temp_humi_;
}
inline ::google::protobuf::RepeatedPtrField< ::ExternSensor_Mode_Temp_humi >*
ExternSensor::mutable_temp_humi() {
  return &temp_humi_;
}

// repeated .ExternSensor.Mode_fan fan_msg = 3;
inline int ExternSensor::fan_msg_size() const {
  return fan_msg_.size();
}
inline void ExternSensor::clear_fan_msg() {
  fan_msg_.Clear();
}
inline const ::ExternSensor_Mode_fan& ExternSensor::fan_msg(int index) const {
  return fan_msg_.Get(index);
}
inline ::ExternSensor_Mode_fan* ExternSensor::mutable_fan_msg(int index) {
  return fan_msg_.Mutable(index);
}
inline ::ExternSensor_Mode_fan* ExternSensor::add_fan_msg() {
  return fan_msg_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ExternSensor_Mode_fan >&
ExternSensor::fan_msg() const {
  return fan_msg_;
}
inline ::google::protobuf::RepeatedPtrField< ::ExternSensor_Mode_fan >*
ExternSensor::mutable_fan_msg() {
  return &fan_msg_;
}

// repeated int32 IO_Infrared = 4;
inline int ExternSensor::io_infrared_size() const {
  return io_infrared_.size();
}
inline void ExternSensor::clear_io_infrared() {
  io_infrared_.Clear();
}
inline ::google::protobuf::int32 ExternSensor::io_infrared(int index) const {
  return io_infrared_.Get(index);
}
inline void ExternSensor::set_io_infrared(int index, ::google::protobuf::int32 value) {
  io_infrared_.Set(index, value);
}
inline void ExternSensor::add_io_infrared(::google::protobuf::int32 value) {
  io_infrared_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
ExternSensor::io_infrared() const {
  return io_infrared_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
ExternSensor::mutable_io_infrared() {
  return &io_infrared_;
}

// repeated int32 IO_collision = 5;
inline int ExternSensor::io_collision_size() const {
  return io_collision_.size();
}
inline void ExternSensor::clear_io_collision() {
  io_collision_.Clear();
}
inline ::google::protobuf::int32 ExternSensor::io_collision(int index) const {
  return io_collision_.Get(index);
}
inline void ExternSensor::set_io_collision(int index, ::google::protobuf::int32 value) {
  io_collision_.Set(index, value);
}
inline void ExternSensor::add_io_collision(::google::protobuf::int32 value) {
  io_collision_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
ExternSensor::io_collision() const {
  return io_collision_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
ExternSensor::mutable_io_collision() {
  return &io_collision_;
}

// optional string LED_status = 6;
inline bool ExternSensor::has_led_status() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ExternSensor::set_has_led_status() {
  _has_bits_[0] |= 0x00000020u;
}
inline void ExternSensor::clear_has_led_status() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void ExternSensor::clear_led_status() {
  if (led_status_ != &::google::protobuf::internal::kEmptyString) {
    led_status_->clear();
  }
  clear_has_led_status();
}
inline const ::std::string& ExternSensor::led_status() const {
  return *led_status_;
}
inline void ExternSensor::set_led_status(const ::std::string& value) {
  set_has_led_status();
  if (led_status_ == &::google::protobuf::internal::kEmptyString) {
    led_status_ = new ::std::string;
  }
  led_status_->assign(value);
}
inline void ExternSensor::set_led_status(const char* value) {
  set_has_led_status();
  if (led_status_ == &::google::protobuf::internal::kEmptyString) {
    led_status_ = new ::std::string;
  }
  led_status_->assign(value);
}
inline void ExternSensor::set_led_status(const char* value, size_t size) {
  set_has_led_status();
  if (led_status_ == &::google::protobuf::internal::kEmptyString) {
    led_status_ = new ::std::string;
  }
  led_status_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ExternSensor::mutable_led_status() {
  set_has_led_status();
  if (led_status_ == &::google::protobuf::internal::kEmptyString) {
    led_status_ = new ::std::string;
  }
  return led_status_;
}
inline ::std::string* ExternSensor::release_led_status() {
  clear_has_led_status();
  if (led_status_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = led_status_;
    led_status_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ExternSensor::set_allocated_led_status(::std::string* led_status) {
  if (led_status_ != &::google::protobuf::internal::kEmptyString) {
    delete led_status_;
  }
  if (led_status) {
    set_has_led_status();
    led_status_ = led_status;
  } else {
    clear_has_led_status();
    led_status_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional .ExternSensor.Mode_PX24ES PX24ES = 7;
inline bool ExternSensor::has_px24es() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void ExternSensor::set_has_px24es() {
  _has_bits_[0] |= 0x00000040u;
}
inline void ExternSensor::clear_has_px24es() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void ExternSensor::clear_px24es() {
  if (px24es_ != NULL) px24es_->::ExternSensor_Mode_PX24ES::Clear();
  clear_has_px24es();
}
inline const ::ExternSensor_Mode_PX24ES& ExternSensor::px24es() const {
  return px24es_ != NULL ? *px24es_ : *default_instance_->px24es_;
}
inline ::ExternSensor_Mode_PX24ES* ExternSensor::mutable_px24es() {
  set_has_px24es();
  if (px24es_ == NULL) px24es_ = new ::ExternSensor_Mode_PX24ES;
  return px24es_;
}
inline ::ExternSensor_Mode_PX24ES* ExternSensor::release_px24es() {
  clear_has_px24es();
  ::ExternSensor_Mode_PX24ES* temp = px24es_;
  px24es_ = NULL;
  return temp;
}
inline void ExternSensor::set_allocated_px24es(::ExternSensor_Mode_PX24ES* px24es) {
  delete px24es_;
  px24es_ = px24es;
  if (px24es) {
    set_has_px24es();
  } else {
    clear_has_px24es();
  }
}

// optional int32 online = 8;
inline bool ExternSensor::has_online() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void ExternSensor::set_has_online() {
  _has_bits_[0] |= 0x00000080u;
}
inline void ExternSensor::clear_has_online() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void ExternSensor::clear_online() {
  online_ = 0;
  clear_has_online();
}
inline ::google::protobuf::int32 ExternSensor::online() const {
  return online_;
}
inline void ExternSensor::set_online(::google::protobuf::int32 value) {
  set_has_online();
  online_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ExternSensor_2eproto__INCLUDED