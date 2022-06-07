/*
** EPITECH PROJECT, 2021
** Star
** File description:
** Display a star
*/

void my_put_spaces(int length)
{
    for (int i = 0; i < length; i++) {
        my_putchar(' ');
    }
}

void make_vertical_branches(int line, int size)
{
    my_putchar('*');
    if (line == 0) {
        my_putchar('\n');
        return ;
    }
    my_put_spaces(line + (line - 1));
    my_putchar('*');
    my_putchar('\n');
}

void make_horizontal_line(int size, int line, int oneException)
{
    for (int i = 0; i < 2 * size + 1; i++) {
        my_putchar('*');
    }
    my_put_spaces(line + (line - 1) + 2 * oneException);
    for (int i = 0; i < 2 * size + 1; i++) {
        my_putchar('*');
    }
    my_putchar('\n');
}

void make_horizontal_branches(int size, int oneException)
{
    int number_of_space = 6 * size - 5;

    for (int i = 0; i < size; i++) {
        my_put_spaces(i + 1);
        my_putchar('*');
        my_put_spaces(number_of_space + 2 * oneException);
        my_putchar('*');
        my_putchar('\n');
        number_of_space -= 2;
    }
    number_of_space =+ 2;
    for (int i = 0; i < size - 1; i++ ) {
        my_put_spaces(size - i - 1);
        my_putchar('*');
        my_put_spaces(4 * size + 2 * i - 1);
        my_putchar('*');
        my_putchar('\n');
        number_of_space += 2;
    }
}

void star(unsigned int size)
{
    int i = 0;
    int oneException = 0;

    if (size == 0)
        return;

    if (size == 1)
        oneException = 1;

    for (i = 0; i < size; i++) {
        my_put_spaces(3 * size - 1 - i + oneException);
        make_vertical_branches(i, size);
    }
    make_horizontal_line(size, i - 1, oneException);
    make_horizontal_branches(size, oneException);
    make_horizontal_line(size, i - 1, oneException);
    for (int i = size - 1; i >= 0; i--) {
        my_put_spaces(3 * size - 1 - i + oneException);
        make_vertical_branches(i, size);
    }
}
