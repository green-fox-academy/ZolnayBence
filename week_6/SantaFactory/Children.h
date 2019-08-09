//
// Created by zolnay0 on 2019.08.09..
//

#ifndef SANTAFACTORY_CHILDREN_H
#define SANTAFACTORY_CHILDREN_H


#include <vector>
#include <string>

class Children
{
public:
    void addKids();
protected:
    std::string _name;
public:
    const std::string &getName() const;

protected:
    std::vector<std::string> _kids;
};


#endif //SANTAFACTORY_CHILDREN_H
