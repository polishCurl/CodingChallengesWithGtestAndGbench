#include "evaluate_reverse_polish_notation/src/eval_rpn.hpp"
#include "gtest/gtest.h"

struct EvalRpnTest : public ::testing::Test {
  Solution solution;
};

TEST_F(EvalRpnTest, Basic) {
  std::vector<std::string> test_val{{"2", "1", "+", "3", "*"}};
  EXPECT_EQ(9, solution.evalRPN(test_val));
}

TEST_F(EvalRpnTest, OneNumber) {
  std::vector<std::string> test_val{{"31"}};
  EXPECT_EQ(31, solution.evalRPN(test_val));
}

TEST_F(EvalRpnTest, Addition) {
  std::vector<std::string> test_val{{"1", "1", "+"}};
  EXPECT_EQ(2, solution.evalRPN(test_val));
}

TEST_F(EvalRpnTest, Subtraction) {
  std::vector<std::string> test_val{{"1", "1", "-"}};
  EXPECT_EQ(0, solution.evalRPN(test_val));
}

TEST_F(EvalRpnTest, Multiplication) {
  std::vector<std::string> test_val{{"3", "2", "*"}};
  EXPECT_EQ(6, solution.evalRPN(test_val));
}

TEST_F(EvalRpnTest, Division) {
  std::vector<std::string> test_val{{"6", "2", "/"}};
  EXPECT_EQ(3, solution.evalRPN(test_val));
}