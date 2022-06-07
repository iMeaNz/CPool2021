/*
** EPITECH PROJECT, 2021
** READ
** File description:
** Read an rpn notation
*/
#include "include/my.h"

int pick_and_compute(char op, stack_nb_t **stack, operators_t *list)
{
    int a = pick(stack);
    int b = pick(stack);
    int result = find_op_and_compute(list, op, b, a);
    my_add_in_stack_nb(stack, result);
}

int read_rpn(char **output, operators_t *list)
{
    stack_nb_t *stack = NULL;

    for (int i = 0; output[i] != 0; i++) {
        if (is_op(output[i][0])) {
            pick_and_compute(output[i][0], &stack, list);
        } else {
            int to_push = my_getnbr(output[i]);
            my_add_in_stack_nb(&stack, to_push);
        }
    }
    return stack->nb;
}
