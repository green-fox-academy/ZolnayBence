#include <iostream>
#include <fstream>
#include <map>

std::map<char, int> getTwoMostCommonCharacters(std::string filePath);

void printMap(std::map<char, int> mapWorking);

int getCharOccurrences(char actualChar, std::string inputString);

int main()
{
    printMap(getTwoMostCommonCharacters("../example.txt"));

    return 0;
}

std::map<char, int> getTwoMostCommonCharacters(std::string filePath)
{
    std::ifstream testFile(filePath);
    std::string line;
    std::map<char, int> allChars;
    std::map<char, int> commonChars;
    std::map<char, bool> charOccurrenceStopper;

    if (testFile.is_open()) {
        while (getline(testFile, line)) {
            for (int j = 0; j < line.size(); ++j) {
                charOccurrenceStopper[line[j]] = false;
            }
            for (int i = 0; i < line.size(); ++i) {
                if (!charOccurrenceStopper[line[i]]) {
                    allChars[line[i]] += getCharOccurrences(line[i], line);
                    charOccurrenceStopper[line[i]] = true;
                }
            }
        }
        testFile.close();

        int maxOccurrences = 0;
        int secondMaxOccurrences = 0;
        char maxOccurrencesChar;
        char secondMaxOccurrencesChar;
        int mapSize = 2;

        for (auto &iter: allChars) {
            if (iter.second > maxOccurrences) {
                commonChars.insert(std::make_pair(iter.first, iter.second));
                maxOccurrences = iter.second;
                if (commonChars.size() >= mapSize) {
                    commonChars.erase(maxOccurrencesChar);
                }
                maxOccurrencesChar = iter.first;
            }
        }

        for (auto &iter: allChars) {
            if (iter.second > secondMaxOccurrences && iter.first != maxOccurrencesChar) {
                commonChars.insert(std::make_pair(iter.first, iter.second));
                secondMaxOccurrences = iter.second;
                if (commonChars.size() >= mapSize) {
                    commonChars.erase(secondMaxOccurrencesChar);
                }
                secondMaxOccurrencesChar = iter.first;
            }
        }

    } else {
        std::cout << "File does not exist!";
    }

    return commonChars;
}

void printMap(std::map<char, int> mapWorking)
{
    std::cout << std::endl;
    for (auto &iter: mapWorking) {
        std::cout << iter.first << ": " << iter.second;
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

int getCharOccurrences(char actualChar, std::string inputString)
{
    int occurrences = 0;
    for (int i = 0; i < inputString.size(); ++i) {
        if (inputString[i] == actualChar) {
            occurrences++;
        }
    }
    return occurrences;
}