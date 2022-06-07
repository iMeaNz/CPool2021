/*
** EPITECH PROJECT, 2021
** MY_STRNCPY
** File description:
** Test for the strn_cpy function
*/
#include <criterion/criterion.h>

Test (my_strncpy, copy_five_characters_in_empty_array)
{
    char dest[6] = {0};

    my_strncpy(dest, "HelloWorld", 5);
    cr_assert_str_eq(dest, "Hello");
}

Test (my_strncpy, copy_four_characters_in_empty_array)
{
    char dest[5] = {0};

    my_strncpy(dest, "HelloWorld", 4);
    cr_assert_str_eq(dest, "Hell");
}

Test (my_strncpy, copy_five_characters_in_non_empty_array)
{
    char dest[6] = {'a', 'b', 'c'};

    my_strncpy(dest, "HellowWorld", 5);
    cr_assert_str_eq(dest, "Hello");
}

Test (my_strncpy, copy_empty_string)
{
    char dest[1];

    my_strncpy(dest, "", 1);
    cr_assert_str_eq(dest, "");
}
