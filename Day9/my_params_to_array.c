/*
** EPITECH PROJECT, 2021
** MY_PARAMS_TO_ARRAY
** File description:
** Stores the program's parameters in an array of struct
*/
#include <my.h>

struct info_param *my_params_to_array(int ac, char **av)
{
    struct info_param *array;
    array = malloc(sizeof(struct info_param) * (ac + 1));
    int i = 0;
    for (i = 0; i < ac; i++) {
        struct info_param param;
        param.length = my_strlen(av[i]);
        param.str = av[i];
        param.copy = malloc(sizeof(char) * (param.length + 1));
        my_strcpy(param.copy, av[i]);
        param.word_array = my_str_to_word_array(av[i]);
        array[i] = param;
    }
    array[i].str = 0;

    return array;
}
