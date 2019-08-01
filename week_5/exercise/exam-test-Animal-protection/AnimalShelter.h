#ifndef EXAM_TEST_ANIMAL_PROTECTION_ANIMALSHELTER_H
#define EXAM_TEST_ANIMAL_PROTECTION_ANIMALSHELTER_H

#include "Animal.h"
#include <time.h>
#include <vector>
#include <string>
class AnimalShelter
{
public:
private:
    int _budget;
    std::vector<Animal*> animals;
    std::vector<std::string> adoptersName;

};


#endif //EXAM_TEST_ANIMAL_PROTECTION_ANIMALSHELTER_H
