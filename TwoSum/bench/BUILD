load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "two_sum_map_bench",
    srcs = ["bench.cpp"],
    deps = ["@googlebench//:benchmark_main", "//TwoSum/src:two_sum_map", "//utils:random_engine"],
)

cc_binary(
    name = "two_sum_nested_loops_bench",
    srcs = ["bench.cpp"],
    deps = ["@googlebench//:benchmark_main", "//TwoSum/src:two_sum_nested_loops", "//utils:random_engine"],
)