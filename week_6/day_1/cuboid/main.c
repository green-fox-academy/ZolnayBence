#include <stdio.h>

int main()
{
    float a;
    float b;
    float c;
    printf("please type in the sides of the cuboid");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    printf("Surface: %.2f\n", 2 * (a * b + a* c + b * c));
    printf("Volume: %.2f\n", a * b * c);
    return 0;
}
