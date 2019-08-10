#include "JumpingRope.h"

JumpingRope::JumpingRope(int size, const std::string &color, const std::string &owner) : Toy(size,15, color, owner)
{}

std::string JumpingRope::getToyType()
{
    return  "Jumping Rope" ;
}
