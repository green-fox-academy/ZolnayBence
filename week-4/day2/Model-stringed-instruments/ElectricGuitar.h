#ifndef MODEL_STRINGED_INSTRUMENTS_ELECTRICGUITAR_H
#define MODEL_STRINGED_INSTRUMENTS_ELECTRICGUITAR_H

#include "StringedInstruments.h"
#include <string>

class ElectricGuitar : public StringedInstruments
{

public:
    ElectricGuitar();

    ElectricGuitar(int numberOfStrings);

private:
    std::string sound() override;

};


#endif //MODEL_STRINGED_INSTRUMENTS_ELECTRICGUITAR_H
