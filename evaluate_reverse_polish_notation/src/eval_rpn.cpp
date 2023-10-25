#include "eval_rpn.hpp"

#include <stack>

int Solution::evalRPN(std::vector<std::string>& tokens) {
  std::stack<int> operands;

  for (const auto& token : tokens) {
    if ((token.size() == 1) && (funcs_.find(token[0]) != funcs_.end())) {
      const auto op_b = operands.top();
      operands.pop();
      const auto op_a = operands.top();
      operands.pop();

      const auto res = funcs_.at(token[0])(op_a, op_b);
      // std::cout << op_a << token[0] << op_b << "=" << res << "\n";
      operands.push(res);
    } else {
      auto op = std::stoi(token);
      operands.push(op);
    }
  }

  return operands.top();
};