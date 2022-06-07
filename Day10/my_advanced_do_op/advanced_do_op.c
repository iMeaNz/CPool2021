/*
** EPITECH PROJECT, 2021
** ADVANCED_DO_OP
** File description:
** Do_opn that uses a struct
*/
#include <my.h>
#include "my_opp.h"

int advanced_do_op(int argc, char **av)
{
    int nb1 = my_getnbr(av[1]);
    int nb2 = my_getnbr(av[3]);
    char op;
    op = *av[2];

    for (int i = 0; i < 5; i++) {
        if (op == *OPERATORS_FUNCS[i].op) {
            return OPERATORS_FUNCS[i].fct_ptr (nb1, nb2);
        }
    }
    OPERATORS_FUNCS[5].fct_ptr (nb1, nb2);
}
