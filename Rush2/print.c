/*
** EPITECH PROJECT, 2021
** PRINT
** File description:
** Print the frequencies
*/
#include <my.h>

int calculate_order(int nb)
{
    if (nb < 1000)
        return 10;
    if (nb < 10000)
        return 100;
}

void print_inf_zero(int frequence)
{
    write(1, "0,", 2);
    my_put_nbr((int) frequence);
    frequence == 0 ? my_putchar('0') : my_putchar(0);
    write(1, "%)", 2);
    my_putchar('\n');
}

void print_hundred(void)
{
    my_put_nbr(100);
    write(1, ",00%)", 5);
    my_putchar('\n');
}

void print_normal(int frequence)
{
    frequence = (int) frequence;
    int order = calculate_order(frequence);
    my_put_nbr_with_comma(frequence, order);
    write(1, "%)", 2);
    my_putchar('\n');
}

int print_occurences(int argc, char **av, int len, int *count)
{
    for (int i = 2; i < argc; i++) {
        int occurences = count[*av[i] - char_is_alpha(*av[i])];
        my_putchar(*av[i]);
        my_putchar(':');
        my_put_nbr(occurences);
        write(1, " (", 2);
        float frequence = ((float)occurences / (float)len) * 10000;
        if (frequence < 100)
            print_inf_zero(frequence);
        else if (frequence == 10000)
            print_hundred();
        else 
            print_normal(frequence);
    }
}
