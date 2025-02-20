// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from djinni_perf_benchmark.djinni

#pragma once

#include "ObjectPlatform.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeObjectPlatform final : ::djinni::JniInterface<::snapchat::djinni::benchmark::ObjectPlatform, NativeObjectPlatform> {
public:
    using CppType = std::shared_ptr<::snapchat::djinni::benchmark::ObjectPlatform>;
    using CppOptType = std::shared_ptr<::snapchat::djinni::benchmark::ObjectPlatform>;
    using JniType = jobject;

    using Boxed = NativeObjectPlatform;

    ~NativeObjectPlatform();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeObjectPlatform>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeObjectPlatform>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeObjectPlatform();
    friend ::djinni::JniClass<NativeObjectPlatform>;
    friend ::djinni::JniInterface<::snapchat::djinni::benchmark::ObjectPlatform, NativeObjectPlatform>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::snapchat::djinni::benchmark::ObjectPlatform
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        void onDone() override;

    private:
        friend ::djinni::JniInterface<::snapchat::djinni::benchmark::ObjectPlatform, ::djinni_generated::NativeObjectPlatform>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/snapchat/djinni/benchmark/ObjectPlatform") };
    const jmethodID method_onDone { ::djinni::jniGetMethodID(clazz.get(), "onDone", "()V") };
};

}  // namespace djinni_generated
