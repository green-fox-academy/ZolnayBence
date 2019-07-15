#include <iostream>
#include <vector>

#include "Person.h"
#include "Student.h"
#include "Mentor.h"
#include "Sponsor.h"
#include "Cohort.h"

int main()
{
    Person person("Jane Doe", 30, Gender::FEMALE);
    person.introduce();
    person.getGoal();
    std::cout << std::endl;

    Student studentOne("Jane Doe", 30, Gender::FEMALE, "to The School of life", 0);
    studentOne.introduce();
    studentOne.getGoal();
    studentOne.skipDays(1);
    studentOne.introduce();
    std::cout << std::endl;

    Mentor mentorOne("Jane Doe", 30, Gender::FEMALE, Level::INTERMEDIATE);
    mentorOne.introduce();
    mentorOne.getGoal();
    mentorOne.levelInString();
    std::cout << std::endl;

    Sponsor sponsorOne("Jane Doe", 30, Gender::FEMALE, "Google", 0);
    sponsorOne.introduce();
    sponsorOne.getGoal();
    sponsorOne.hire();
    sponsorOne.introduce();
    std::cout << std::endl;

    Cohort griseus();

    std::vector<Person*> people;

    Person mark("Mark", 46, Gender::MALE);
    people.push_back(&mark);
    Person jane;
    people.push_back(&jane);
    Student john("John Doe", 20, Gender::MALE, "BME");
    people.push_back(&john);
    Student student;
    people.push_back(&student);
    Mentor gandhi("Gandhi", 148, Gender::MALE, Level::SENIOR);
    people.push_back(&gandhi);
    Mentor mentor;
    people.push_back(&mentor);
    Sponsor sponsor;
    people.push_back(&sponsor);
    Sponsor elon("Elon Musk", 46, Gender::MALE, "SpaceX");
    people.push_back(&elon);

    student.skipDays(3);

    for (int i = 0; i < 5; i++) {
        elon.hire();
    }

    for (int i = 0; i < 3; i++) {
        sponsor.hire();
    }

    for(Person* person : people) {
        person->introduce();
        person->getGoal();
    }

    Cohort awesome = Cohort("AWESOME");
    awesome.addStudent(&student);
    awesome.addStudent(&john);
    awesome.addMentor(&mentor);
    awesome.addMentor(&gandhi);
    awesome.info();

    return 0;
}