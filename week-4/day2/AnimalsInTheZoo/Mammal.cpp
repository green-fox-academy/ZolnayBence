//
// Created by zolnay0 on 2019.07.16..
//
#include <iostream>
#include "Mammal.h"

Mammal::Mammal(const std::string name, Gender gender) : Animal(name,gender,SkinSurface::FUR,Reproduction::BIRTH)
{

}

std::string Mammal::breed()
{
    return ReproductionToString(BIRTH);
}

std::string Mammal::getName()
{

    return _name + " is a Mammal and it has " + SkinSurfaceToString(FUR) + " all over their bodies and it";
}
