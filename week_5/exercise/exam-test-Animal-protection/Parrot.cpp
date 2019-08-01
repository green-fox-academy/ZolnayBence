//
// Created by zolnay0 on 2019.08.01..
//

#include "Parrot.h"

Parrot::Parrot(const std::string &name, bool isHealthy) : Animal(name, isHealthy) {
    srand(time(nullptr));
    _healCost = rand() % 7;
    std::cout << _healCost << std::endl;
    _name = "parrot";
}

Parrot::Parrot(bool isHealthy) : Animal(isHealthy) {
    srand(time(nullptr));
    _healCost = rand() % 7 + 4;
}
