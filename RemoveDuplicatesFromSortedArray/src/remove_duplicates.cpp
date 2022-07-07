#include "remove_duplicates.hpp"

#include <iostream>

using namespace std;

int Solution::removeDuplicates(vector<int>& nums) {
  int fast = 1;
  int slow = 0;
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
