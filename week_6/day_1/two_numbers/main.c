#include <stdio.h>

int main()
{
    int a = 22;
    int b = 13;
    int add = b + a;
    int substracter = b - a;
    float divider = a / b;
    int multiplier = a * b;
    int reminder = a % b;
    printf("13 plus 22 is : %d\n", add);
    printf("13 substraced by 22 is : %d\n", substracter);
    printf("22 divided by 13 is : %.2f\n", divider);
    printf("22 multiplied by 13 is : %d\n", multiplier);
    printf("22 reminder 13 is : %d\n", reminder);

    return 0;
}