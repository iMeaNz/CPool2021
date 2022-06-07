/*
** EPITECH PROJECT, 2021
** MY_REV_LIST
** File description:
** Reverse a list
*/
#include <my.h>
#include <mylist.h>
#include <stdlib.h>

void my_rev_list(linked_list_t **begin)
{
    linked_list_t *tmp_ptr1;
    linked_list_t *tmp_ptr2;

    if (my_list_size(*begin) > 1) {
        tmp_ptr1 = (*begin)->next;
        (*begin)->next = NULL;
        while (tmp_ptr1->next != NULL) {
            tmp_ptr2 = tmp_ptr1->next;
            tmp_ptr1->next = *begin;
            *begin = tmp_ptr1;
            tmp_ptr1 = tmp_ptr2;
        }
        tmp_ptr1->next = *begin;
        *begin = tmp_ptr1;
    }
}
