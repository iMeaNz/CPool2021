/*
** EPITECH PROJECT, 2021
** UTILS
** File description:
** Utility function
*/
#include <my.h>

int char_is_alpha(char c)
{
    if (c >= 'A' && c <= 'Z')
        return 65;
    else if (c >= 'a' && c <= 'z')
        return 97;
    else
        return 0;
}

int my_true_str_len(char *str)
{
    int i = 0;
    int count = 0;

    while (str[i] != '\0') {
        if (char_is_alpha(str[i])) {
            count++;
        }
        i++;
    }
    return count;
}

int check_if_params_alpha(char **av, int argc)
{
    for (int i = 2; i < argc; i++) {
        if (!my_str_isalpha(av[i]))
            return 0;
    }
    return 1;
}

