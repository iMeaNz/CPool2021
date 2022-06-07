/*
** EPITECH PROJECT, 2021
** TEST_MY_REVTR
** File description:
** Unit tests for the rev str function
*/

#include <criterion/criterion.h>

Test (my_revstr, rev_odd_string)
{
    char src[] = "abc";
    my_revstr(src);
    cr_assert_str_eq(src, "cba");
}

Test (my_revstr, rev_even_string)
{
    char src[] = "abcd";
    my_revstr(src);
    cr_assert_str_eq(src, "dcba");
}

Test (my_revstr, rev_empty_string)
{
    char src[] = "";
    my_revstr(src);
    cr_assert_str_eq(src, "");
}
