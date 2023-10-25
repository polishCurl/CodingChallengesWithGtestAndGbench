#include "two_sum.hpp"

std::vector<int> Solution::twoSum(std::vector<int>& nums, int target) {
  for (size_t i = 0; i < nums.size(); i++) {
    for (size_t j = i + 1; j < nums.size(); j++) {
      if (nums[i] + nums[j] == target)
        return std::vector<int>{static_cast<int>(i), static_cast<int>(j)};
    }
  }

  return std::vector<int>{};
}