#include <iostream>
#include "Animal.h"
//Create an Animal class
//Every animal has a hunger value, which is a whole number
//Every animal has a thirst value, which is a whole number
//when creating a new animal object these values are created with the default 50 value
//Every animal can eat() which decreases their hunger by one
//Every animal can drink() which decreases their thirst by one
//Every animal can play() which increases both by one
int main()
{
    Animal Hedgehog("Sonic", 50, 50);
    Animal Fox("Griseus", 50, 50);
    std::cout << Fox.getHunger() << std::endl;
    Fox.AnimalPlay();
    Fox.AnimalPlay();
    Fox.AnimalPlay();
    std::cout << Fox.getHunger() << std::endl <<  Fox.getThirst() << std::endl;
    std::cout << "Since our little fox Griseus has played 3 times in arow he got really hungry and also thirsty so he helped himself with some food" << std::endl;
    Fox.AnimalEat();
    Fox.AnimalDrink();
    std::cout << Fox.getHunger() << std::endl << Fox.getThirst() << std::endl;
    std::cout << "Let's see how's our little hedgehog (Sonic) is doing" << std::endl;
    std::cout << Hedgehog.getHunger() << std::endl;
    Hedgehog.AnimalPlay();
    std::cout << Hedgehog.getHunger() << std::endl;
    std::cout << "Sonic the hedgehog started to play in the mud pit. After the little play he got hungry " << std::endl;
    Hedgehog.AnimalEat();
    std::cout << Hedgehog.getHunger() << std::endl;
    Hedgehog.AnimalDrink();
    std::cout << Hedgehog.getThirst() << std::endl;
    std::cout << "Sonic the hedgehog After running 10k miles in 10 seconds got thristy so he wanders off to drink some water. " << std::endl;
    Hedgehog.AnimalDrink();
    std::cout << Hedgehog.getThirst();
    return 0;
}