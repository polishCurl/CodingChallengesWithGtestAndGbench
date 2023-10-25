load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library", "cc_test")

cc_library(
    name = "valid_parentheses_unordered_map",
    srcs = ["src/valid_parentheses_unordered_map.cpp"],
    hdrs = ["src/valid_parentheses.hpp"],
    strip_include_prefix = "",
    visibility = ["//visibility:public"],
)

cc_library(
    name = "valid_parentheses_map",
    srcs = ["src/valid_parentheses_map.cpp"],
    hdrs = ["src/valid_parentheses.hpp"],
    strip_include_prefix = "",
    visibility = ["//visibility:public"],
)

cc_library(
    name = "valid_parentheses_slow",
    srcs = ["src/valid_parentheses_slow.cpp"],
    hdrs = ["src/valid_parentheses.hpp"],
    strip_include_prefix = "",
    visibility = ["//visibility:public"],
)

cc_test(
    name = "valid_parentheses_map_test",
    srcs = ["test/test.cpp"],
    deps = [
        ":valid_parentheses_map",
        "@googletest//:gtest_main",
    ],
)

cc_test(
    name = "valid_parentheses_unordered_map_test",
    srcs = ["test/test.cpp"],
    deps = [
        ":valid_parentheses_unordered_map",
        "@googletest//:gtest_main",
    ],
)

cc_test(
    name = "valid_parentheses_slow_test",
    srcs = ["test/test.cpp"],
    deps = [
        ":valid_parentheses_slow",
        "@googletest//:gtest_main",
    ],
)

cc_binary(
    name = "valid_parentheses_unordered_map_bench",
    srcs = ["bench/bench.cpp"],
    deps = [
        ":valid_parentheses_unordered_map",
        "//utils:random_engine",
        "@googlebench//:benchmark_main",
    ],
)

cc_binary(
    name = "valid_parentheses_map_bench",
    srcs = ["bench/bench.cpp"],
    deps = [
        ":valid_parentheses_map",
        "//utils:random_engine",
        "@googlebench//:benchmark_main",
    ],
)

cc_binary(
    name = "valid_parentheses_slow_bench",
    srcs = ["bench/bench.cpp"],
    deps = [
        ":valid_parentheses_slow",
        "//utils:random_engine",
        "@googlebench//:benchmark_main",
    ],
)
