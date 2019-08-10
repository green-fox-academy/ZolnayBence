#include "Toy.h"

Toy::Toy(int size, int cost, const std::string &color, const std::string &owner) : _size(size), _cost(cost),
                                                                                   _color(color), _owner(owner)
{}


Toy::Toy(int cost, const std::string &color, const std::string &owner) : _cost(cost), _color(color), _owner(owner)
{}

int Toy::getCost() const
{
    return _cost;
}

void Toy::setOwner(const std::string &owner)
{
    _owner = owner;
}

