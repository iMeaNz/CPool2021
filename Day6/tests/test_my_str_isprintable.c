/*
** EPITECH PROJECT, 2021
** TEST_MY_STR_ISPRINTABLE
** File description:
** Tests for the isprintable function
*/
#include <criterion/criterion.h>

Test (my_str_isprintable, empty_string)
{
    char *src = strdup("");
    int result = my_str_isprintable(src);
    cr_assert_eq(result, 1);
}

Test (my_str_isprintable, string_printable_only)
{
    char *src = strdup("abcdde");
    int result = my_str_isprintable(src);
    cr_assert_eq(result, 1);
}

Test (my_str_isprintable, string_upper_only)
{
    char *src = strdup("ABCDE");
    int result = my_str_isprintable(src);
    cr_assert_eq(result, 1);
}

Test (my_str_isprintable, string_both)
{
    char *src = strdup("abcddeABCDE");
    int result = my_str_isprintable(src);
    cr_assert_eq(result, 1);
}
