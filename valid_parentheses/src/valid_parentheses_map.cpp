#include <map>
#include <stack>

#include "valid_parentheses.hpp"

using namespace std;

static const std::map<char, char> m{
    {'{', '}'},
    {'[', ']'},
    {'(', ')'},
};

bool Solution::isValid(string str) {
  std::stack<char> s;

  for (auto c : str) {
    if (m.count(c)) {
      s.push(m.at(c));
    } else if (!s.empty()) {
      auto last = s.top();
      if (last != c) {
        return false;
      }

      s.pop();
    } else {
      return false;
    }
  }

  return s.empty();
}