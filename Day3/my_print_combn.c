/*
** EPITECH PROJECT, 2021
** MY_PRINT_COMBN
** File description:
** Function that prints all the numbers composed of n different digits
*/

int power(int p)
{
    int nb = 1;
    for (int i = 0; i < p; i++) {
        nb *= 10;
    }
    return nb;
}

int check_if_zero(int nbi, int n, int d1)
{
    if (d1 == (nbi/power(n-2)) % power(n-2) && nbi < power(n-1)) {
        my_putchar('0');
    }
    if (n == 2 && nbi < 10) {
        my_putchar('0');
    }
}

int add_zero_first(int n)
{
    if (n == 1) {
        my_putchar('0');
        my_putchar(',');
        my_putchar(' ');
    }
}

int get_digit(int nb, int n, int nbi)
{
    int d1 = nb % 10;
    int d2 = 0;
    nb /= 10;
    if (nb != 0) {
        d2 = nb % 10;
        if (d1 > d2) {
            if (get_digit(nb, n, nbi) == 0) {
                return 0;
            }
        }else {
            return 0;
        }
    }
    check_if_zero(nbi, n, d1);
    my_putchar(d1 + '0');
    return 1;
}

int my_print_combn(int n)
{
    int min = power(n-2);
    int max = power(n);

    add_zero_first(n);
    for (int i = min; i < max; i++) {
        if (get_digit(i, n, i) == 1) {
            if (i/power(n-1) == 10-n) {
                break;
            }
            my_putchar(',');
            my_putchar(' ');
        }
    }
}
