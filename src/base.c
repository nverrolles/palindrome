/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** palindrome
*/

#include "pal.h"

char *put_to_base(char *nbr, pal_t data)
{
    char *res = malloc(sizeof(char) * 256);
    int i = 0;
    int nb = atoi(nbr);

    for (;nb > 0; i++) {
        res[i] = (nb % data.base) + 48;
        nb = nb / data.base;
    }
    res[i] = '\0';
    free(nbr);
    return my_revstr(res);
}