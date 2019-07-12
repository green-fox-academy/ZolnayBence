#include <iostream>
int add(int n);
int main()
{
    std::cout << "The result of adding in recursive: ";
    std::cout << add(6) << std::endl;

    return 0;
}
int add(int n) {
    if (n <= 1){
        return 1;
    }else{
        return n + add(n - 1);
    }
};