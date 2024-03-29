# Leetcode problem solutions with gtest and Google benchmark

Implementation for a number of problem solving questions taken from the [Leetcode](https://leetcode.com) platform:
1. [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)
2. [Set Matrix Zeroes](https://leetcode.com/problems/set-matrix-zeroes/)
3. [Two Sum](https://leetcode.com/problems/two-sum/)
4. [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)
5. [Evaluate Reverse Polish Notation](https://leetcode.com/problems/evaluate-reverse-polish-notation/)

Each solution was unit-tested using the Google Test Framework (gtest) and Google benchmark.

This project also demonstrates:
1. How to glue modern C++, gtest and Google benchmark using the Bazel build system.
2. How to generate code coverage reports using Bazel

## Prerequisites
1. [Bazel](https://github.com/bazelbuild/bazel)
2. [Google Test](https://github.com/google/googletest)
3. [Google Bench](https://github.com/google/benchmark)
4. gcov
5. lcov


# Example commands

Build all tests and benchmarks:
```
bazel build //...
```

Clean all build artifacts:
```
bazel clean
```

Run all unit tests:
```
bazel test --test_output=all  //...
```

Execute one of the benchmarks:
```
./bazel-bin/ValidParentheses/bench/valid_parentheses_map_bench
```

Generate code coverage report for all unit tests and put it in `genhtml` directory:
```
bazel coverage //...
genhtml bazel-out/_coverage/_coverage_report.dat -o genhtml
```