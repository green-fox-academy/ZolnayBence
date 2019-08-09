#ifndef SANTAFACTORY_SANTAFACTORY_H
#define SANTAFACTORY_SANTAFACTORY_H

#include "Toy.h"
#include <string>

class SantaFactory
{
public:
    void produce();
private:
    Toy* toys;
    std::string color;
    std::string name;
    int size = 0;
    int _balance = 200;
};


#endif //SANTAFACTORY_SANTAFACTORY_H
