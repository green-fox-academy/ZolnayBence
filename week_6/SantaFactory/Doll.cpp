#include "Doll.h"

Doll::Doll(const std::string &color, const std::string &owner) : Toy(25, color, owner)
{}

std::string Doll::getToyType()
{
    return  "Doll ";
}
