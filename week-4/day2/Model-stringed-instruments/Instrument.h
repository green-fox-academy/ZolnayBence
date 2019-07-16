#ifndef MODEL_STRINGED_INSTRUMENTS_INSTRUMENT_H
#define MODEL_STRINGED_INSTRUMENTS_INSTRUMENT_H

#include <string>

class Instrument
{
protected:
    std::string _name;

public:
    Instrument(const std::string &name);

protected:
    virtual void play() = 0;
};


#endif //MODEL_STRINGED_INSTRUMENTS_INSTRUMENT_H
