#include <iostream>
#include <string>

void swapab();

int main() {

    swapab();
    // Create two integer variables: a=15, b=23
    // Create a function named swap that gets the 2 integers as parameters and swaps its values.
    // Print the values before and after the function call and make sure the values are printed in reversed order.
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

void swapab() {
    int a = 15;
    int b = 23;
    std::swap(a, b);

    std::cout << "a's value is: " << a << std::endl;
    std::cout << "b's value is: " << b << std::endl;

}
