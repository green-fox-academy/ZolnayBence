#include <iostream>
#include <fstream>
#include <string>

int main()
{
    // Open a file called "my-file.txt"
    // Write your name in it as a single line
    std::string name = {
            "Zolnay Bence"
    };
    std::ofstream file("../my-file.txt", std::ios::app);
    if (file.is_open()) {
        file << name << std::endl;
    }
    file.close();


    return 0;
}