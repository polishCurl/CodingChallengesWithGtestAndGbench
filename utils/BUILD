load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "random_engine",
    hdrs = ["random_engine.hpp"],
    strip_include_prefix = "",
    visibility = ["//visibility:public"],
)

cc_library(
    name = "gtest_utils",
    hdrs = ["gtest_utils.hpp"],
    strip_include_prefix = "",
    visibility = ["//visibility:public"],
    deps = ["@googletest//:gtest_main"],
)
