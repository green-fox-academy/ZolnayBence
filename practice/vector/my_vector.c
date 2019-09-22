#include "my_vector.h"


void init_vector(vector_t* vector)
{
<<<<<<< HEAD
    /* Works */
    vector->data = NULL;
=======
//    vector->capacity = 2;
//    vector->data = (int *) malloc(vector->capacity * sizeof(int));
//    vector->current_size = 0;

>>>>>>> f9def5f80a6acdde53974579de7364332fa1d92e
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
<<<<<<< HEAD
    /* Works */
    if(vector->capacity == 0){
        vector->capacity = data + vector->current_size;
        vector->data = malloc(vector->capacity * sizeof(int));
        vector->data[0] = data;
        vector->current_size++;
    }else if(vector->capacity == vector->current_size){
        vector->capacity = vector->current_size * 2;
=======
    vector->current_size++;
    if (vector->capacity <= vector->current_size) {

        vector->capacity = vector->capacity + 10;

        int *temp = vector->data;
        vector->data = (int *) malloc(vector->capacity * sizeof(int));

        for (int i = 0; i < vector->current_size - 1; ++i) {
            vector->data[i] = temp[i];
        }

        free(temp);
    }
    vector->data[vector->current_size - 1] = data;


    //vector->data[vector->size - 1] = new_data;

}

//    vector->current_size++;
//    if(vector->capacity <= vector->current_size){
//        vector->capacity = vector->capacity * 2;
//        vector->data = realloc(vector->data, vector->capacity * sizeof(int));
//    }
//    vector->data[vector->current_size - 1] = data;
//}
//int size(vector_t* vector){
//    return vector->current_size;
//}
int free_capacity(vector_t* vector){
    return vector->capacity - vector->current_size;
}
void insert(vector_t* vector, int value, int position){
    if (position > vector->current_size - 1) {
        printf("The vector smaller than the asked position.");
        return;
    }
    vector->current_size++;
    if (vector->capacity <= vector->current_size) {
        vector->capacity = vector->capacity * 2;

        int *temp = vector->data;
        vector->data = (int *) malloc(vector->capacity * sizeof(int));

        for (int i = 0; i < vector->current_size - 1; ++i) {
            vector->data[i] = temp[i];
        }
        free(temp);
    }
   /* if(vector->current_size >= vector->capacity){
        vector->capacity *= 2;
>>>>>>> f9def5f80a6acdde53974579de7364332fa1d92e
        vector->data = realloc(vector->data, vector->capacity * sizeof(int));
    }*/
    for (int i = 0; i < vector->current_size - position; ++i) {
        vector->data[vector->current_size - 1 - i] = vector->data[vector->current_size - 1 - i - 1];
    }
    vector->data[position] = value;
}

void push_front(vector_t* vector, int new_data){
    vector->current_size++;

    if (vector->capacity <= vector->current_size) {
        vector->capacity = vector->capacity * 2;

        int *temp = vector->data;
        vector->data = (int *) malloc(vector->capacity * sizeof(int));

        for (int i = 0; i < vector->current_size - 1; ++i) {
            vector->data[i] = temp[i];
        }

        free(temp);
    }
    for (int j = 0; j < vector->current_size - 1; ++j) {
        vector->data[vector->current_size - 1 - j] = vector->data[vector->current_size - 1 - j - 1];
    }
    vector->data[0] = new_data;
}

void pop_front(vector_t* vector){

    for (int i = 0; i < vector->current_size - 1; ++i) {
        vector->data[i] = vector->data[i + 1];
    }
    vector->current_size--;
}
void print_vector(vector_t* vector)
{
    /* Hey atleast it works */
    if(vector->data == NULL){
        printf("No elements in the vector. ");
        return;
    }
    for (int i = 0; i < vector->current_size; ++i) {
        printf("%d: %d\n ", i , vector->data[i]);
    }
    printf("\n");
}

void delete_vector(vector_t* vector)
{
    /*deletes everthing and after that if you want to pushback and print it will crash UB */
    vector->data = realloc(vector->data, 0);
}

int erase_element(vector_t* vector, int index)
{
<<<<<<< HEAD
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
=======

    if(index >= vector->current_size){
        return 0;
    }
    for (int i = index + 1; i < vector->current_size; ++i) {
        vector->data[i - 1] = vector->data[i];
    }
    // ez ratyi
//    if (vector_value.capacity >= vector_value.current_size + 10){
//        vector_value.capacity -= 10;
//        realloc(vector_value.data, vector_value.capacity * sizeof(int));
//    }
    --vector->current_size;

    return 1;
}

int get(vector_t* vector, int index){
    int element = 0;
    int find = 0;
    for (int i = 0; i < vector->current_size; ++i) {
        if(vector->data[i] == index){
            element = 1;
            find = i;
        }
    }
    if(element == 0){
        return printf("couldn't find element\n");
    }else{
        return printf("%d\n", find);
    }
}

int vector_max_size(vector_t* vector){
    return vector->capacity;
}
void pop_back(vector_t* vector){
    vector->current_size--;
//    if(vector->current_size < vector->capacity / 2){
//        vector->capacity = 0.75 * vector->capacity;
//        vector->data = realloc(vector->data, vector->capacity * sizeof(int));
//    }
}
>>>>>>> f9def5f80a6acdde53974579de7364332fa1d92e
