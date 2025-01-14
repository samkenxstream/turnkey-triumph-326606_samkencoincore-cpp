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
// source: google/cloud/sql/v1/cloud_sql_instances.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_SQL_INSTANCES_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_SQL_INSTANCES_CLIENT_H

#include "google/cloud/sql/v1/sql_instances_rest_connection.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace sql_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service to manage Cloud SQL instances.
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
class SqlInstancesServiceClient {
 public:
  explicit SqlInstancesServiceClient(
      ExperimentalTag,
      std::shared_ptr<SqlInstancesServiceConnection> connection,
      Options opts = {});
  ~SqlInstancesServiceClient();

  ///@{
  /// @name Copy and move support
  SqlInstancesServiceClient(SqlInstancesServiceClient const&) = default;
  SqlInstancesServiceClient& operator=(SqlInstancesServiceClient const&) =
      default;
  SqlInstancesServiceClient(SqlInstancesServiceClient&&) = default;
  SqlInstancesServiceClient& operator=(SqlInstancesServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(SqlInstancesServiceClient const& a,
                         SqlInstancesServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(SqlInstancesServiceClient const& a,
                         SqlInstancesServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Adds a new trusted Certificate Authority (CA) version for the specified
  /// instance. Required to prepare for a certificate rotation. If a CA version
  /// was previously added but never used in a certificate rotation, this
  /// operation replaces that version. There cannot be more than one CA version
  /// waiting to be rotated in.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::sql::v1::SqlInstancesAddServerCaRequest,google/cloud/sql/v1/cloud_sql_instances.proto#L261}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::sql::v1::Operation,google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  ///
  /// [google.cloud.sql.v1.Operation]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  /// [google.cloud.sql.v1.SqlInstancesAddServerCaRequest]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_instances.proto#L261}
  ///
  StatusOr<google::cloud::sql::v1::Operation> AddServerCa(
      google::cloud::sql::v1::SqlInstancesAddServerCaRequest const& request,
      Options opts = {});

  ///
  /// Creates a Cloud SQL instance as a clone of the source instance. Using this
  /// operation might cause your instance to restart.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::sql::v1::SqlInstancesCloneRequest,google/cloud/sql/v1/cloud_sql_instances.proto#L270}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::sql::v1::Operation,google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  ///
  /// [google.cloud.sql.v1.Operation]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  /// [google.cloud.sql.v1.SqlInstancesCloneRequest]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_instances.proto#L270}
  ///
  StatusOr<google::cloud::sql::v1::Operation> Clone(
      google::cloud::sql::v1::SqlInstancesCloneRequest const& request,
      Options opts = {});

  ///
  /// Deletes a Cloud SQL instance.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::sql::v1::SqlInstancesDeleteRequest,google/cloud/sql/v1/cloud_sql_instances.proto#L282}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::sql::v1::Operation,google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  ///
  /// [google.cloud.sql.v1.Operation]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  /// [google.cloud.sql.v1.SqlInstancesDeleteRequest]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_instances.proto#L282}
  ///
  StatusOr<google::cloud::sql::v1::Operation> Delete(
      google::cloud::sql::v1::SqlInstancesDeleteRequest const& request,
      Options opts = {});

  ///
  /// Demotes the stand-alone instance to be a Cloud SQL read replica for an
  /// external database server.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::sql::v1::SqlInstancesDemoteMasterRequest,google/cloud/sql/v1/cloud_sql_instances.proto#L291}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::sql::v1::Operation,google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  ///
  /// [google.cloud.sql.v1.Operation]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  /// [google.cloud.sql.v1.SqlInstancesDemoteMasterRequest]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_instances.proto#L291}
  ///
  StatusOr<google::cloud::sql::v1::Operation> DemoteMaster(
      google::cloud::sql::v1::SqlInstancesDemoteMasterRequest const& request,
      Options opts = {});

  ///
  /// Exports data from a Cloud SQL instance to a Cloud Storage bucket as a SQL
  /// dump or CSV file.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::sql::v1::SqlInstancesExportRequest,google/cloud/sql/v1/cloud_sql_instances.proto#L302}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::sql::v1::Operation,google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  ///
  /// [google.cloud.sql.v1.Operation]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  /// [google.cloud.sql.v1.SqlInstancesExportRequest]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_instances.proto#L302}
  ///
  StatusOr<google::cloud::sql::v1::Operation> Export(
      google::cloud::sql::v1::SqlInstancesExportRequest const& request,
      Options opts = {});

  ///
  /// Initiates a manual failover of a high availability (HA) primary instance
  /// to a standby instance, which becomes the primary instance. Users are
  /// then rerouted to the new primary. For more information, see the
  /// [Overview of high
  /// availability](https://cloud.google.com/sql/docs/mysql/high-availability)
  /// page in the Cloud SQL documentation.
  /// If using Legacy HA (MySQL only), this causes the instance to failover to
  /// its failover replica instance.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::sql::v1::SqlInstancesFailoverRequest,google/cloud/sql/v1/cloud_sql_instances.proto#L313}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::sql::v1::Operation,google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  ///
  /// [google.cloud.sql.v1.Operation]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  /// [google.cloud.sql.v1.SqlInstancesFailoverRequest]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_instances.proto#L313}
  ///
  StatusOr<google::cloud::sql::v1::Operation> Failover(
      google::cloud::sql::v1::SqlInstancesFailoverRequest const& request,
      Options opts = {});

  ///
  /// Retrieves a resource containing information about a Cloud SQL instance.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::sql::v1::SqlInstancesGetRequest,google/cloud/sql/v1/cloud_sql_instances.proto#L324}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::sql::v1::DatabaseInstance,google/cloud/sql/v1/cloud_sql_instances.proto#L693}
  ///
  /// [google.cloud.sql.v1.DatabaseInstance]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_instances.proto#L693}
  /// [google.cloud.sql.v1.SqlInstancesGetRequest]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_instances.proto#L324}
  ///
  StatusOr<google::cloud::sql::v1::DatabaseInstance> Get(
      google::cloud::sql::v1::SqlInstancesGetRequest const& request,
      Options opts = {});

  ///
  /// Imports data into a Cloud SQL instance from a SQL dump  or CSV file in
  /// Cloud Storage.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::sql::v1::SqlInstancesImportRequest,google/cloud/sql/v1/cloud_sql_instances.proto#L333}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::sql::v1::Operation,google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  ///
  /// [google.cloud.sql.v1.Operation]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  /// [google.cloud.sql.v1.SqlInstancesImportRequest]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_instances.proto#L333}
  ///
  StatusOr<google::cloud::sql::v1::Operation> Import(
      google::cloud::sql::v1::SqlInstancesImportRequest const& request,
      Options opts = {});

  ///
  /// Creates a new Cloud SQL instance.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::sql::v1::SqlInstancesInsertRequest,google/cloud/sql/v1/cloud_sql_instances.proto#L344}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::sql::v1::Operation,google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  ///
  /// [google.cloud.sql.v1.Operation]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  /// [google.cloud.sql.v1.SqlInstancesInsertRequest]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_instances.proto#L344}
  ///
  StatusOr<google::cloud::sql::v1::Operation> Insert(
      google::cloud::sql::v1::SqlInstancesInsertRequest const& request,
      Options opts = {});

  ///
  /// Lists instances under a given project.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::sql::v1::SqlInstancesListRequest,google/cloud/sql/v1/cloud_sql_instances.proto#L353}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::sql::v1::DatabaseInstance,google/cloud/sql/v1/cloud_sql_instances.proto#L693}
  ///
  /// [google.cloud.sql.v1.DatabaseInstance]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_instances.proto#L693}
  /// [google.cloud.sql.v1.SqlInstancesListRequest]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_instances.proto#L353}
  ///
  StreamRange<google::cloud::sql::v1::DatabaseInstance> List(
      google::cloud::sql::v1::SqlInstancesListRequest request,
      Options opts = {});

  ///
  /// Lists all of the trusted Certificate Authorities (CAs) for the specified
  /// instance. There can be up to three CAs listed: the CA that was used to
  /// sign the certificate that is currently in use, a CA that has been added
  /// but not yet used to sign a certificate, and a CA used to sign a
  /// certificate that has previously rotated out.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::sql::v1::SqlInstancesListServerCasRequest,google/cloud/sql/v1/cloud_sql_instances.proto#L377}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::sql::v1::InstancesListServerCasResponse,google/cloud/sql/v1/cloud_sql_instances.proto#L619}
  ///
  /// [google.cloud.sql.v1.InstancesListServerCasResponse]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_instances.proto#L619}
  /// [google.cloud.sql.v1.SqlInstancesListServerCasRequest]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_instances.proto#L377}
  ///
  StatusOr<google::cloud::sql::v1::InstancesListServerCasResponse>
  ListServerCas(
      google::cloud::sql::v1::SqlInstancesListServerCasRequest const& request,
      Options opts = {});

  ///
  /// Updates settings of a Cloud SQL instance.
  /// This method supports patch semantics.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::sql::v1::SqlInstancesPatchRequest,google/cloud/sql/v1/cloud_sql_instances.proto#L386}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::sql::v1::Operation,google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  ///
  /// [google.cloud.sql.v1.Operation]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  /// [google.cloud.sql.v1.SqlInstancesPatchRequest]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_instances.proto#L386}
  ///
  StatusOr<google::cloud::sql::v1::Operation> Patch(
      google::cloud::sql::v1::SqlInstancesPatchRequest const& request,
      Options opts = {});

  ///
  /// Promotes the read replica instance to be a stand-alone Cloud SQL instance.
  /// Using this operation might cause your instance to restart.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::sql::v1::SqlInstancesPromoteReplicaRequest,google/cloud/sql/v1/cloud_sql_instances.proto#L397}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::sql::v1::Operation,google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  ///
  /// [google.cloud.sql.v1.Operation]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  /// [google.cloud.sql.v1.SqlInstancesPromoteReplicaRequest]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_instances.proto#L397}
  ///
  StatusOr<google::cloud::sql::v1::Operation> PromoteReplica(
      google::cloud::sql::v1::SqlInstancesPromoteReplicaRequest const& request,
      Options opts = {});

  ///
  /// Deletes all client certificates and generates a new server SSL certificate
  /// for the instance.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::sql::v1::SqlInstancesResetSslConfigRequest,google/cloud/sql/v1/cloud_sql_instances.proto#L406}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::sql::v1::Operation,google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  ///
  /// [google.cloud.sql.v1.Operation]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  /// [google.cloud.sql.v1.SqlInstancesResetSslConfigRequest]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_instances.proto#L406}
  ///
  StatusOr<google::cloud::sql::v1::Operation> ResetSslConfig(
      google::cloud::sql::v1::SqlInstancesResetSslConfigRequest const& request,
      Options opts = {});

  ///
  /// Restarts a Cloud SQL instance.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::sql::v1::SqlInstancesRestartRequest,google/cloud/sql/v1/cloud_sql_instances.proto#L415}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::sql::v1::Operation,google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  ///
  /// [google.cloud.sql.v1.Operation]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  /// [google.cloud.sql.v1.SqlInstancesRestartRequest]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_instances.proto#L415}
  ///
  StatusOr<google::cloud::sql::v1::Operation> Restart(
      google::cloud::sql::v1::SqlInstancesRestartRequest const& request,
      Options opts = {});

  ///
  /// Restores a backup of a Cloud SQL instance. Using this operation might
  /// cause your instance to restart.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::sql::v1::SqlInstancesRestoreBackupRequest,google/cloud/sql/v1/cloud_sql_instances.proto#L424}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::sql::v1::Operation,google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  ///
  /// [google.cloud.sql.v1.Operation]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  /// [google.cloud.sql.v1.SqlInstancesRestoreBackupRequest]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_instances.proto#L424}
  ///
  StatusOr<google::cloud::sql::v1::Operation> RestoreBackup(
      google::cloud::sql::v1::SqlInstancesRestoreBackupRequest const& request,
      Options opts = {});

  ///
  /// Rotates the server certificate to one signed by the Certificate Authority
  /// (CA) version previously added with the addServerCA method.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::sql::v1::SqlInstancesRotateServerCaRequest,google/cloud/sql/v1/cloud_sql_instances.proto#L435}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::sql::v1::Operation,google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  ///
  /// [google.cloud.sql.v1.Operation]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  /// [google.cloud.sql.v1.SqlInstancesRotateServerCaRequest]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_instances.proto#L435}
  ///
  StatusOr<google::cloud::sql::v1::Operation> RotateServerCa(
      google::cloud::sql::v1::SqlInstancesRotateServerCaRequest const& request,
      Options opts = {});

  ///
  /// Starts the replication in the read replica instance.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::sql::v1::SqlInstancesStartReplicaRequest,google/cloud/sql/v1/cloud_sql_instances.proto#L446}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::sql::v1::Operation,google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  ///
  /// [google.cloud.sql.v1.Operation]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  /// [google.cloud.sql.v1.SqlInstancesStartReplicaRequest]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_instances.proto#L446}
  ///
  StatusOr<google::cloud::sql::v1::Operation> StartReplica(
      google::cloud::sql::v1::SqlInstancesStartReplicaRequest const& request,
      Options opts = {});

  ///
  /// Stops the replication in the read replica instance.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::sql::v1::SqlInstancesStopReplicaRequest,google/cloud/sql/v1/cloud_sql_instances.proto#L455}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::sql::v1::Operation,google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  ///
  /// [google.cloud.sql.v1.Operation]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  /// [google.cloud.sql.v1.SqlInstancesStopReplicaRequest]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_instances.proto#L455}
  ///
  StatusOr<google::cloud::sql::v1::Operation> StopReplica(
      google::cloud::sql::v1::SqlInstancesStopReplicaRequest const& request,
      Options opts = {});

  ///
  /// Truncate MySQL general and slow query log tables
  /// MySQL only.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::sql::v1::SqlInstancesTruncateLogRequest,google/cloud/sql/v1/cloud_sql_instances.proto#L464}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::sql::v1::Operation,google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  ///
  /// [google.cloud.sql.v1.Operation]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  /// [google.cloud.sql.v1.SqlInstancesTruncateLogRequest]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_instances.proto#L464}
  ///
  StatusOr<google::cloud::sql::v1::Operation> TruncateLog(
      google::cloud::sql::v1::SqlInstancesTruncateLogRequest const& request,
      Options opts = {});

  ///
  /// Updates settings of a Cloud SQL instance. Using this operation might cause
  /// your instance to restart.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::sql::v1::SqlInstancesUpdateRequest,google/cloud/sql/v1/cloud_sql_instances.proto#L475}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::sql::v1::Operation,google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  ///
  /// [google.cloud.sql.v1.Operation]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  /// [google.cloud.sql.v1.SqlInstancesUpdateRequest]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_instances.proto#L475}
  ///
  StatusOr<google::cloud::sql::v1::Operation> Update(
      google::cloud::sql::v1::SqlInstancesUpdateRequest const& request,
      Options opts = {});

  ///
  /// Generates a short-lived X509 certificate containing the provided public
  /// key and signed by a private key specific to the target instance. Users may
  /// use the certificate to authenticate as themselves when connecting to the
  /// database.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::sql::v1::SqlInstancesCreateEphemeralCertRequest,google/cloud/sql/v1/cloud_sql_instances.proto#L553}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::sql::v1::SslCert,google/cloud/sql/v1/cloud_sql_resources.proto#L974}
  ///
  /// [google.cloud.sql.v1.SqlInstancesCreateEphemeralCertRequest]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_instances.proto#L553}
  /// [google.cloud.sql.v1.SslCert]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_resources.proto#L974}
  ///
  StatusOr<google::cloud::sql::v1::SslCert> CreateEphemeral(
      google::cloud::sql::v1::SqlInstancesCreateEphemeralCertRequest const&
          request,
      Options opts = {});

  ///
  /// Reschedules the maintenance on the given instance.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::sql::v1::SqlInstancesRescheduleMaintenanceRequest,google/cloud/sql/v1/cloud_sql_instances.proto#L486}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::sql::v1::Operation,google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  ///
  /// [google.cloud.sql.v1.Operation]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  /// [google.cloud.sql.v1.SqlInstancesRescheduleMaintenanceRequest]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_instances.proto#L486}
  ///
  StatusOr<google::cloud::sql::v1::Operation> RescheduleMaintenance(
      google::cloud::sql::v1::SqlInstancesRescheduleMaintenanceRequest const&
          request,
      Options opts = {});

  ///
  /// Verify External primary instance external sync settings.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::sql::v1::SqlInstancesVerifyExternalSyncSettingsRequest,google/cloud/sql/v1/cloud_sql_instances.proto#L497}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::sql::v1::SqlInstancesVerifyExternalSyncSettingsResponse,google/cloud/sql/v1/cloud_sql_instances.proto#L648}
  ///
  /// [google.cloud.sql.v1.SqlInstancesVerifyExternalSyncSettingsRequest]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_instances.proto#L497}
  /// [google.cloud.sql.v1.SqlInstancesVerifyExternalSyncSettingsResponse]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_instances.proto#L648}
  ///
  StatusOr<
      google::cloud::sql::v1::SqlInstancesVerifyExternalSyncSettingsResponse>
  VerifyExternalSyncSettings(
      google::cloud::sql::v1::
          SqlInstancesVerifyExternalSyncSettingsRequest const& request,
      Options opts = {});

  ///
  /// Start External primary instance migration.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::sql::v1::SqlInstancesStartExternalSyncRequest,google/cloud/sql/v1/cloud_sql_instances.proto#L533}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::sql::v1::Operation,google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  ///
  /// [google.cloud.sql.v1.Operation]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_resources.proto#L628}
  /// [google.cloud.sql.v1.SqlInstancesStartExternalSyncRequest]:
  /// @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_instances.proto#L533}
  ///
  StatusOr<google::cloud::sql::v1::Operation> StartExternalSync(
      google::cloud::sql::v1::SqlInstancesStartExternalSyncRequest const&
          request,
      Options opts = {});

 private:
  std::shared_ptr<SqlInstancesServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace sql_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_SQL_INSTANCES_CLIENT_H
