#include "remove_duplicates.hpp"

#include "gmock/gmock.h"
#include "gtest/gtest.h"

struct RemoveDuplicatesTest : public ::testing::Test {
  Solution solution;
};

TEST_F(RemoveDuplicatesTest, Test1Element) {
  std::vector<int> nums{5};
  ASSERT_EQ(solution.removeDuplicates(nums), 1);
  ASSERT_THAT(nums, ::testing::ElementsAreArray({5}));
}

TEST_F(RemoveDuplicatesTest, Test2ElementSame) {
  std::vector<int> nums{-3, -3};
  ASSERT_EQ(solution.removeDuplicates(nums), 1);
  ASSERT_EQ(nums[0], -3);
}

TEST_F(RemoveDuplicatesTest, Test2ElementDifferent) {
  std::vector<int> nums{1, 2};
  ASSERT_EQ(solution.removeDuplicates(nums), 2);
  ASSERT_THAT(nums, ::testing::ElementsAreArray({1, 2}));
}

TEST_F(RemoveDuplicatesTest, TestManyElements) {
  std::vector<int> nums{1, 1, 2, 2, 3, 3, 3, 3, 3, 5};
  ASSERT_EQ(solution.removeDuplicates(nums), 4);
  std::vector<int> result(nums.begin(), nums.begin() + 4);
  ASSERT_THAT(result, ::testing::ElementsAreArray({1, 2, 3, 5}));
}
