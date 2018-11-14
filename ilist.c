#include "ilist.h"

i_list *create_ilist()
{
    i_list *new = calloc(1, sizeof(i_list));
    if (!new)
        return NULL;
    new->head = calloc(1, sizeof(i_list_node));
    if (!new->head)
        return NULL;
    new->head->next = new->head;
    new->head->prev = new->head;
    return new;
}

void push_front(i_list *list, i_list_node *node)
{
    if (!node || !list)
        return;
    node->prev = list->head;
    node->next = list->head->next;
    list->head->next = node;
    list->size++;
}

void push_back(i_list *list, i_list_node *node)
{
    if (!node || !list)
        return;
    node->next = list->head;
    node->prev = list->head->prev;
    list->head->prev = node;
    list->size++;
}

void remove_node(i_list *list, i_list_node *node)
{
    if (!list)
        return;
    if (list->size == 0)
        return;
    i_list_node *ptr = list->head->next;
    while (ptr != node && ptr != list->head)
        ptr = ptr->next;
    if (ptr == list->head)
        return;
    ptr->prev->next = ptr->next;
    ptr->next->prev = ptr->prev;
    list->size--;
}
