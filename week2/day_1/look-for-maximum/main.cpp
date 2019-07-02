#include <iostream>
#include <vector>

int main()
{
    // Create a program which first asks for a number
    // this number indicates how many integers we want to store in an array
    // and than asks for numbers till the user fills the array
    // It should print out the biggest number in the given array and the memory address of it
    int N;
    std::cout << "Please enter how many integers you want to store in you array: " << std::endl;
    std::cin >> N;

    int input[N];

    for (int i = 0; i < N; ++i) {
        std::cout << "Please enter an integer " << std::endl;
        std::cin >> input[i];

    }
    int Max = 0;
    for (int j = 0; j < N; ++j) {
        if (Max < input[j]) {
            Max = input[j];
        }
    }
        int *MaxNumberPtr = &Max;
        std::cout << "The max of this array is: " << Max << std::endl;
        std::cout << "The memory address of the max in this array is: " << MaxNumberPtr << std::endl;



    return 0;
}