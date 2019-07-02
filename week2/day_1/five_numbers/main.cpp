#include <iostream>

int main()
{
// Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the values of that array using pointers again
    int number[5];

    for (int i = 0; i < sizeof(number) / sizeof(number[0]); ++i) {
        std::cout << "Please enter an integer: ";
        std::cin >> number[i];
    }
    std::cout << *(number+0) << std::endl;
    std::cout << *(number+1) << std::endl;
    for (int j = 0; j < sizeof(number) / sizeof(number[0]); ++j) {
        std::cout << *(number+j) << std::endl;
    }
    return 0;
}