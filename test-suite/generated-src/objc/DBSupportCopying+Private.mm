// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from nscopying.djinni

#import "DBSupportCopying+Private.h"
#import "DJIMarshal+Private.h"
#include <cassert>

namespace djinni_generated {

auto SupportCopying::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::I32::toCpp(obj.x)};
}

auto SupportCopying::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[DBSupportCopying alloc] initWithX:(::djinni::I32::fromCpp(cpp.x))];
}

}  // namespace djinni_generated
