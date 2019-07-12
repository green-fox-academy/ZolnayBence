#include <iostream>

//Find the greatest common divisor of two numbers using recursion.

int gCd(int number, int number2);

int main()
{
    int a, b;
    std::cout << "Type in 2 variables:  ";
    std::cin >> a >> b;
    std::cout << gCd(a, b) << std::endl;
    return 0;
}
int gCd(int number, int number2)
{
  if(number2 == 0){
     return number;
  }
    return gCd(number2, number%number2);

}