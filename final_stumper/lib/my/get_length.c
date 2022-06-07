/*
** EPITECH PROJECT, 2021
** GET_LENGTH
** File description:
** Get the length
*/

int get_length(char *buffer)
{
    int length = 0;

    for (; buffer[length] != '\n'; length++);
    return (length);
}
