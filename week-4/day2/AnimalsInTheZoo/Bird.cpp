#include <iostream>
#include "Bird.h"

Bird::Bird(const std::string name, Gender gender) : Animal(name, gender, SkinSurface::FEATHER, Reproduction::EGGS)
{

}

std::string Bird::breed()
{
    return ReproductionToString(EGGS);
}

std::string Bird::getName()
{

    return _name + " is a Bird and it has " + SkinSurfaceToString(FEATHER) + " all over their bodies and it";
}