/*
** EPITECH PROJECT, 2021
** DO_OP
** File description:
** Perfom op
*/
#include <my.h>
#include <stdlib.h>

void construct_array_char(char *array_op)
{
    array_op[0] = '+';
    array_op[1] = '-';
    array_op[2] = '*';
    array_op[3] = '/';
    array_op[4] = '%';
}

void construct_array_ptr(int (*array_ptr[]) (int, int))
{
    array_ptr[0] = my_add;
    array_ptr[1] = my_sub;
    array_ptr[2] = my_mul;
    array_ptr[3] = my_div;
    array_ptr[4] = my_mod;
}

int find_index(char op, char *op_char)
{
    for (int i = 0; i < 5; i++) {
        if (op == op_char[i])
            return i;
    }
    return -1;
}

int do_op(int argc, char **av)
{
    char *op_char;
    op_char = malloc(sizeof(char) * 5);
    int (*array_fct_ptr[5]) (int a, int b);
    construct_array_char(op_char);
    construct_array_ptr(array_fct_ptr);
    int nb1 = my_getnbr(av[1]);
    int nb2 = my_getnbr(av[3]);
    char op = *av[2];
    int index = find_index(op, op_char);
    if (index >= 0) {
        return (*array_fct_ptr[index]) (nb1, nb2);
    } else
        return 0;
}
