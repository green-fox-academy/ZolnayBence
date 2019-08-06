#include <iostream>
#include "Carrier.h"
#include "Aircrafts.h"

Carrier::Carrier()
{}

Carrier::Carrier(int health, int ammoStorage) : _health(5000), _ammoStorage(2800)
{}

void Carrier::add(Aircrafts &aircrafts)
{
    _aircrafts.push_back(&aircrafts);
}

void Carrier::fill()
{
    int ammoNeeded = 0;
    int ammoForOneAircraft = 0;
    for (int i = 0; i < _aircrafts.size(); ++i) {
        if(_ammoStorage <= 0){
            std::cout << "There is no ammo to refill at the moment." << std::endl;

        }
    }
    std::cout << "Carrier is refilling ammunition.";
    for(auto &_aircrafts : _aircrafts){
            ammoNeeded += _aircrafts->getAmmunitionCapacity() - _aircrafts->getAmmo();
    }

    if(ammoNeeded <= _ammoStorage){
        for(auto &_aircrafts : _aircrafts){
            ammoForOneAircraft = _aircrafts->getAmmunitionCapacity() - _aircrafts->getAmmo();
            _ammoStorage = ammoForOneAircraft - _aircrafts->refill(ammoForOneAircraft);
        }
    } else {
        for (auto &_aircrafts : _aircrafts) {
            ammoForOneAircraft = _aircrafts->getAmmunitionCapacity() - _aircrafts->getAmmo();
            if (_aircrafts->isPriority() && _ammoStorage >= ammoForOneAircraft) {
                _aircrafts->refill(ammoForOneAircraft);
                ammoForOneAircraft -= _ammoStorage;
            } else if (_aircrafts->isPriority() && _ammoStorage < ammoForOneAircraft) {
                _aircrafts->refill(_ammoStorage);
                _ammoStorage = 0;
                std::cout << "The Carrier has run out of ammunition.. " << std::endl;
            }
        }
    }
        for (auto _aircraft : _aircrafts) {
            ammoForOneAircraft = _aircraft->getAmmunitionCapacity() - _aircraft->getAmmo();
            if (!(_aircraft->isPriority()) && _ammoStorage >= ammoForOneAircraft) {
                _ammoStorage -= ammoForOneAircraft - _aircraft->refill(ammoForOneAircraft);
            } else if (!(_aircraft->isPriority()) && _ammoStorage < ammoForOneAircraft) {
                _aircraft->refill(_ammoStorage);
                _ammoStorage = 0;
                std::cout << "Can only fill f-35 aircrafts." << std::endl;
            }
        }
}

void Carrier::fight(Carrier &carrier)
{

    int dmgCounter = 0;
        for (int i = 0; i < _aircrafts.size(); ++i) {
           dmgCounter += _aircrafts[i]->damage();

        }
        carrier._health -= dmgCounter;
}
