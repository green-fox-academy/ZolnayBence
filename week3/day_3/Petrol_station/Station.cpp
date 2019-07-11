#include "Station.h"
#include "Car.h"



Station::Station(int stationGasAmount) : _stationGasAmount(stationGasAmount)
{}

void Station::fillCar(Car &car)
{
    _stationGasAmount--;
    car.addGasAmount(1);
}

std::string Station::printingFueling()
{
    return " filling car";
}

int Station::getStationGasAmount() const
{
    return _stationGasAmount;
}



