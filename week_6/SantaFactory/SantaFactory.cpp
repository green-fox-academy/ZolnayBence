#include <iostream>
#include "SantaFactory.h"
#include "JumpingRope.h"
#include "DottedBall.h"


SantaFactory::SantaFactory()
{}

Toy SantaFactory::produce(int size, const std::string &color, const std::string &name)
{
    if(_balance <= 0){
        std::cout << "Cannot produce Toys" << std::endl;
        exit(1);
    }
    if(name == "Doll"){
        Doll doll(color, name);
        _balance -= doll.getCost();
    }else if(name == "Jumping Rope"){
        JumpingRope jumpingRope(size, color, name);
        _balance -= jumpingRope.getCost();
    }else if(name == "Dotted Ball"){
        DottedBall dottedBall(size, color, name);
        _balance -= dottedBall.getCost();
    }
    return ;
}
