#include <iostream>
#include <string>

std::string appendAFunc(std::string aFC);

int main()
{
    std::string typo = "Chinchill";
    std::cout << appendAFunc(typo) << std::endl;
    return 0;
}

std::string appendAFunc(std::string aFC)
{
    return aFC + "a";
}