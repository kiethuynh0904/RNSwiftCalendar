///
/// HybridCalendarSpec.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#include "HybridCalendarSpec.hpp"

namespace margelo::nitro::calendar {

  void HybridCalendarSpec::loadHybridMethods() {
    // load base methods/properties
    HybridObject::loadHybridMethods();
    // load custom methods/properties
    registerHybrids(this, [](Prototype& prototype) {
      prototype.registerHybridGetter("colorScheme", &HybridCalendarSpec::getColorScheme);
      prototype.registerHybridSetter("colorScheme", &HybridCalendarSpec::setColorScheme);
      prototype.registerHybridGetter("isBlue", &HybridCalendarSpec::getIsBlue);
      prototype.registerHybridSetter("isBlue", &HybridCalendarSpec::setIsBlue);
      prototype.registerHybridGetter("someCallback", &HybridCalendarSpec::getSomeCallback);
      prototype.registerHybridSetter("someCallback", &HybridCalendarSpec::setSomeCallback);
      prototype.registerHybridMethod("someMethod", &HybridCalendarSpec::someMethod);
    });
  }

} // namespace margelo::nitro::calendar
