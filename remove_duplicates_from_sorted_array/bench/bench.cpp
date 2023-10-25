#include "benchmark/benchmark.h"
#include "remove_duplicates_from_sorted_array/src/remove_duplicates.hpp"
#include "utils/random_engine.hpp"

void BM_remove_duplicates(benchmark::State& state) {
  int len = state.range(0);
  int max_random = state.range(1);

  std::vector<int> vec(len);
  utils::RandomEngine random_engine;
  random_engine.randomize_values(vec.begin(), vec.end(), -100, max_random);
  std::sort(vec.begin(), vec.end());

  Solution solution;

  for (auto _ : state) {
    solution.removeDuplicates(vec);
    benchmark::ClobberMemory();
  }
  state.SetItemsProcessed(state.iterations() * len);
}

// Register the function as a benchmark
BENCHMARK(BM_remove_duplicates)->Ranges({{1, 30000}, {-100, 100}});