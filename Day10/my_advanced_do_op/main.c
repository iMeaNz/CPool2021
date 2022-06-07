/*
** EPITECH PROJECT, 2021
** MAIN
** File description:
** Main for the advanced do-op program
*/
#include <my.h>

int check_div(char **av)
{
    if (my_getnbr(av[3]) == 0 && *av[2] == '/') {
        write(2, "Stop: division by zero", 22);
        my_putchar('\n');
        return 0;
    }
    if (my_getnbr(av[3]) == 0 && *av[2] == '%') {
        write(2, "Stop: modulo by zero", 20);
        my_putchar('\n');
        return 0;
    }
    return 1;
}

int check_op(char *str)
{
    if (*str == '+' || *str == '-')
        return 0;
    if (*str == '*' || *str == '/')
        return 0;
    if (*str == '%')
        return 0;
    return 1;
}

int main(int argc, char **av)
{
    int to_display = 0;

    if (argc != 4)
        return 84;
    if (check_op(av[2])) {
        my_put_nbr(0);
        return 84;
    }
    if (!check_div(av)) {
        return 84;
    }
    to_display = advanced_do_op(argc, av);
    my_put_nbr(to_display);
    my_putchar('\n');
    return 0;
}
