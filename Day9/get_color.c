/*
** EPITECH PROJECT, 2021
** GET_COLOR
** File description:
** Retrieve the color based on three int
*/

static int add(int x, int y)
{
    while (x != 0) {
        int c = y & x;
        y = y ^ x;
        x = c << 1;
    }

    return y;
}

int get_color(unsigned char red, unsigned char green, unsigned char blue)
{
    return add(red << 16, add(green << 8, blue));
}
