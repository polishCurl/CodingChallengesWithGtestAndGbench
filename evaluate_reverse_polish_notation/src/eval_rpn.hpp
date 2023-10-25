#ifndef TWO_SUM_HPP__
#define TWO_SUM_HPP__

#include <string>
#include <unordered_map>
#include <vector>
#include <functional>

class Solution {
 public:
  int evalRPN(std::vector<std::string>& tokens);

 private:
  using func = std::function<int(const int, const int)>;

  const std::unordered_map<char, func> funcs_{
      {'+', [](auto a, auto b) { return a + b; }},
      {'-', [](auto a, auto b) { return a - b; }},
      {'*', [](auto a, auto b) { return a * b; }},
      {'/', [](auto a, auto b) { return a / b; }},
  };
};

#endif