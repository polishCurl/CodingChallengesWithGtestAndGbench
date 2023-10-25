#include "two_sum/src/two_sum.hpp"

#include "gtest/gtest.h"
#include <algorithm>

struct TwoSumTest : public ::testing::Test {
  Solution solution;
};

#define CHECK_RESULT(result, a, b)         \
  std::sort(result.begin(), result.end()); \
  EXPECT_EQ(result[0], a);                 \
  EXPECT_EQ(result[1], b);

TEST_F(TwoSumTest, Test1) {
  std::vector<int> nums{2, 7, 11, 15};
  auto result = solution.twoSum(nums, 9);
  CHECK_RESULT(result, 0, 1);
}

TEST_F(TwoSumTest, Test2) {
  std::vector<int> nums{3, 2, 4};
  auto result = solution.twoSum(nums, 6);
  CHECK_RESULT(result, 1, 2);
}

TEST_F(TwoSumTest, Test3) {
  std::vector<int> nums{3, 3};
  auto result = solution.twoSum(nums, 6);
  CHECK_RESULT(result, 0, 1);
}

TEST_F(TwoSumTest, Test4) {
  std::vector<int> nums{2, 7, 11, 15};
  auto result = solution.twoSum(nums, 26);
  CHECK_RESULT(result, 2, 3);
}
