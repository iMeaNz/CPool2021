/*
** EPITECH PROJECT, 2021
** COUNT_VALID_QUEENS_PLACEMENT
** File description:
** Counts the number of queens placement possible on a nxn chessboard
*/

int my_abs(int nb)
{
    if (nb >= 0)
        return nb;
    else
        return - nb;
}

int check_placement(int row, int *col)
{
    for (int i = 0; i < row; i++) {
        int diff = my_abs(col[row] - col[i]);
        if (diff == 0 || diff == row - i)
            return 0;
    }
    return 1;
}

int place_queens(int row, int *col, int n)
{
    int sol = 0;

    if (row == n)
        return 1;
    for (int i = 0; i < n; i++) {
        col[row] = i;
        if (check_placement(row, col))
            sol += place_queens(row + 1, col, n);
        col[row] = 0;
    }
    return sol;
}

int count_valid_queens_placements(int n)
{
    int col[n];

    if (n <= 0)
        return 0;

    return place_queens(0, col, n);
}
