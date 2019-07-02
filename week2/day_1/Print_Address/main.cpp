#include <iostream>

int main()
{
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the memory addresses of the elements in the array
    int number[5];

    for(int j = 0; j < sizeof(number)/sizeof(number[0]); ++j){
        std::cout << "Please enter an integer: ";
        std::cin >> number[j];
    }

    for(int i = 0; i < sizeof(number)/sizeof(number[0]); ++i) {
        std::cout << &number[i] << " The value of the arrays: " << number[i] << std::endl;
    }
    return 0;
}