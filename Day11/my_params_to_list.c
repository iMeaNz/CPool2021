/*
** EPITECH PROJECT, 2021
** MY_PARAMS_TO_LIST
** File description:
** Pass params to a list
*/
#include <my.h>
#include <mylist.h>
#include <stdlib.h>

void my_put_in_list(linked_list_t **list, char *data)
{
    linked_list_t *element;
    element = (linked_list_t *)malloc(sizeof(*element));
    element->data = data;
    element->next = *list;
    *list = element;
}

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    linked_list_t *list = NULL;

    for (int i = 0; i < ac; i++) {
        my_put_in_list(&list, av[i]);
    }
    return list;
}
