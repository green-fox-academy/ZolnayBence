#include <iostream>
#include <vector>
int powerN(int power, int n);
int main()
{
    int power = 3;
    int n = 2;
    int sumPower = powerN(power, n);
    std::cout << sumPower << std::endl;
    return 0;
}
int powerN(int power, int n){

    if(power >= 1 && n >= 1)
    {
        return (power * powerN(power, n - 1));
    }
    return 1;

}