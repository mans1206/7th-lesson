// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DZ.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_DZ_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_DZ_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_DZ_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_DZ_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_DZ_2eproto;
namespace DZ {
class FullName;
struct FullNameDefaultTypeInternal;
extern FullNameDefaultTypeInternal _FullName_default_instance_;
class Student;
struct StudentDefaultTypeInternal;
extern StudentDefaultTypeInternal _Student_default_instance_;
class StudentsGroup;
struct StudentsGroupDefaultTypeInternal;
extern StudentsGroupDefaultTypeInternal _StudentsGroup_default_instance_;
}  // namespace DZ
PROTOBUF_NAMESPACE_OPEN
template<> ::DZ::FullName* Arena::CreateMaybeMessage<::DZ::FullName>(Arena*);
template<> ::DZ::Student* Arena::CreateMaybeMessage<::DZ::Student>(Arena*);
template<> ::DZ::StudentsGroup* Arena::CreateMaybeMessage<::DZ::StudentsGroup>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace DZ {

// ===================================================================

class FullName final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:DZ.FullName) */ {
 public:
  inline FullName() : FullName(nullptr) {}
  ~FullName() override;
  explicit constexpr FullName(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  FullName(const FullName& from);
  FullName(FullName&& from) noexcept
    : FullName() {
    *this = ::std::move(from);
  }

  inline FullName& operator=(const FullName& from) {
    CopyFrom(from);
    return *this;
  }
  inline FullName& operator=(FullName&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const FullName& default_instance() {
    return *internal_default_instance();
  }
  static inline const FullName* internal_default_instance() {
    return reinterpret_cast<const FullName*>(
               &_FullName_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(FullName& a, FullName& b) {
    a.Swap(&b);
  }
  inline void Swap(FullName* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(FullName* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline FullName* New() const final {
    return new FullName();
  }

  FullName* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<FullName>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const FullName& from);
  void MergeFrom(const FullName& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(FullName* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "DZ.FullName";
  }
  protected:
  explicit FullName(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kSnameFieldNumber = 2,
    kTnameFieldNumber = 3,
  };
  // string name = 1;
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // string sname = 2;
  void clear_sname();
  const std::string& sname() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_sname(ArgT0&& arg0, ArgT... args);
  std::string* mutable_sname();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_sname();
  void set_allocated_sname(std::string* sname);
  private:
  const std::string& _internal_sname() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_sname(const std::string& value);
  std::string* _internal_mutable_sname();
  public:

  // string tname = 3;
  void clear_tname();
  const std::string& tname() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_tname(ArgT0&& arg0, ArgT... args);
  std::string* mutable_tname();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_tname();
  void set_allocated_tname(std::string* tname);
  private:
  const std::string& _internal_tname() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_tname(const std::string& value);
  std::string* _internal_mutable_tname();
  public:

  // @@protoc_insertion_point(class_scope:DZ.FullName)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr sname_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr tname_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_DZ_2eproto;
};
// -------------------------------------------------------------------

class Student final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:DZ.Student) */ {
 public:
  inline Student() : Student(nullptr) {}
  ~Student() override;
  explicit constexpr Student(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Student(const Student& from);
  Student(Student&& from) noexcept
    : Student() {
    *this = ::std::move(from);
  }

  inline Student& operator=(const Student& from) {
    CopyFrom(from);
    return *this;
  }
  inline Student& operator=(Student&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Student& default_instance() {
    return *internal_default_instance();
  }
  static inline const Student* internal_default_instance() {
    return reinterpret_cast<const Student*>(
               &_Student_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Student& a, Student& b) {
    a.Swap(&b);
  }
  inline void Swap(Student* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Student* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Student* New() const final {
    return new Student();
  }

  Student* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Student>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Student& from);
  void MergeFrom(const Student& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Student* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "DZ.Student";
  }
  protected:
  explicit Student(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kOcenkiFieldNumber = 5,
    kFnameFieldNumber = 4,
    kSredFieldNumber = 6,
  };
  // repeated int32 ocenki = 5;
  int ocenki_size() const;
  private:
  int _internal_ocenki_size() const;
  public:
  void clear_ocenki();
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_ocenki(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      _internal_ocenki() const;
  void _internal_add_ocenki(::PROTOBUF_NAMESPACE_ID::int32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      _internal_mutable_ocenki();
  public:
  ::PROTOBUF_NAMESPACE_ID::int32 ocenki(int index) const;
  void set_ocenki(int index, ::PROTOBUF_NAMESPACE_ID::int32 value);
  void add_ocenki(::PROTOBUF_NAMESPACE_ID::int32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      ocenki() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      mutable_ocenki();

  // .DZ.FullName fname = 4;
  bool has_fname() const;
  private:
  bool _internal_has_fname() const;
  public:
  void clear_fname();
  const ::DZ::FullName& fname() const;
  PROTOBUF_FUTURE_MUST_USE_RESULT ::DZ::FullName* release_fname();
  ::DZ::FullName* mutable_fname();
  void set_allocated_fname(::DZ::FullName* fname);
  private:
  const ::DZ::FullName& _internal_fname() const;
  ::DZ::FullName* _internal_mutable_fname();
  public:
  void unsafe_arena_set_allocated_fname(
      ::DZ::FullName* fname);
  ::DZ::FullName* unsafe_arena_release_fname();

  // int32 sred = 6;
  void clear_sred();
  ::PROTOBUF_NAMESPACE_ID::int32 sred() const;
  void set_sred(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_sred() const;
  void _internal_set_sred(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:DZ.Student)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > ocenki_;
  mutable std::atomic<int> _ocenki_cached_byte_size_;
  ::DZ::FullName* fname_;
  ::PROTOBUF_NAMESPACE_ID::int32 sred_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_DZ_2eproto;
};
// -------------------------------------------------------------------

class StudentsGroup final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:DZ.StudentsGroup) */ {
 public:
  inline StudentsGroup() : StudentsGroup(nullptr) {}
  ~StudentsGroup() override;
  explicit constexpr StudentsGroup(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  StudentsGroup(const StudentsGroup& from);
  StudentsGroup(StudentsGroup&& from) noexcept
    : StudentsGroup() {
    *this = ::std::move(from);
  }

  inline StudentsGroup& operator=(const StudentsGroup& from) {
    CopyFrom(from);
    return *this;
  }
  inline StudentsGroup& operator=(StudentsGroup&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const StudentsGroup& default_instance() {
    return *internal_default_instance();
  }
  static inline const StudentsGroup* internal_default_instance() {
    return reinterpret_cast<const StudentsGroup*>(
               &_StudentsGroup_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(StudentsGroup& a, StudentsGroup& b) {
    a.Swap(&b);
  }
  inline void Swap(StudentsGroup* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(StudentsGroup* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline StudentsGroup* New() const final {
    return new StudentsGroup();
  }

  StudentsGroup* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<StudentsGroup>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const StudentsGroup& from);
  void MergeFrom(const StudentsGroup& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(StudentsGroup* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "DZ.StudentsGroup";
  }
  protected:
  explicit StudentsGroup(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kStudentsFieldNumber = 7,
  };
  // repeated .DZ.Student students = 7;
  int students_size() const;
  private:
  int _internal_students_size() const;
  public:
  void clear_students();
  ::DZ::Student* mutable_students(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::DZ::Student >*
      mutable_students();
  private:
  const ::DZ::Student& _internal_students(int index) const;
  ::DZ::Student* _internal_add_students();
  public:
  const ::DZ::Student& students(int index) const;
  ::DZ::Student* add_students();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::DZ::Student >&
      students() const;

  // @@protoc_insertion_point(class_scope:DZ.StudentsGroup)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::DZ::Student > students_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_DZ_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// FullName

// string name = 1;
inline void FullName::clear_name() {
  name_.ClearToEmpty();
}
inline const std::string& FullName::name() const {
  // @@protoc_insertion_point(field_get:DZ.FullName.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void FullName::set_name(ArgT0&& arg0, ArgT... args) {
 
 name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:DZ.FullName.name)
}
inline std::string* FullName::mutable_name() {
  // @@protoc_insertion_point(field_mutable:DZ.FullName.name)
  return _internal_mutable_name();
}
inline const std::string& FullName::_internal_name() const {
  return name_.Get();
}
inline void FullName::_internal_set_name(const std::string& value) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* FullName::_internal_mutable_name() {
  
  return name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* FullName::release_name() {
  // @@protoc_insertion_point(field_release:DZ.FullName.name)
  return name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void FullName::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:DZ.FullName.name)
}

// string sname = 2;
inline void FullName::clear_sname() {
  sname_.ClearToEmpty();
}
inline const std::string& FullName::sname() const {
  // @@protoc_insertion_point(field_get:DZ.FullName.sname)
  return _internal_sname();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void FullName::set_sname(ArgT0&& arg0, ArgT... args) {
 
 sname_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:DZ.FullName.sname)
}
inline std::string* FullName::mutable_sname() {
  // @@protoc_insertion_point(field_mutable:DZ.FullName.sname)
  return _internal_mutable_sname();
}
inline const std::string& FullName::_internal_sname() const {
  return sname_.Get();
}
inline void FullName::_internal_set_sname(const std::string& value) {
  
  sname_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* FullName::_internal_mutable_sname() {
  
  return sname_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* FullName::release_sname() {
  // @@protoc_insertion_point(field_release:DZ.FullName.sname)
  return sname_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void FullName::set_allocated_sname(std::string* sname) {
  if (sname != nullptr) {
    
  } else {
    
  }
  sname_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), sname,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:DZ.FullName.sname)
}

// string tname = 3;
inline void FullName::clear_tname() {
  tname_.ClearToEmpty();
}
inline const std::string& FullName::tname() const {
  // @@protoc_insertion_point(field_get:DZ.FullName.tname)
  return _internal_tname();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void FullName::set_tname(ArgT0&& arg0, ArgT... args) {
 
 tname_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:DZ.FullName.tname)
}
inline std::string* FullName::mutable_tname() {
  // @@protoc_insertion_point(field_mutable:DZ.FullName.tname)
  return _internal_mutable_tname();
}
inline const std::string& FullName::_internal_tname() const {
  return tname_.Get();
}
inline void FullName::_internal_set_tname(const std::string& value) {
  
  tname_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* FullName::_internal_mutable_tname() {
  
  return tname_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* FullName::release_tname() {
  // @@protoc_insertion_point(field_release:DZ.FullName.tname)
  return tname_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void FullName::set_allocated_tname(std::string* tname) {
  if (tname != nullptr) {
    
  } else {
    
  }
  tname_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), tname,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:DZ.FullName.tname)
}

// -------------------------------------------------------------------

// Student

// .DZ.FullName fname = 4;
inline bool Student::_internal_has_fname() const {
  return this != internal_default_instance() && fname_ != nullptr;
}
inline bool Student::has_fname() const {
  return _internal_has_fname();
}
inline void Student::clear_fname() {
  if (GetArenaForAllocation() == nullptr && fname_ != nullptr) {
    delete fname_;
  }
  fname_ = nullptr;
}
inline const ::DZ::FullName& Student::_internal_fname() const {
  const ::DZ::FullName* p = fname_;
  return p != nullptr ? *p : reinterpret_cast<const ::DZ::FullName&>(
      ::DZ::_FullName_default_instance_);
}
inline const ::DZ::FullName& Student::fname() const {
  // @@protoc_insertion_point(field_get:DZ.Student.fname)
  return _internal_fname();
}
inline void Student::unsafe_arena_set_allocated_fname(
    ::DZ::FullName* fname) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(fname_);
  }
  fname_ = fname;
  if (fname) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:DZ.Student.fname)
}
inline ::DZ::FullName* Student::release_fname() {
  
  ::DZ::FullName* temp = fname_;
  fname_ = nullptr;
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::DZ::FullName* Student::unsafe_arena_release_fname() {
  // @@protoc_insertion_point(field_release:DZ.Student.fname)
  
  ::DZ::FullName* temp = fname_;
  fname_ = nullptr;
  return temp;
}
inline ::DZ::FullName* Student::_internal_mutable_fname() {
  
  if (fname_ == nullptr) {
    auto* p = CreateMaybeMessage<::DZ::FullName>(GetArenaForAllocation());
    fname_ = p;
  }
  return fname_;
}
inline ::DZ::FullName* Student::mutable_fname() {
  // @@protoc_insertion_point(field_mutable:DZ.Student.fname)
  return _internal_mutable_fname();
}
inline void Student::set_allocated_fname(::DZ::FullName* fname) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete fname_;
  }
  if (fname) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<::DZ::FullName>::GetOwningArena(fname);
    if (message_arena != submessage_arena) {
      fname = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, fname, submessage_arena);
    }
    
  } else {
    
  }
  fname_ = fname;
  // @@protoc_insertion_point(field_set_allocated:DZ.Student.fname)
}

// repeated int32 ocenki = 5;
inline int Student::_internal_ocenki_size() const {
  return ocenki_.size();
}
inline int Student::ocenki_size() const {
  return _internal_ocenki_size();
}
inline void Student::clear_ocenki() {
  ocenki_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Student::_internal_ocenki(int index) const {
  return ocenki_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Student::ocenki(int index) const {
  // @@protoc_insertion_point(field_get:DZ.Student.ocenki)
  return _internal_ocenki(index);
}
inline void Student::set_ocenki(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
  ocenki_.Set(index, value);
  // @@protoc_insertion_point(field_set:DZ.Student.ocenki)
}
inline void Student::_internal_add_ocenki(::PROTOBUF_NAMESPACE_ID::int32 value) {
  ocenki_.Add(value);
}
inline void Student::add_ocenki(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_add_ocenki(value);
  // @@protoc_insertion_point(field_add:DZ.Student.ocenki)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
Student::_internal_ocenki() const {
  return ocenki_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
Student::ocenki() const {
  // @@protoc_insertion_point(field_list:DZ.Student.ocenki)
  return _internal_ocenki();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
Student::_internal_mutable_ocenki() {
  return &ocenki_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
Student::mutable_ocenki() {
  // @@protoc_insertion_point(field_mutable_list:DZ.Student.ocenki)
  return _internal_mutable_ocenki();
}

// int32 sred = 6;
inline void Student::clear_sred() {
  sred_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Student::_internal_sred() const {
  return sred_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Student::sred() const {
  // @@protoc_insertion_point(field_get:DZ.Student.sred)
  return _internal_sred();
}
inline void Student::_internal_set_sred(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  sred_ = value;
}
inline void Student::set_sred(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_sred(value);
  // @@protoc_insertion_point(field_set:DZ.Student.sred)
}

// -------------------------------------------------------------------

// StudentsGroup

// repeated .DZ.Student students = 7;
inline int StudentsGroup::_internal_students_size() const {
  return students_.size();
}
inline int StudentsGroup::students_size() const {
  return _internal_students_size();
}
inline void StudentsGroup::clear_students() {
  students_.Clear();
}
inline ::DZ::Student* StudentsGroup::mutable_students(int index) {
  // @@protoc_insertion_point(field_mutable:DZ.StudentsGroup.students)
  return students_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::DZ::Student >*
StudentsGroup::mutable_students() {
  // @@protoc_insertion_point(field_mutable_list:DZ.StudentsGroup.students)
  return &students_;
}
inline const ::DZ::Student& StudentsGroup::_internal_students(int index) const {
  return students_.Get(index);
}
inline const ::DZ::Student& StudentsGroup::students(int index) const {
  // @@protoc_insertion_point(field_get:DZ.StudentsGroup.students)
  return _internal_students(index);
}
inline ::DZ::Student* StudentsGroup::_internal_add_students() {
  return students_.Add();
}
inline ::DZ::Student* StudentsGroup::add_students() {
  // @@protoc_insertion_point(field_add:DZ.StudentsGroup.students)
  return _internal_add_students();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::DZ::Student >&
StudentsGroup::students() const {
  // @@protoc_insertion_point(field_list:DZ.StudentsGroup.students)
  return students_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace DZ

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_DZ_2eproto
