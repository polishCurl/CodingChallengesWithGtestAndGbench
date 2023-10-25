#include "remove_duplicates.hpp"

#include <iostream>

using namespace std;

int Solution::removeDuplicates(vector<int>& nums) {
  std::size_t fast = 1;
  std::size_t slow = 0;
  auto len = nums.size();

  if (len <= 1) {
    return len;
  }

  while (fast < len) {
    if (nums[fast] == nums[slow]) {
      fast++;
    } else {
      nums[++slow] = nums[fast];
    }

    // std::cout << "slow=" << slow << "\tfast=" << fast << "\n";
  }

  nums[++slow] = nums[fast - 1];

  return slow;
}
