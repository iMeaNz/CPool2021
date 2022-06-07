/*
** EPITECH PROJECT, 2021
** MY_COMPUTE_FACTORIAL_IT
** File description:
** Function that calculates a factorial the iterative way
*/

int my_compute_factorial_it(int nb)
{
    long int result = 1;

    if (nb < 0)
        return 0;
    for (long int i = 1; i <= nb; i++)
        result *= i;
    if (result > 2147483647)
        return 0;

    return ((int)result);
}
