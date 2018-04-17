package(
    default_visibility = ["//visibility:public"],
)

licenses(["notice"])

genrule(
    name = "bigtable_table_admin_grpc_pb_h",
    srcs = ["@com_github_googlecloudplatform_google_cloud_cpp//generated:bigtable_table_admin.grpc.pb.h"],
    outs = ["google/bigtable/admin/v2/bigtable_table_admin.grpc.pb.h"],
    cmd = "cp $< $@",
)

genrule(
    name = "bigtable_table_admin_grpc_pb_cc",
    srcs = ["@com_github_googlecloudplatform_google_cloud_cpp//generated:bigtable_table_admin.grpc.pb.cc"],
    outs = ["google/bigtable/admin/v2/bigtable_table_admin.grpc.pb.cc"],
    cmd = "cp $< $@",
)

genrule(
    name = "bigtable_grpc_pb_h",
    srcs = ["@com_github_googlecloudplatform_google_cloud_cpp//generated:bigtable.grpc.pb.h"],
    outs = ["google/bigtable/v2/bigtable.grpc.pb.h"],
    cmd = "cp $< $@",
)

genrule(
    name = "bigtable_mock_grpc_pb_h",
    srcs = ["@com_github_googlecloudplatform_google_cloud_cpp//generated:bigtable_mock.grpc.pb.h"],
    outs = ["google/bigtable/v2/bigtable_mock.grpc.pb.h"],
    cmd = "cp $< $@",
)

genrule(
    name = "bigtable_grpc_pb_cc",
    srcs = ["@com_github_googlecloudplatform_google_cloud_cpp//generated:bigtable.grpc.pb.cc"],
    outs = ["google/bigtable/v2/bigtable.grpc.pb.cc"],
    cmd = "cp $< $@",
)

genrule(
    name = "bigtable_instance_admin_grpc_pb_h",
    srcs = ["@com_github_googlecloudplatform_google_cloud_cpp//generated:bigtable_instance_admin.grpc.pb.h"],
    outs = ["google/bigtable/admin/v2/bigtable_instance_admin.grpc.pb.h"],
    cmd = "cp $< $@",
)

genrule(
    name = "bigtable_instance_admin_grpc_pb_cc",
    srcs = ["@com_github_googlecloudplatform_google_cloud_cpp//generated:bigtable_instance_admin.grpc.pb.cc"],
    outs = ["google/bigtable/admin/v2/bigtable_instance_admin.grpc.pb.cc"],
    cmd = "cp $< $@",
)

cc_library(
    name = "client",
    srcs = glob(
        [
	     "bigtable/client/**/*.cc",
        ],
	exclude = [
	  "**/*_test.cc",
	],
    ) + [
        ":bigtable_grpc_pb_cc",
        ":bigtable_table_admin_grpc_pb_cc",
	":bigtable_instance_admin_grpc_pb_cc",
    ],
    hdrs = glob(
        [
            "bigtable/client/**/*.h",
        ],
    ) + [
        ":bigtable_table_admin_grpc_pb_h",
	":bigtable_grpc_pb_h",
	":bigtable_mock_grpc_pb_h",
	":bigtable_instance_admin_grpc_pb_h",
    ],
    deps = [
        "@com_github_googleapis_googleapis//:lala",
	"@com_github_grpc_grpc//:grpc++",
	"@com_github_grpc_grpc//:grpc++_codegen_base",
    ],
    includes = ["bazel-out/k8-fastbuild/genfiles"],
)
