#ifndef ILIST_H
#define ILIST_H

typedef struct i_list_node
{
    struct i_list_node *prev;
    struct i_list_node *next;
} i_list_node;

typedef struct i_list
{
    i_list_node *head;
} i_list;

#endif /* ! ILIST_H */