load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "set_matrix_zeroes_brute_force_bench",
    srcs = ["bench.cpp"],
    deps = ["@googlebench//:benchmark_main", "//SetMatrixZeroes/src:set_matrix_zeroes_brute_force", "//utils:random_engine"],
)

cc_binary(
    name = "set_matrix_zeroes_optimized_bench",
    srcs = ["bench.cpp"],
    deps = ["@googlebench//:benchmark_main", "//SetMatrixZeroes/src:set_matrix_zeroes_optimized", "//utils:random_engine"],
)
