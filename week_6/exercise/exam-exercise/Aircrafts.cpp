#include "Aircrafts.h"

Aircrafts::Aircrafts()
{}



Aircrafts::Aircrafts(int ammo, int ammunitionCapacity, int baseDamage) : _ammo(
        ammo), _ammunitionCapacity(ammunitionCapacity), _baseDamage(baseDamage)
{}

int Aircrafts::fight()
{
    int damage = _baseDamage * _ammo;
    _ammo = 0;
    return damage;
}

int Aircrafts::refill(int amount)
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

std::string Aircrafts::getStatus()
{
    return "Type " + getType() + ", Ammo: " + std::to_string(_ammo) + ", Base Damage: " + std::to_string(_baseDamage) + ", All Damage: " +
    std::to_string(_ammo * _baseDamage);
}

int Aircrafts::getAmmo() const
{
    return _ammo;
}

int Aircrafts::getAmmunitionCapacity() const
{
    return _ammunitionCapacity;
}

int Aircrafts::getBaseDamage() const
{
    return _baseDamage;
}

int Aircrafts::damage()
{
    int infflictedDamage = _baseDamage * _ammo;
    return infflictedDamage;
}


