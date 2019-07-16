#include <iostream>
#include "Reptile.h"

Reptile::Reptile(const std::string name, Gender gender) : Animal(name,gender,SkinSurface::SCALE,Reproduction::EGGS)
{

}

std::string Reptile::breed()
{
    return ReproductionToString(EGGS);
}

std::string Reptile::getName()
{

    return _name + " is a Reptile and it has " + SkinSurfaceToString(SCALE) + " all over their bodies and it";
}