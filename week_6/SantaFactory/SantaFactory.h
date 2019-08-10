#ifndef SANTAFACTORY_SANTAFACTORY_H
#define SANTAFACTORY_SANTAFACTORY_H

#include "Toy.h"
#include "Doll.h"


class SantaFactory
{
public:
    SantaFactory();

    Toy produce(int size, const std::string &color, const std::string &name);
private:
    int _balance = 200;
};


#endif //SANTAFACTORY_SANTAFACTORY_H
