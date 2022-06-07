/*
** EPITECH PROJECT, 2021
** CONCAT_PARAMS
** File description:
** Concatenates the args given to the program
*/
#include <my.h>

int find_total_length(int argc, char **argv)
{
    int length = 0;

    for (int i = 0; i < argc; i++)
        length += my_strlen(argv[i]) + 1;

    return length;
}

char *concat_params(int argc, char **argv)
{
    int total_length = find_total_length(argc, argv);
    char *dest;
    dest = malloc(sizeof(char) * total_length);

    for (int i = 0; i < argc; i++) {
        my_strcat(dest, argv[i]);
        if (i + 1 != argc)
            my_strcat(dest, "\n");
    }

    return dest;
}
