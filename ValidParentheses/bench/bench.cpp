#include <array>
#include <iostream>

#include "benchmark/benchmark.h"
#include "utils/random_engine.hpp"
#include "valid_parentheses.hpp"

void BM_valid_parentheses(benchmark::State& state) {
  constexpr size_t kBracketTypeCount{6};
  constexpr size_t kIterations{1000};
  const std::array<char, kBracketTypeCount> brackets{'{', '(', '[',
                                                     '}', ']', ')'};

  const size_t N = state.range(0);
  std::array<std::string, kIterations> input_strings;
  Solution solution;

  std::generate(input_strings.begin(), input_strings.end(), [&brackets, N]() {
    utils::RandomEngine random_engine;

    std::string str(N, ' ');
    for (size_t i = 0; i < N; i++) {
      str[i] = brackets[random_engine.next(0UL, kBracketTypeCount)];
    }

    return str;
  });

  for (auto _ : state) {
    for (auto& str : input_strings) {
      benchmark::DoNotOptimize(solution.isValid(str));
    }
  }
  state.SetItemsProcessed(kIterations * N);
}

// Register the function as a benchmark
BENCHMARK(BM_valid_parentheses)->Range(1, 10000);