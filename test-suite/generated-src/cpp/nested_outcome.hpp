// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from outcome.djinni

#pragma once

#include <cstdint>
#include <expected.hpp>
#include <string>
#include <utility>

namespace testsuite {

struct NestedOutcome final {
    djinni::expected<int32_t, std::string> o;

    friend bool operator==(const NestedOutcome& lhs, const NestedOutcome& rhs);
    friend bool operator!=(const NestedOutcome& lhs, const NestedOutcome& rhs);

    NestedOutcome(djinni::expected<int32_t, std::string> o_)
    : o(std::move(o_))
    {}
};

}  // namespace testsuite
