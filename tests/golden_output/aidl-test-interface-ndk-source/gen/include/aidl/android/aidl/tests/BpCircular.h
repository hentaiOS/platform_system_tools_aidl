/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk -Weverything -Wno-missing-permission-annotation -Werror -t --min_sdk_version current --ninja -d out/soong/.intermediates/system/tools/aidl/aidl-test-interface-ndk-source/gen/staging/android/aidl/tests/ICircular.cpp.d -h out/soong/.intermediates/system/tools/aidl/aidl-test-interface-ndk-source/gen/include/staging -o out/soong/.intermediates/system/tools/aidl/aidl-test-interface-ndk-source/gen/staging -Nsystem/tools/aidl/tests system/tools/aidl/tests/android/aidl/tests/ICircular.aidl
 */
#pragma once

#include "aidl/android/aidl/tests/ICircular.h"

#include <android/binder_ibinder.h>

namespace aidl {
namespace android {
namespace aidl {
namespace tests {
class BpCircular : public ::ndk::BpCInterface<ICircular> {
public:
  explicit BpCircular(const ::ndk::SpAIBinder& binder);
  virtual ~BpCircular();

  ::ndk::ScopedAStatus GetTestService(std::shared_ptr<::aidl::android::aidl::tests::ITestService>* _aidl_return) override;
};
}  // namespace tests
}  // namespace aidl
}  // namespace android
}  // namespace aidl
