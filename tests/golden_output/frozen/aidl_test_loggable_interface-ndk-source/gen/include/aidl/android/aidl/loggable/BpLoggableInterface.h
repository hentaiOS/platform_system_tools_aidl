/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk -Weverything -Wno-missing-permission-annotation -Werror -t --min_sdk_version current --log --ninja -d out/soong/.intermediates/system/tools/aidl/aidl_test_loggable_interface-ndk-source/gen/staging/android/aidl/loggable/ILoggableInterface.cpp.d -h out/soong/.intermediates/system/tools/aidl/aidl_test_loggable_interface-ndk-source/gen/include/staging -o out/soong/.intermediates/system/tools/aidl/aidl_test_loggable_interface-ndk-source/gen/staging -Nsystem/tools/aidl/tests system/tools/aidl/tests/android/aidl/loggable/ILoggableInterface.aidl
 */
#pragma once

#include "aidl/android/aidl/loggable/ILoggableInterface.h"

#include <android/binder_ibinder.h>
#include <functional>
#include <chrono>
#include <sstream>

namespace aidl {
namespace android {
namespace aidl {
namespace loggable {
class BpLoggableInterface : public ::ndk::BpCInterface<ILoggableInterface> {
public:
  explicit BpLoggableInterface(const ::ndk::SpAIBinder& binder);
  virtual ~BpLoggableInterface();

  ::ndk::ScopedAStatus LogThis(bool in_boolValue, std::vector<bool>* in_boolArray, int8_t in_byteValue, std::vector<uint8_t>* in_byteArray, char16_t in_charValue, std::vector<char16_t>* in_charArray, int32_t in_intValue, std::vector<int32_t>* in_intArray, int64_t in_longValue, std::vector<int64_t>* in_longArray, float in_floatValue, std::vector<float>* in_floatArray, double in_doubleValue, std::vector<double>* in_doubleArray, const std::string& in_stringValue, std::vector<std::string>* in_stringArray, std::vector<std::string>* in_listValue, const ::aidl::android::aidl::loggable::Data& in_dataValue, const ::ndk::SpAIBinder& in_binderValue, ::ndk::ScopedFileDescriptor* in_pfdValue, std::vector<::ndk::ScopedFileDescriptor>* in_pfdArray, std::vector<std::string>* _aidl_return) override;
  struct TransactionLog {
    double duration_ms;
    std::string interface_name;
    std::string method_name;
    const void* proxy_address;
    const void* stub_address;
    std::vector<std::pair<std::string, std::string>> input_args;
    std::vector<std::pair<std::string, std::string>> output_args;
    std::string result;
    std::string exception_message;
    int32_t exception_code;
    int32_t transaction_error;
    int32_t service_specific_error_code;
  };
  static std::function<void(const TransactionLog&)> logFunc;
};
}  // namespace loggable
}  // namespace aidl
}  // namespace android
}  // namespace aidl
