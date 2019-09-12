#include <stdio.h>
#include "stack.h"
int main()
{
    struct Stack* stack;
    stack = create_stack(3);
    printf("%p\n", stack);
    push(stack, 20);
    push(stack, 50);
    push(stack, 30);
    push(stack, 40);
    print(stack);
    pop(stack);
    print(stack);
    printf("Has %d elements in the stack.\n",size(stack));
    printf("%d\n",empty(stack));

    return 0;
}