#include <iostream>
#include <fstream>

int divide(int num1);

int main()
{
    // Create a function that takes a number
    // divides ten with it,
    // and prints the result.
    // It should print "fail" if the parameter is 0

    try {
        int num1;
        divide(num1);
        std::cout << "Enter a number: " << std::endl;
        std::cin >> num1;
        if (num1 == 0) {
            throw 0;

        } else {
            std::cout << "the result of your division is: " << divide(num1) << std::endl;
        }


    } catch (int x) {
        std::cout << "Fail ERROR: " << x << std::endl;
    }
    return 0;
}

int divide(int num1)
{

    return (num1 / 10);
}