#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int file(std::string stringFile);

int main()
{
    // Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file

    std::cout << file("../CMakeLists.txt") << std::endl;
    return 0;
}

int file(std::string stringFile)
{
    std::string line;
    std::ifstream file(stringFile);
    int numberLines = 0;
    if (file.is_open()) {
        while (getline(file, line)) {
            numberLines++;
        }
    }
    file.close();

    return numberLines;
};