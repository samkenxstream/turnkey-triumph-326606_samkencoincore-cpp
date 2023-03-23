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
// source: google/appengine/v1/appengine.proto

#include "google/cloud/appengine/v1/domain_mappings_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace appengine_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

DomainMappingsConnectionIdempotencyPolicy::
    ~DomainMappingsConnectionIdempotencyPolicy() = default;

std::unique_ptr<DomainMappingsConnectionIdempotencyPolicy>
DomainMappingsConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<DomainMappingsConnectionIdempotencyPolicy>(*this);
}

Idempotency DomainMappingsConnectionIdempotencyPolicy::ListDomainMappings(
    google::appengine::v1::ListDomainMappingsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency DomainMappingsConnectionIdempotencyPolicy::GetDomainMapping(
    google::appengine::v1::GetDomainMappingRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency DomainMappingsConnectionIdempotencyPolicy::CreateDomainMapping(
    google::appengine::v1::CreateDomainMappingRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DomainMappingsConnectionIdempotencyPolicy::UpdateDomainMapping(
    google::appengine::v1::UpdateDomainMappingRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency DomainMappingsConnectionIdempotencyPolicy::DeleteDomainMapping(
    google::appengine::v1::DeleteDomainMappingRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<DomainMappingsConnectionIdempotencyPolicy>
MakeDefaultDomainMappingsConnectionIdempotencyPolicy() {
  return std::make_unique<DomainMappingsConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_v1
}  // namespace cloud
}  // namespace google
