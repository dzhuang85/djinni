// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from djinni_perf_benchmark.djinni

#include "NativeObjectPlatform.hpp"  // my header

namespace djinni_generated {

NativeObjectPlatform::NativeObjectPlatform() : ::djinni::JniInterface<::snapchat::djinni::benchmark::ObjectPlatform, NativeObjectPlatform>() {}

NativeObjectPlatform::~NativeObjectPlatform() = default;

NativeObjectPlatform::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeObjectPlatform::JavaProxy::~JavaProxy() = default;

void NativeObjectPlatform::JavaProxy::onDone() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeObjectPlatform>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_onDone);
    ::djinni::jniExceptionCheck(jniEnv);
}

}  // namespace djinni_generated
