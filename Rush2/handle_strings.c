/*
** EPITECH PROJECT, 2021
** HANDLE_STRINGS
** File description:
** Handle the strings
*/
#include <language.h>
#include <my.h>

int find_max(int *array_letter)
{
    int index = -1;
    int max = -1;

    for (int i = 0; i < 26; i++) {
        if (array_letter[i] > max && array_letter[i] != 0) {
            index = i;
            max = array_letter[i];
        }
    }
    if (index == -1)
        return -1;
    array_letter[index] = 0;
    return index;
}

void create_structures(struct language *languages)
{
    struct language fr, en, es, ge;
    fr.name = "French";
    fr.alphabet = "esaitnruoldcmpvqfbghjxzykw";
    en.name = "English";
    en.alphabet = "etaoinshrdlcumwfgypbvkjxqz";
    es.name = "Spanish";
    es.alphabet = "eaosrnidltcmupbgvyqhfjzxwk";
    ge.name = "German";
    ge.alphabet = "ensriatdhulgcomwbfkzvpjyxq";
    languages[0] = fr;
    languages[1] = en;
    languages[2] = es;
    languages[3] = ge;
}

int dist_letter(int index, char letter, char *str)
{
    int dist = 0;
    int i = index;

    while (str[i] != '\0') {
        if (str[i] == letter)
            return dist;
        i++;
        dist++;
    }
    i = index;
    dist = 0;

    while (i != -1) {
        if (str[i] == letter)
            return dist;
        i--;
        dist++;
    }
    return dist;
}

int dist_tot(char *str_freq, char *lang)
{
    int dist_tot = 0;
    int len_str = my_strlen(str_freq);

    for (int i = 0; i < len_str - 1; i++) {
        dist_tot += dist_letter(i, str_freq[i], lang);
    }

    return dist_tot;
}

int create_string(char *str, int *array_letter)
{
    int index = 0;
    int i = 0;

    while (index != -1) {
        index = find_max(array_letter);
        if (index != -1) {
            str[i] = index + 'a';
            i++;
        }
    }
    str[i] = '\0';
}

