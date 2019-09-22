#include "Circular_linked_list.h"
#include "../../../../../../MinGW/include/malloc.h"


void init(node_t** current_node, int size)
{
    node_t *end_node = (node_t *) malloc(sizeof(node_t));
    end_node->data = 0;
    node_t* next_node = end_node;
    node_t* node;
    for (int i = 0; i < size - 1; ++i) {
        node = (node_t *) malloc(sizeof(node_t));
        node->data = 0;
        node->next = next_node;
        next_node = node;
    }
    *current_node = node;
    end_node->next = node;
}

node_t* write(node_t* current_node, int data)
{
    current_node->data = data;
    return current_node->next;
}

int is_below_threshold(node_t* current_node, int threshold)
{
    node_t* node = current_node;
    node->data = current_node->data;
    node->next = current_node->next;
    do{
        if(node->data >= threshold){
            return 0;
        }
        node = node->next;
    }while (node != current_node);
    return 1;
}


int add_node(node_t* current_node, int value, int new_value)
{
    node_t* start= current_node;
    do{
        if(current_node->data == value){
            node_t *new_node = (node_t *) malloc(sizeof(node_t));
            new_node->data = new_value;
            new_node->next = current_node->next;
            current_node->next = new_node;
            return 1;
        } else {
            current_node = current_node->next;
        }
    }while (current_node != start);

    return 0;
}

int remove_node(node_t* current_node, int value)
{
    node_t* previous_node = current_node;
    node_t* start = current_node->next;
    current_node = current_node->next;
    do{
        if(current_node->data == value){
            node_t *p = current_node;
            previous_node->next = current_node->next;
            free(current_node);
            return 1;
        } else {
            current_node = current_node->next;
        }
    }while (current_node != start);

    return 0;
}

int remove_node_all(node_t* current_node, int value)
{
    int removed_node = 0;
    node_t* previous_node = current_node;
    node_t* start = current_node->next;
    current_node = current_node->next;
    do{
        if(current_node->data == value){
            node_t *p = current_node;
            previous_node->next = current_node->next;
            free(current_node);
            removed_node = 1;
        } else {
            current_node = current_node->next;
        }
    }while (current_node != start);
    if(removed_node == 1){
        return 1;
    }
    return 0;
}
