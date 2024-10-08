#ifndef CLP_FFI_JS_CONSTANTS_HPP
#define CLP_FFI_JS_CONSTANTS_HPP

#include <array>
#include <cstddef>
#include <string_view>

namespace clp_ffi_js {
constexpr size_t cLogLevelNone{0};
constexpr size_t cValidLogLevelsBeginIdx{cLogLevelNone + 1};
constexpr std::array<std::string_view, 7> cLogLevelNames{
        "NONE",  // This should not be used.
        "TRACE",
        "DEBUG",
        "INFO",
        "WARN",
        "ERROR",
        "FATAL",
};
}  // namespace clp_ffi_js

#endif  // CLP_FFI_JS_CONSTANTS_HPP
