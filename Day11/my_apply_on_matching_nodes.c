/*
** EPITECH PROJECT, 2021
** MY_APPLY_ON_MATCHING_NODES
** File description:
** Apply a function on matching nodes
*/
#include <mylist.h>
#include <my.h>
#include <stdlib.h>

int my_apply_on_matching_nodes(linked_list_t *begin,
                                int (*f)(), void *data_ref, int (*cmp)())
{
    linked_list_t *ptr;

    ptr = begin;
    while (ptr != NULL) {
        if ((*cmp)(ptr->data, data_ref) == 0)
            (*f)(ptr->data);
        ptr = ptr->next;
    }
    return 0;
}
