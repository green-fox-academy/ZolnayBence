#ifndef GREEN_FOX_INHERITENCE_STUDENT_H
#define GREEN_FOX_INHERITENCE_STUDENT_H

#include "Person.h"

class Student : public Person
{
public:
    Student();

    Student(const std::string &name, int age, Gender gender, const std::string &previousOrganization);

    Student(const std::string &name, int age, Gender gender, const std::string &previousOrganization,
            int skippedDays);

    void getGoal() override;

    void introduce() override;

    void skipDays(int numberOfDays);

    int getSkippedDays() const;

private:
    std::string _previousOrganization;
    int _skippedDays;
};


#endif //GREEN_FOX_INHERITENCE_STUDENT_H
