/*
** EPITECH PROJECT, 2020
** str isupper
** File description:
** task 15
*/

#include <stddef.h>
#include "my.h"

int my_str_isupper(char const *str)
{
    if (str == NULL || str[0] == '\0')
        return 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 'A' || str[i] > 'Z')
            return 0;
    }
    return 1;
}
