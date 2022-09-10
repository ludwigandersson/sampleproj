#include <gtest/gtest.h>
#include <common.h>

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

TEST(HelloTest, CommonSum) {
  // Expect two strings not to be equal.
  // Expect equality.
  EXPECT_EQ(Utils::sum(7, 7), 14);
}