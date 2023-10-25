#include "benchmark/benchmark.h"
#include "two_sum/src/two_sum.hpp"
#include "utils/random_engine.hpp"

void BM_two_sum(benchmark::State& state) {
  int N = state.range(0);
  int M = state.range(1);

  std::vector<int> nums(N);
  std::vector<int> targets(M);

  utils::RandomEngine random_engine;
  random_engine.randomize_values(nums.begin(), nums.end());

  for (auto& target : targets) {
    int i, j;

    do {
      i = random_engine.next(0, N);
      j = random_engine.next(0, N);
    } while (i == j);

    target = nums[i] + nums[j];
  }

  Solution solution;

  for (auto _ : state) {
    for (auto target : targets) {
      solution.twoSum(nums, target);
    }
    benchmark::ClobberMemory();
  }
  state.SetItemsProcessed(N * M);
}

// Register the function as a benchmark
BENCHMARK(BM_two_sum)->Ranges({{1 << 6, 1 << 16}, {1, 1 << 12}});