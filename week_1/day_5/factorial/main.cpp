#include <iostream>
#include <string>

int factorial(int n);

int main()
{
    int counter, n;
    std::cout << "Enter the Number : ";
    std::cin >> n;

    std::cout << n << " Factorial value is! :  " << factorial(n);

    return 0;
}

int factorial(int n)
{
    int counter;
    int fact = 1;
    for (int counter = 1; counter <= n; counter++)
    {
        fact = fact * counter;
    }
    return fact;
}