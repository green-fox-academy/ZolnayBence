#include <iostream>
#include <map>
#include <fstream>
#include <sstream>

// Create a method that finds the 5 most common lottery numbers in lottery.csv

std::map<std::string, int> readFile(std::string fileName);
std::string mostCommonNumbers(std::map<std::string, int> numbersPlayed);
void findCommonNumbers(std::map<std::string, int> numbersPlayed);
int main()
{
    std::map<std::string, int> Numbers = readFile("../lottery.csv");
    findCommonNumbers(Numbers);

    return 0;
}
std::map<std::string, int> readFile(std::string fileName)
{

    std::ifstream file("../lottery.csv");
    if (!file.is_open()) {
        std::cout << "Cannot find lottery file." << std::endl;
        exit(2);
    }
    std::map<std::string, int> commonNumbers;
    std::string line;
    while (getline(file, line)) {
        std::stringstream ss(line);


        std::string playedNumber1;
        std::string playedNumber2;
        std::string playedNumber3;
        std::string playedNumber4;
        std::string playedNumber5;
        std::string temp;
        for (int i = 0; i < 11; ++i) {
            getline(ss, temp, ';');
        }

        getline(ss, playedNumber1, ';');
        getline(ss, playedNumber2, ';');
        getline(ss, playedNumber3, ';');
        getline(ss, playedNumber4, ';');
        getline(ss, playedNumber5, ';');

        //std::string playedNumber = playedNumber1 + playedNumber2 + playedNumber3 + playedNumber4 + playedNumber5;

        commonNumbers[playedNumber1]++;
        commonNumbers[playedNumber2]++;
        commonNumbers[playedNumber3]++;
        commonNumbers[playedNumber4]++;
        commonNumbers[playedNumber5]++;

//        if(commonNumbers.find(playedNumber) != commonNumbers.end()){
//            commonNumbers[playedNumber]++;
//        }else{
//            commonNumbers.insert(std::make_pair(playedNumber, 1));
//        }
//    }

    }
    return commonNumbers;
}

std::string mostCommonNumbers(std::map<std::string, int> numbersPlayed)
{
    int max = 0;
    std::string playedNumbers = " ";
    for (const auto& pair : numbersPlayed) {
        if(pair.second > max){
            max = pair.second;
            playedNumbers = pair.first;
        }
    }
    std::cout << "Most common numbers: " << playedNumbers << " Times: " << max << std::endl;
    return playedNumbers;
}

void findCommonNumbers(std::map<std::string, int> numbersPlayed)
{

    for (int i = 0; i <= 5; ++i) {
        std::string key = mostCommonNumbers(numbersPlayed);

        numbersPlayed.erase(key);

    }
}