#ifndef GTEST_UTILS_HPP__
#define GTEST_UTILS_HPP__

#include "gmock/gmock.h"
#include "gtest/gtest.h"

namespace utils {

template <typename T>
void compare_matrices(std::vector<std::vector<T>> output,
                      std::vector<std::vector<T>> ref) {
  ASSERT_EQ(output.size(), ref.size());
  for (size_t i = 0; i < output.size(); i++) {
    ASSERT_EQ(output[i].size(), ref[i].size());
    ASSERT_THAT(output[i], ::testing::ElementsAreArray(ref[i]));
  }
}

}  // namespace utils

#endif