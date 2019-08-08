#include <string>
#ifndef ANIMAL_ANIMAL_H
#define ANIMAL_ANIMAL_H


class Animal
{
public:


    Animal();

    void AnimalEat();

    void AnimalDrink();

    void AnimalPlay();

    Animal(const std::string &animal, int hunger, int thrist);

    void setAnimal(const std::string &animal);

    void setHunger(int hunger);

    void setThirst(int thirst);
    const std::string &getAnimal() const;
private:
    std::string _Animal;
    int _Hunger;
public:
    int getHunger() const;

private:
    int _Thirst;
public:
    int getThirst() const;

};


#endif //ANIMAL_ANIMAL_H
