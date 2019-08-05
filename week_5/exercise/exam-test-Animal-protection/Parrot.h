#ifndef EXAM_TEST_ANIMAL_PROTECTION_PARROT_H
#define EXAM_TEST_ANIMAL_PROTECTION_PARROT_H

#include <time.h>
#include <iostream>
#include "Animal.h"

class Parrot : public Animal
{
public:
    Parrot(const std::string &name, bool isHealthy);

    Parrot(bool isHealthy);

};


#endif //EXAM_TEST_ANIMAL_PROTECTION_PARROT_H
