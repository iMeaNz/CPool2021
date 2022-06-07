/*
** EPITECH PROJECT, 2021
** MY_DELETE_NODES
** File description:
** Delete specific nodes
*/
#include <mylist.h>
#include <my.h>
#include <stdlib.h>

linked_list_t *my_find_next_node(linked_list_t *list,
                                void const *data_ref, int (*cmp)())
{
    while (list->next != NULL && (*cmp)(list->next->data, data_ref) == 0) {
        linked_list_t *to_suppr = list;
        list = list->next;
        free(to_suppr);
    }

    return list->next;
}

int my_delete_nodes(linked_list_t **begin, void const *data_ref, int (*cmp)())
{
    linked_list_t *ptr;

    if (*begin == NULL)
        return 0;

    if ((*cmp)((*begin)->data, data_ref) == 0) {
        (*begin) = my_find_next_node(*begin, data_ref, cmp);
    }
    ptr = *begin;
    while (ptr != NULL) {
        if (ptr->next != NULL && (*cmp)(ptr->next->data, data_ref) == 0) {
            ptr->next = my_find_next_node(ptr->next, data_ref, cmp);
        }
        ptr = ptr->next;
    }

    return 0;
}
