#ifndef EXAM_TEST_ANIMAL_PROTECTION_ANIMAL_H
#define EXAM_TEST_ANIMAL_PROTECTION_ANIMAL_H

#include <string>

class Animal
{
public:
    Animal(const std::string &name, bool isHealthy);

    Animal(bool isHealthy);

    void heal();
    bool _isAdoptable();
    std::string toString();
    bool isHealthy();
    int getHealCost() const;

protected:
    std::string _ownerName;
    std::string _name;
    bool _isHealthy;
    int _healCost;


};


#endif //EXAM_TEST_ANIMAL_PROTECTION_ANIMAL_H
