#include <iostream>

int sumOfDigits(int n);

int main()
{
    int n = 545;
    int sumRes = sumOfDigits(n);
    std::cout << sumRes << std::endl;

    return 0;
}
int sumOfDigits(int n)
{
    int sum = 0;
    if(n == 0)
    {
       return sum;
    }

    sum += n%10;
    return sum + sumOfDigits(n/10);


}