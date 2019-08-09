#include "linked_list.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void push_back(node_t **head, int data)
{
    node_t *new_node = (node_t *) malloc(sizeof(node_t));
    new_node->data = data;
    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
        return;
    }
    node_t *p = *head;
    while (p->next != NULL) {
        p = p->next;
    }
    p->next = new_node;
}

void init(node_t **head)
{
    *head = NULL;
}

void print(node_t *head)
{
    int counter = 0;
    while (head != NULL) {
        printf("%d. %d\n", ++counter, head->data);
        head = head->next;
    }
}

void insert_beginning(node_t **head, int data)
{
    node_t *new_node = (node_t *) malloc(sizeof(node_t));
    if (new_node == NULL) {
        printf("Unable to allocate memory for a new node");
    } else {
        new_node->data = data;
        new_node->next = *head;

        *head = new_node;
    }
}

void insert_after(node_t *head, int new_data, node_t *insert_after)
{
    node_t *current_node = head;
    while (current_node->next != NULL) {
        if (current_node->next == insert_after){
            node_t *temp = current_node->next->next;
            current_node->next->next = malloc(sizeof(node_t));
            insert_after->next->data = new_data;
            insert_after->next->next = temp;
        }
        current_node = current_node->next;
    }
}

node_t *search(node_t *head, int value)
{

    node_t *current = head;
    while (current->next != NULL) {
        if (current->data == value) {
            return current;
        }
        current = current->next;

    }

    printf("Unable to insert after %d no such value exists", value);
    return 0;
}