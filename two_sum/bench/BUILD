load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "two_sum_map_bench",
    srcs = ["bench.cpp"],
    deps = [
        "//two_sum/src:two_sum_map",
        "//utils:random_engine",
        "@googlebench//:benchmark_main",
    ],
)

cc_binary(
    name = "two_sum_nested_loops_bench",
    srcs = ["bench.cpp"],
    deps = [
        "//two_sum/src:two_sum_nested_loops",
        "//utils:random_engine",
        "@googlebench//:benchmark_main",
    ],
)
