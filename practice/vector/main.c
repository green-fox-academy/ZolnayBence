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
<<<<<<< HEAD
=======
    delete_vector(&vector);
>>>>>>> f9def5f80a6acdde53974579de7364332fa1d92e
    empty(&vector);
    erase_element(&vector, 10);
    print_vector(&vector);
    push_back(&vector, 30);
    push_back(&vector, 30);
    print_vector(&vector);
<<<<<<< HEAD
=======
    printf("\n");
    init_vector(&vector);
    push_back(&vector, 5);
    push_back(&vector, 87);
    push_back(&vector, 50);
    print_vector(&vector);
    erase_element(&vector, 1);
    get(&vector, 1);
    print_vector(&vector);

>>>>>>> f9def5f80a6acdde53974579de7364332fa1d92e
    //vector_t second;
    //push_back(&second, 10);
    //push_back(&second, 500);
    //push_back(&second, 20);
    //print_vector(&second);
    //
    //print_vector(&second);
    return 0;
}