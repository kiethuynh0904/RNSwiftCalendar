///
/// JHybridCalendarSpec.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#include "JHybridCalendarSpec.hpp"

// Forward declaration of `ColorScheme` to properly resolve imports.
namespace margelo::nitro::calendar { enum class ColorScheme; }

#include "ColorScheme.hpp"
#include "JColorScheme.hpp"
#include <functional>
#include "JFunc_void.hpp"

namespace margelo::nitro::calendar {

  jni::local_ref<JHybridCalendarSpec::jhybriddata> JHybridCalendarSpec::initHybrid(jni::alias_ref<jhybridobject> jThis) {
    return makeCxxInstance(jThis);
  }

  void JHybridCalendarSpec::registerNatives() {
    registerHybrid({
      makeNativeMethod("initHybrid", JHybridCalendarSpec::initHybrid),
    });
  }

  size_t JHybridCalendarSpec::getExternalMemorySize() noexcept {
    static const auto method = javaClassStatic()->getMethod<jlong()>("getMemorySize");
    return method(_javaPart);
  }

  // Properties
  ColorScheme JHybridCalendarSpec::getColorScheme() {
    static const auto method = javaClassStatic()->getMethod<jni::local_ref<JColorScheme>()>("getColorScheme");
    auto __result = method(_javaPart);
    return __result->toCpp();
  }
  void JHybridCalendarSpec::setColorScheme(ColorScheme colorScheme) {
    static const auto method = javaClassStatic()->getMethod<void(jni::alias_ref<JColorScheme> /* colorScheme */)>("setColorScheme");
    method(_javaPart, JColorScheme::fromCpp(colorScheme));
  }
  bool JHybridCalendarSpec::getIsBlue() {
    static const auto method = javaClassStatic()->getMethod<jboolean()>("isBlue");
    auto __result = method(_javaPart);
    return static_cast<bool>(__result);
  }
  void JHybridCalendarSpec::setIsBlue(bool isBlue) {
    static const auto method = javaClassStatic()->getMethod<void(jboolean /* isBlue */)>("setBlue");
    method(_javaPart, isBlue);
  }
  std::function<void()> JHybridCalendarSpec::getSomeCallback() {
    static const auto method = javaClassStatic()->getMethod<jni::local_ref<JFunc_void::javaobject>()>("getSomeCallback_cxx");
    auto __result = method(_javaPart);
    return [&]() -> std::function<void()> {
      if (__result->isInstanceOf(JFunc_void_cxx::javaClassStatic())) [[likely]] {
        auto downcast = jni::static_ref_cast<JFunc_void_cxx::javaobject>(__result);
        return downcast->cthis()->getFunction();
      } else {
        return [__result]() -> void {
          return __result->invoke();
        };
      }
    }();
  }
  void JHybridCalendarSpec::setSomeCallback(const std::function<void()>& someCallback) {
    static const auto method = javaClassStatic()->getMethod<void(jni::alias_ref<JFunc_void::javaobject> /* someCallback */)>("setSomeCallback_cxx");
    method(_javaPart, JFunc_void_cxx::fromCpp(someCallback));
  }

  // Methods
  void JHybridCalendarSpec::someMethod() {
    static const auto method = javaClassStatic()->getMethod<void()>("someMethod");
    method(_javaPart);
  }

} // namespace margelo::nitro::calendar
