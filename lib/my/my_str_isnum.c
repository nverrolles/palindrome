/*
** EPITECH PROJECT, 2020
** isnum
** File description:
** task13
*/

#include <stddef.h>
#include "my.h"

int my_str_isnum(char const *str)
{
    if (str == NULL || str[0] == '\0')
        return 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9')
            return 0;
    }
    return 1;
}
