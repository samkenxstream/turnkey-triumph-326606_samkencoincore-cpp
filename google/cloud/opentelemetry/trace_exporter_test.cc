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

#include "google/cloud/opentelemetry/trace_exporter.h"
#include "google/cloud/trace/v2/mocks/mock_trace_connection.h"
#include "google/cloud/internal/make_status.h"
#include "google/cloud/version.h"
#include <gmock/gmock.h>
#include <algorithm>
#include <memory>
#include <string>
#include <vector>

namespace google {
namespace cloud {
namespace otel {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

using ::google::devtools::cloudtrace::v2::BatchWriteSpansRequest;
using ::testing::ElementsAre;

std::vector<std::string> SpanNames(BatchWriteSpansRequest const& request) {
  auto const& spans = request.spans();
  std::vector<std::string> names;
  names.reserve(spans.size());
  std::transform(spans.begin(), spans.end(), std::back_inserter(names),
                 [](auto const& span) { return span.display_name().value(); });
  return names;
}

TEST(TraceExporter, Success) {
  auto mock = std::make_shared<trace_v2_mocks::MockTraceServiceConnection>();
  EXPECT_CALL(*mock, BatchWriteSpans)
      .WillOnce([](BatchWriteSpansRequest const& request) {
        EXPECT_EQ(request.name(), "projects/test-project");
        EXPECT_THAT(SpanNames(request), ElementsAre("span-1", "span-2"));
        return Status();
      });

  auto exporter = otel_internal::MakeTraceExporter(Project("test-project"),
                                                   std::move(mock));

  std::vector<std::unique_ptr<opentelemetry::sdk::trace::Recordable>> v;
  v.emplace_back(exporter->MakeRecordable());
  v.back()->SetName("span-1");
  v.emplace_back(exporter->MakeRecordable());
  v.back()->SetName("span-2");

  auto result = exporter->Export({v.data(), v.size()});
  EXPECT_EQ(result, opentelemetry::sdk::common::ExportResult::kSuccess);
}

TEST(TraceExporter, Failure) {
  auto mock = std::make_shared<trace_v2_mocks::MockTraceServiceConnection>();
  EXPECT_CALL(*mock, BatchWriteSpans)
      .WillOnce([](BatchWriteSpansRequest const& request) {
        EXPECT_EQ(request.name(), "projects/test-project");
        EXPECT_THAT(SpanNames(request), ElementsAre("span"));
        return internal::AbortedError("fail");
      });

  auto exporter = otel_internal::MakeTraceExporter(Project("test-project"),
                                                   std::move(mock));

  auto recordable = exporter->MakeRecordable();
  recordable->SetName("span");

  auto result = exporter->Export({&recordable, 1});
  EXPECT_EQ(result, opentelemetry::sdk::common::ExportResult::kFailure);
}

}  // namespace
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace otel
}  // namespace cloud
}  // namespace google
