#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <vector>

std::vector<std::string> swearWords(std::string file);
int main()
{
    std::vector<std::string> swearWordsOverride;
    swearWordsOverride = swearWords("../file.txt");
    for (int i = 0; i < swearWordsOverride.size(); ++i) {
        std::cout << swearWordsOverride[i];
    }

    return 0;
}


std::vector<std::string> swearWords(std::string file)
{
       std::vector<std::string> badWords = {"fuck", "bloody", "cock", "shit", "fucker", "fuckstick", "asshole", "dick", "piss", "cunt" };
       std::ifstream ss(file);
       if(!ss.is_open()){
           std::cout << "File doesn't exist" << std::endl;
           exit(2);
       }
       int badWordsCounter = 0;
       std::vector<std::string> wordsText;
       while(!ss.eof()){
           std::string word;
           while (ss >> word)
           {
               std::cout<< word << std::endl;
               wordsText.push_back(word);

           }
       }
       for(int i = 0; i < wordsText.size(); i++){
           for (int j = 0; j < badWords.size(); ++j) {
               if(badWords[j] == wordsText[i]){
                   wordsText.erase(wordsText.begin() + i);
                   badWordsCounter++;

               }
           }
       }

    std::cout << badWordsCounter;
    return wordsText;
}
