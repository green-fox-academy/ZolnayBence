#ifndef EXAM_TEST_ANIMAL_PROTECTION_DOG_H
#define EXAM_TEST_ANIMAL_PROTECTION_DOG_H
#include "Animal.h"
#include <time.h>
#include <iostream>
class Dog : public Animal
{
public:
    Dog(const std::string &name, bool isHealthy);

    Dog(bool isHealthy);

};


#endif //EXAM_TEST_ANIMAL_PROTECTION_DOG_H
