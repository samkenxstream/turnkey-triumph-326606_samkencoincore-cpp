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
// source: google/cloud/beyondcorp/appgateways/v1/app_gateways_service.proto

#include "google/cloud/beyondcorp/appgateways/v1/app_gateways_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace beyondcorp_appgateways_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

AppGatewaysServiceConnectionIdempotencyPolicy::
    ~AppGatewaysServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<AppGatewaysServiceConnectionIdempotencyPolicy>
AppGatewaysServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<AppGatewaysServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency AppGatewaysServiceConnectionIdempotencyPolicy::ListAppGateways(
    google::cloud::beyondcorp::appgateways::v1::
        ListAppGatewaysRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency AppGatewaysServiceConnectionIdempotencyPolicy::GetAppGateway(
    google::cloud::beyondcorp::appgateways::v1::GetAppGatewayRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AppGatewaysServiceConnectionIdempotencyPolicy::CreateAppGateway(
    google::cloud::beyondcorp::appgateways::v1::
        CreateAppGatewayRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AppGatewaysServiceConnectionIdempotencyPolicy::DeleteAppGateway(
    google::cloud::beyondcorp::appgateways::v1::
        DeleteAppGatewayRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<AppGatewaysServiceConnectionIdempotencyPolicy>
MakeDefaultAppGatewaysServiceConnectionIdempotencyPolicy() {
  return std::make_unique<AppGatewaysServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_appgateways_v1
}  // namespace cloud
}  // namespace google
