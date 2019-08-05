#ifndef EXAM_TEST_ANIMAL_PROTECTION_ANIMALSHELTER_H
#define EXAM_TEST_ANIMAL_PROTECTION_ANIMALSHELTER_H

#include "Animal.h"
#include <time.h>
#include <vector>
#include <string>
#include <iostream>
class AnimalShelter
{
public:
    AnimalShelter(int budget);

    AnimalShelter();

    int rescueAnimals(Animal *animal);

    int heal();

    void addAdopter(std::string name);

    void findNewOwner();

    int earnDonation(int donation);

    std::string toString();

private:
    int _budget = 0;
    std::vector<Animal*> animalsInTheShelter;
    std::vector<std::string> adoptersName;

};


#endif //EXAM_TEST_ANIMAL_PROTECTION_ANIMALSHELTER_H
