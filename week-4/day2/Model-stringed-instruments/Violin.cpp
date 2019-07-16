#include "Violin.h"

std::string Violin::sound()
{
    return "Screech";
}

Violin::Violin() : StringedInstruments("Violin", 4)
{}


