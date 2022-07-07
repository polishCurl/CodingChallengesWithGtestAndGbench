#include "benchmark/benchmark.h"
#include "set_matrix_zeroes.hpp"
#include "utils/random_engine.hpp"

void BM_set_matrix_zeroes(benchmark::State& state) {
  int rows = state.range(0);
  int columns = state.range(1);
  int zeroes = state.range(2);

  std::vector<std::vector<int>> matrix(rows, std::vector<int>(columns));

  utils::RandomEngine random_engine;

  for (auto& row : matrix) {
    random_engine.randomize_values(row.begin(), row.end());
  }

  for (int i = 0; i < zeroes; i++) {
    auto row = random_engine.next(0, rows - 1);
    auto column = random_engine.next(0, columns - 1);
    matrix[row][column] = 0;
  }

  Solution solution;

  for (auto _ : state) {
    solution.setZeroes(matrix);
    // benchmark::ClobberMemory();
  }

  state.SetItemsProcessed(state.iterations() * rows * columns);
}

// Register the function as a benchmark
BENCHMARK(BM_set_matrix_zeroes)
    ->ArgsProduct({
        {8, 64, 1024},
        {8, 64, 1024},
        {0, 128, 2048},
    });