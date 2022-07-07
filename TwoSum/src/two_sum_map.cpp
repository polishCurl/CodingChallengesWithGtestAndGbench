#include <unordered_map>

#include "two_sum.hpp"

using namespace std;

std::vector<int> Solution::twoSum(std::vector<int>& nums, int target) {
  std::unordered_map<int, int> val_to_index;

  for (size_t i = 0; i < nums.size(); i++) {
    if (val_to_index.find(target - nums[i]) != val_to_index.end()) {
      return std::vector<int>{static_cast<int>(i),
                              val_to_index[target - nums[i]]};
    }

    val_to_index[nums[i]] = i;
  }

  return std::vector<int>();
}
