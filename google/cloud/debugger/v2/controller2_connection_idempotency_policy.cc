// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/devtools/clouddebugger/v2/controller.proto

#include "google/cloud/debugger/v2/controller2_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace debugger_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

Controller2ConnectionIdempotencyPolicy::
    ~Controller2ConnectionIdempotencyPolicy() = default;

std::unique_ptr<Controller2ConnectionIdempotencyPolicy>
Controller2ConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<Controller2ConnectionIdempotencyPolicy>(*this);
}

Idempotency Controller2ConnectionIdempotencyPolicy::RegisterDebuggee(
    google::devtools::clouddebugger::v2::RegisterDebuggeeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency Controller2ConnectionIdempotencyPolicy::ListActiveBreakpoints(
    google::devtools::clouddebugger::v2::ListActiveBreakpointsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency Controller2ConnectionIdempotencyPolicy::UpdateActiveBreakpoint(
    google::devtools::clouddebugger::v2::UpdateActiveBreakpointRequest const&) {
  return Idempotency::kIdempotent;
}

std::unique_ptr<Controller2ConnectionIdempotencyPolicy>
MakeDefaultController2ConnectionIdempotencyPolicy() {
  return std::make_unique<Controller2ConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace debugger_v2
}  // namespace cloud
}  // namespace google
