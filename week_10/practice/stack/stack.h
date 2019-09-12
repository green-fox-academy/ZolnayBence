#ifndef STACK_STACK_H
#define STACK_STACK_H
#include <stdlib.h>
#include <stdio.h>
struct Stack{
    int top;
    int maxsize;
    int *items;
};

struct Stack* create_stack(int capacity);
void print(struct Stack* stack);
int full(struct Stack* stack);
int empty(struct Stack* stack);
int size(struct Stack *stack);
void push(struct Stack* stack, int value);
int pop(struct Stack* stack);
int peek(struct Stack* stack);
#endif //STACK_STACK_H
