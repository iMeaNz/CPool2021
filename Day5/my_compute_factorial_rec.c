/*
** EPITECH PROJECT, 2021
** MY_COMPUTE_FACTORIAL_REC
** File description:
** Function that calculates a factorial the recursive way
*/

int my_compute_factorial_rec(int nb)
{
    if (nb < 0 || nb >= 13)
        return 0;
    else if (nb == 0)
        return 1;
    else
        return (nb * my_compute_factorial_rec(nb - 1));
}
