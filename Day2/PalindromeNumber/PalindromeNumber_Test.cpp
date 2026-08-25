#include <gtest/gtest.h>

#include "PalindromeNumber.hpp"

TEST(IsPalindromeTest, PositivePalindrome) {
    Solution sol;
    EXPECT_TRUE(sol.isPalindrome(121));
}

TEST(IsPalindromeTest, NegativeNumberIsNotPalindrome) {
    Solution sol;
    EXPECT_FALSE(sol.isPalindrome(-121));
}

TEST(IsPalindromeTest, NonPalindrome) {
    Solution sol;
    EXPECT_FALSE(sol.isPalindrome(123));
}

TEST(IsPalindromeTest, SingleDigit) {
    Solution sol;
    EXPECT_TRUE(sol.isPalindrome(7));
}

TEST(IsPalindromeTest, Zero) {
    Solution sol;
    EXPECT_TRUE(sol.isPalindrome(0));
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
