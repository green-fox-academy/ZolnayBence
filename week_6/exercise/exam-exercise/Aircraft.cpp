#include "Aircraft.h"

Aircraft::Aircraft()
{}



Aircraft::Aircraft(int ammo, int ammunitionCapacity, int baseDamage) : _ammo(
        ammo), _ammunitionCapacity(ammunitionCapacity), _baseDamage(baseDamage)
{}

int Aircraft::fight()
{
    int damage = _baseDamage * _ammo;
    _ammo = 0;
    return damage;
}

int Aircraft::refill(int amount)
{
    int fueling = _ammunitionCapacity - _ammo;
    if(fueling >= _ammunitionCapacity){
        fueling += _ammo;
        return amount - fueling;
    } else {
        _ammo += fueling;
    }
    return 0;
}

std::string Aircraft::getStatus()
{
    return "Type " + getType() + ", Ammo: " + std::to_string(_ammo) + ", Base Damage: " + std::to_string(_baseDamage) + ", All Damage: " +
    std::to_string(_ammo * _baseDamage);
}

int Aircraft::getAmmo() const
{
    return _ammo;
}

int Aircraft::getAmmunitionCapacity() const
{
    return _ammunitionCapacity;
}

int Aircraft::getBaseDamage() const
{
    return _baseDamage;
}




