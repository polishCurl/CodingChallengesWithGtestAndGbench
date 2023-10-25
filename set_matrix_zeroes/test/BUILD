load("@rules_cc//cc:defs.bzl", "cc_test")

cc_test(
    name = "set_matrix_zeroes_optimized_test",
    srcs = ["test.cpp"],
    deps = [
        "//set_matrix_zeroes/src:set_matrix_zeroes_optimized",
        "//utils:gtest_utils",
        "@googletest//:gtest_main",
    ],
)

cc_test(
    name = "set_matrix_zeroes_brute_force_test",
    srcs = ["test.cpp"],
    deps = [
        "//set_matrix_zeroes/src:set_matrix_zeroes_brute_force",
        "//utils:gtest_utils",
        "@googletest//:gtest_main",
    ],
)
