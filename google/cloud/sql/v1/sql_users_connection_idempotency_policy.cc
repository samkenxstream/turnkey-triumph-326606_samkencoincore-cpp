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
// source: google/cloud/sql/v1/cloud_sql_users.proto

#include "google/cloud/sql/v1/sql_users_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace sql_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

SqlUsersServiceConnectionIdempotencyPolicy::
    ~SqlUsersServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<SqlUsersServiceConnectionIdempotencyPolicy>
SqlUsersServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<SqlUsersServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency SqlUsersServiceConnectionIdempotencyPolicy::Delete(
    google::cloud::sql::v1::SqlUsersDeleteRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SqlUsersServiceConnectionIdempotencyPolicy::Insert(
    google::cloud::sql::v1::SqlUsersInsertRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SqlUsersServiceConnectionIdempotencyPolicy::List(
    google::cloud::sql::v1::SqlUsersListRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency SqlUsersServiceConnectionIdempotencyPolicy::Update(
    google::cloud::sql::v1::SqlUsersUpdateRequest const&) {
  return Idempotency::kIdempotent;
}

std::unique_ptr<SqlUsersServiceConnectionIdempotencyPolicy>
MakeDefaultSqlUsersServiceConnectionIdempotencyPolicy() {
  return std::make_unique<SqlUsersServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace sql_v1
}  // namespace cloud
}  // namespace google
