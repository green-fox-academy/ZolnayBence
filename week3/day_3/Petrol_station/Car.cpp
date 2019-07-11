#include "Car.h"

Car::Car(int gasAmount, int capacity) : _gasAmount(gasAmount), _capacity(capacity)
{}

void Car::Drive()
{
    --_gasAmount;
}



void Car::setGasAmount(int gasAmount)
{
    Car::_gasAmount = gasAmount;
}

void Car::addGasAmount(int gasAmount)
{
    _gasAmount += gasAmount;
}

int Car::getGasAmount() const
{
    return _gasAmount;
}

void Car::fillcar()
{
    _gasAmount++;
}

int Car::getCapacity() const
{
    return _capacity;
}





