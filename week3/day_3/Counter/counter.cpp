#include "counter.h"
#include <iostream>
Counter::Counter(int num0) {
    num0_ = num0;
}
Counter::Counter(){
    num0_ = 0;
}

void Counter::add(int num) {
    //int inputnum;
    //std::cin >> inputnum;

    num0_+=num; //inputnum;
}


int Counter::get() {
    return num0_;
}

void Counter::reset() {
    num0_ = 0;
}