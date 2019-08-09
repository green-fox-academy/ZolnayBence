#include "Doll.h"

Doll::Doll(int size, const std::string &color, const std::string &owner) : Toy(size, 25, color, owner)
{}

std::string Doll::getToyType()
{
    return "A " + _color + " Doll " + std::to_string(_size) + " cm's big.";
}
