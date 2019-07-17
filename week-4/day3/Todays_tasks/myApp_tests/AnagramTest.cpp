#include <gtest/gtest.h>
#include <string>
#include "Anagram.h"

TEST(anagram_check, anagram_test)
{
    std::string szavacska = "Agnaarm";
    std::string szavacska2 = "Anagram";
    EXPECT_EQ(isAnagram(szavacska, szavacska2), true);
}
