/*
** EPITECH PROJECT, 2021
** MY_PUT_NBR
** File description:
** Function that prints an int
*/

int my_put_nbr_with_comma(int nb, int order)
{
    int modulo = 0;
    int print_comma = 0;
    if (nb == -2147483648) {
        write(1, "-2147483648", 11);
        return 0;
    }
    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    modulo = nb % 10 + '0';
    nb /= 10;
    if(nb < order && nb >= order / 10)
        print_comma = 1;
    if (nb > 0) {
        my_put_nbr_with_comma(nb, order);
    }
    if(print_comma)
        my_putchar(',');
    my_putchar(modulo);
}
