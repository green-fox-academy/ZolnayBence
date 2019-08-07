#include "F16.h"

F16::F16() {}

F16::F16(int aircraftAmmunition, int ammunitionCapacity, int baseDamage) : Aircraft(0, 8, 30)
{}

std::string F16::getType()
{
    return "F16";
}

bool F16::isPriority()
{
    return false;
}
