#ifndef PIRATES_PIRATES_H
#define PIRATES_PIRATES_H

#include <string>

class Pirates {
public:
    Pirates(bool isCaptain, const std::string &name, bool woodenLegs);

    void work();

    void party();

    std::string toString();

    bool isCaptain() const;

    int getGold() const;

    const std::string &getName() const;

    bool hasWoodenLeg() const;

    int getHealth() const;

private:
    bool _isCaptain;
    int _gold;
    int _health;
    std::string _name;
    bool _woodenLegs;
};


#endif //PIRATES_PIRATES_H
