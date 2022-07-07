
#include <iostream>

#include "set_matrix_zeroes.hpp"

using namespace std;

void Solution::setZeroes(vector<vector<int>>& matrix) {
  vector<pair<int, int>> cords;
  for (int i = 0; i < matrix.size(); ++i) {
    for (int j = 0; j < matrix[0].size(); ++j) {
      if (matrix[i][j] == 0) cords.push_back({i, j});
    }
  }

  auto zeroOut = [&matrix](int i, int j) {
    int x = i + 1;
    while (x < matrix.size()) matrix[x++][j] = 0;
    x = i - 1;
    while (x >= 0) matrix[x--][j] = 0;

    int y = j + 1;
    while (y < matrix[0].size()) matrix[i][y++] = 0;
    y = j - 1;
    while (y >= 0) matrix[i][y--] = 0;
  };

  for (pair<int, int>& cord : cords) {
    zeroOut(cord.first, cord.second);
  }
}
