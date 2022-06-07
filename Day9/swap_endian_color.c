/*
** EPITECH PROJECT, 2021
** SWAP_ENDIAN_COLOR
** File description:
** Swap the endianess of a color
*/


union color_to_swap
{
    int col;
    char c[4];
};

int swap_endian_color(int color)
{
    union color_to_swap param;
    param.col = color;
    char tmp;
    tmp = param.c[0];
    param.c[0] = param.c[3];
    param.c[3] = tmp;
    tmp = param.c[1];
    param.c[1] = param.c[2];
    param.c[2] = tmp;

    return param.col;
}
