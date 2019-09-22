#include "my_vector.h"


void init_vector(vector_t* vector)
{
    /* Works */
    vector->data = NULL;
    vector->capacity = 0;
    vector->current_size = 0;
}
void empty(vector_t* vector)
{
    /* Works i guess */
    int flag;

    if(vector->current_size == 0){
        flag = 0;
        printf("%d", flag);
    }else if(vector->current_size > 0 ){
        flag = 1;
        printf("%d", flag);
    }
    printf("\n");
}

void push_back(vector_t* vector, int data)
{
    /* Works */
    if(vector->capacity == 0){
        vector->capacity = data + vector->current_size;
        vector->data = malloc(vector->capacity * sizeof(int));
        vector->data[0] = data;
        vector->current_size++;
    }else if(vector->capacity == vector->current_size){
        vector->capacity = vector->current_size * 2;
        vector->data = realloc(vector->data, vector->capacity * sizeof(int));
        vector->data[vector->current_size] = data;
        vector->current_size++;
    }else{
        vector->data[vector->current_size] = data;
        vector->current_size++;
    }
}
void print_vector(vector_t* vector)
{
    /* Hey atleast it works */
    if(vector->data == NULL){
        printf("No elements in the vector. ");
        return;
    }
    for (int i = 0; i < vector->current_size; ++i) {
        printf("%d ", vector->data[i]);
    }
    printf("\n");
}

void erase(vector_t* vector)
{
    /*deletes everthing and after that if you want to pushback and print it will crash UB */
    vector->data = realloc(vector->data, 0);
}

void erase_element(vector_t* vector, int index)
{
    /* delete only the last one no matter what... */
    for (int i = index; i < vector->current_size; ++i) {
        vector->data[index] = vector->data[i];
    }
      vector->current_size--;
//    for (int i = vector->data; i < vector->current_size; ++i) {
//        vector->current_size = data;
//        if(vector->data[i] != data){
//            return;
//        }else{
//
//        }
//
//    }

}

//void unique(vector_t* vector)
//{
//      The "Definition" of  Chaos..
//    for (int i = 0; i < vector->current_size; ++i) {
//        if(vector->data[i] == sizeof(vector)){
//            vector->data[i + 1] = vector->data[i];
//            return;
//        }
//    }
//}