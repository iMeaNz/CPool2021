/*
** EPITECH PROJECT, 2021
** STACK_NB
** File description:
** Functions related to the stack_nb linked list
*/
#include "include/my.h"

void my_add_in_stack_nb(stack_nb_t **list, int nb)
{
    stack_nb_t *element;

    element = (stack_nb_t *)malloc(sizeof(*element));
    element->nb = nb;
    element->next = *list;
    *list = element;
}

int pick(stack_nb_t **st)
{
    int nb = 0;
    if ((*st) != NULL) {
        nb = (*st)->nb;
        (*st) = (*st)->next;
    }
    return (nb);
}

void my_show_stack_nb(stack_nb_t *list)
{
    stack_nb_t *tmp;

    tmp = list;
    while (tmp != NULL) {
        my_put_nbr(tmp->nb);
        write(1, ", ", 2);
        tmp = tmp->next;
    }
}
