#ifndef ANIMALSINTHEZOO_BIRD_H
#define ANIMALSINTHEZOO_BIRD_H

#include "Animal.h"
#include <string>

class Bird : public Animal
{
public:
    Bird(const std::string name, Gender gender);

    std::string breed() override;

    std::string getName() override;

};

#endif //ANIMALSINTHEZOO_BIRD_H
