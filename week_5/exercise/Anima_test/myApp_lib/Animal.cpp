#include "Animal.h"

const std::string &Animal::getAnimal() const
{
    return _Animal;
}

void Animal::setAnimal(const std::string &animal)
{
    _Animal = animal;
}
Animal::Animal() : _Hunger(50), _Thirst(50){}
Animal::Animal(const std::string &animal, int hunger, int thrist) : _Animal(animal), _Hunger(hunger), _Thirst(thrist)
{

}

int Animal::getThirst() const
{
    return _Thirst;
}

void Animal::setThirst(int thirst) // This function sets Thirst
{
    _Thirst = thirst;
}

int Animal::getHunger() const
{
    return _Hunger;
}

void Animal::setHunger(int hunger) // This function sets the hunger
{
    _Hunger = hunger;
}

void Animal::AnimalEat() // This Function increases Hunger level
{
    _Hunger -= 10;
}

void Animal::AnimalDrink() // This function increases Thirst level
{
    _Thirst -= 10;
}

void Animal::AnimalPlay() // This function decreases the Hunger/Thirst level
{
    _Thirst++;
    _Hunger++;

}
