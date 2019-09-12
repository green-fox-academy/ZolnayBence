#include "my_vector.h"


void init_vector(vector_t** vector)
{
//    vector->capacity = 2;
//    vector->data = (int *) malloc(vector->capacity * sizeof(int));
//    vector->current_size = 0;
	vector_t *new_vector = *vector;
    new_vector->capacity = 0;

    new_vector->current_size = 0;

    *vector = new_vector;
}
int empty(vector_t* vector)
{
    if(vector->current_size == 0){
        return 1;
    }else{
        return 0;
    }

}

int size(vector_t* vector){
	return vector->current_size;
}

void push_back(vector_t* vector, air_pressure_t data)
{
    vector->current_size++;
    if (vector->capacity <= vector->current_size) {

        vector->capacity = vector->capacity + 10;

        air_pressure_t *temp = vector->data;
        vector->data = (air_pressure_t *) pvPortMalloc(vector->capacity * sizeof(air_pressure_t));

        for (int i = 0; i < vector->current_size - 1; ++i) {
            vector->data[i] = temp[i];
        }

        vPortFree(temp);
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
    return vector->capacity;
}

air_pressure_t vector_at(vector_t* vector, uint32_t index)
{

	return vector->data[index];
}

void pop_back(vector_t* vector){
    vector->current_size--;
//    if(vector->current_size < vector->capacity / 2){
//        vector->capacity = 0.75 * vector->capacity;
//        vector->data = realloc(vector->data, vector->capacity * sizeof(int));
//    }
}
