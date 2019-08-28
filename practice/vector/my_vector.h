#ifndef VECTOR_MY_VECTOR_H
#define VECTOR_MY_VECTOR_H

#include <stdlib.h>
#include <stdio.h>
typedef struct vector{
    int *data;
    int current_size;
    int capacity;
}vector_t;

void init_vector(vector_t*);
void empty(vector_t*);
void push_back(vector_t*, int data);
void print_vector(vector_t*);
void erase(vector_t*);
void erase_element(vector_t*, int index);

#endif //VECTOR_MY_VECTOR_H
