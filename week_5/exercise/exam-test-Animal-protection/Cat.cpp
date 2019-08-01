#include "Cat.h"

Cat::Cat(const std::string &name, bool isHealthy) : Animal(name, isHealthy)
{
    srand(time(nullptr));
    _healCost = rand() % 7;
}

Cat::Cat(bool isHealthy) : Animal(isHealthy)
{
    srand(time(nullptr));
    _healCost = rand() % 7;
    std::cout << _healCost << std::endl;
    _name = "cat";
}
