/*
** EPITECH PROJECT, 2021
** day11
** File description:
** my_merge.c
*/
#include <my.h>
#include <mylist.h>
#include <stdlib.h>

void my_merge(linked_list_t **begin1, linked_list_t *begin2, int (*cmp)())
{
    my_concat_list(begin1, begin2);
    my_sort_list(begin1, cmp);
}
