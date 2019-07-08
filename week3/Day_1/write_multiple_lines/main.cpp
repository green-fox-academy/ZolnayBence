#include <iostream>
#include <string>
#include <fstream>

void fileManipulator(std::string filename, std::string word, int);

int main()
{
    // Create a function that takes 3 parameters: a path, a word and a number
    // and is able to write into a file.
    // The path parameter should be a string that describes the location of the file you wish to modify
    // The word parameter should also be a string that will be written to the file as individual lines
    // The number parameter should describe how many lines the file should have.
    // If the word is "apple" and the number is 5, it should write 5 lines
    // into the file and each line should read "apple"
    std::string path;
    std::string line;
    int lines;
    std::cout << "Please type in the file you wish to modify: " << std::endl;
    std::cin >> path;
    std::cout << "Please enter the word you want to write: " << std::endl;
    std::cin >> line;
    std::cout << "Please enter how many lines you want to add: " << std::endl;
    std::cin >> lines;
    std::string alma = "alma";
    fileManipulator(path, line, lines);
    return 0;
}

void fileManipulator(std::string filename, std::string word, int lines)
{
    std::ofstream file(filename);
    if (file.is_open()) {
        for (int i = 0; i < lines; ++i) {
            std::cout << word << std::endl;
        }
    }
    file.close();
}