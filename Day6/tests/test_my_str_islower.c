/*
** EPITECH PROJECT, 2021
** TEST_MY_STR_ISLOWER
** File description:
** Tests for the islower function
*/
#include <criterion/criterion.h>

Test (my_str_islower, empty_string)
{
    char *src = strdup("");
    int result = my_str_islower(src);
    cr_assert_eq(result, 1);
}

Test (my_str_islower, string_lower_only)
{
    char *src = strdup("abcdde");
    int result = my_str_islower(src);
    cr_assert_eq(result, 1);
}

Test (my_str_islower, string_upper_only)
{
    char *src = strdup("ABCDE");
    int result = my_str_islower(src);
    cr_assert_eq(result, 0);
}

Test (my_str_islower, string_both)
{
    char *src = strdup("abcddeABCDE");
    int result = my_str_islower(src);
    cr_assert_eq(result, 0);
}

Test (my_str_islower, not_lower)
{
    char *src = strdup("214234.");
    int result = my_str_islower(src);
    cr_assert_eq(result, 0);
}
