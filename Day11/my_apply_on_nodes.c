/*
** EPITECH PROJECT, 2021
** MY_APPLY_ON_NODES
** File description:
** Apply a function on a all nodes
*/
#include <mylist.h>
#include <my.h>
#include <stdlib.h>

int my_apply_on_nodes(linked_list_t *begin, int (*f)(void *))
{
    linked_list_t *ptr;

    ptr = begin;
    while (ptr != NULL) {
        (*f)(ptr->data);
        ptr = ptr->next;
    }
    return 0;
}
