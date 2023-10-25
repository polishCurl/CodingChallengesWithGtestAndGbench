load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library", "cc_test")

cc_library(
    name = "set_matrix_zeroes_brute_force",
    srcs = ["src/set_matrix_zeroes_brute_force.cpp"],
    hdrs = ["src/set_matrix_zeroes.hpp"],
    strip_include_prefix = "",
    visibility = ["//visibility:public"],
)

cc_library(
    name = "set_matrix_zeroes_optimized",
    srcs = ["src/set_matrix_zeroes_optimized.cpp"],
    hdrs = ["src/set_matrix_zeroes.hpp"],
    strip_include_prefix = "",
    visibility = ["//visibility:public"],
)

cc_test(
    name = "set_matrix_zeroes_optimized_test",
    srcs = ["test/test.cpp"],
    deps = [
        ":set_matrix_zeroes_optimized",
        "//utils:gtest_utils",
        "@googletest//:gtest_main",
    ],
)

cc_test(
    name = "set_matrix_zeroes_brute_force_test",
    srcs = ["test/test.cpp"],
    deps = [
        ":set_matrix_zeroes_brute_force",
        "//utils:gtest_utils",
        "@googletest//:gtest_main",
    ],
)

cc_binary(
    name = "set_matrix_zeroes_brute_force_bench",
    srcs = ["bench/bench.cpp"],
    deps = [
        ":set_matrix_zeroes_brute_force",
        "//utils:random_engine",
        "@googlebench//:benchmark_main",
    ],
)

cc_binary(
    name = "set_matrix_zeroes_optimized_bench",
    srcs = ["bench/bench.cpp"],
    deps = [
        ":set_matrix_zeroes_optimized",
        "//utils:random_engine",
        "@googlebench//:benchmark_main",
    ],
)
