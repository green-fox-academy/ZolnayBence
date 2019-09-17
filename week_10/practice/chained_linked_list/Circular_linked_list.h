//
// Created by zolnay0 on 2019.09.12..
//

#ifndef CHAINED_LINKED_LIST_CIRCULAR_LINKED_LIST_H
#define CHAINED_LINKED_LIST_CIRCULAR_LINKED_LIST_H
typedef struct node{
    int data;
    struct node* next;
} node_t;

void init(node_t** current_node, int size);
node_t* write(node_t* current_node, int data);
int is_below_threshold(node_t* current_node, int threshold);
int add_node(node_t* current_node, int value, int new_value);
int remove_node(node_t* current_node, int value);
int remove_node_all(node_t* current_node, int value);

#endif //CHAINED_LINKED_LIST_CIRCULAR_LINKED_LIST_H
