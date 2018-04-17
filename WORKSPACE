workspace(name = "com_github_googlecloudplatform_google_cloud_cpp")

http_archive(
    name = "com_github_grpc_grpc",
    strip_prefix = "grpc-1f13655c652095562a732639cde4daf760629160",
    urls = [
        "https://mirror.bazel.build/github.com/grpc/grpc/archive/1f13655c652095562a732639cde4daf760629160.tar.gz",
	"https://github.com/grpc/grpc/archive/1f13655c652095562a732639cde4daf760629160.tar.gz",
    ],
)


load("@com_github_grpc_grpc//bazel:grpc_deps.bzl", "grpc_deps")
grpc_deps()


new_http_archive(
    name = "com_github_googleapis_googleapis",
    build_file = "//bazel:googleapis.BUILD",
    strip_prefix = "googleapis-70faee49d0255bd1c988e68772b0c0aacea3e984",
    urls = [
        "https://mirror.bazel.build/github.com/googleapis/googleapis/archive/70faee49d0255bd1c988e68772b0c0aacea3e984.tar.gz",
        "https://github.com/googleapis/googleapis/archive/70faee49d0255bd1c988e68772b0c0aacea3e984.tar.gz",
    ],
)
