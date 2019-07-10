#ifndef SHARPIE_SHARPIE_H
#define SHARPIE_SHARPIE_H
#include <string>

class Sharpie
{
public:
    Sharpie();

    Sharpie(const std::string &sharpieColor, float sharpiewidth);

    void useSharpie();

    void Sharpiewidth();

    void SharpieColor();

    const std::string &getSharpieColor() const;

    float getSharpiewidth() const;

    float getInkAmount() const;


    void setSharpieColor(const std::string &sharpieColor);

    void setSharpiewidth(float sharpiewidth);

    void setInkAmount(float inkAmount);

private:
    std::string _sharpieColor;
    float _sharpiewidth;
    float _inkAmount;

};


#endif //SHARPIE_SHARPIE_H
