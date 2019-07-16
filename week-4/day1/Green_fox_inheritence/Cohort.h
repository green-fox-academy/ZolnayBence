#ifndef GREEN_FOX_INHERITENCE_COHORT_H
#define GREEN_FOX_INHERITENCE_COHORT_H

#include <string>
#include <vector>
#include "Student.h"
#include "Mentor.h"

class Cohort : public Person
{
public:




    Cohort(const std::string &cohortName);

    Cohort(const std::string &name, int age, Gender gender, const std::string &cohortName,
           const std::vector<Student *> &students, const std::vector<Mentor *> &mentors);

    void addStudent(Student* student);

    void addMentor(Mentor* mentor);

    void info();

    const std::string &getCohortName() const;

    const std::vector<Student *> &getStudents() const;

    const std::vector<Mentor *> &getMentors() const;

private:
    std::string _cohortName;
    std::vector<Student*>_students;
    std::vector<Mentor*> _mentors;
};


#endif //GREEN_FOX_INHERITENCE_COHORT_H
