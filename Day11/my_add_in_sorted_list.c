/*
** EPITECH PROJECT, 2021
** MY_ADD_IN_SORTED_LIST
** File description:
** Add to a sorted list
*/
#include <mylist.h>
#include <my.h>
#include <stdlib.h>

void my_put_in_list_sort(linked_list_t **list, char *data)
{
    linked_list_t *element;
    element = (linked_list_t *)malloc(sizeof(*element));
    element->data = data;
    element->next = *list;
    *list = element;
}

void my_add_in_sorted_list(linked_list_t **begin, char *data, int (*cmp)())
{
    my_put_in_list_sort(begin, data);
    my_sort_list(begin, cmp);
}
