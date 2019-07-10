#include "Sharpie.h"

Sharpie::Sharpie(const std::string &sharpieColor, float sharpiewidth) : _sharpieColor(sharpieColor),
                                                                                         _sharpiewidth(sharpiewidth),
                                                                                         _inkAmount(100)
{}

Sharpie::Sharpie(): _inkAmount(100)
{}

const std::string &Sharpie::getSharpieColor() const
{
    return _sharpieColor;
}

float Sharpie::getSharpiewidth() const
{
    return _sharpiewidth;
}

float Sharpie::getInkAmount() const
{
    return _inkAmount;
}

void Sharpie::setSharpieColor(const std::string &sharpieColor)
{
    Sharpie::_sharpieColor = sharpieColor;
}

void Sharpie::setSharpiewidth(float sharpiewidth)
{
    Sharpie::_sharpiewidth = sharpiewidth;
}

void Sharpie::setInkAmount(float inkAmount)
{
    Sharpie::_inkAmount = inkAmount;
}

void Sharpie::useSharpie()
{
   _inkAmount--;
}



