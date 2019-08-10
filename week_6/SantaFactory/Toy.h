#ifndef SANTAFACTORY_TOY_H
#define SANTAFACTORY_TOY_H


#include <string>

class Toy
{
public:
    Toy(int size, int cost, const std::string &color, const std::string &owner);

    Toy(int cost, const std::string &color, const std::string &owner);

    virtual std::string getToyType() = 0;

    int getCost() const;
protected:
    int _size = 0;
    int _cost;
    std::string _color;
    std::string _owner;
};


#endif //SANTAFACTORY_TOY_H
