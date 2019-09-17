#include <iostream>

int *arr(int arrFunq[], int length);

int main()
{
    // Create a function which takes an array (and its length) as a parameter
    // and returns a pointer to its minimum value

    int numbers[] = {12, 4, 66, 101, 87, 3, 15};
    std::cout << &numbers[5] << std::endl;

    std::cout << arr(numbers, (sizeof(numbers) / sizeof(numbers[0]))) << std::endl;
    return 0;
}

int *arr(int arrFunq[], int length)
{
    int *min = &arrFunq[0];
    for (int i = 0; i < length; i++) {
        if (arrFunq[i] < *min) {
            min = &arrFunq[i];
        }
    }

    return min;
};