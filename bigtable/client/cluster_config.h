// Copyright 2018 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef GOOGLE_CLOUD_CPP_BIGTABLE_CLIENT_CLUSTER_CONFIG_H_
#define GOOGLE_CLOUD_CPP_BIGTABLE_CLIENT_CLUSTER_CONFIG_H_

#include "bigtable/client/version.h"
#include <google/bigtable/admin/v2/bigtable_instance_admin.pb.h>

namespace bigtable {
inline namespace BIGTABLE_CLIENT_NS {
/// Specify the initial configuration for a new cluster.
class ClusterConfig {
 public:
  using StorageType = google::bigtable::admin::v2::StorageType;
  constexpr static StorageType STORAGE_TYPE_UNSPECIFIED =
      google::bigtable::admin::v2::STORAGE_TYPE_UNSPECIFIED;
  constexpr static StorageType SSD = google::bigtable::admin::v2::SSD;
  constexpr static StorageType HDD = google::bigtable::admin::v2::HDD;

  ClusterConfig(std::string location, std::int32_t serve_nodes,
                StorageType storage) {
    proto_.set_location(std::move(location));
    proto_.set_serve_nodes(serve_nodes);
    proto_.set_default_storage_type(storage);
  }

  // NOLINT: accessors can (and should) be snake_case.
  google::bigtable::admin::v2::Cluster const& as_proto() const {
    return proto_;
  }

  // NOLINT: accessors can (and should) be snake_case.
  google::bigtable::admin::v2::Cluster as_proto_move() const {
    return std::move(proto_);
  }

 private:
  google::bigtable::admin::v2::Cluster proto_;
};

}  // namespace BIGTABLE_CLIENT_NS
}  // namespace bigtable

#endif  // GOOGLE_CLOUD_CPP_BIGTABLE_CLIENT_CLUSTER_CONFIG_H_
