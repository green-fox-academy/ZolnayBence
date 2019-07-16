#include "Sponsor.h"

#include <iostream>



Sponsor::Sponsor(const std::string &name, int age, Gender gender, const std::string &company, int hiredStudents)
        : Person(name, age, gender), _company(company), _hiredStudents(hiredStudents)
{}
Sponsor::Sponsor(const std::string &name, int age, Gender gender, const std::string &company) : Person(name, age,
                                                                                                       gender),
                                                                                                _company(company)
{}

const std::string &Sponsor::getCompany() const
{
    return _company;
}

int Sponsor::getHiredStudents() const
{
    return _hiredStudents;
}

void Sponsor::introduce()
{
    std::cout <<  "Hi, I'm " << getName() <<  " , a " << getAge() << " year old " << getGenderAsString()
    << " who represents " << getCompany() << " and hired " << getHiredStudents() << " students so far" << std::endl;
}

void Sponsor::getGoal()
{
    std::cout << "My goal is: Hire brilliant junior software developers" << std::endl;
}

void Sponsor::hire()
{
    _hiredStudents++;
}

Sponsor::Sponsor()
{}


