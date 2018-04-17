# Description:
#   Contains the protobufs for a set of Google APIs.

package(
    default_visibility = ["//visibility:public"],
)

licenses(["notice"])  # Apache 2.0

GOOGLEAPIS_PROTOS = [
    "google/api/annotations.proto",
    "google/api/http.proto",
    "google/bigtable/admin/v2/bigtable_instance_admin.proto",
    "google/bigtable/admin/v2/bigtable_table_admin.proto",
    "google/bigtable/admin/v2/common.proto",
    "google/bigtable/admin/v2/instance.proto",
    "google/bigtable/admin/v2/table.proto",
    "google/bigtable/v2/bigtable.proto",
    "google/bigtable/v2/data.proto",
    "google/longrunning/operations.proto",
    "google/iam/v1/iam_policy.proto",
    "google/iam/v1/policy.proto",
    "google/rpc/status.proto",
]

proto_library(
    name = "protos",
    srcs = GOOGLEAPIS_PROTOS,
    visibility = ["//visibility:public"],
    deps = [
        "@com_google_protobuf//:any_proto",
        "@com_google_protobuf//:descriptor_proto",
	"@com_google_protobuf//:duration_proto",
        "@com_google_protobuf//:empty_proto",
	"@com_google_protobuf//:field_mask_proto",
	"@com_google_protobuf//:timestamp_proto",
        "@com_google_protobuf//:wrappers_proto",
    ],
)

cc_proto_library(
    name = "cc_protos",
    deps = [":protos"],
)

cc_library(
    name = "lala",
    includes = ["."],
    deps = [":cc_protos"],
)
