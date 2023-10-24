load("@rules_cc//cc:defs.bzl", "cc_test")

cc_test(
    name = "valid_parentheses_map_test",
    srcs = ["test.cpp"],
    deps = [
        "//ValidParentheses/src:valid_parentheses_map",
        "@googletest//:gtest_main",
    ],
)

cc_test(
    name = "valid_parentheses_unordered_map_test",
    srcs = ["test.cpp"],
    deps = [
        "//ValidParentheses/src:valid_parentheses_unordered_map",
        "@googletest//:gtest_main",
    ],
)

cc_test(
    name = "valid_parentheses_slow_test",
    srcs = ["test.cpp"],
    deps = [
        "//ValidParentheses/src:valid_parentheses_slow",
        "@googletest//:gtest_main",
    ],
)
