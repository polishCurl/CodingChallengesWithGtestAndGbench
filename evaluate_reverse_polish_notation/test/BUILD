load("@rules_cc//cc:defs.bzl", "cc_test")

cc_test(
    name = "eval_rpn_test",
    srcs = ["test.cpp"],
    deps = [
        "//evaluate_reverse_polish_notation/src:eval_rpn",
        "@googletest//:gtest_main",
    ],
)
