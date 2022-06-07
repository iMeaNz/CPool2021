/*
** EPITECH PROJECT, 2021
** TEST_MY_STR_ISALPHA
** File description:
** Tests for the isalpha function
*/
#include <criterion/criterion.h>

Test (my_str_isalpha, empty_string)
{
    char *src = strdup("");
    int result = my_str_isalpha(src);
    cr_assert_eq(result, 1);
}

Test (my_str_isalpha, string_lower_only)
{
    char *src = strdup("abcdde");
    int result = my_str_isalpha(src);
    cr_assert_eq(result, 1);
}

Test (my_str_isalpha, string_upper_only)
{
    char *src = strdup("ABCDE");
    int result = my_str_isalpha(src);
    cr_assert_eq(result, 1);
}

Test (my_str_isalpha, string_both)
{
    char *src = strdup("abcddeABCDE");
    int result = my_str_isalpha(src);
    cr_assert_eq(result, 1);
}

Test (my_str_isalpha, not_alpha)
{
    char *src = strdup("214234.");
    int result = my_str_isalpha(src);
    cr_assert_eq(result, 0);
}
