load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library", "cc_test")

cc_library(
    name = "remove_duplicates",
    srcs = ["src/remove_duplicates.cpp"],
    hdrs = ["src/remove_duplicates.hpp"],
    strip_include_prefix = "",
    visibility = ["//visibility:public"],
)

cc_binary(
    name = "remove_duplicates_bench",
    srcs = ["bench/bench.cpp"],
    deps = [
        ":remove_duplicates",
        "//utils:random_engine",
        "@googlebench//:benchmark_main",
    ],
)

cc_test(
    name = "remove_duplicates_test",
    srcs = ["test/test.cpp"],
    deps = [
        ":remove_duplicates",
        "@googletest//:gtest_main",
    ],
)
