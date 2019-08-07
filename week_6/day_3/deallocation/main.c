
#include <stdio.h>
#include <stdlib.h>

// with malloc
// please allocate a 10 long array and fill it with even numbers then print the whole array
// please deallocate memory without using free


int main()
{
    int *pointer = NULL;
    pointer = (int *) malloc(10 * sizeof(int));
    for (int i = 0; i < 10; ++i) {
            pointer[i] = i * 2;
        printf("even numbers in the array: %d\n", pointer[i]);
    }
//    for (int i = 0; i < 10; ++i) {
//        if (even_numbers % 2 == 0) {
//            pointer[i] = even_numbers;
//            even_numbers++;
//            printf("even numbers in array with manual deallocation: %d\n", pointer[i]);
//        }
//    }
    realloc(pointer, 0);
    return 0;
}
