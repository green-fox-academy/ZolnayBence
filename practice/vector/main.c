#include <stdio.h>
#include "my_vector.h"

int main()
{
    vector_t vector;
    init_vector(&vector);
    push_back(&vector, 10);
    push_back(&vector, 15);
    push_back(&vector, 30);
    print_vector(&vector);
    empty(&vector);
    empty(&vector);
    erase_element(&vector, 10);
    print_vector(&vector);
    push_back(&vector, 30);
    push_back(&vector, 30);
    print_vector(&vector);
    //vector_t second;
    //push_back(&second, 10);
    //push_back(&second, 500);
    //push_back(&second, 20);
    //print_vector(&second);
    //
    //print_vector(&second);
    return 0;
}