#ifndef GREEN_FOX_INHERITENCE_SPONSOR_H
#define GREEN_FOX_INHERITENCE_SPONSOR_H


#include "Person.h"

class Sponsor : public Person
{
public:


    Sponsor(const std::string &name, int age, Gender gender, const std::string &company, int hiredStudents);

    Sponsor();

    Sponsor(const std::string &name, int age, Gender gender, const std::string &company);

    const std::string &getCompany() const;

    int getHiredStudents() const;

    void introduce() override;

    void getGoal() override;

    void hire();

protected:
    std::string _company;
    int _hiredStudents;
};


#endif //GREEN_FOX_INHERITENCE_SPONSOR_H
