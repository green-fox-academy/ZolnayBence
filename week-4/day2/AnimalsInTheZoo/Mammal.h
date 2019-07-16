#ifndef ANIMALSINTHEZOO_MAMMAL_H
#define ANIMALSINTHEZOO_MAMMAL_H

#include "Animal.h"
#include <string>
class Mammal : public Animal
{
public:
    Mammal(const std::string name, Gender gender);

    std::string breed() override;

    std::string getName() override;

};


#endif //ANIMALSINTHEZOO_MAMMAL_H
