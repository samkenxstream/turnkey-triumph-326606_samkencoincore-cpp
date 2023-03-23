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

#include "google/cloud/dialogflow_cx/experiments_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

ExperimentsConnectionIdempotencyPolicy::
    ~ExperimentsConnectionIdempotencyPolicy() = default;

std::unique_ptr<ExperimentsConnectionIdempotencyPolicy>
ExperimentsConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<ExperimentsConnectionIdempotencyPolicy>(*this);
}

Idempotency ExperimentsConnectionIdempotencyPolicy::ListExperiments(
    google::cloud::dialogflow::cx::v3::ListExperimentsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ExperimentsConnectionIdempotencyPolicy::GetExperiment(
    google::cloud::dialogflow::cx::v3::GetExperimentRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ExperimentsConnectionIdempotencyPolicy::CreateExperiment(
    google::cloud::dialogflow::cx::v3::CreateExperimentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ExperimentsConnectionIdempotencyPolicy::UpdateExperiment(
    google::cloud::dialogflow::cx::v3::UpdateExperimentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ExperimentsConnectionIdempotencyPolicy::DeleteExperiment(
    google::cloud::dialogflow::cx::v3::DeleteExperimentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ExperimentsConnectionIdempotencyPolicy::StartExperiment(
    google::cloud::dialogflow::cx::v3::StartExperimentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ExperimentsConnectionIdempotencyPolicy::StopExperiment(
    google::cloud::dialogflow::cx::v3::StopExperimentRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<ExperimentsConnectionIdempotencyPolicy>
MakeDefaultExperimentsConnectionIdempotencyPolicy() {
  return std::make_unique<ExperimentsConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google
