load("@rules_cc//cc:defs.bzl", "cc_library", "cc_test")

cc_library(
    name = "eval_rpn",
    srcs = ["src/eval_rpn.cpp"],
    hdrs = ["src/eval_rpn.hpp"],
    strip_include_prefix = "",
    visibility = ["//visibility:public"],
)

cc_test(
    name = "eval_rpn_test",
    srcs = ["test/test.cpp"],
    deps = [
        ":eval_rpn",
        "@googletest//:gtest_main",
    ],
)
