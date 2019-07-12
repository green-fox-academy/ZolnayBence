#include <iostream>

//We have a number of bunnies and each bunny has two big floppy ears. We want to compute the total number of ears across all the bunnies recursively (without loops or multiplication).
int BunnyEars(int Bunnies);
int main()
{
    int Bunnies;

    std::cin >> Bunnies;

    int sumEars = BunnyEars(Bunnies);

    std::cout << "Bunny ears overall value: ";

    std::cout << sumEars;

    return 0;
}
int BunnyEars(int Bunnies)
{

    if(Bunnies == 1){
        return 2;
    }
    return 2 + (BunnyEars(Bunnies - 1));

}