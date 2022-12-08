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
// source: google/cloud/bigquery/datapolicies/v1/datapolicy.proto

#include "google/cloud/bigquery/internal/data_policy_auth_decorator.h"
#include <google/cloud/bigquery/datapolicies/v1/datapolicy.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DataPolicyServiceAuth::DataPolicyServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<DataPolicyServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::bigquery::datapolicies::v1::DataPolicy>
DataPolicyServiceAuth::CreateDataPolicy(
    grpc::ClientContext& context,
    google::cloud::bigquery::datapolicies::v1::CreateDataPolicyRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateDataPolicy(context, request);
}

StatusOr<google::cloud::bigquery::datapolicies::v1::DataPolicy>
DataPolicyServiceAuth::UpdateDataPolicy(
    grpc::ClientContext& context,
    google::cloud::bigquery::datapolicies::v1::UpdateDataPolicyRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateDataPolicy(context, request);
}

StatusOr<google::cloud::bigquery::datapolicies::v1::DataPolicy>
DataPolicyServiceAuth::RenameDataPolicy(
    grpc::ClientContext& context,
    google::cloud::bigquery::datapolicies::v1::RenameDataPolicyRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->RenameDataPolicy(context, request);
}

Status DataPolicyServiceAuth::DeleteDataPolicy(
    grpc::ClientContext& context,
    google::cloud::bigquery::datapolicies::v1::DeleteDataPolicyRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteDataPolicy(context, request);
}

StatusOr<google::cloud::bigquery::datapolicies::v1::DataPolicy>
DataPolicyServiceAuth::GetDataPolicy(
    grpc::ClientContext& context,
    google::cloud::bigquery::datapolicies::v1::GetDataPolicyRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetDataPolicy(context, request);
}

StatusOr<google::cloud::bigquery::datapolicies::v1::ListDataPoliciesResponse>
DataPolicyServiceAuth::ListDataPolicies(
    grpc::ClientContext& context,
    google::cloud::bigquery::datapolicies::v1::ListDataPoliciesRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListDataPolicies(context, request);
}

StatusOr<google::iam::v1::Policy> DataPolicyServiceAuth::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetIamPolicy(context, request);
}

StatusOr<google::iam::v1::Policy> DataPolicyServiceAuth::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SetIamPolicy(context, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DataPolicyServiceAuth::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->TestIamPermissions(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_internal
}  // namespace cloud
}  // namespace google
