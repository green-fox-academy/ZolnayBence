#include <stdio.h>
#include "linked_list.h"
int main()
{
    node_t* head;
    init(&head);

    push_back(&head, 10);
    push_back(&head, 41);
    push_back(&head, 23);
    push_back(&head, 50);

    print(head);

    insert_beginning(&head, 20);
    push_back(&head, 21);
    printf("\n");
    print(head);

    insert_after(head, 5, search(head, 10));
    insert_after(head, 38, search(head, 10));
    printf("\n");
    print(head);

    push_front(&head, 40);
    printf("\n");
    print(head);

    printf("\n");
    printf("%d", size(head));
    return 0;
}