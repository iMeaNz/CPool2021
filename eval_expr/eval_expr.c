/*
** EPITECH PROJECT, 2021
** EVAL_EXPR
** File description:
** Eval expr
*/

#include "include/my.h"

int just_put_nbr(char *av)
{
    int i = 0;

    if (av[i] == '-' || av[i] == '+')
        i = 1;
    for (; i < my_strlen(av); i++)
        if (av[i] < '0' || av[i] > '9')
            return (0);
    return (1);
}

int eval_expr(char *av)
{
    operators_t *operator = NULL;
    char **rpn;

    if (just_put_nbr(av) == 1)
        return (my_getnbr(av));
    av = cleanup(av);
    create_linked_list(&operator);
    rpn = create_rpn(av, operator);
    return (read_rpn(rpn, operator));
}
