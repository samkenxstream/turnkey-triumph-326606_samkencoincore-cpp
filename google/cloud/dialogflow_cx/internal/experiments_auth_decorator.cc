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
// source: google/cloud/dialogflow/cx/v3/experiment.proto

#include "google/cloud/dialogflow_cx/internal/experiments_auth_decorator.h"
#include <google/cloud/dialogflow/cx/v3/experiment.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ExperimentsAuth::ExperimentsAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<ExperimentsStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::dialogflow::cx::v3::ListExperimentsResponse>
ExperimentsAuth::ListExperiments(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::ListExperimentsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListExperiments(context, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::Experiment>
ExperimentsAuth::GetExperiment(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::GetExperimentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetExperiment(context, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::Experiment>
ExperimentsAuth::CreateExperiment(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::CreateExperimentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateExperiment(context, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::Experiment>
ExperimentsAuth::UpdateExperiment(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::UpdateExperimentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateExperiment(context, request);
}

Status ExperimentsAuth::DeleteExperiment(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::DeleteExperimentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteExperiment(context, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::Experiment>
ExperimentsAuth::StartExperiment(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::StartExperimentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->StartExperiment(context, request);
}

StatusOr<google::cloud::dialogflow::cx::v3::Experiment>
ExperimentsAuth::StopExperiment(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::StopExperimentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->StopExperiment(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
