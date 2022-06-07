/*
** EPITECH PROJECT, 2021
** MY_GETNBR_BASE
** File description:
** Convert a number in a given into a decimal number
*/

int my_pow(int nbr, int power)
{
    int number = 1;

    if (power < 0)
        return 0;
    else if (power == 0)
        return 1;
    else {
        for (int i = 0; i < power; i++) {
            number *= nbr;
        }
        return number;
    }
}

int search_in_base(char const *base, char to_find)
{
    int i = 0;

    while (base[i] != '\0') {
        if (base[i] == to_find) {
            return i;
        }
        i++;
    }
    return -1;
}

int my_isneg(char const *str)
{
    int i = 0;
    int count = 0;

    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-') {
            count++;
        }
        i++;
    }
    if (count % 2 == 0)
        return 0;
    else
        return 1;
}

int my_strlen_get(char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        i++;
    }
    return i;
}

int my_getnbr_base(char const *str, char const *base)
{
    long int nbr = 0;
    int base_type = my_strlen_get(base), size_nbr = my_strlen_get(str);
    for (int i = 0; str[i] != '\0'; i++) {
        int index = search_in_base(base, str[i]);
        if (index == -1) {
            if (str[i] != '-' && str[i] != '+')
                return 0;
            else {
                size_nbr--;
            }
        } else {
            nbr += (index) * my_pow(base_type, size_nbr - 1);
            size_nbr--;
        }
    }
    nbr *= (my_isneg(str)) ? -1 : 1;
    if (nbr > 2147483647 || nbr < -2147483648)
        return 0;
    return (int)nbr;
}
