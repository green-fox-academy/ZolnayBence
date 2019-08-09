//
// Created by zolnay0 on 2019.08.09..
//

#include "DottedBall.h"

DottedBall::DottedBall(int size, const std::string &color, const std::string &owner) : Toy(size, 10, color,
                                                                                                     owner)
{}

std::string DottedBall::getToyType()
{
    return "A shiny " + _color + " Dotted Ball " + std::to_string(_size) + " size.";
}
