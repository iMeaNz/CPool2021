/*
** EPITECH PROJECT, 2021
** MY_ADVANCED_SORT_WORD_ARRAY
** File description:
** Sort an array based on the value of the function param
*/
#include <my.h>

static void my_swap_ptr(char **str1_ptr, char **str2_ptr)
{
    char *temp = *str1_ptr;
    *str1_ptr = *str2_ptr;
    *str2_ptr = temp;
}

int my_advanced_sort_word_array(char **tab, int(*cmp)(char const *,
                                char const *))
{
    int sorted = 0;
    int i = 0;

    if (tab[0] == 0)
        return 0;
    while (!sorted) {
        sorted = 1;
        i = 0;
        while (tab[i + 1] != 0) {
            if ((*cmp)(tab[i], tab[i + 1]) > 0) {
                my_swap_ptr(&tab[i], &tab[i + 1]);
                sorted = 0;
            }
            i++;
        }
    }
}
