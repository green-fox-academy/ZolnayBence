#include <iostream>
#include "Animal.h"
#include "AnimalShelter.h"
#include "Dog.h"
#include "Cat.h"
#include "Parrot.h"
int main()
{
    Cat cat(false);
    cat.toString();

    Dog dog(false);
    Parrot parrot(false);
    //cat.heal();
    cat.toString();
    dog.toString();

    AnimalShelter animalShelter;
    std::cout << animalShelter.rescueAnimals(&cat) << std::endl;
    animalShelter.rescueAnimals(&dog);

    animalShelter.heal();
    cat.toString();
    dog.toString();
    std::cout << animalShelter.rescueAnimals(&parrot) << std::endl;
    animalShelter.addAdopter("John");
    animalShelter.findNewOwner();

    std::cout << animalShelter.earnDonation(1000) << std::endl;
    std::cout << std::endl;
    animalShelter.toString();

    return 0;
}