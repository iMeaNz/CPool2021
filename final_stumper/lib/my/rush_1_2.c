/*
** EPITECH PROJECT, 2021
** rush-1-2
** File description:
** rush-1-2
*/

#include <stdlib.h>
#include <unistd.h>

static void h_line(int rep, char *output, char *charac, int *index)
{
    output[(*index)++] = charac[0];
    for (int i = 0; i < rep - 2; i++) {
        output[(*index)++] = charac[1];
    }
    if (rep > 1)
        output[(*index)++] = charac[2];
    output[(*index)++] = '\n';
}

static void v_line(char symb, int rep, char *output, int *index)
{
    output[(*index)++] = symb;
    if (rep > 1) {
    for (int i = 0; i < rep - 2; i++)
        output[(*index)++] = ' ';
    output[(*index)++] = symb;
    }
    output[(*index)++] = '\n';
}

char *rush_2(int x, int y)
{
    int index = 0;
    char charac[4] = {'/', '*', '\\', '\0'};
    char *output = malloc(sizeof(char) * x * y + 1); 
    if (x == 1 || y == 1) {
        charac[0] = '*';
        charac[2] = '*';
    }
    if (x <= 0 || y <= 0)
        return 0;
    h_line(x, output, charac, &index);
    for (int i = 0; i < y - 2; i++)
        v_line('*', x, output, &index);
    if (x > 1) {
        charac[0] = '\\';
        charac[2] = '/';
    }
    if (y > 1)
        h_line(x, output, charac, &index);
    return output;
}
