
#include <stdio.h>
#include <string.h>

/*
Create a sandwich struct
It should store:
 - name
 - price (float)
 - weight (float)
Create a function which takes two parameters and returns the price of your order.
The parameters should be:
 - a sandwich struct
 - and an integer that represents how many sandwiches you want to order
*/
struct Sandwich{
    char name[256];
    float price;
    float weight;
};
int sandwich_order(struct Sandwich sandwich, int number_of_sandwiches);
int main()
{
    struct Sandwich sandwich;
    strcpy(sandwich.name, "Wienerbun");
    sandwich.price = 10;
    sandwich.weight = 20;
    printf("The total is: %s: %d\n",sandwich.name, sandwich_order(sandwich, 3));
    return 0;
}

int sandwich_order(struct Sandwich sandwich, int number_of_sandwiches)
{
    int total_price = number_of_sandwiches  * sandwich.weight * sandwich.price;
    return total_price;
}