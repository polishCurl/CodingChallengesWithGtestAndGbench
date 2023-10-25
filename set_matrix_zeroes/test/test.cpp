#include "set_matrix_zeroes/src/set_matrix_zeroes.hpp"

#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include "utils/gtest_utils.hpp"

struct SetMatrixZeroesTest : public ::testing::Test {
  Solution solution;
};

TEST_F(SetMatrixZeroesTest, Test3x3) {
  std::vector<std::vector<int>> input{{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
  std::vector<std::vector<int>> ref_output{{1, 0, 1}, {0, 0, 0}, {1, 0, 1}};
  solution.setZeroes(input);
  utils::compare_matrices(input, ref_output);
}

TEST_F(SetMatrixZeroesTest, Test4x3) {
  std::vector<std::vector<int>> input{{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
  std::vector<std::vector<int>> ref_output{
      {0, 0, 0, 0}, {0, 4, 5, 0}, {0, 3, 1, 0}};
  solution.setZeroes(input);
  utils::compare_matrices(input, ref_output);
}

TEST_F(SetMatrixZeroesTest, Test1x1_zero) {
  std::vector<std::vector<int>> input{{0}};
  std::vector<std::vector<int>> ref_output{{0}};
  solution.setZeroes(input);
  utils::compare_matrices(input, ref_output);
}

TEST_F(SetMatrixZeroesTest, Test1x1_nonzero) {
  std::vector<std::vector<int>> input{{-3}};
  std::vector<std::vector<int>> ref_output{{-3}};
  solution.setZeroes(input);
  utils::compare_matrices(input, ref_output);
}
