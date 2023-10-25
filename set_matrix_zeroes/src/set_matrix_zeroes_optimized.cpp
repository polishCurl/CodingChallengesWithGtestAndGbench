
#include <iostream>

#include "set_matrix_zeroes.hpp"

using namespace std;

void Solution::setZeroes(vector<vector<int>>& matrix) {
  vector<pair<std::size_t, std::size_t>> cords;
  for (std::size_t i = 0; i < matrix.size(); ++i) {
    for (std::size_t j = 0; j < matrix[0].size(); ++j) {
      if (matrix[i][j] == 0) cords.push_back({i, j});
    }
  }

  auto zeroOut = [&matrix](std::size_t i, std::size_t j) {
    auto x = static_cast<int>(i + 1);
    while (static_cast<std::size_t>(x) < matrix.size()) matrix[x++][j] = 0;
    x = i - 1;
    while (x >= 0) matrix[x--][j] = 0;

    auto y = static_cast<int>(j + 1);
    while (static_cast<std::size_t>(y) < matrix[0].size()) matrix[i][y++] = 0;
    y = j - 1;
    while (y >= 0) matrix[i][y--] = 0;
  };

  for (const auto& cord : cords) {
    zeroOut(cord.first, cord.second);
  }
}
