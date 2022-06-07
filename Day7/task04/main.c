/*
** EPITECH PROJECT, 2021
** MY_PRINT_PARAMS
** File description:
** Programs that prints the args
*/
#include "my.h"

int main(int argc, char **argv[])
{
    for (int i = 0; i < argc; i++) {
        my_putstr(argv[i]);
        my_putchar('\n');
    }

    return 0;
}
