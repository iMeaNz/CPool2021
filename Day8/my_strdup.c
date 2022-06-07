/*
** EPITECH PROJECT, 2021
** MY_STRDUP
** File description:
** Function that allocates memory and copy a string
*/
#include <my.h>

char *my_strdup(char const *src)
{
    int length = my_strlen(src);
    char *dest;
    dest = malloc(sizeof(char *) * length + 1);

    my_strcpy(dest, src);

    return dest;
}

