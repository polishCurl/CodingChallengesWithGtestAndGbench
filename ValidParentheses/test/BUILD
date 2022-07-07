load("@rules_cc//cc:defs.bzl", "cc_test")

cc_test(
    name = "valid_parentheses_map_test",
    srcs = ["test.cpp"],
    deps = ["@googletest//:gtest_main", "//ValidParentheses/src:valid_parentheses_map"],
)

cc_test(
    name = "valid_parentheses_unordered_map_test",
    srcs = ["test.cpp"],
    deps = ["@googletest//:gtest_main", "//ValidParentheses/src:valid_parentheses_unordered_map"],
)

cc_test(
    name = "valid_parentheses_slow_test",
    srcs = ["test.cpp"],
    deps = ["@googletest//:gtest_main", "//ValidParentheses/src:valid_parentheses_slow"],
)