#include "Animal.h"



Animal::Animal(const std::string &name, Gender gender, SkinSurface surface, Reproduction reproduction) : _name(name),
                                                                                                         _gender(gender),
                                                                                                         _surface(
                                                                                                                 surface),
                                                                                                         _reproduction(
                                                                                                                 reproduction)
{}

std::string Animal::GenderToString(Gender gender)
{
    switch(gender) {
        case Gender::MALE:
            return "male";
        case Gender::FEMALE:
            return "female";
        default:
            return "Unknown";
    }
}

std::string Animal::SkinSurfaceToString(SkinSurface skinSurface)
{
    switch(skinSurface){
        case SkinSurface::SCALE:
            return "Scales";
        case SkinSurface::FUR:
            return "Fur";
        case SkinSurface::FEATHER:
            return "Feathers";
    }
}

std::string Animal::ReproductionToString(Reproduction reproduction)
{
    switch(reproduction){
        case Reproduction::BIRTH:
            return "Pushing miniature versions out";
        case Reproduction::EGGS:
            return "Lays egg(s)";
    }
}
