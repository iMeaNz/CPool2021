/*
** EPITECH PROJECT, 2021
** CONVERT_BASE
** File description:
** Convert a base
*/
#include <my.h>
#include <stdlib.h>

int size_nb(int nbr, int base_len)
{
    int size = 1;

    while (nbr != 0) {
        nbr /= base_len;
        size++;
    }

    return size - 1;
}

char *my_put_nbr_base_it(int nbr, char const *base)
{
    int lenb = my_strlen(base), size = size_nb(nbr, lenb), modulo = 0;
    int size_init = size, inf_except = 0;
    char *new_number;
    long int bigger_nbr = nbr;
    if (bigger_nbr < 0) {
        inf_except = 1;
        size++;
        size_init++;
        bigger_nbr *= -1;
        new_number = (char *)malloc(sizeof(char) * size + 2);
        new_number[0] = '-';
    } else
        new_number = (char *)malloc(sizeof(char) * size + 1);
    while (size != 0 + inf_except) {
        modulo = bigger_nbr % lenb;
        bigger_nbr /= lenb;
        new_number[size - 1] = base[modulo];
        size--;
    }
    new_number[size_init] = '\0';
    return new_number;
}

char *convert_base(char const *nbr, char const *base_from, char const *base_to)
{
    int number;
    char *new_number;

    number = my_getnbr_base(nbr, base_from);
    new_number = my_put_nbr_base_it(number, base_to);

    return new_number;
}
