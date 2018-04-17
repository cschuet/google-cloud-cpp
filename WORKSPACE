workspace(name = "com_github_googlecloudplatform_google_cloud_cpp")

http_archive(
    name = "com_google_protobuf",
    sha256 = "826425182ee43990731217b917c5c3ea7190cfda141af4869e6d4ad9085a740f",
    strip_prefix = "protobuf-3.5.1",
    urls = [
        "https://github.com/google/protobuf/archive/v3.5.1.tar.gz",
    ],
)

new_http_archive(
    name = "com_github_googleapis_googleapis",
    build_file = "//bazel:googleapis.BUILD",
    strip_prefix = "googleapis-70faee49d0255bd1c988e68772b0c0aacea3e984",
    urls = [
        "https://mirror.bazel.build/github.com/googleapis/googleapis/archive/70faee49d0255bd1c988e68772b0c0aacea3e984.tar.gz",
        "https://github.com/googleapis/googleapis/archive/70faee49d0255bd1c988e68772b0c0aacea3e984.tar.gz",
    ],
)
