/*
** EPITECH PROJECT, 2020
** myshowstr
** File description:
** aze
*/

#include "my.h"

int my_showstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32 || str[i] > 126)
            print_zero(str, i);
        else
            my_putchar(str[i]);
    }
    return (0);
}

void print_zero(char const *str, int i)
{
    my_putchar('\\');
    if (str[i] < 14)
        my_putchar('0');
    my_putnbr_base(str[i], "0123456789abcdef");
}
