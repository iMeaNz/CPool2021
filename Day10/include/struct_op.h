/*
** EPITECH PROJECT, 2021
** STRUCT_OP
** File description:
** Contains the struct for my_advanced do-op
*/

struct operator {
    const char *op;
    int (*fct_ptr)(int, int);
};
