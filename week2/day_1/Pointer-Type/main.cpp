#include <iostream>

int main()
{
    // Create a pointer for each variable and print out the memory addresses of that variables
    // Print out the values of the pointers

    int a = 31;
    double b = 432.2;
    int *aPtr = &a;
    double *bPtr = &b;
    std::string name = "Bob";
    std::string *namePtr = &name;
    std::cout << "[Std::string name]'s memory address:  " << &namePtr << " [double b]'s memory address: " << &bPtr << " [int a]'s memory address:" << &aPtr << std::endl;
    std::cout << "name's value: " << *namePtr << " a's value: " << *aPtr << " b's value: " << *bPtr << std::endl;
    return 0;
}