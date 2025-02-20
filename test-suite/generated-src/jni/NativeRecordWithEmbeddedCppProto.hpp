// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from proto.djinni

#pragma once

#include "RecordWithEmbeddedCppProto.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeRecordWithEmbeddedCppProto final {
public:
    using CppType = ::testsuite::RecordWithEmbeddedCppProto;
    using JniType = jobject;

    using Boxed = NativeRecordWithEmbeddedCppProto;

    ~NativeRecordWithEmbeddedCppProto();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeRecordWithEmbeddedCppProto();
    friend ::djinni::JniClass<NativeRecordWithEmbeddedCppProto>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/dropbox/djinni/test/RecordWithEmbeddedCppProto") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Ldjinni/test2/Test2$PersistingState;)V") };
    const jfieldID field_mState { ::djinni::jniGetFieldID(clazz.get(), "mState", "Ldjinni/test2/Test2$PersistingState;") };
};

}  // namespace djinni_generated
