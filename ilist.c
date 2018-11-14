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
    list->head
    list->head->next = node;

}

void push_back(i_list *list, i_list_node *node)
{

}