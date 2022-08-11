/*
** EPITECH PROJECT, 2020
** get nbr base
** File description:
** fi
*/

#include "my.h"

int my_getnbr_base(char const *str, int base)
{
    int i = 0;
    int nbr = 0;
    int multi = 1;
    int neg = 1;
    char base_c[10] = "0123456789";

    if (str[0] == '-') {
        neg *= -1;
        i++;
    }
    i += my_strlen(str) - 1;
    for (int z = 0; i >= 0; i--) {
        z = 0;
        while (str[i] != base_c[z])
            z++;
        nbr += z * multi;
        multi *= base;
    }
    return (nbr * neg);
}