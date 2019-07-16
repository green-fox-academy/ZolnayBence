#include "StringedInstruments.h"
#include <iostream>
#include "BassGuitar.h"
#include "ElectricGuitar.h"

StringedInstruments::StringedInstruments(const std::string &name, int numberOfStrings) : Instrument(name),
                                                                                         _numberOfStrings(
                                                                                                 numberOfStrings)
{}

void StringedInstruments::play()
{
    std::cout << _name << " , a " << _numberOfStrings << " -stringed instrument that goes " << sound() << std::endl;
}

