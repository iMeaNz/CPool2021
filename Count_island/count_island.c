/*
** EPITECH PROJECT, 2021
** COUNT_ISLAND
** File description:
** Count the island in a file
*/
#include <stdlib.h>

int check_rec(char **world, int row, int col, int count)
{
    if (world[row][col] == 'X') {
        world[row][col] = count + '0';
        if (world[row + 1] != NULL && world[row + 1][col])
            check_rec(world, row + 1, col, count);

        if (col != 0 && world[row][col - 1] == 'X')
            check_rec(world, row, col - 1, count);

        if (world[row][col + 1] != '\0' && world[row][col + 1] == 'X')
            check_rec(world, row, col + 1, count);

        if (row != 0 && world[row - 1][col] == 'X')
            check_rec(world, row - 1, col, count);
    }
    return 1;
}

int browse_island(char **world, int row, int count)
{
    for (int i = 0; world[row][i] != 0; i++) {
        if (world[row][i] == 'X')
            count += check_rec(world, row, i, count);
    }
    if (world[row + 1] == NULL)
        return count;
    else
        count += browse_island(world, row + 1, count);
}

int count_island(char** world)
{
    if (world[0] == 0)
        return 0;
    else if (world[0][0] == 0)
        return 0;
    else
        return browse_island(world, 0, 0);
}
