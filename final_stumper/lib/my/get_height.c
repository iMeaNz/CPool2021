/*
** EPITECH PROJECT, 2021
** GET_HEIGHT
** File description:
** Get the height
*/

int get_height(char *buffer)
{
    int height = 0;

    for (int i = 0; buffer[i] != '\0'; i++)
        if (buffer[i] == '\n')
            height++;
    return height;
}
