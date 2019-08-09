//
// Created by zolnay0 on 2019.08.09..
//

#include "Children.h"

void Children::addKids()
{
    _kids.push_back(_name);
}

const std::string &Children::getName() const
{
    return _name;
}
