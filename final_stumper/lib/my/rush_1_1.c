/*
** EPITECH PROJECT, 2021
** rush-1-1
** File description:
** rush-1-1
*/

#include <stdlib.h>
#include <unistd.h>

static void h_line(char *charac, char *output, int rep, int *index)
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

char *rush_1(int x, int y)
{
    char charac[4] = {'o', '-', 'o', '\0'};
    int index = 0;
    if (x <= 0 || y <= 0) {
        return 0;
    }
    char *output = malloc(sizeof(char) * x * y + 1);
    h_line(charac, output, x, &index);
    for (int i = 0; i < y - 2; i++) {
        v_line('|', x, output, &index);
    }
    if (y > 1)
        h_line(charac, output, x, &index);
    return output;
}
