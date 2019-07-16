#ifndef ANIMALSINTHEZOO_ANIMAL_H
#define ANIMALSINTHEZOO_ANIMAL_H

#include <string>
enum Gender{
    MALE,
    FEMALE
};
enum SkinSurface{
    FUR,
    SCALE,
    FEATHER
};
enum Reproduction{
    EGGS,
    BIRTH
};
class Animal
{
public:
    Animal(const std::string &name, Gender gender, SkinSurface surface, Reproduction reproduction);

    std::string GenderToString(Gender gender);
    std::string SkinSurfaceToString(SkinSurface skinSurface);
    std::string ReproductionToString(Reproduction reproduction);
protected:

    std::string _name;
    int _age;
    Gender _gender;
    SkinSurface _surface;
    Reproduction  _reproduction;
    virtual std::string breed() = 0;
    virtual std::string getName() = 0;
};


#endif //ANIMALSINTHEZOO_ANIMAL_H
