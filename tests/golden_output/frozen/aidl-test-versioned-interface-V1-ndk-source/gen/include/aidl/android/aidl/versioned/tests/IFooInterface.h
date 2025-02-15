/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash 9e7be1859820c59d9d55dd133e71a3687b5d2e5b -t --min_sdk_version current --ninja -d out/soong/.intermediates/system/tools/aidl/aidl-test-versioned-interface-V1-ndk-source/gen/staging/android/aidl/versioned/tests/IFooInterface.cpp.d -h out/soong/.intermediates/system/tools/aidl/aidl-test-versioned-interface-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/system/tools/aidl/aidl-test-versioned-interface-V1-ndk-source/gen/staging -Nsystem/tools/aidl/aidl_api/aidl-test-versioned-interface/1 system/tools/aidl/aidl_api/aidl-test-versioned-interface/1/android/aidl/versioned/tests/IFooInterface.aidl
 */
#pragma once

#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include <vector>
#include <android/binder_interface_utils.h>
#include <aidl/android/aidl/versioned/tests/BazUnion.h>
#include <aidl/android/aidl/versioned/tests/Foo.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl::android::aidl::versioned::tests {
class Foo;
}  // namespace aidl::android::aidl::versioned::tests
namespace aidl {
namespace android {
namespace aidl {
namespace versioned {
namespace tests {
class IFooInterfaceDelegator;

class IFooInterface : public ::ndk::ICInterface {
public:
  typedef IFooInterfaceDelegator DefaultDelegator;
  static const char* descriptor;
  IFooInterface();
  virtual ~IFooInterface();

  static inline const int32_t version = 1;
  static inline const std::string hash = "9e7be1859820c59d9d55dd133e71a3687b5d2e5b";
  static constexpr uint32_t TRANSACTION_originalApi = FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_acceptUnionAndReturnString = FIRST_CALL_TRANSACTION + 1;
  static constexpr uint32_t TRANSACTION_ignoreParcelablesAndRepeatInt = FIRST_CALL_TRANSACTION + 2;
  static constexpr uint32_t TRANSACTION_returnsLengthOfFooArray = FIRST_CALL_TRANSACTION + 3;

  static std::shared_ptr<IFooInterface> fromBinder(const ::ndk::SpAIBinder& binder);
  static binder_status_t writeToParcel(AParcel* parcel, const std::shared_ptr<IFooInterface>& instance);
  static binder_status_t readFromParcel(const AParcel* parcel, std::shared_ptr<IFooInterface>* instance);
  static bool setDefaultImpl(const std::shared_ptr<IFooInterface>& impl);
  static const std::shared_ptr<IFooInterface>& getDefaultImpl();
  virtual ::ndk::ScopedAStatus originalApi() = 0;
  virtual ::ndk::ScopedAStatus acceptUnionAndReturnString(const ::aidl::android::aidl::versioned::tests::BazUnion& in_u, std::string* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus ignoreParcelablesAndRepeatInt(const ::aidl::android::aidl::versioned::tests::Foo& in_inFoo, ::aidl::android::aidl::versioned::tests::Foo* in_inoutFoo, ::aidl::android::aidl::versioned::tests::Foo* out_outFoo, int32_t in_value, int32_t* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus returnsLengthOfFooArray(const std::vector<::aidl::android::aidl::versioned::tests::Foo>& in_foos, int32_t* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) = 0;
private:
  static std::shared_ptr<IFooInterface> default_impl;
};
class IFooInterfaceDefault : public IFooInterface {
public:
  ::ndk::ScopedAStatus originalApi() override;
  ::ndk::ScopedAStatus acceptUnionAndReturnString(const ::aidl::android::aidl::versioned::tests::BazUnion& in_u, std::string* _aidl_return) override;
  ::ndk::ScopedAStatus ignoreParcelablesAndRepeatInt(const ::aidl::android::aidl::versioned::tests::Foo& in_inFoo, ::aidl::android::aidl::versioned::tests::Foo* in_inoutFoo, ::aidl::android::aidl::versioned::tests::Foo* out_outFoo, int32_t in_value, int32_t* _aidl_return) override;
  ::ndk::ScopedAStatus returnsLengthOfFooArray(const std::vector<::aidl::android::aidl::versioned::tests::Foo>& in_foos, int32_t* _aidl_return) override;
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) override;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) override;
  ::ndk::SpAIBinder asBinder() override;
  bool isRemote() override;
};
}  // namespace tests
}  // namespace versioned
}  // namespace aidl
}  // namespace android
}  // namespace aidl
