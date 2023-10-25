load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library", "cc_test")

cc_library(
    name = "two_sum_nested_loops",
    srcs = ["src/two_sum_nested_loops.cpp"],
    hdrs = ["src/two_sum.hpp"],
    strip_include_prefix = "",
    visibility = ["//visibility:public"],
)

cc_library(
    name = "two_sum_map",
    srcs = ["src/two_sum_map.cpp"],
    hdrs = ["src/two_sum.hpp"],
    strip_include_prefix = "",
    visibility = ["//visibility:public"],
)

cc_test(
    name = "two_sum_map_test",
    srcs = ["test/test.cpp"],
    deps = [
        ":two_sum_map",
        "@googletest//:gtest_main",
    ],
)

cc_test(
    name = "two_sum_nested_loops_test",
    srcs = ["test/test.cpp"],
    deps = [
        ":two_sum_nested_loops",
        "@googletest//:gtest_main",
    ],
)

cc_binary(
    name = "two_sum_map_bench",
    srcs = ["bench/bench.cpp"],
    deps = [
        ":two_sum_map",
        "//utils:random_engine",
        "@googlebench//:benchmark_main",
    ],
)

cc_binary(
    name = "two_sum_nested_loops_bench",
    srcs = ["bench/bench.cpp"],
    deps = [
        ":two_sum_nested_loops",
        "//utils:random_engine",
        "@googlebench//:benchmark_main",
    ],
)
