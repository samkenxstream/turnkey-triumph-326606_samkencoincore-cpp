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
// source: google/cloud/dialogflow/v2/context.proto

#include "google/cloud/dialogflow_es/contexts_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

ContextsConnectionIdempotencyPolicy::~ContextsConnectionIdempotencyPolicy() =
    default;

std::unique_ptr<ContextsConnectionIdempotencyPolicy>
ContextsConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<ContextsConnectionIdempotencyPolicy>(*this);
}

Idempotency ContextsConnectionIdempotencyPolicy::ListContexts(
    google::cloud::dialogflow::v2::ListContextsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ContextsConnectionIdempotencyPolicy::GetContext(
    google::cloud::dialogflow::v2::GetContextRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ContextsConnectionIdempotencyPolicy::CreateContext(
    google::cloud::dialogflow::v2::CreateContextRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ContextsConnectionIdempotencyPolicy::UpdateContext(
    google::cloud::dialogflow::v2::UpdateContextRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ContextsConnectionIdempotencyPolicy::DeleteContext(
    google::cloud::dialogflow::v2::DeleteContextRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ContextsConnectionIdempotencyPolicy::DeleteAllContexts(
    google::cloud::dialogflow::v2::DeleteAllContextsRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<ContextsConnectionIdempotencyPolicy>
MakeDefaultContextsConnectionIdempotencyPolicy() {
  return std::make_unique<ContextsConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google
