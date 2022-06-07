/*
** EPITECH PROJECT, 2021
** OPERATORS
** File description:
** Functions related to operatos linked list
*/

#include "include/my.h"

void create_linked_list(operators_t **list)
{
    operator_t addition = {'+', 0, &my_add};
    operator_t substraction = {'-', 0, &my_sub};
    operator_t multiplication = {'*', 1, &my_mul};
    operator_t division = {'/', 1, &my_div};
    operator_t modulo = {'%', 1, &my_mod};

    my_add_in_operators(list, addition);
    my_add_in_operators(list, substraction);
    my_add_in_operators(list, multiplication);
    my_add_in_operators(list, division);
    my_add_in_operators(list, modulo);
}

void my_add_in_operators(operators_t **list, operator_t data)
{
    operators_t *element;

    element = malloc(sizeof(*element));
    element->op = data;
    element->next = *list;
    *list = element;
}

int find_prio(operators_t *begin, char data_ref)
{
    operators_t *ptr;

    ptr = begin;
    while (ptr != NULL) {
        if (ptr->op.sign == data_ref)
            return (ptr->op.prio);
        ptr = ptr->next;
    }
    return (-84);
}

int find_op_and_compute(operators_t *list, char op, int a, int b)
{
    operators_t *ptr;

    ptr = list;
    while (ptr != NULL) {
        if (ptr->op.sign == op) {
            return (ptr->op.fct(a, b));
        }
        ptr = ptr->next;
    }
    return (84);
}
