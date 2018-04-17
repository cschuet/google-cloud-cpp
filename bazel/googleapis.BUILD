# Description:
#   Contains the protobufs for a set of Google APIs.

package(
    default_visibility = ["//visibility:public"],
)

licenses(["notice"])  # Apache 2.0

GOOGLEAPIS_PROTOS = [
    "google/api/annotations.proto",
    "google/api/http.proto",
    "google/bigtable/v2/bigtable.proto",
    "google/bigtable/v2/data.proto",
    "google/rpc/status.proto",
]

proto_library(
    name = "protos",
    srcs = GOOGLEAPIS_PROTOS,
    visibility = ["//visibility:public"],
    deps = [
        "@com_google_protobuf//:any_proto",
        "@com_google_protobuf//:descriptor_proto",
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
