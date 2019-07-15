#include <iostream>
#include "Mentor.h"

Mentor::Mentor(const std::string &name, int age, Gender gender, Level level) : Person(name,
                                                                                                               age,
                                                                                                               gender),
                                                                                                        _level(level)
{}

void Mentor::getGoal()
{
    std::cout << "My goal is: Educate brilliant junior software developers." << std::endl;
}

void Mentor::introduce()
{
    std::cout << "Hi, I'm " << getName() << " , a " << getAge() << " year old "
    << getGenderAsString() << levelInString() << "Mentor " << std::endl;
}

std::string Mentor::levelInString(){
    switch(_level) {

        case JUNIOR:
            return "Junior";
        case INTERMEDIATE:
            return "Intermediate";
        case SENIOR:
            return "Senior";
    }
}

Mentor::Mentor()
{}






