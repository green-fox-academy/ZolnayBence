#include "Dog.h"


Dog::Dog(const std::string &name, bool isHealthy) : Animal(name, isHealthy) {
    srand(time(nullptr));
    _healCost = rand() % 7;
    std::cout << _healCost << std::endl;
    _name = "dog";
}

Dog::Dog(bool isHealthy) : Animal(isHealthy) {
    srand(time(nullptr));
    _healCost = rand() % 8 + 1;
}
