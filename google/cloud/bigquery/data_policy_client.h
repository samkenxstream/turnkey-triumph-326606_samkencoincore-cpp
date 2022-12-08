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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_DATA_POLICY_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_DATA_POLICY_CLIENT_H

#include "google/cloud/bigquery/data_policy_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Data Policy Service provides APIs for managing the label-policy bindings.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class DataPolicyServiceClient {
 public:
  explicit DataPolicyServiceClient(
      std::shared_ptr<DataPolicyServiceConnection> connection,
      Options opts = {});
  ~DataPolicyServiceClient();

  ///@{
  // @name Copy and move support
  DataPolicyServiceClient(DataPolicyServiceClient const&) = default;
  DataPolicyServiceClient& operator=(DataPolicyServiceClient const&) = default;
  DataPolicyServiceClient(DataPolicyServiceClient&&) = default;
  DataPolicyServiceClient& operator=(DataPolicyServiceClient&&) = default;
  ///@}

  ///@{
  // @name Equality
  friend bool operator==(DataPolicyServiceClient const& a,
                         DataPolicyServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(DataPolicyServiceClient const& a,
                         DataPolicyServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Creates a new data policy under a project with the given `dataPolicyId`
  /// (used as the display name), policy tag, and data policy type.
  ///
  /// @param parent  Required. Resource name of the project that the data policy
  /// will belong to.
  ///  The format is `projects/{project_number}/locations/{location_id}`.
  /// @param data_policy  Required. The data policy to create. The `name` field
  /// does not need to be
  ///  provided for the data policy creation.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::datapolicies::v1::DataPolicy,google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L234}
  ///
  /// [google.cloud.bigquery.datapolicies.v1.CreateDataPolicyRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L127}
  /// [google.cloud.bigquery.datapolicies.v1.DataPolicy]:
  /// @googleapis_reference_link{google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L234}
  ///
  StatusOr<google::cloud::bigquery::datapolicies::v1::DataPolicy>
  CreateDataPolicy(
      std::string const& parent,
      google::cloud::bigquery::datapolicies::v1::DataPolicy const& data_policy,
      Options opts = {});

  ///
  /// Creates a new data policy under a project with the given `dataPolicyId`
  /// (used as the display name), policy tag, and data policy type.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::datapolicies::v1::CreateDataPolicyRequest,google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L127}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::datapolicies::v1::DataPolicy,google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L234}
  ///
  /// [google.cloud.bigquery.datapolicies.v1.CreateDataPolicyRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L127}
  /// [google.cloud.bigquery.datapolicies.v1.DataPolicy]:
  /// @googleapis_reference_link{google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L234}
  ///
  StatusOr<google::cloud::bigquery::datapolicies::v1::DataPolicy>
  CreateDataPolicy(
      google::cloud::bigquery::datapolicies::v1::CreateDataPolicyRequest const&
          request,
      Options opts = {});

  ///
  /// Updates the metadata for an existing data policy. The target data policy
  /// can be specified by the resource name.
  ///
  /// @param data_policy  Required. Update the data policy's metadata.
  ///  The target data policy is determined by the `name` field.
  ///  Other fields are updated to the specified values based on the field
  ///  masks.
  /// @param update_mask  The update mask applies to the resource. For the
  /// `FieldMask` definition,
  ///  see
  ///  https://developers.google.com/protocol-buffers/docs/reference/google.protobuf#fieldmask
  ///  If not set, defaults to all of the fields that are allowed to update.
  ///  Updates to the `name` and `dataPolicyId` fields are not allowed.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::datapolicies::v1::DataPolicy,google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L234}
  ///
  /// [google.cloud.bigquery.datapolicies.v1.UpdateDataPolicyRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L143}
  /// [google.cloud.bigquery.datapolicies.v1.DataPolicy]:
  /// @googleapis_reference_link{google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L234}
  ///
  StatusOr<google::cloud::bigquery::datapolicies::v1::DataPolicy>
  UpdateDataPolicy(
      google::cloud::bigquery::datapolicies::v1::DataPolicy const& data_policy,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates the metadata for an existing data policy. The target data policy
  /// can be specified by the resource name.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::datapolicies::v1::UpdateDataPolicyRequest,google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L143}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::datapolicies::v1::DataPolicy,google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L234}
  ///
  /// [google.cloud.bigquery.datapolicies.v1.UpdateDataPolicyRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L143}
  /// [google.cloud.bigquery.datapolicies.v1.DataPolicy]:
  /// @googleapis_reference_link{google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L234}
  ///
  StatusOr<google::cloud::bigquery::datapolicies::v1::DataPolicy>
  UpdateDataPolicy(
      google::cloud::bigquery::datapolicies::v1::UpdateDataPolicyRequest const&
          request,
      Options opts = {});

  ///
  /// Renames the id (display name) of the specified data policy.
  ///
  /// @param name  Required. Resource name of the data policy to rename. The
  /// format is
  ///  `projects/{project_number}/locations/{location_id}/dataPolicies/{data_policy_id}`
  /// @param new_data_policy_id  Required. The new data policy id.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::datapolicies::v1::DataPolicy,google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L234}
  ///
  /// [google.cloud.bigquery.datapolicies.v1.RenameDataPolicyRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L160}
  /// [google.cloud.bigquery.datapolicies.v1.DataPolicy]:
  /// @googleapis_reference_link{google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L234}
  ///
  StatusOr<google::cloud::bigquery::datapolicies::v1::DataPolicy>
  RenameDataPolicy(std::string const& name,
                   std::string const& new_data_policy_id, Options opts = {});

  ///
  /// Renames the id (display name) of the specified data policy.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::datapolicies::v1::RenameDataPolicyRequest,google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L160}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::datapolicies::v1::DataPolicy,google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L234}
  ///
  /// [google.cloud.bigquery.datapolicies.v1.RenameDataPolicyRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L160}
  /// [google.cloud.bigquery.datapolicies.v1.DataPolicy]:
  /// @googleapis_reference_link{google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L234}
  ///
  StatusOr<google::cloud::bigquery::datapolicies::v1::DataPolicy>
  RenameDataPolicy(
      google::cloud::bigquery::datapolicies::v1::RenameDataPolicyRequest const&
          request,
      Options opts = {});

  ///
  /// Deletes the data policy specified by its resource name.
  ///
  /// @param name  Required. Resource name of the data policy to delete. Format
  /// is
  ///  `projects/{project_number}/locations/{location_id}/dataPolicies/{data_policy_id}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.bigquery.datapolicies.v1.DeleteDataPolicyRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L170}
  ///
  Status DeleteDataPolicy(std::string const& name, Options opts = {});

  ///
  /// Deletes the data policy specified by its resource name.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::datapolicies::v1::DeleteDataPolicyRequest,google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L170}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.bigquery.datapolicies.v1.DeleteDataPolicyRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L170}
  ///
  Status DeleteDataPolicy(
      google::cloud::bigquery::datapolicies::v1::DeleteDataPolicyRequest const&
          request,
      Options opts = {});

  ///
  /// Gets the data policy specified by its resource name.
  ///
  /// @param name  Required. Resource name of the requested data policy. Format
  /// is
  ///  `projects/{project_number}/locations/{location_id}/dataPolicies/{data_policy_id}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::datapolicies::v1::DataPolicy,google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L234}
  ///
  /// [google.cloud.bigquery.datapolicies.v1.GetDataPolicyRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L182}
  /// [google.cloud.bigquery.datapolicies.v1.DataPolicy]:
  /// @googleapis_reference_link{google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L234}
  ///
  StatusOr<google::cloud::bigquery::datapolicies::v1::DataPolicy> GetDataPolicy(
      std::string const& name, Options opts = {});

  ///
  /// Gets the data policy specified by its resource name.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::datapolicies::v1::GetDataPolicyRequest,google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L182}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::datapolicies::v1::DataPolicy,google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L234}
  ///
  /// [google.cloud.bigquery.datapolicies.v1.GetDataPolicyRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L182}
  /// [google.cloud.bigquery.datapolicies.v1.DataPolicy]:
  /// @googleapis_reference_link{google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L234}
  ///
  StatusOr<google::cloud::bigquery::datapolicies::v1::DataPolicy> GetDataPolicy(
      google::cloud::bigquery::datapolicies::v1::GetDataPolicyRequest const&
          request,
      Options opts = {});

  ///
  /// List all of the data policies in the specified parent project.
  ///
  /// @param parent  Required. Resource name of the project for which to list
  /// data policies.
  ///  Format is `projects/{project_number}/locations/{location_id}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::datapolicies::v1::DataPolicy,google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L234}
  ///
  /// [google.cloud.bigquery.datapolicies.v1.ListDataPoliciesRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L194}
  /// [google.cloud.bigquery.datapolicies.v1.DataPolicy]:
  /// @googleapis_reference_link{google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L234}
  ///
  StreamRange<google::cloud::bigquery::datapolicies::v1::DataPolicy>
  ListDataPolicies(std::string const& parent, Options opts = {});

  ///
  /// List all of the data policies in the specified parent project.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::datapolicies::v1::ListDataPoliciesRequest,google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L194}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::datapolicies::v1::DataPolicy,google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L234}
  ///
  /// [google.cloud.bigquery.datapolicies.v1.ListDataPoliciesRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L194}
  /// [google.cloud.bigquery.datapolicies.v1.DataPolicy]:
  /// @googleapis_reference_link{google/cloud/bigquery/datapolicies/v1/datapolicy.proto#L234}
  ///
  StreamRange<google::cloud::bigquery::datapolicies::v1::DataPolicy>
  ListDataPolicies(
      google::cloud::bigquery::datapolicies::v1::ListDataPoliciesRequest
          request,
      Options opts = {});

  ///
  /// Gets the IAM policy for the specified data policy.
  ///
  /// @param request
  /// @googleapis_link{google::iam::v1::GetIamPolicyRequest,google/iam/v1/iam_policy.proto#L123}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::Policy,google/iam/v1/policy.proto#L96}
  ///
  /// [google.iam.v1.GetIamPolicyRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L123}
  /// [google.iam.v1.Policy]:
  /// @googleapis_reference_link{google/iam/v1/policy.proto#L96}
  ///
  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request, Options opts = {});

  ///
  /// Sets the IAM policy for the specified data policy.
  ///
  /// @param request
  /// @googleapis_link{google::iam::v1::SetIamPolicyRequest,google/iam/v1/iam_policy.proto#L101}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::Policy,google/iam/v1/policy.proto#L96}
  ///
  /// [google.iam.v1.SetIamPolicyRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L101}
  /// [google.iam.v1.Policy]:
  /// @googleapis_reference_link{google/iam/v1/policy.proto#L96}
  ///
  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request, Options opts = {});

  ///
  /// Returns the caller's permission on the specified data policy resource.
  ///
  /// @param request
  /// @googleapis_link{google::iam::v1::TestIamPermissionsRequest,google/iam/v1/iam_policy.proto#L136}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::TestIamPermissionsResponse,google/iam/v1/iam_policy.proto#L151}
  ///
  /// [google.iam.v1.TestIamPermissionsRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L136}
  /// [google.iam.v1.TestIamPermissionsResponse]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L151}
  ///
  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<DataPolicyServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_DATA_POLICY_CLIENT_H
