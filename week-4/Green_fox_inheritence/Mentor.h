#ifndef GREEN_FOX_INHERITENCE_MENTOR_H
#define GREEN_FOX_INHERITENCE_MENTOR_H

#include "Person.h"
#include <string>
enum Level{
    JUNIOR,
    INTERMEDIATE,
    SENIOR
};
class Mentor : public Person
{
public:
    Mentor(const std::string &name, int age, Gender gender, Level level);

    Mentor();

    void getGoal() override;

    void introduce() override;

    std::string levelInString();



private:
    Level _level;
};


#endif //GREEN_FOX_INHERITENCE_MENTOR_H
