#include <iostream>
int funct(int arr[], int length, int k);
int main()
{
    // Create a function which takes an array (and it's lenght) and a number as a parameter
    // the function should return index where it found the given value
    // if it can't find the number return -1
    int array[5] {23, 12, 54, 10, 6};
    int length = (sizeof(array) / sizeof(array[0]));
    std::cout << funct(array, length, 54) <<std::endl;
    return 0;
}

int funct(int arr[], int length, int k)
{
    for (int i = 0; i < length; ++i) {
        if (arr[i] == k) {
            return i;
        }
    }
    return -1;
}