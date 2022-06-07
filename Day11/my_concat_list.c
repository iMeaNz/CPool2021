/*
** EPITECH PROJECT, 2021
** MY_CONCAT_LIST
** File description:
** Concatenate two lists
*/
#include <my.h>
#include <mylist.h>
#include <stdlib.h>

void my_concat_list(linked_list_t **begin1, linked_list_t *begin2)
{
    linked_list_t *ptr1;
    linked_list_t *ptr2;
    ptr1 = *begin1;
    ptr2 = begin2;

    while (ptr1->next != NULL) {
        ptr1 = ptr1->next;
    }
    ptr1->next = ptr2;
}
