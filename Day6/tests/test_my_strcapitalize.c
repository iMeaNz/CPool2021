/*
** EPITECH PROJECT, 2021
** TEST_MY_STRCAPITALIZE
** File description:
** Test for the my_strcapitalize function
*/
#include <criterion/criterion.h>

Test (my_strcapitalize, capitalize_a_normal_string)
{
    char src[] = "hey how are you ?";
    my_strcapitalize(src);

    cr_assert_str_eq(src, "Hey How Are You ?");
}

Test (my_strcapitalize, capitalize_a_string_with_delimiters_different)
{
    char src[] = "forty+two";
    my_strcapitalize(src);

    cr_assert_str_eq(src, "Forty+Two");
}

Test (my_strcapitalize, capitalize_a_string_with_uppercase)
{
    char src[] = "hEy hoW aRE yOU ?";
    my_strcapitalize(src);

    cr_assert_str_eq(src, "Hey How Are You ?");
}

Test (my_strcapitalize, capitalize_with_numbers)
{
    char src[] = "42WOrds";
    my_strcapitalize(src);

    cr_assert_str_eq(src, "42words");
}

Test (my_strcapitalize, handle_empty_strings)
{
    char src[] = "";
    my_strcapitalize(src);

    cr_assert_str_eq(src, "");
}
