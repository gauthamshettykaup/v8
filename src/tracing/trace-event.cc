// Copyright 2015 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "src/tracing/trace-event.h"

#include "src/v8.h"

namespace v8 {
namespace internal {
namespace tracing {

// A global flag used as a shortcut to check for the
// v8.runtime category due to its high frequency use.
int kRuntimeCallsTracingEnabled = 0;

v8::Platform* TraceEventHelper::GetCurrentPlatform() {
  return v8::internal::V8::GetCurrentPlatform();
}

}  // namespace tracing
}  // namespace internal
}  // namespace v8
