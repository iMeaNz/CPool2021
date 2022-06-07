/*
** EPITECH PROJECT, 2021
** MY_EVIL_STR
** File description:
** Function that swaps a string
*/

int my_strlen_evil(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return i;
}

void my_swap2(char *a, char *b)
{
    char tmp = *a;
    *a = *b;
    *b = tmp;
}

char *my_evil_str(char *str)
{
    int length_str = my_strlen_evil(str);

    for (int i = 0; i < length_str / 2; i++) {
        my_swap2(&str[i], &str[length_str - i - 1]);
    }

    return str;
}
