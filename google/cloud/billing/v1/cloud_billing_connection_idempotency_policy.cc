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
// source: google/cloud/billing/v1/cloud_billing.proto

#include "google/cloud/billing/v1/cloud_billing_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace billing_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

CloudBillingConnectionIdempotencyPolicy::
    ~CloudBillingConnectionIdempotencyPolicy() = default;

std::unique_ptr<CloudBillingConnectionIdempotencyPolicy>
CloudBillingConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<CloudBillingConnectionIdempotencyPolicy>(*this);
}

Idempotency CloudBillingConnectionIdempotencyPolicy::GetBillingAccount(
    google::cloud::billing::v1::GetBillingAccountRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency CloudBillingConnectionIdempotencyPolicy::ListBillingAccounts(
    google::cloud::billing::v1::ListBillingAccountsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency CloudBillingConnectionIdempotencyPolicy::UpdateBillingAccount(
    google::cloud::billing::v1::UpdateBillingAccountRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudBillingConnectionIdempotencyPolicy::CreateBillingAccount(
    google::cloud::billing::v1::CreateBillingAccountRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency CloudBillingConnectionIdempotencyPolicy::ListProjectBillingInfo(
    google::cloud::billing::v1::ListProjectBillingInfoRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency CloudBillingConnectionIdempotencyPolicy::GetProjectBillingInfo(
    google::cloud::billing::v1::GetProjectBillingInfoRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency CloudBillingConnectionIdempotencyPolicy::UpdateProjectBillingInfo(
    google::cloud::billing::v1::UpdateProjectBillingInfoRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency CloudBillingConnectionIdempotencyPolicy::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency CloudBillingConnectionIdempotencyPolicy::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return request.policy().etag().empty() ? Idempotency::kNonIdempotent
                                         : Idempotency::kIdempotent;
}

Idempotency CloudBillingConnectionIdempotencyPolicy::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Idempotency::kIdempotent;
}

std::unique_ptr<CloudBillingConnectionIdempotencyPolicy>
MakeDefaultCloudBillingConnectionIdempotencyPolicy() {
  return std::make_unique<CloudBillingConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace billing_v1
}  // namespace cloud
}  // namespace google
