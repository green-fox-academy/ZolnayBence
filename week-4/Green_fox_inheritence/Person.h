#ifndef GREEN_FOX_INHERITENCE_PERSON_H
#define GREEN_FOX_INHERITENCE_PERSON_H

#include <string>
enum Gender{
    MALE,
    FEMALE
};
class Person
{
public:



    Person();

    Person(const std::string &name, int age, Gender gender);

    std::string getGenderAsString();

    virtual void getGoal();

    virtual void introduce();

    const std::string &getName() const;

    int getAge() const;

    void setName(const std::string &name);

    void setAge(int age);

    void setGender(Gender gender);

protected:
    std::string _name;
    int _age;
    Gender _gender;

};


#endif //GREEN_FOX_INHERITENCE_PERSON_H
