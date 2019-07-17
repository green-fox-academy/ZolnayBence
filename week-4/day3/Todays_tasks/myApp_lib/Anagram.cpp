#include <algorithm>
#include "Anagram.h"
#include <string>


bool isAnagram(std::string word, std::string word2)
{
    if (word.length() != word2.length()) {
        return false;
    }
        std::sort(word.begin(), word.end());
        std::sort(word2.begin(), word2.end());
        for (int i = 0; i < word.length(); i++) {
            if (word[i] != word2[i]) {
                return false;
        }
    }
   return true;
}