/*
** EPITECH PROJECT, 2021
** UTILS
** File description:
** Utilitary function
*/
#include "include/my.h"
#include <stdlib.h>

void check_if_zero_neg(char *number)
{
    if (number[0] == '-' && number[1] == '0') {
        number[0] = '0';
        number[1] = '\0';
    }

    if (number[0] == '0' && number[1] == '0') {
        number[0] = '0';
        number[1] = '\0';
    }
}

void my_swap_ptr(char **str1_ptr, char **str2_ptr)
{
    char *temp = *str1_ptr;
    *str1_ptr = *str2_ptr;
    *str2_ptr = temp;
}
