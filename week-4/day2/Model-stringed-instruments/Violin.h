#ifndef MODEL_STRINGED_INSTRUMENTS_VIOLIN_H
#define MODEL_STRINGED_INSTRUMENTS_VIOLIN_H

#include "StringedInstruments.h"

class Violin : public StringedInstruments
{
public:

private:
public:
    Violin();

private:
    std::string sound() override;

};


#endif //MODEL_STRINGED_INSTRUMENTS_VIOLIN_H
