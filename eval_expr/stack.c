/*
** EPITECH PROJECT, 2021
** STACK
** File description:
** Function related to the stack linked list
*/

#include "include/my.h"

void my_add_in_stack(stack_t **list, char data)
{
    stack_t *element;

    element = (stack_t *)malloc(sizeof(*element));
    element->ope = data;
    element->next = *list;
    *list = element;
}

stack_t *my_find_par(stack_t *begin, char **output, int *counter)
{
    stack_t *ptr;

    ptr = begin;
    while (ptr != NULL) {
        if (ptr->ope == '(') {
            return (ptr->next);
        }
        output[*counter] = malloc(sizeof(char) * 2);
        output[*counter][0] = ptr->ope;
        output[*counter][1] = '\0';
        *counter = *counter + 1;
        ptr = ptr->next;
    }
    return (NULL);
}

int list_size(stack_t *begin)
{
    stack_t *tmp;
    int size = 0;

    tmp = begin;
    while (tmp != NULL) {
        size++;
        tmp = tmp->next;
    }
    return (size);
}

void my_show_stack(stack_t *list)
{
    stack_t *tmp;

    tmp = list;
    while (tmp != NULL) {
        my_putchar(tmp->ope);
        tmp = tmp->next;
    }
}
