#include <iostream>
#include <fstream>
#include <string>

// Write a function that reads all lines of a file and writes the read lines to an other
// file (a.k.a copies the file)
// It should take the filenames as parameters
// It should return a boolean that shows if the copy was successful


bool copier(std::string fileFrom, std::string fileTo);

int main() {
    bool completed;
    completed = copier("../text.txt", "../copy.txt");
    std::cout << completed;
    return 0;
}

bool copier(std::string fileFrom, std::string fileTo) {
    std::ifstream file;
    std::ofstream secondFile;
    file.open(fileFrom);
    std::string line;
    bool completed;
    try {
        if (file.is_open()) {
            secondFile.open(fileTo);
            if (secondFile.is_open()) {
                while (std::getline(file, line)){
                    secondFile << line << std::endl;
                }
                completed = 1;
                secondFile.close();
            }
            file.close();
        }
    } catch (std::ofstream::failure &exception) {
        std::cout << exception.what() << std::endl;
        completed = 0;
    }
    return completed;
}