/*
** EPITECH PROJECT, 2020
** str capitalize
** File description:
** task10
*/

#include "my.h"

char *my_strcapitalize(char *str)
{
    str = my_strlowcase(str);
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] -= 32;
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z' && (str[i - 1] < '0' ||
        str[i - 1] > '9') && (str[i - 1] < 'a' || str[i - 1] > 'z')
        && (str[i - 1] < 'A' || str[i - 1] > 'Z'))
            str[i] -= 32;
    }
    return str;
}
