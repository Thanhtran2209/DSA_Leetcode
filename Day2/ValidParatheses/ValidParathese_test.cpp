#include <gtest/gtest.h>

#include "ValidParathese.hpp"

TEST(IsPalindromeTest, Test1) {
    Solution sol;
    EXPECT_TRUE(sol.isValid("{}{}{}"));
}


TEST(IsPalindromeTest, Test2) {
    Solution sol;
    EXPECT_FALSE(sol.isValid("{}{)}{}"));
}


TEST(IsPalindromeTest, Test3) {
    Solution sol;
    EXPECT_FALSE(sol.isValid("}{}{}"));
}




int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
