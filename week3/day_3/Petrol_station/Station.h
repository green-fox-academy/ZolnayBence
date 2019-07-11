#ifndef PETROL_STATION_STATION_H
#define PETROL_STATION_STATION_H
#include "Car.h"
#include <string>

class Station
{
public:
    Station(int stationGasAmount);

    void fillCar(Car& car);

    std::string printingFueling();

    int getStationGasAmount() const;

private:
    int _stationGasAmount;

};


#endif //PETROL_STATION_STATION_H
