cc_binary(
    name = "hello_world",
    srcs = ["hello-world.cc"],
    deps = [
		    "@com_github_googlecloudplatform_google_cloud_cpp//:client",
    ],
    copts = [
	"-I$(GENDIR)/external/com_github_googlecloudplatform_google_cloud_cpp",
    ],
)
