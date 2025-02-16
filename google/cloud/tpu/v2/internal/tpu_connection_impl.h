// Copyright 2023 Google LLC
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
// source: google/cloud/tpu/v2/cloud_tpu.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_V2_INTERNAL_TPU_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_V2_INTERNAL_TPU_CONNECTION_IMPL_H

#include "google/cloud/tpu/v2/internal/tpu_retry_traits.h"
#include "google/cloud/tpu/v2/internal/tpu_stub.h"
#include "google/cloud/tpu/v2/tpu_connection.h"
#include "google/cloud/tpu/v2/tpu_connection_idempotency_policy.h"
#include "google/cloud/tpu/v2/tpu_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace tpu_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TpuConnectionImpl : public tpu_v2::TpuConnection {
 public:
  ~TpuConnectionImpl() override = default;

  TpuConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<tpu_v2_internal::TpuStub> stub, Options options);

  Options options() override { return options_; }

  StreamRange<google::cloud::tpu::v2::Node> ListNodes(
      google::cloud::tpu::v2::ListNodesRequest request) override;

  StatusOr<google::cloud::tpu::v2::Node> GetNode(
      google::cloud::tpu::v2::GetNodeRequest const& request) override;

  future<StatusOr<google::cloud::tpu::v2::Node>> CreateNode(
      google::cloud::tpu::v2::CreateNodeRequest const& request) override;

  future<StatusOr<google::cloud::tpu::v2::OperationMetadata>> DeleteNode(
      google::cloud::tpu::v2::DeleteNodeRequest const& request) override;

  future<StatusOr<google::cloud::tpu::v2::Node>> StopNode(
      google::cloud::tpu::v2::StopNodeRequest const& request) override;

  future<StatusOr<google::cloud::tpu::v2::Node>> StartNode(
      google::cloud::tpu::v2::StartNodeRequest const& request) override;

  future<StatusOr<google::cloud::tpu::v2::Node>> UpdateNode(
      google::cloud::tpu::v2::UpdateNodeRequest const& request) override;

  StatusOr<google::cloud::tpu::v2::GenerateServiceIdentityResponse>
  GenerateServiceIdentity(
      google::cloud::tpu::v2::GenerateServiceIdentityRequest const& request)
      override;

  StreamRange<google::cloud::tpu::v2::AcceleratorType> ListAcceleratorTypes(
      google::cloud::tpu::v2::ListAcceleratorTypesRequest request) override;

  StatusOr<google::cloud::tpu::v2::AcceleratorType> GetAcceleratorType(
      google::cloud::tpu::v2::GetAcceleratorTypeRequest const& request)
      override;

  StreamRange<google::cloud::tpu::v2::RuntimeVersion> ListRuntimeVersions(
      google::cloud::tpu::v2::ListRuntimeVersionsRequest request) override;

  StatusOr<google::cloud::tpu::v2::RuntimeVersion> GetRuntimeVersion(
      google::cloud::tpu::v2::GetRuntimeVersionRequest const& request) override;

  StatusOr<google::cloud::tpu::v2::GetGuestAttributesResponse>
  GetGuestAttributes(google::cloud::tpu::v2::GetGuestAttributesRequest const&
                         request) override;

 private:
  std::unique_ptr<tpu_v2::TpuRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<tpu_v2::TpuRetryPolicyOption>()) {
      return options.get<tpu_v2::TpuRetryPolicyOption>()->clone();
    }
    return options_.get<tpu_v2::TpuRetryPolicyOption>()->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<tpu_v2::TpuBackoffPolicyOption>()) {
      return options.get<tpu_v2::TpuBackoffPolicyOption>()->clone();
    }
    return options_.get<tpu_v2::TpuBackoffPolicyOption>()->clone();
  }

  std::unique_ptr<tpu_v2::TpuConnectionIdempotencyPolicy> idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<tpu_v2::TpuConnectionIdempotencyPolicyOption>()) {
      return options.get<tpu_v2::TpuConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_.get<tpu_v2::TpuConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<tpu_v2::TpuPollingPolicyOption>()) {
      return options.get<tpu_v2::TpuPollingPolicyOption>()->clone();
    }
    return options_.get<tpu_v2::TpuPollingPolicyOption>()->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<tpu_v2_internal::TpuStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tpu_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_V2_INTERNAL_TPU_CONNECTION_IMPL_H
