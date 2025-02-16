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
// source: google/cloud/language/v1/language_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LANGUAGE_V1_MOCKS_MOCK_LANGUAGE_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LANGUAGE_V1_MOCKS_MOCK_LANGUAGE_CONNECTION_H

#include "google/cloud/language/v1/language_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace language_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `LanguageServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `LanguageServiceClient`. To do so,
 * construct an object of type `LanguageServiceClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @googleapis_dev_link{bigquery,bigquery-read-mock.html}
 */
class MockLanguageServiceConnection
    : public language_v1::LanguageServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::language::v1::AnalyzeSentimentResponse>,
      AnalyzeSentiment,
      (google::cloud::language::v1::AnalyzeSentimentRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::language::v1::AnalyzeEntitiesResponse>,
      AnalyzeEntities,
      (google::cloud::language::v1::AnalyzeEntitiesRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::language::v1::AnalyzeEntitySentimentResponse>,
      AnalyzeEntitySentiment,
      (google::cloud::language::v1::AnalyzeEntitySentimentRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::language::v1::AnalyzeSyntaxResponse>,
      AnalyzeSyntax,
      (google::cloud::language::v1::AnalyzeSyntaxRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::language::v1::ClassifyTextResponse>,
              ClassifyText,
              (google::cloud::language::v1::ClassifyTextRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::language::v1::AnnotateTextResponse>,
              AnnotateText,
              (google::cloud::language::v1::AnnotateTextRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace language_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LANGUAGE_V1_MOCKS_MOCK_LANGUAGE_CONNECTION_H
