#include "Person.h"
#include <iostream>


Person::Person()
{

}


Person::Person(const std::string &name, int age, Gender gender) : _name(name), _age(age), _gender(gender)
{}

const std::string &Person::getName() const
{
    return _name;
}

int Person::getAge() const
{
    return _age;
}

void Person::getGoal()
{
    std::cout << "My goal is: Live for the moment!" << std::endl;
}

void Person::introduce()
{
    std::cout << "Hi, I'm " << getName() << " , a " << getAge() << " year old " << getGenderAsString() << std::endl;

}

void Person::setName(const std::string &name)
{
    _name = name;
}

void Person::setAge(int age)
{
    _age = age;
}

void Person::setGender(Gender gender)
{
    _gender = gender;
}

std::string Person::getGenderAsString()
{
    switch (_gender) {

        case MALE:
            return "male";
        case FEMALE:
            return "female";
        default:
            return "Unknown";
    }
}




