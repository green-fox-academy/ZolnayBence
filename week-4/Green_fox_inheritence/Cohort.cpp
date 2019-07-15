#include "Cohort.h"
#include <iostream>


Cohort::Cohort(const std::string &cohortName) : _cohortName(cohortName)
{}



void Cohort::addStudent(Student* student)
{
    _students.push_back(student);
}

void Cohort::addMentor(Mentor *mentor)
{
    _mentors.push_back(mentor);
}

void Cohort::info()
{
    std::cout << "The " << getCohortName() << " cohort has " << _students.size() << " students and "
    << _mentors.size() << " mentors." << std::endl;
}

const std::string &Cohort::getCohortName() const
{
    return _cohortName;
}

const std::vector<Student *> &Cohort::getStudents() const
{
    return _students;
}

const std::vector<Mentor *> &Cohort::getMentors() const
{
    return _mentors;
}

Cohort::Cohort(const std::string &name, int age, Gender gender, const std::string &cohortName,
               const std::vector<Student *> &students, const std::vector<Mentor *> &mentors) : Person(name, age,
                                                                                                      gender),
                                                                                               _cohortName(cohortName),
                                                                                               _students(students),
                                                                                               _mentors(mentors)
{}
