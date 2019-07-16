#ifndef MODEL_STRINGED_INSTRUMENTS_BASSGUITAR_H
#define MODEL_STRINGED_INSTRUMENTS_BASSGUITAR_H

#include "StringedInstruments.h"

class BassGuitar : public StringedInstruments
{
public:


    BassGuitar();

    BassGuitar(int numberOfStrings);

    std::string sound() override;

};


#endif //MODEL_STRINGED_INSTRUMENTS_BASSGUITAR_H
