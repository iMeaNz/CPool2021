/*
** EPITECH PROJECT, 2021
** MY_SORT_PARAMS
** File description:
** Sort in ascii order the params
*/
#include "my.h"

void fill_array(int *array, int argc)
{
    for (int i = 0; i < argc; i++) {
        array[i] = i;
    }
}

int main(int argc, char **argv[])
{
    int sorted = 0;
    int count[argc];

    fill_array(count, argc);
    while (sorted != 1) {
        sorted = 1;
        for (int i = 0; i < argc - 1; i++) {
            if (my_strcmp(argv[count[i]], argv[count[i + 1]]) > 0) {
                sorted = 0;
                my_swap(&count[i], &count[i + 1]);
            }
        }
    }

    for (int i = 0; i < argc; i++) {
        my_putstr(argv[count[i]]);
        my_putchar('\n');
    }

    return 0;
}
