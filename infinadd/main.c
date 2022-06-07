/*
** EPITECH PROJECT, 2021
** MAIN
** File description:
** main.c
*/
#include "include/my.h"
#include <stdlib.h>
#include <unistd.h>

int error_handling(int argc, char **av)
{
    if (argc != 3) {
        write(2, "Wrong number of arguments\n", 26);
        return 1;
    }
    if (my_str_isnum(av[1]) == 0 || my_str_isnum(av[2]) == 0) {
        write(2, "Wrong arguments\n", 16);
        return 1;
    }
    return 0;
}

int main(int argc, char **av)
{
    if (error_handling(argc, av))
        return 84;
    check_if_zero_neg(av[1]);
    check_if_zero_neg(av[2]);
    int len_nb1wn = (*av[1] == '-') ? my_strlen(av[1]) - 1 : my_strlen(av[1]);
    int len_nb2wn = (*av[2] == '-') ? my_strlen(av[2]) - 1 : my_strlen(av[2]);
    if (len_nb1wn > len_nb2wn)
        my_swap_ptr(&av[1], &av[2]);
    else if (len_nb1wn == len_nb2wn && my_strcmp(&av[1][1], &av[2][1]) > 0) {
        my_swap_ptr(&av[1], &av[2]);
    }
    int s_nb1 = (*av[1] == '-') ? -1 : 1, s_nb2 = (*av[2] == '-') ? -1 : 1;
    len_nb1wn = (*av[1] == '-') ? my_strlen(av[1]) - 1 : my_strlen(av[1]);
    len_nb2wn = (*av[2] == '-') ? my_strlen(av[2]) - 1 : my_strlen(av[2]);
    if (s_nb1 == s_nb2)
        add_classic(av[1], av[2], s_nb1);
    else
        sub_classic(av[1], av[2], s_nb2);
    return 0;
}
