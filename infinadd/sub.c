/*
** EPITECH PROJECT, 2021
** SUB
** File description:
** Substraction functions
*/
#include "include/my.h"
#include <stdlib.h>

int hs(char *new_number, int total, int *counter, int *carry)
{
    *carry = 0;
    if (total < 0) {
        *carry = *carry - 1;
        total += 10;
    }
    new_number[*counter] = total + '0';
    *counter = *counter + 1;
    return 1;
}

void sub_classic(char *number1, char *number2, int biggest_sign)
{
    int len_nb1 = my_strlen(number1);
    int len_nb2 = my_strlen(number2);
    char *nb = malloc(sizeof(char) * len_nb2 + 2);
    int car = 0;
    int pos = 0;
    for (int i = len_nb1 - 1; i >= 0 && number1[i] != '-'; i--) {
        int tot = (number2[len_nb2 - 1] - '0') - (number1[i] - '0') + car;
        len_nb2 -= (!tot && !i && len_nb1 >= 2) ? 1 : hs(nb, tot, &pos, &car);
    }
    for (int i = len_nb2 - 1; i >= 0 && number2[i] != '-'; i--) {
        int tot = (number2[i] - '0') + car;
        if (!(tot == 0 && (i - 1 == 0 || i == 0)))
            hs(nb, tot, &pos, &car);
    }
        if (biggest_sign == -1)
            nb[pos] = '-';
    my_revstr(nb);
    check_if_zero_neg(nb);
    my_putstr(nb);
    free(nb);
}
