/*
** EPITECH PROJECT, 2020
** str is printable
** File description:
** task16
*/

#include <stddef.h>
#include "my.h"

int my_str_isprintable(char const *str)
{
    if (str == NULL || str[0] == '\0')
        return 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32 || str[i] > 126)
            return 0;
    }
    return 1;
}
