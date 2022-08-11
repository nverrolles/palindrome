/*
** EPITECH PROJECT, 2020
** revstr
** File description:
** task3
*/

#include "my.h"

char *my_revstr(char *str)
{
    int len = 0;
    char tmp;
    int i = 0;

    while (str[len] != '\0')
        len++;
    len--;
    while (i < len) {
        tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;
        i++;
        len--;
    }
    return (str);
}
