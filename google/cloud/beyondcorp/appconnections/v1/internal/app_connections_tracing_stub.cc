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
// source:
// google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto

#include "google/cloud/beyondcorp/appconnections/v1/internal/app_connections_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace beyondcorp_appconnections_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

AppConnectionsServiceTracingStub::AppConnectionsServiceTracingStub(
    std::shared_ptr<AppConnectionsServiceStub> child)
    : child_(std::move(child)) {}

StatusOr<
    google::cloud::beyondcorp::appconnections::v1::ListAppConnectionsResponse>
AppConnectionsServiceTracingStub::ListAppConnections(
    grpc::ClientContext& context,
    google::cloud::beyondcorp::appconnections::v1::
        ListAppConnectionsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.beyondcorp.appconnections.v1.AppConnectionsService",
      "ListAppConnections");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListAppConnections(context, request));
}

StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>
AppConnectionsServiceTracingStub::GetAppConnection(
    grpc::ClientContext& context,
    google::cloud::beyondcorp::appconnections::v1::
        GetAppConnectionRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.beyondcorp.appconnections.v1.AppConnectionsService",
      "GetAppConnection");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetAppConnection(context, request));
}

future<StatusOr<google::longrunning::Operation>>
AppConnectionsServiceTracingStub::AsyncCreateAppConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::beyondcorp::appconnections::v1::
        CreateAppConnectionRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.beyondcorp.appconnections.v1.AppConnectionsService",
      "CreateAppConnection");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncCreateAppConnection(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
AppConnectionsServiceTracingStub::AsyncUpdateAppConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::beyondcorp::appconnections::v1::
        UpdateAppConnectionRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.beyondcorp.appconnections.v1.AppConnectionsService",
      "UpdateAppConnection");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncUpdateAppConnection(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
AppConnectionsServiceTracingStub::AsyncDeleteAppConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::beyondcorp::appconnections::v1::
        DeleteAppConnectionRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.beyondcorp.appconnections.v1.AppConnectionsService",
      "DeleteAppConnection");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncDeleteAppConnection(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::beyondcorp::appconnections::v1::
             ResolveAppConnectionsResponse>
AppConnectionsServiceTracingStub::ResolveAppConnections(
    grpc::ClientContext& context,
    google::cloud::beyondcorp::appconnections::v1::
        ResolveAppConnectionsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.beyondcorp.appconnections.v1.AppConnectionsService",
      "ResolveAppConnections");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ResolveAppConnections(context, request));
}

future<StatusOr<google::longrunning::Operation>>
AppConnectionsServiceTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncGetOperation(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> AppConnectionsServiceTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncCancelOperation(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<AppConnectionsServiceStub> MakeAppConnectionsServiceTracingStub(
    std::shared_ptr<AppConnectionsServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<AppConnectionsServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_appconnections_v1_internal
}  // namespace cloud
}  // namespace google
