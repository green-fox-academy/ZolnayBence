#include "apple.h"
#include <gtest/gtest.h>

TEST(apple_check, test_apple)
{
    EXPECT_EQ(getApple(), "apple");
}
TEST(sum_check, test_sum)
{
    std::vector<int> apples = {5, 4, 2, 7, 8};
    ASSERT_EQ(testInteger(apples), 26);
}
TEST(sumWithout_check, test_sumWithout)
{
    std::vector<int> apples = {};
    ASSERT_EQ(testInteger(apples), 0);
}
TEST(sumWithOne_check, test_sumWithOne)
{
    std::vector<int> apples = {5};
    ASSERT_EQ(testInteger(apples), 5);
}
TEST(sumWithMultiple_check, test_sumWithMultiple)
{
    std::vector<int> apples = {5, 4, 7, 8};
    ASSERT_EQ(testInteger(apples), 24);
}
TEST(sumNegatives_check, test_sumNegatives)
{
    std::vector<int> apples = {-5, -4};
    ASSERT_EQ(testInteger(apples), -9);
}