package(
    default_visibility = ["//visibility:public"],
)

licenses(["notice"])

cc_library(
    name = "client",
    srcs = glob(
        [
            "bigtable/client/**/*.cc",
        ],
    ),
    hdrs = glob(
        [
            "bigtable/client/**/*.h",
        ],
    ),
    deps = [
        "@com_github_googleapis_googleapis//:lala",
    ],
)
