#include "Student.h"
#include <iostream>

Student::Student()
{}

Student::Student(const std::string &name, int age, Gender gender, const std::string &previousOrganization) : Person(
        name, age, gender), _previousOrganization(previousOrganization)
{}

Student::Student(const std::string &name, int age, Gender gender, const std::string &previousOrganization,
                 int skippedDays) : Person(name, age, gender), _previousOrganization(previousOrganization),
                                    _skippedDays(skippedDays)
{}

void Student::getGoal()
{
    std::cout << "My goal is: Be a Junior software developer" << std::endl;
}


void Student::introduce()
{
    std::cout << "Hi, I'm " << _name << " , a " << _age << " year old " << getGenderAsString()
              << " from " << _previousOrganization << " who skipped " << _skippedDays
              << " day(s) from the course already" << std::endl;
}

void Student::skipDays(int numberOfDays)
{
    _skippedDays = _skippedDays + numberOfDays;
}

int Student::getSkippedDays() const
{
    return _skippedDays;
}



