#include "Flower.h"

Flower::Flower(const std::string &color) : Plant (0,0.75,color) {}

std::string Flower::getPlantType()
{
    return "Flower";
}


