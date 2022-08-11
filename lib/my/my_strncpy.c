/*
** EPITECH PROJECT, 2020
** my_strncpy
** File description:
** task2
*/

#include "my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i < n) {
        dest[i] = src[i];
        i++;
        }
    return dest;
}
