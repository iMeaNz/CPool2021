/*
** EPITECH PROJECT, 2021
** DETECT_LANGUAGE_STEP_2
** File description:
** Detect a language
*/
#include <my.h>
#include <stdlib.h>
#include <language.h>

int *count_occurences_letter(char *str, int *count)
{
    int i = 0;

    while (str[i] != '\0') {
        if (char_is_alpha(str[i])) {
            count[str[i] - char_is_alpha(str[i])]++;
        }
        i++;
    }
    return count;
}

void print_language(struct language *languages, char *str)
{
    int index = 0;
    int min = 20000000;
    for (int i = 0; i < 4; i++) {
        int value = dist_tot(str, languages[i].alphabet);
        if (value < min) {
            min = value;
            index = i;
        }
    }
    write(1, "=>", 2);
    my_putstr(languages[index].name);
}

int main(int argc, char **av)
{
    int len = 0;
    int array_letter[26] = { 0 };
    char str_freq[26] = { 0 };
    struct language languages[4];

    if (argc < 2)
        return 84;
    if (*av[1] == 0 || !check_if_params_alpha(av, argc))
        return 84;
    len = my_true_str_len(av[1]);
    count_occurences_letter(av[1], array_letter);
    if (argc > 2)
        print_occurences(argc, av, len, array_letter);
    create_structures(languages);
    create_string(str_freq, array_letter);
    print_language(languages, str_freq);
    return 0;
}
