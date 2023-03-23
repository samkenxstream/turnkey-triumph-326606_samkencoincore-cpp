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
// source: google/cloud/pubsublite/v1/topic_stats.proto

#include "google/cloud/pubsublite/topic_stats_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace pubsublite {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

TopicStatsServiceConnectionIdempotencyPolicy::
    ~TopicStatsServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<TopicStatsServiceConnectionIdempotencyPolicy>
TopicStatsServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<TopicStatsServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency TopicStatsServiceConnectionIdempotencyPolicy::ComputeMessageStats(
    google::cloud::pubsublite::v1::ComputeMessageStatsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency TopicStatsServiceConnectionIdempotencyPolicy::ComputeHeadCursor(
    google::cloud::pubsublite::v1::ComputeHeadCursorRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency TopicStatsServiceConnectionIdempotencyPolicy::ComputeTimeCursor(
    google::cloud::pubsublite::v1::ComputeTimeCursorRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<TopicStatsServiceConnectionIdempotencyPolicy>
MakeDefaultTopicStatsServiceConnectionIdempotencyPolicy() {
  return std::make_unique<TopicStatsServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsublite
}  // namespace cloud
}  // namespace google
