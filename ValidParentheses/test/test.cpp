#include "gtest/gtest.h"
#include "valid_parentheses.hpp"

struct ValidParenthesesTest : public ::testing::Test {
  Solution solution;
};

TEST_F(ValidParenthesesTest, EmptyString) { EXPECT_TRUE(solution.isValid("")); }

TEST_F(ValidParenthesesTest, OpenCurly) { EXPECT_FALSE(solution.isValid("{")); }
TEST_F(ValidParenthesesTest, OpenSquare) {
  EXPECT_FALSE(solution.isValid("["));
}
TEST_F(ValidParenthesesTest, OpenRound) { EXPECT_FALSE(solution.isValid("(")); }

TEST_F(ValidParenthesesTest, CloseCurly) {
  EXPECT_FALSE(solution.isValid("}"));
}
TEST_F(ValidParenthesesTest, CloseSquare) {
  EXPECT_FALSE(solution.isValid("]"));
}
TEST_F(ValidParenthesesTest, CloseRound) {
  EXPECT_FALSE(solution.isValid(")"));
}

TEST_F(ValidParenthesesTest, MismatchCurlySquare) {
  EXPECT_FALSE(solution.isValid("{]"));
}
TEST_F(ValidParenthesesTest, MismatchSquareCurly) {
  EXPECT_FALSE(solution.isValid("[}"));
}
TEST_F(ValidParenthesesTest, MismatchSquareRound) {
  EXPECT_FALSE(solution.isValid("[)"));
}
TEST_F(ValidParenthesesTest, MismatchRoundSquare) {
  EXPECT_FALSE(solution.isValid("(]"));
}
TEST_F(ValidParenthesesTest, MismatchCurlyRound) {
  EXPECT_FALSE(solution.isValid("{)"));
}
TEST_F(ValidParenthesesTest, MismatchRoundCurly) {
  EXPECT_FALSE(solution.isValid("(}"));
}

TEST_F(ValidParenthesesTest, MatchCurly) {
  EXPECT_TRUE(solution.isValid("{}"));
}
TEST_F(ValidParenthesesTest, MatchSquare) {
  EXPECT_TRUE(solution.isValid("[]"));
}
TEST_F(ValidParenthesesTest, MatchRound) {
  EXPECT_TRUE(solution.isValid("()"));
}

TEST_F(ValidParenthesesTest, ComplexValid) {
  EXPECT_TRUE(solution.isValid("((){{[()()]}})"));
}

TEST_F(ValidParenthesesTest, ComplexInvalid) {
  EXPECT_FALSE(solution.isValid("{[]([{{}[]})"));
}
