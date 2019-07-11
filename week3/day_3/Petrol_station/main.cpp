#include <iostream>
#include "Car.h"
#include "Station.h"
//Create Station and Car classes
//
//Station
//
//Members:
//_gasAmount
//create a constructor that initializes the _gasAmount
//_fill(car) -> fills 1 unit of gas until the car is on full. Every time it transfers 1 unit it should print "Filling car!" on the console. When the car is full it should print the remaining gas amount of the station
//Car
//
//Members:
//_gasAmount
//_capacity
//create constructor for Car with 2 arguments(_gasAmount and _capacity)
//car has 2 methods:
//isFull() -> returns true if _capacity equals to _gasAmount, false otherwise
//_fill() -> increments the _gasAmount by one.
//In the main function create a station and 5 cars with different amount of _capacity and gas. Refill all the cars.
int main()
{
    Station Shell(1000);
    Car kicsiKocsiSuzuki(95, 100);
    std::cout << "kicsi kocsi suzuki has started tanking at the 8th gas station: " << kicsiKocsiSuzuki.getGasAmount();

    while(kicsiKocsiSuzuki.getGasAmount() != kicsiKocsiSuzuki.getCapacity()){
        std::cout << Shell.printingFueling() << std::endl;
        Shell.fillCar(kicsiKocsiSuzuki);
        std::cout << kicsiKocsiSuzuki.getGasAmount() << std::endl;
        std::cout << Shell.getStationGasAmount();
    }

    return 0;
}