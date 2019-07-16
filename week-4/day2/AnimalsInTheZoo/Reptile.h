#ifndef ANIMALSINTHEZOO_REPTILE_H
#define ANIMALSINTHEZOO_REPTILE_H

#include "Animal.h"
#include <string>
class Reptile : public Animal
{
public:
    Reptile(const std::string name, Gender gender);

    std::string breed() override;

    std::string getName() override;

};



#endif //ANIMALSINTHEZOO_REPTILE_H
