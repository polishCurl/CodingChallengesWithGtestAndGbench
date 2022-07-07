load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "random_engine",
    hdrs = ["random_engine.hpp"],
    visibility = ["//visibility:public"],
    strip_include_prefix = "",
)

cc_library(
    name = "gtest_utils",
    hdrs = ["gtest_utils.hpp"],
    deps = ["@googletest//:gtest_main"],
    visibility = ["//visibility:public"],
    strip_include_prefix = "",
)