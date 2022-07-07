load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "valid_parentheses_unordered_map_bench",
    srcs = ["bench.cpp"],
    deps = ["@googlebench//:benchmark_main", "//ValidParentheses/src:valid_parentheses_unordered_map", "//utils:random_engine"],
)

cc_binary(
    name = "valid_parentheses_map_bench",
    srcs = ["bench.cpp"],
    deps = ["@googlebench//:benchmark_main", "//ValidParentheses/src:valid_parentheses_map", "//utils:random_engine"],
)

cc_binary(
    name = "valid_parentheses_slow_bench",
    srcs = ["bench.cpp"],
    deps = ["@googlebench//:benchmark_main", "//ValidParentheses/src:valid_parentheses_slow", "//utils:random_engine"],
)
