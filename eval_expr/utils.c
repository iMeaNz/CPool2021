/*
** EPITECH PROJECT, 2021
** UTILS
** File description:
** Utilitary functions
*/

#include "include/my.h"

char *cleanup(char *str)
{
    int len = my_strlen(str);
    char *output = malloc(my_strlen(str) + 1);
    int temp_index = 0;

    for (int i = 0; i < len; i++) {
        if (str[i] == '+' && i != len && str[i + 1] == '-') {
            output[temp_index] = '-';
            i++;
        } else if (str[i] == '-' && i != len && str[i + 1] == '-') {
            output[temp_index] = '+';
            i++;
        } else
            output[temp_index] = str[i];
        temp_index++;
    }
    return (output);
}

int is_op(char c)
{
    if (c == '+' || c == '-')
        return (1);
    if (c == '*' || c == '/' || c == '%')
        return (1);
    return (0);
}

int find_len_expr(char *expr)
{
    int in_a_number = 0;
    int len_expr = 0;

    for (int i = 0; expr[i] != '\0'; i++) {
        if (expr[i] >= '0' && expr[i] <= '9') {
            len_expr += (in_a_number) ? 0 : 1;
            in_a_number = 1;
            continue;
        } else {
            in_a_number = 0;
            len_expr++;
        }
    }
    return (len_expr);
}

void my_show_string_array(char **output)
{
    for (int i = 0; output[i] != 0; i++)
        my_putstr(output[i]);
}
