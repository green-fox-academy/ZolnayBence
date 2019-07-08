#include <iostream>
#include <fstream>
#include <string>
bool fileReader(std::string fileOne, std::string fileTwo);
int main()
{
    // Write a function that reads all lines of a file and writes the read lines to an other file (a.k.a copies the file)
// It should take the filenames as parameters
// It should return a boolean that shows if the copy was successful
    std::string file;
    std::string file2;
    std::cout << "please enter a file's path: " << std::endl;
    std::cin >> file;
    std::cout << "Please enter the file you want to copy this file's conent to: " << std::endl;
    std::cin >> file2;
    std::cout << fileReader(file, file2);



    return 0;
}

bool fileReader(std::string fileOne, std::string fileTwo)
{
    std::ifstream file(fileOne);
    std::string line;
    std::ofstream file2(fileTwo);

    if (file.is_open() && file2.is_open()) {
        while(std::getline(file, line))
            file2 << line;
        return true;
    }else{
        return false;
    }

}