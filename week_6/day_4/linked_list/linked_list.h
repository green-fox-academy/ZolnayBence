#ifndef LINKED_LIST_LINKED_LIST_H
#define LINKED_LIST_LINKED_LIST_H
typedef struct node{
    int data;
    struct node* next;
}node_t;

void init(node_t** head);
void push_back(node_t** head, int data);
void print(node_t* head);
void insert_beginning(node_t** head, int data);
void insert_after(node_t* prev_node, int new_data, node_t* insert_after);
node_t* search(node_t *head, int key);
#endif //LINKED_LIST_LINKED_LIST_H
