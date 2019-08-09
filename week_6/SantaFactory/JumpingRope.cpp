#include "JumpingRope.h"

JumpingRope::JumpingRope(int size, const std::string &color, const std::string &owner) : Toy(size,15,
                                                                                                       color, owner)
{}

std::string JumpingRope::getToyType()
{
    return "A " + _color + " Jumping Rope " + std::to_string(_size) + " Centimeters long.";
}
