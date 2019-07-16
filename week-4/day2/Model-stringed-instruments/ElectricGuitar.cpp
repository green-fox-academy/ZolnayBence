#include "ElectricGuitar.h"

std::string ElectricGuitar::sound()
{
    return "Twang";
}

ElectricGuitar::ElectricGuitar() : StringedInstruments("Electric Guitar", 7)
{}

ElectricGuitar::ElectricGuitar( int numberOfStrings) : StringedInstruments("Electric Guitar", numberOfStrings)
{}





