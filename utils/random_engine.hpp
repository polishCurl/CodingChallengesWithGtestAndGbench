#ifndef RANDOM_ENGINE_HPP__
#define RANDOM_ENGINE_HPP__

#include <algorithm>
#include <iterator>
#include <limits>
#include <random>
#include <type_traits>

namespace utils {

struct RandomEngine {
  RandomEngine() : mersenne_engine_{std::random_device()()} {}

  template <typename Iterator>
  void randomize_values(
      Iterator begin, Iterator end,
      typename std::iterator_traits<Iterator>::value_type min =
          std::numeric_limits<
              typename std::iterator_traits<Iterator>::value_type>::min(),
      typename std::iterator_traits<Iterator>::value_type max =
          std::numeric_limits<
              typename std::iterator_traits<Iterator>::value_type>::max()) {
    using T = typename std::iterator_traits<Iterator>::value_type;
    static_assert(std::is_integral<T>::value,
                  "Iterator must be integral type!");
    std::uniform_int_distribution<T> dist{min, max};

    auto& engine = mersenne_engine_;
    std::generate(begin, end, [&dist, &engine]() { return dist(engine); });
  }

  template <typename T>
  T next(T min = std::numeric_limits<T>::min(),
         T max = std::numeric_limits<T>::max()) {
    static_assert(std::is_integral<T>::value, "T must be integral type!");
    std::uniform_int_distribution<T> dist{min, max};
    return dist(mersenne_engine_);
  }

 private:
  std::mt19937 mersenne_engine_;
};

}  // namespace utils

#endif