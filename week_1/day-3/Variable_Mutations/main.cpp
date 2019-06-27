#include <iostream>

int main() {
    int a = 3;
    a = 3 + 10;
    std::cout << a << std::endl;
    int b = 100;
    b = 100 - 7;
    std::cout << b << std::endl;
    int c = 44;
    c = 44 * 2;
    std::cout << c << std::endl;
    int d = 125;
    d = 125 / 5;
    std::cout << d << std::endl;
    int e = 8;
    e = 8 * 8;
    std::cout << e << std::endl;
    int f1 = 123;
    int f2 = 345;
    bool t = true;
    bool f = false;
    if (f1 > f2) {
        std::cout << " Is less than 345" << std::endl;
    } else {
        std::cout << "bigger than 345" << std::endl;
    }
    int h = 135798745;
    bool even = (135798745 % 11) == 0;
    bool odd = (135798745 % 11) != 0;
    if (135798745 == 0) {
        std::cout << "Is divisible" << std::endl;
    } else {
        std::cout << "Not divisible" << std::endl;
    }
    int i1 = 10;
    int i2 = 4;
    bool x1 = true;
    bool x2 = false;
    if (i1 > (i2 * i2) && i1 < (i2 * i2 * i2)) {

        std::cout <<std::boolalpha << x1 << std::endl;
    } else {
        std::cout << std::boolalpha <<x2 << std::endl;
    }

    std::cout<<x2<<std::endl;
    int g1 = 350;
    int g2 = 200;
    bool o1 = true;
    bool o2 = false;
    if((g2 * 2) > g1){
        std::cout << std::boolalpha << o1 << std::endl;
    }else{
        std::cout << std::boolalpha << o2 << std::endl;
    }
int j = 1521;
    bool p1 = true;
    bool p2 = false;
     if((1521 / 3) == 0 || (1521 / 5) == 0 ){
         std::cout << std::boolalpha << "1521 / 3 is 0 : " << p1 << std::endl;
     }else{
         std::cout << std::boolalpha <<"1521 / 5 is 0 : "<< p2 << std::endl;
     }

    return 0;
}