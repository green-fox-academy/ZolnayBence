#include "counter.h"
#include <iostream>
Counter::Counter(int num0) {
    num0_ = num0;
}
Counter::Counter(){
    num0_ = 0;
}

void Counter::add(int num) {

    num0_+=num; //inputnum;
}


int Counter::get() {
    return num0_;
}

void Counter::reset() {
    num0_ = 0;
}

void Counter::add()
{
    num0_++;
}
