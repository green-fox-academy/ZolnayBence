#ifndef MODEL_STRINGED_INSTRUMENTS_STRINGEDINSTRUMENTS_H
#define MODEL_STRINGED_INSTRUMENTS_STRINGEDINSTRUMENTS_H

#include "Instrument.h"

#include <string>

class StringedInstruments : Instrument
{
protected:
    int _numberOfStrings;

    virtual std::string sound() = 0;

public:


    StringedInstruments(const std::string &name, int numberOfStrings);

    void play() override;
};


#endif //MODEL_STRINGED_INSTRUMENTS_STRINGEDINSTRUMENTS_H
