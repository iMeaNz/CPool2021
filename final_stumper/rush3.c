/*
** EPITECH PROJECT, 2021
** Rush3
** File description:
** Rush3
*/

#include "include/my.h"
#include <unistd.h>
#include <stdlib.h>

void fill_array_first_part(int *array_sol, char *buffer, int x, int y)
{
    char *rush1 = rush_1(x, y);
    if (my_strncmp(rush1, buffer, (x + 1) * y) == 0)
        array_sol[0]++;
    free(rush1);
    char *rush2 = rush_2(x, y);
    if (my_strncmp(rush2, buffer, (x + 1) * y) == 0)
        array_sol[1]++;
    free(rush2);
    char *rush3 = rush_3(x, y);
    if (my_strncmp(rush3, buffer, (x + 1) * y) == 0)
        array_sol[2]++;
    free(rush3);
}

void fill_array_second_part(int *array_sol, char *buffer, int x, int y)
{
    char *rush4 = rush_4(x, y);
    if (my_strncmp(rush4, buffer, (x + 1) * y) == 0)
        array_sol[3]++;
    free(rush4);
    char *rush5 = rush_5(x, y);
    if (my_strncmp(rush5, buffer, (x + 1) * y) == 0)
        array_sol[4]++;
    free(rush5);
}

void display(int *array_sol, int x, int y)
{
    int displayed = 0;
    
    for (int i = 0; i < 5; i++) {
        if (displayed && array_sol[i] == 1)
            write(1, " || ", 4);
        if (array_sol[i] == 1) {
            write(1, "[rush1-", 7);
            my_putchar(i + 1 + '0');
            write(1, "] ", 2);
            my_put_nbr(x);
            my_putchar(' ');
            my_put_nbr(y);
            displayed = 1;
        }
    }
    if (displayed == 0)
        write(1, "none", 4);
    my_putchar('\n');
}

int rush3(char *buffer)
{
    int array_sol[5] = { 0 };
    int x = get_length(buffer);
    int y = get_height(buffer);
    if (y > 1033 || x > 9999) {
      write(1, "none\n", 5);
      return (84);
    }
    fill_array_first_part(array_sol, buffer, x, y);
    fill_array_second_part(array_sol, buffer, x, y);
    display(array_sol, x, y);
    return (0);
}
