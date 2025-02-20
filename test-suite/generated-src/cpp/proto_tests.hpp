// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from proto.djinni

#pragma once

#include "../../handwritten-src/cpp/optional.hpp"
#include "proto/cpp/test.pb.h"
#include "proto/cpp/test2.pb.h"
#include <cstdint>
#include <expected.hpp>
#include <string>
#include <vector>

namespace testsuite {

struct RecordWithEmbeddedCppProto;
struct RecordWithEmbeddedProto;

class ProtoTests {
public:
    virtual ~ProtoTests() {}

    static std::vector<std::string> protoToStrings(const ::djinni::test::AddressBook & x);

    static ::djinni::test::AddressBook stringsToProto(const std::vector<std::string> & x);

    static std::string embeddedProtoToString(const RecordWithEmbeddedProto & x);

    static RecordWithEmbeddedProto stringToEmbeddedProto(const std::string & x);

    static std::string cppProtoToString(const ::djinni::test2::PersistingState & x);

    static ::djinni::test2::PersistingState stringToCppProto(const std::string & x);

    static std::string embeddedCppProtoToString(const RecordWithEmbeddedCppProto & x);

    static RecordWithEmbeddedCppProto stringToEmbeddedCppProto(const std::string & x);

    static std::vector<std::string> protoListToStrings(const std::vector<::djinni::test::Person> & x);

    static std::vector<::djinni::test::Person> stringsToProtoList(const std::vector<std::string> & x);

    static std::string optionalProtoToString(const std::experimental::optional<::djinni::test::Person> & x);

    static std::experimental::optional<::djinni::test::Person> stringToOptionalProto(const std::string & x);

    static djinni::expected<::djinni::test::Person, int32_t> stringToProtoOutcome(const std::string & x);
};

}  // namespace testsuite
