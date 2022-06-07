/*
** EPITECH PROJECT, 2021
** MY_FIND_NODE
** File description:
** Returns the adress of a node
*/
#include <my.h>
#include <mylist.h>
#include <stdlib.h>

linked_list_t *my_find_node(linked_list_t const *begin,
                            void const *data_ref, int (*cmp)())
{
    linked_list_t *ptr;

    ptr = begin;
    while (ptr != NULL) {
        if ((*cmp)(ptr->data, data_ref) == 0)
            return ptr;
        ptr = ptr->next;
    }
    return NULL;
}
