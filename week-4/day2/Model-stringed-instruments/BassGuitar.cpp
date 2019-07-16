//
// Created by zolnay0 on 2019.07.16..
//

#include "BassGuitar.h"



std::string BassGuitar::sound()
{
    return "Duum-duum-duum";
}

BassGuitar::BassGuitar() : StringedInstruments("Bass Guitar", 4)
{}

BassGuitar::BassGuitar(int numberOfStrings) : StringedInstruments("Bass Guitar", numberOfStrings)
{}

