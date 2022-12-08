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

#include "google/cloud/bigquery/internal/data_policy_option_defaults.h"
#include "google/cloud/bigquery/data_policy_connection.h"
#include "google/cloud/bigquery/data_policy_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options DataPolicyServiceDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_DATA_POLICY_SERVICE_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_DATA_POLICY_SERVICE_AUTHORITY",
      "bigquerydatapolicy.googleapis.com");
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options.has<bigquery::DataPolicyServiceRetryPolicyOption>()) {
    options.set<bigquery::DataPolicyServiceRetryPolicyOption>(
        bigquery::DataPolicyServiceLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<bigquery::DataPolicyServiceBackoffPolicyOption>()) {
    options.set<bigquery::DataPolicyServiceBackoffPolicyOption>(
        ExponentialBackoffPolicy(std::chrono::seconds(1),
                                 std::chrono::minutes(5), kBackoffScaling)
            .clone());
  }
  if (!options.has<
          bigquery::DataPolicyServiceConnectionIdempotencyPolicyOption>()) {
    options.set<bigquery::DataPolicyServiceConnectionIdempotencyPolicyOption>(
        bigquery::MakeDefaultDataPolicyServiceConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_internal
}  // namespace cloud
}  // namespace google
