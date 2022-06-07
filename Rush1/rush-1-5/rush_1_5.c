/*
** EPITECH PROJECT, 2021
** rush-1-5
** File description:
** rush-1-5
*/

void my_putchar(char c);

void h_line(char first, char middle, char end, int rep)
{
    my_putchar(first);
    for (int i = 0; i < rep - 2; i++) {
        my_putchar(middle);
    }
    if (rep > 1)
        my_putchar(end);
    my_putchar('\n');
}

void v_line(char symb, int rep)
{
    my_putchar(symb);
    if (rep > 1) {
        for (int i = 0; i < rep - 2; i++)
            my_putchar(' ');
    my_putchar(symb);
    }
    my_putchar('\n');
}

void rush(int x, int y)
{
    char first = 'A';
    char end = 'C';

    if (x == 1 || y == 1) {
        first = 'B';
        end = 'B';
    }
    if (x <= 0 || y <= 0) {
        write(2, "Invalid size\n", 13);
        return;
    }
    h_line(first, 'B', end, x);
    for (int i = 0; i < y - 2; i++)
        v_line('B', x);
    if (y > 1)
        h_line(end, 'B', first, x);
}
