#include <iostream>
#include "SantaFactory.h"
#include "JumpingRope.h"
#include "DottedBall.h"


SantaFactory::SantaFactory()
{}

Toy SantaFactory::produce(int size, const std::string &color, const std::string &toyName ,const std::string &name)
{
    if(_balance <= 0){
        std::cout << "Cannot produce Toys" << std::endl;
        exit(1);
    }
    if(toyName == "Doll"){
        Doll doll(color, name);
        _balance -= doll.getCost();
        return doll;
    }else if(toyName == "Jumping Rope"){
        JumpingRope jumpingRope(size, color, name);
        _balance -= jumpingRope.getCost();
        return jumpingRope;
    }else if(toyName == "Dotted Ball"){
        DottedBall dottedBall(size, color, name);
        _balance -= dottedBall.getCost();
        return dottedBall;
    }
}
