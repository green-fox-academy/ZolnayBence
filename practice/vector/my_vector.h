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
int size(vector_t*);
int free_capacity(vector_t*);
void push_back(vector_t*, int data);
void push_front(vector_t*, int new_data);
void print_vector(vector_t*);
<<<<<<< HEAD
void erase(vector_t*);
void erase_element(vector_t*, int data);
void unique(vector_t*);
=======
void insert(vector_t*, int value, int position);
void delete_vector(vector_t*);
int vector_max_size(vector_t*);
int erase_element(vector_t* vector, int index);
void pop_back(vector_t*);
void pop_front(vector_t*);
int get(vector_t*, int index);

>>>>>>> f9def5f80a6acdde53974579de7364332fa1d92e

#endif //VECTOR_MY_VECTOR_H
