/*
** EPITECH PROJECT, 2021
** MY_REV_PARAMS
** File description:
** Prints the arg in reverse order
*/
#include "my.h"

int main(int argc, char **argv[])
{
    for (int i = argc - 1; i >= 0; i--) {
        my_putstr(argv[i]);
        my_putchar('\n');
    }

    return 0;
}
