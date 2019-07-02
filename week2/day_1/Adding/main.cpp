#include <iostream>

int main()
{
// Add two numbers using pointers

    int a = 20;
    int b = 17;
    int *aPtr = &a;
    int *bPtr = &b;
    int Add = *aPtr + *bPtr;
    std::cout << "The Sum of aPtr and bPtr:  " << Add << std::endl;

    return 0;
}