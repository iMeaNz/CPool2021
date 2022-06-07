/*
** EPITECH PROJECT, 2021
** MY_LIST_SIZE
** File description:
** Returns the size of a list
*/
#include <mylist.h>
#include <my.h>
#include <stdlib.h>

int my_list_size(linked_list_t const *begin)
{
    linked_list_t *tmp;
    int size = 0;

    tmp = begin;
    while (tmp != NULL) {
        size++;
        tmp = tmp->next;
    }
    return size;
}
