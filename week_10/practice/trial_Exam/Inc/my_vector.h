#ifndef VECTOR_MY_VECTOR_H
#define VECTOR_MY_VECTOR_H

#include <stdlib.h>
#include <stdio.h>
#include <cmsis_os.h>
typedef struct air_pressure {
  float pressure_kPa;
  uint32_t timestamp_ms;
}air_pressure_t;

typedef struct vector{
    air_pressure_t *data;
    int current_size;
    int capacity;
}vector_t;




void init_vector(vector_t**);
int empty(vector_t*);
int size(vector_t*);
int free_capacity(vector_t*);
void push_back(vector_t*, air_pressure_t data);
air_pressure_t vector_at(vector_t*, uint32_t index);
void pop_back(vector_t*);



#endif //VECTOR_MY_VECTOR_H
