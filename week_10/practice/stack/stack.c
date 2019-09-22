#include "stack.h"


struct Stack *create_stack(int capacity)
{
    struct Stack *stack = (struct Stack*) malloc(sizeof(struct Stack));
    stack->maxsize = capacity;
    stack->top = -1;
    stack->items = (int*)malloc(sizeof(int) * capacity);

    return stack;
}

int size(struct Stack *stack){
    return stack->top + 1;
}

int full(struct Stack *stack)
{
    return stack->top == stack->maxsize - 1;
}

int empty(struct Stack *stack)
{
    return stack->top == -1;
}

void push(struct Stack *stack, int value)
{

    if(full(stack)){
        int* new_items = (int*)malloc(sizeof(int) * (stack->maxsize + 2));
        for (int i = 0; i <= stack->top; ++i) {
            new_items[i] = stack->items[i];
        }
        free(stack->items);
        stack->items = new_items;
    }
    printf("Inserting %d\n", value);
    stack->items[++stack->top] = value;

}

void print(struct Stack *stack){
    for (int i = 0; i <= stack->top; ++i) {
        printf("%d\n", stack->items[i]);
    }
}

int pop(struct Stack *stack)
{
    //Underflow check
    if(empty(stack)){
        printf("Underflow\nProgram Terminated\n");
        exit(0x00000351);
    }
    printf("Removing %d\n", peek(stack));
    stack->top -= 1;
    return stack->top;
}

int peek(struct Stack *stack)
{
    if(!empty(stack)){
        return stack->items[stack->top];
    }else{
        exit(0x0020f677);
    }
}