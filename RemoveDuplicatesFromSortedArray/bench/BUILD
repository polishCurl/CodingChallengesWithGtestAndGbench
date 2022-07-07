load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "remove_duplicates_bench",
    srcs = ["bench.cpp"],
    deps = ["@googlebench//:benchmark_main", "//RemoveDuplicatesFromSortedArray/src:remove_duplicates", "//utils:random_engine"],
)
