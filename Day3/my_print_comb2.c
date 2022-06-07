/*
** EPITECH PROJECT, 2021
** MY_PRINT_COMB2
** File description:
** A function that prints the different combinations of two two-digit numbers
*/

int my_print_nbr(int nb)
{
    int modulo = 0;

    modulo = nb % 10 + '0';
    nb /= 10;
    if (nb > 0) {
        my_print_nbr(nb);
    }
    my_putchar(modulo);
}

int my_print_comb2(void)
{
    for (int nb1 = 0; nb1 < 99; nb1++) {
        for (int nb2 = nb1 +1; nb2 < 100; nb2++) {
            if (nb1 < 10) {
                my_putchar('0');
            }
            my_print_nbr(nb1);
            my_putchar(' ');
            if (nb2 < 10) {
                my_putchar('0');
            }
            my_print_nbr(nb2);
            if (nb1 == 98 && nb2 == 99) {
                return 0;
            }
            my_putchar(',');
            my_putchar(' ');
        }
    }
}
