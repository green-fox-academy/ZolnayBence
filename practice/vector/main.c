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
    delete_vector(&vector);
    empty(&vector);
    print_vector(&vector);
    printf("\n");
    init_vector(&vector);
    push_back(&vector, 5);
    push_back(&vector, 87);
    push_back(&vector, 50);
    print_vector(&vector);
    erase_element(&vector, 1);
    get(&vector, 1);
    print_vector(&vector);

    //vector_t second;
    //push_back(&second, 10);
    //push_back(&second, 500);
    //push_back(&second, 20);
    //print_vector(&second);
    //erase_element(&second, 10);
    //print_vector(&second);
    return 0;
}