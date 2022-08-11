/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** task05
*/

#include "my.h"

int my_getnbr(char const *str)
{
    int i = 0;
    int neg = 0;
    int nb = 0;

    while (str[i] < 47 || str[i] > 58) {
        if (str[i] == 45)
            neg++;
        i++;
    }
    for (int count = i; str[i] > 47 && str[i] < 58; i++) {
        if (i > count + 8)
            return 0;
        nb = nb * 10;
        nb = nb + (str[i] - 48);
    }
    if (neg % 2 != 0)
        nb = -nb;
    return nb;
}
